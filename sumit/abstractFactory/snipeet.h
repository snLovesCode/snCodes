"CppGuard": {
        "prefix": "cppgrd",
        "body": [
          "#ifndef ${TM_FILEPATH/(?:^.*\\\\src\\\\)?(\\w+)(?!\\w*$)|(\\W)|(\\w+)$/${1:/upcase}${2:+_}${3:/upcase}${3:+_}/g}",
          "#define ${TM_FILEPATH/(?:^.*\\\\src\\\\)?(\\w+)(?!\\w*$)|(\\W)|(\\w+)$/${1:/upcase}${2:+_}${3:/upcase}${3:+_}/g}",
          "\n#endif // ${TM_FILEPATH/(?:^.*\\\\src\\\\)?(\\w+)(?!\\w*$)|(\\W)|(\\w+)$/${1:/upcase}${2:+_}${3:/upcase}${3:+_}/g}"
        ]
      }