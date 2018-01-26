void foo(int a) {
  a = 1;
  {
    int a;
    a = 2;
  }
  a = 3;
}

/*
OUTPUT:
{
  "includes": [],
  "skipped_by_preprocessor": [],
  "types": [{
      "id": 0,
      "usr": 17,
      "short_name": "",
      "detailed_name": "",
      "kind": 0,
      "parents": [],
      "derived": [],
      "types": [],
      "funcs": [],
      "vars": [],
      "instances": [0, 1],
      "uses": []
    }],
  "funcs": [{
      "id": 0,
      "is_operator": false,
      "usr": 11998306017310352355,
      "short_name": "foo",
      "detailed_name": "void foo(int a)",
      "kind": 12,
      "storage": 1,
      "declarations": [],
      "definition_spelling": "1:6-1:9",
      "definition_extent": "1:1-8:2",
      "base": [],
      "derived": [],
      "locals": [],
      "callers": [],
      "callees": []
    }],
  "vars": [{
      "id": 0,
      "usr": 11608231465452906059,
      "short_name": "a",
      "detailed_name": "int a",
      "kind": 25,
      "storage": 1,
      "definition_spelling": "1:14-1:15",
      "definition_extent": "1:10-1:15",
      "variable_type": 0,
      "uses": ["1:14-1:15", "2:3-2:4", "7:3-7:4"]
    }, {
      "id": 1,
      "usr": 8011559936501990179,
      "short_name": "a",
      "detailed_name": "int a",
      "kind": 13,
      "storage": 1,
      "definition_spelling": "4:9-4:10",
      "definition_extent": "4:5-4:10",
      "variable_type": 0,
      "uses": ["4:9-4:10", "5:5-5:6"]
    }]
}
*/
