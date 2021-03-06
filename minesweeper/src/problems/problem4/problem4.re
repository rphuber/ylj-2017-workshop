let normalStyle = ReactDOMRe.Style.make ();

let clickedStyle = ReactDOMRe.Style.make ();

let hoveredStyle = ReactDOMRe.Style.make ();

let boxStyle = ReactDOMRe.Style.make width::"50px" height::"50px" border::"1px black solid" ();

module Problem4 = {
  include ReactRe.Component.Stateful;
  type props = unit;
  let name = "Problem4";
  type state = {hovered: bool, clicked: bool};
  let getInitialState (_: props) => {hovered: false, clicked: false};
  let handleClick {state} _ =>
    /* change this function to return the existing state
       with the clicked prop set to true. you can use the object spread operator
       { ...state, foo: bar } */
    Some state;
  let handleHover {state} _ =>
    /* change this function to return the existing state
       with the hovered prop set to true. you can use the object spread operator
       { ...state, foo: bar } */
    Some state;
  let switchStyle (state: state) =>
    switch (state.clicked, state.hovered) {
    /* add the cases so that:
       clicked: true hovered: false => clicked style
       clicked: true hovered: true => hovered style
       clicked: false hovered: true => hovered style
       clicked: false hovered: false => empty style */
    | _ => normalStyle
    };
  let render {state, updater} => {
    let style = switchStyle state;
    <div
      style=(ReactDOMRe.Style.combine boxStyle style)
      onClick=(updater handleClick)
      onMouseEnter=(updater handleHover)
      onMouseLeave=(updater handleHover)
    />
  };
};

include ReactRe.CreateComponent Problem4;

let createElement = wrapProps ();
