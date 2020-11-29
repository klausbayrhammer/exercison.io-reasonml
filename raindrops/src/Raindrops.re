let raindrops = raindropCount => {
  let isDivisibleBy = (divisor, sound) =>
    raindropCount mod divisor === 0 ? sound : "";

  let pling = isDivisibleBy(3, "Pling");
  let plang = isDivisibleBy(5, "Plang");
  let plong = isDivisibleBy(7, "Plong");

  let plingPlangPlong = pling ++ plang ++ plong;
  plingPlangPlong === "" ? string_of_int(raindropCount) : plingPlangPlong;
};
