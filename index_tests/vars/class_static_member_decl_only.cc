class Foo {
  static int member;
};
/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 15041163540773201510,
      "short_name": "Foo",
      "detailed_name": "Foo",
      "kind": 7,
      "definition_spelling": "1:7-1:10",
      "definition_extent": "1:1-3:2",
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [],
      "uses": ["1:7-1:10"]
    }, {
      "id": 1,
      "usr": 17,
      "short_name": "",
      "detailed_name": "",
      "kind": 0,
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [0],
      "uses": []
    }],
  "funcs": [],
  "vars": [{
      "id": 0,
      "usr": 5844987037615239736,
      "short_name": "member",
      "detailed_name": "int Foo::member",
      "kind": 21,
      "storage": 3,
      "declaration": "2:14-2:20",
      "variable_type": 1,
      "uses": ["2:14-2:20"]
    }]
}
*/
