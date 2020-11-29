let hey = phrase => {
  let trimmedPhrase = String.trim(phrase);
  let isEmpty = trimmedPhrase === "";
  let isUpperCase =
    String.uppercase(phrase) === phrase
    && phrase !== String.lowercase(phrase);
  let isQuestion = Js.String.endsWith("?", trimmedPhrase);
  let isForcefulQuestion = isUpperCase && isQuestion;

  switch () {
  | _ when isEmpty => "Fine. Be that way!"
  | _ when isForcefulQuestion => "Calm down, I know what I'm doing!"
  | _ when isUpperCase => "Whoa, chill out!"
  | _ when isQuestion => "Sure."
  | _ => "Whatever."
  };
};
