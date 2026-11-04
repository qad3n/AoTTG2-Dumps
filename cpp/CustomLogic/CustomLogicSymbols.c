// Type: CustomLogic.CustomLogicSymbols
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSymbols.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicSymbols.cs
// --------------------------------

// CustomLogic.CustomLogicSymbols$$Init
// il2cpp: void CustomLogic_CustomLogicSymbols__Init (const MethodInfo* method);
// 0x1820e9dc0

void CustomLogic_CustomLogicSymbols__Init(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__int__o *__this;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar1;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  
  if (Il2CppMethodInitialized_1843469d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    Il2CppMethodInitialized_1843469d2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  if (TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->_loaded != false) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  if (Il2CppMethodInitialized_1843469d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Clear);
    Il2CppMethodInitialized_1843469d3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  __this = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
  if (__this != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Clear);
    pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
             TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->SpecialSymbolNames;
    if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
               TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->AlphaSymbolNames;
      if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                  (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
        __this_00 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->BinopSymbolPriorities;
        if (__this_00 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
          pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                   TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ClassSymbols;
          if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
            System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                      (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear);
            pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                     TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ConditionalSymbols;
            if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
              System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                        (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear)
              ;
              CustomLogic_CustomLogicSymbols__AddSymbols((MethodInfo *)0x0);
              CustomLogic_CustomLogicSymbols__CategorizeSymbols((MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->_loaded = true;
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSymbols$$ClearSymbols
// il2cpp: void CustomLogic_CustomLogicSymbols__ClearSymbols (const MethodInfo* method);
// 0x1820e9c70

void CustomLogic_CustomLogicSymbols__ClearSymbols(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__int__o *__this;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *pSVar1;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  
  if (Il2CppMethodInitialized_1843469d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Clear);
    Il2CppMethodInitialized_1843469d3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  __this = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
  if (__this != (System_Collections_Generic_Dictionary_string__int__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Clear);
    pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
             TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->SpecialSymbolNames;
    if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
      pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
               TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->AlphaSymbolNames;
      if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
        System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                  (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
        __this_00 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->BinopSymbolPriorities;
        if (__this_00 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
          pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                   TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ClassSymbols;
          if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
            System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                      (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear);
            pSVar1 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                     TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ConditionalSymbols;
            if (pSVar1 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
              System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                        (pSVar1,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear)
              ;
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSymbols$$AddSymbols
// il2cpp: void CustomLogic_CustomLogicSymbols__AddSymbols (const MethodInfo* method);
// 0x1820e85c0

void CustomLogic_CustomLogicSymbols__AddSymbols(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__int__o *pSVar1;
  
  if (Il2CppMethodInitialized_1843469d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&"{");
    il2cpp_codegen_initialize_runtime_metadata(&"&&");
    il2cpp_codegen_initialize_runtime_metadata(&"!");
    il2cpp_codegen_initialize_runtime_metadata(&"/=");
    il2cpp_codegen_initialize_runtime_metadata(&"=");
    il2cpp_codegen_initialize_runtime_metadata(&"+");
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"cutscene");
    il2cpp_codegen_initialize_runtime_metadata(&"<=");
    il2cpp_codegen_initialize_runtime_metadata(&">=");
    il2cpp_codegen_initialize_runtime_metadata(&"elif");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"else");
    il2cpp_codegen_initialize_runtime_metadata(&"+=");
    il2cpp_codegen_initialize_runtime_metadata(&"}");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"class");
    il2cpp_codegen_initialize_runtime_metadata(&"if");
    il2cpp_codegen_initialize_runtime_metadata(&"component");
    il2cpp_codegen_initialize_runtime_metadata(&"%");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    il2cpp_codegen_initialize_runtime_metadata(&"function");
    il2cpp_codegen_initialize_runtime_metadata(&"addon");
    il2cpp_codegen_initialize_runtime_metadata(&"==");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"extension");
    il2cpp_codegen_initialize_runtime_metadata(&";");
    il2cpp_codegen_initialize_runtime_metadata(&"wait");
    il2cpp_codegen_initialize_runtime_metadata(&"continue");
    il2cpp_codegen_initialize_runtime_metadata(&"(");
    il2cpp_codegen_initialize_runtime_metadata(&"while");
    il2cpp_codegen_initialize_runtime_metadata(&")");
    il2cpp_codegen_initialize_runtime_metadata(&"||");
    il2cpp_codegen_initialize_runtime_metadata(&"@");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    il2cpp_codegen_initialize_runtime_metadata(&"in");
    il2cpp_codegen_initialize_runtime_metadata(&"*=");
    il2cpp_codegen_initialize_runtime_metadata(&"\"");
    il2cpp_codegen_initialize_runtime_metadata(&"break");
    il2cpp_codegen_initialize_runtime_metadata(&"-=");
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    il2cpp_codegen_initialize_runtime_metadata(&"]");
    il2cpp_codegen_initialize_runtime_metadata(&"*");
    il2cpp_codegen_initialize_runtime_metadata(&"for");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    il2cpp_codegen_initialize_runtime_metadata(&"coroutine");
    il2cpp_codegen_initialize_runtime_metadata(&"!=");
    Il2CppMethodInitialized_1843469d4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
           TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary_object__int___Add
              (pSVar1,(Il2CppObject *)"class",1,
               (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
             TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      System_Collections_Generic_Dictionary_object__int___Add
                (pSVar1,(Il2CppObject *)"extension",2,
                 (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
               TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary_object__int___Add
                  (pSVar1,(Il2CppObject *)"addon",3,
                   (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
        pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                 TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          System_Collections_Generic_Dictionary_object__int___Add
                    (pSVar1,(Il2CppObject *)"component",0,
                     (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
          pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                   TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            System_Collections_Generic_Dictionary_object__int___Add
                      (pSVar1,(Il2CppObject *)"cutscene",4,
                       (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
            pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                     TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
              System_Collections_Generic_Dictionary_object__int___Add
                        (pSVar1,(Il2CppObject *)"function",5,
                         (MethodInfo_146B480 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                        );
              pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                System_Collections_Generic_Dictionary_object__int___Add
                          (pSVar1,(Il2CppObject *)"coroutine",6,
                           (MethodInfo_146B480 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                         TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__int___Add
                            (pSVar1,(Il2CppObject *)"wait",7,
                             (MethodInfo_146B480 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                  pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                           TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                  if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__int___Add
                              (pSVar1,(Il2CppObject *)"null",8,
                               (MethodInfo_146B480 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                    pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                             TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                    if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                      System_Collections_Generic_Dictionary_object__int___Add
                                (pSVar1,(Il2CppObject *)"return",0x10,
                                 (MethodInfo_146B480 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                      pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                               TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                      if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__int___Add
                                  (pSVar1,(Il2CppObject *)"break",0x12,
                                   (MethodInfo_146B480 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                        pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                                 TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                        if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                          System_Collections_Generic_Dictionary_object__int___Add
                                    (pSVar1,(Il2CppObject *)"continue",0x11,
                                     (MethodInfo_146B480 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                          pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                                   TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                          if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                            System_Collections_Generic_Dictionary_object__int___Add
                                      (pSVar1,(Il2CppObject *)"if",0x2a,
                                       (MethodInfo_146B480 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                            pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                                     TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                            if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                              System_Collections_Generic_Dictionary_object__int___Add
                                        (pSVar1,(Il2CppObject *)"else",0x2b,
                                         (MethodInfo_146B480 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                              pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                              if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                System_Collections_Generic_Dictionary_object__int___Add
                                          (pSVar1,(Il2CppObject *)"elif",0x2c,
                                           (MethodInfo_146B480 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                                pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                                         TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                                if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                  System_Collections_Generic_Dictionary_object__int___Add
                                            (pSVar1,(Il2CppObject *)"for",0x2e,
                                             (MethodInfo_146B480 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                                  pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                                           TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                                  if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                    System_Collections_Generic_Dictionary_object__int___Add
                                              (pSVar1,(Il2CppObject *)"while",0x2d,
                                               (MethodInfo_146B480 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                              );
                                    pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                                             TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                                    if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)0x0)
                                    {
                                      System_Collections_Generic_Dictionary_object__int___Add
                                                (pSVar1,(Il2CppObject *)"in",0x2f,
                                                 (MethodInfo_146B480 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                );
                                      pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                                               TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols
                                      ;
                                      if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)
                                                    0x0) {
                                        System_Collections_Generic_Dictionary_object__int___Add
                                                  (pSVar1,(Il2CppObject *)"{",9,
                                                   (MethodInfo_146B480 *)
                                                   MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                  );
                                        pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                                                 TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                 Symbols;
                                        if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o *)
                                                      0x0) {
                                          System_Collections_Generic_Dictionary_object__int___Add
                                                    (pSVar1,(Il2CppObject *)"}",10,
                                                     (MethodInfo_146B480 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                    );
                                          pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                                                   TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                   Symbols;
                                          if (pSVar1 != (System_Collections_Generic_Dictionary_object__int__o
                                                         *)0x0) {
                                            System_Collections_Generic_Dictionary_object__int___Add
                                                      (pSVar1,(Il2CppObject *)"(",0xb,
                                                       (MethodInfo_146B480 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                      );
                                            pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *)
                                                     TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                     Symbols;
                                            if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                              System_Collections_Generic_Dictionary_object__int___Add
                                                        (pSVar1,(Il2CppObject *)")",0xc,
                                                         (MethodInfo_146B480 *)
                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                              pSVar1 = (System_Collections_Generic_Dictionary_object__int__o *
                                                       )TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                        ->Symbols;
                                              if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                System_Collections_Generic_Dictionary_object__int___Add
                                                          (pSVar1,(Il2CppObject *)"[",0xd,
                                                           (MethodInfo_146B480 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                pSVar1 = (System_Collections_Generic_Dictionary_object__int__o
                                                          *)TypeInfo_CustomLogic_CustomLogicSymbols->
                                                            static_fields->Symbols;
                                                if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                  System_Collections_Generic_Dictionary_object__int___Add
                                                            (pSVar1,(Il2CppObject *)"]",0xe,
                                                             (MethodInfo_146B480 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                  pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                  if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                    System_Collections_Generic_Dictionary_object__int___Add
                                                              (pSVar1,(Il2CppObject *)"@",
                                                               0xf,(MethodInfo_146B480 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                    pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                    if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                      System_Collections_Generic_Dictionary_object__int___Add
                                                                (pSVar1,(Il2CppObject *)";",
                                                                 0x26,(MethodInfo_146B480 *)
                                                                                                                                            
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                      pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                      if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"\""
                                                                  ,0x27,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"="
                                                                  ,0x14,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"+="
                                                                  ,0x15,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"-="
                                                                  ,0x16,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"*="
                                                                  ,0x17,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"/="
                                                                  ,0x18,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)","
                                                                  ,0x28,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"."
                                                                  ,0x29,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"||"
                                                                  ,0x1a,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"&&"
                                                                  ,0x19,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"+"
                                                                  ,0x21,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"-"
                                                                  ,0x22,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"*"
                                                                  ,0x23,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"/"
                                                                  ,0x24,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"%"
                                                                  ,0x25,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"=="
                                                                  ,0x1f,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"!="
                                                                  ,0x20,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"<"
                                                                  ,0x1b,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)">"
                                                                  ,0x1c,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"<="
                                                                  ,0x1d,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)">="
                                                                  ,0x1e,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar1 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar1 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar1,(Il2CppObject *)"!"
                                                                  ,0x13,(MethodInfo_146B480 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       return;
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                       }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSymbols$$CategorizeSymbols
// il2cpp: void CustomLogic_CustomLogicSymbols__CategorizeSymbols (const MethodInfo* method);
// 0x1820e91e0
// eh: try 0x1820e96f0..0x1820e9c58 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820e97ac: mov rdx, qword ptr [rip + 0x1fd262d]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_Dispose
// asm:   0x1820e97b3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820e97b8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820e97bd: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820e97c2: test rcx, rcx
// asm:   0x1820e97c5: jne 0x1820e9c58
// asm:   0x1820e97cb: xor edi, edi
// asm:   0x1820e9843: mov ebx, edi
// asm:   0x1820e9845: mov eax, edi
// asm:   0x1820e9983: mov ebx, edi
// asm:   0x1820e9985: mov eax, edi
// asm:   0x1820e9a2e: nop 
// asm:   0x1820e9ac3: mov ebx, edi
// asm:   0x1820e9ac5: mov eax, edi
// asm:   0x1820e9b5a: mov ebx, edi
// asm:   0x1820e9b5c: mov eax, edi
// asm:   0x1820e9b5e: nop 
// asm:   0x1820e9c58: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void CustomLogic_CustomLogicSymbols__CategorizeSymbols(MethodInfo *method)

{
  int32_t iVar1;
  Il2CppClass *item;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_string__int__o *__this;
  System_Collections_Generic_Dictionary_int__int__o *pSVar3;
  System_Collections_Generic_HashSet_int__o *pSVar4;
  System_String_o *pSVar5;
  bool bVar6;
  Il2CppObject *pIVar7;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_00;
  uint uVar8;
  uint uVar9;
  undefined1 local_60 [16];
  Il2CppObject *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_1843469d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Keys);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_MoveNext)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_int_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_22616551FC537E058E1A89FBDE586BDE75467E11C6B1CB1963B5F892FB2B5894
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_23971E4980DDAEE2D4BD5DC364AF0446A660BE4E95EAC134739B20FABD26981F
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_341C48B8D763F5BBDF402ED0A0B00F95DB0A677600E86CE8938E7748EB505AFD
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_9D8E086A55799BAA9861B56B4512C9434A47E3C37C0CC4624235075AEEEA35EC
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               FieldRva_PrivateImplementationDetails_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075C209B87C175E5590
              );
    il2cpp_codegen_initialize_runtime_metadata(&"return");
    il2cpp_codegen_initialize_runtime_metadata(&"cutscene");
    il2cpp_codegen_initialize_runtime_metadata(&"elif");
    il2cpp_codegen_initialize_runtime_metadata(&"else");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"class");
    il2cpp_codegen_initialize_runtime_metadata(&"if");
    il2cpp_codegen_initialize_runtime_metadata(&"component");
    il2cpp_codegen_initialize_runtime_metadata(&"function");
    il2cpp_codegen_initialize_runtime_metadata(&"addon");
    il2cpp_codegen_initialize_runtime_metadata(&"extension");
    il2cpp_codegen_initialize_runtime_metadata(&"wait");
    il2cpp_codegen_initialize_runtime_metadata(&"continue");
    il2cpp_codegen_initialize_runtime_metadata(&"while");
    il2cpp_codegen_initialize_runtime_metadata(&"in");
    il2cpp_codegen_initialize_runtime_metadata(&"break");
    il2cpp_codegen_initialize_runtime_metadata(&"for");
    il2cpp_codegen_initialize_runtime_metadata(&"coroutine");
    Il2CppMethodInitialized_1843469d5 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (Il2CppObject *)0x0;
  pIVar7 = SZArrayNew(TypeInfo_string_array,0x12);
  pSVar5 = "class";
  if (pIVar7 == (Il2CppObject *)0x0) goto label_1820e9c64;
  if (*(int *)&pIVar7[1].monitor != 0) {
    pIVar7[2].klass = (Il2CppClass *)"class";
    Il2CppCodeGenWriteBarrier(&pIVar7[2].klass,pSVar5);
    pSVar5 = "component";
    if (1 < *(uint *)&pIVar7[1].monitor) {
      pIVar7[2].monitor = "component";
      Il2CppCodeGenWriteBarrier(&pIVar7[2].monitor,pSVar5);
      pSVar5 = "extension";
      if (2 < *(uint *)&pIVar7[1].monitor) {
        pIVar7[3].klass = (Il2CppClass *)"extension";
        Il2CppCodeGenWriteBarrier(&pIVar7[3].klass,pSVar5);
        pSVar5 = "addon";
        if (3 < *(uint *)&pIVar7[1].monitor) {
          pIVar7[3].monitor = "addon";
          Il2CppCodeGenWriteBarrier(&pIVar7[3].monitor,pSVar5);
          pSVar5 = "cutscene";
          if (4 < *(uint *)&pIVar7[1].monitor) {
            pIVar7[4].klass = (Il2CppClass *)"cutscene";
            Il2CppCodeGenWriteBarrier(&pIVar7[4].klass,pSVar5);
            pSVar5 = "function";
            if (5 < *(uint *)&pIVar7[1].monitor) {
              pIVar7[4].monitor = "function";
              Il2CppCodeGenWriteBarrier(&pIVar7[4].monitor,pSVar5);
              pSVar5 = "coroutine";
              if (6 < *(uint *)&pIVar7[1].monitor) {
                pIVar7[5].klass = (Il2CppClass *)"coroutine";
                Il2CppCodeGenWriteBarrier(&pIVar7[5].klass,pSVar5);
                pSVar5 = "wait";
                if (7 < *(uint *)&pIVar7[1].monitor) {
                  pIVar7[5].monitor = "wait";
                  Il2CppCodeGenWriteBarrier(&pIVar7[5].monitor,pSVar5);
                  pSVar5 = "null";
                  if (8 < *(uint *)&pIVar7[1].monitor) {
                    pIVar7[6].klass = (Il2CppClass *)"null";
                    Il2CppCodeGenWriteBarrier(&pIVar7[6].klass,pSVar5);
                    pSVar5 = "return";
                    if (9 < *(uint *)&pIVar7[1].monitor) {
                      pIVar7[6].monitor = "return";
                      Il2CppCodeGenWriteBarrier(&pIVar7[6].monitor,pSVar5);
                      pSVar5 = "break";
                      if (10 < *(uint *)&pIVar7[1].monitor) {
                        pIVar7[7].klass = (Il2CppClass *)"break";
                        Il2CppCodeGenWriteBarrier(&pIVar7[7].klass,pSVar5);
                        pSVar5 = "continue";
                        if (0xb < *(uint *)&pIVar7[1].monitor) {
                          pIVar7[7].monitor = "continue";
                          Il2CppCodeGenWriteBarrier(&pIVar7[7].monitor,pSVar5);
                          pSVar5 = "if";
                          if (0xc < *(uint *)&pIVar7[1].monitor) {
                            pIVar7[8].klass = (Il2CppClass *)"if";
                            Il2CppCodeGenWriteBarrier(&pIVar7[8].klass,pSVar5);
                            pSVar5 = "else";
                            if (0xd < *(uint *)&pIVar7[1].monitor) {
                              pIVar7[8].monitor = "else";
                              Il2CppCodeGenWriteBarrier(&pIVar7[8].monitor,pSVar5);
                              pSVar5 = "for";
                              if (0xe < *(uint *)&pIVar7[1].monitor) {
                                pIVar7[9].klass = (Il2CppClass *)"for";
                                Il2CppCodeGenWriteBarrier(&pIVar7[9].klass,pSVar5);
                                pSVar5 = "while";
                                if (0xf < *(uint *)&pIVar7[1].monitor) {
                                  pIVar7[9].monitor = "while";
                                  Il2CppCodeGenWriteBarrier(&pIVar7[9].monitor,pSVar5);
                                  pSVar5 = "elif";
                                  if (0x10 < *(uint *)&pIVar7[1].monitor) {
                                    pIVar7[10].klass = (Il2CppClass *)"elif";
                                    Il2CppCodeGenWriteBarrier(&pIVar7[10].klass,pSVar5);
                                    pSVar5 = "in";
                                    if (0x11 < *(uint *)&pIVar7[1].monitor) {
                                      pIVar7[10].monitor = "in";
                                      Il2CppCodeGenWriteBarrier(&pIVar7[10].monitor,pSVar5);
                                      uVar9 = 0;
                                      for (uVar8 = uVar9; (int)uVar8 < *(int *)&pIVar7[1].monitor;
                                          uVar8 = uVar8 + 1) {
                                        if (*(uint *)&pIVar7[1].monitor <= uVar8) goto label_1820e9c5e;
                                        item = (&pIVar7[2].klass)[(int)uVar8];
                                        if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                            cctor_finished_or_no_cctor == 0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
                                        }
                                        pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                                                 TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                 AlphaSymbolNames;
                                        if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0)
                                        goto label_1820e9c64;
                                        System_Collections_Generic_HashSet_object___Add
                                                  (pSVar2,(Il2CppObject *)item,
                                                   (MethodInfo_1757CE0 *)
                                                   MethodInfo_System_Collections_Generic_HashSet_string_Add);
                                      }
                                      if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                          cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
                                      }
                                      __this = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols
                                      ;
                                      if ((__this != (System_Collections_Generic_Dictionary_string__int__o *)
                                                     0x0) &&
                                         (__this_00 = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o
                                                       *)
                                                       System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys
                                                                 ((
                                                       System_Collections_Generic_Dictionary_TKey__TValue__o *
                                                       )__this,(MethodInfo_13C6500 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Keys
                                                       ),
                                         __this_00 !=
                                         (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o
                                          *)0x0)) {
                                        System_Collections_Generic_Dictionary_ValueCollection_fsPortableReflection_AttributeQuery__object___GetEnumerator
                                                  ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o
                                                    *)local_60,__this_00,
                                                   (MethodInfo_F1E4D0 *)
                                                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_int_GetEnumerator
                                                  );
                                        local_48 = (undefined1  [8])local_60._0_8_;
                                        pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                      *)local_60._8_8_;
                                        local_38 = local_50;
                                        local_60._0_8_ =
                                             (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                                        local_60._8_8_ =
                                             (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)
                                             local_48;
                                        while (bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__StyleComplexSelector_PseudoStateData___MoveNext
                                                                 ((
                                                       System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                                       *)local_48,
                                                       (MethodInfo_156BDD0 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_MoveNext
                                                       ), pIVar7 = local_38, bVar6) {
                                          if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                              cctor_finished_or_no_cctor == 0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols)
                                            ;
                                          }
                                          pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                                                   TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                   AlphaSymbolNames;
                                          if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                                            ThrowNullReferenceException();
                                          }
                                          bVar6 = System_Collections_Generic_HashSet_object___Contains
                                                            (pSVar2,pIVar7,
                                                             (MethodInfo_1759E40 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Contains
                                                       );
                                          if (!bVar6) {
                                            if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                                cctor_finished_or_no_cctor == 0) {
                                              il2cpp_codegen_runtime_class_init
                                                        ((Il2CppClass *)
                                                         TypeInfo_CustomLogic_CustomLogicSymbols);
                                            }
                                            pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                                                     TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                     SpecialSymbolNames;
                                            if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0)
                                            {
                                              ThrowNullReferenceException();
                                            }
                                            System_Collections_Generic_HashSet_object___Add
                                                      (pSVar2,pIVar7,
                                                       (MethodInfo_1757CE0 *)
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Add
                                                      );
                                          }
                                        }
                                        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
                                                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o
                                                    *)local_48,
                                                   MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_Dispose
                                                  );
                                        if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                            cctor_finished_or_no_cctor == 0) {
                                          il2cpp_codegen_runtime_class_init
                                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
                                        }
                                        pSVar3 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                 BinopSymbolPriorities;
                                        if (pSVar3 != (System_Collections_Generic_Dictionary_int__int__o *)0x0
                                           ) {
                                          System_Collections_Generic_Dictionary_int__int___Add
                                                    (pSVar3,0x14,0,
                                                     (MethodInfo_1407050 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                    );
                                          pIVar7 = SZArrayNew(TypeInfo_CustomLogic_CustomLogicSymbol_array,4);
                                          System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                                                    ((System_Array_o *)pIVar7,
                                                     FieldRva_PrivateImplementationDetails_9D8E086A55799BAA9861B56B4512C9434A47E3C37C0CC4624235075AEEEA35EC
                                                     ,(MethodInfo *)0x0);
                                          uVar8 = uVar9;
                                          if (pIVar7 != (Il2CppObject *)0x0) {
                                            for (; (int)uVar8 < *(int *)&pIVar7[1].monitor; uVar8 = uVar8 + 1)
                                            {
                                              if (*(uint *)&pIVar7[1].monitor <= uVar8) goto label_1820e9c5e;
                                              iVar1 = *(int32_t *)
                                                       ((longlong)&pIVar7[2].klass + (longlong)(int)uVar8 * 4)
                                              ;
                                              if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                                  cctor_finished_or_no_cctor == 0) {
                                                il2cpp_codegen_runtime_class_init
                                                          ((Il2CppClass *)
                                                           TypeInfo_CustomLogic_CustomLogicSymbols);
                                              }
                                              pSVar3 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->BinopSymbolPriorities;
                                              if (pSVar3 == (System_Collections_Generic_Dictionary_int__int__o
                                                             *)0x0) goto label_1820e9c64;
                                              System_Collections_Generic_Dictionary_int__int___Add
                                                        (pSVar3,iVar1,0,
                                                         (MethodInfo_1407050 *)
                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                       );
                                            }
                                            pIVar7 = SZArrayNew(TypeInfo_CustomLogic_CustomLogicSymbol_array,2
                                                               );
                                            if (pIVar7 != (Il2CppObject *)0x0) {
                                              if ((*(int *)&pIVar7[1].monitor == 0) ||
                                                 (*(undefined4 *)&pIVar7[2].klass = 0x1a,
                                                 *(uint *)&pIVar7[1].monitor < 2)) goto label_1820e9c5e;
                                              *(undefined4 *)((longlong)&pIVar7[2].klass + 4) = 0x19;
                                              for (uVar8 = uVar9; (int)uVar8 < *(int *)&pIVar7[1].monitor;
                                                  uVar8 = uVar8 + 1) {
                                                if (*(uint *)&pIVar7[1].monitor <= uVar8) goto label_1820e9c5e;
                                                iVar1 = *(int32_t *)
                                                         ((longlong)&pIVar7[2].klass +
                                                         (longlong)(int)uVar8 * 4);
                                                if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                                    cctor_finished_or_no_cctor == 0) {
                                                  il2cpp_codegen_runtime_class_init
                                                            ((Il2CppClass *)
                                                             TypeInfo_CustomLogic_CustomLogicSymbols);
                                                }
                                                pSVar3 = TypeInfo_CustomLogic_CustomLogicSymbols->
                                                         static_fields->BinopSymbolPriorities;
                                                if (pSVar3 == (
                                                       System_Collections_Generic_Dictionary_int__int__o *)0x0
                                                   ) goto label_1820e9c64;
                                                System_Collections_Generic_Dictionary_int__int___Add
                                                          (pSVar3,iVar1,1,
                                                           (MethodInfo_1407050 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                       );
                                              }
                                              pIVar7 = SZArrayNew(TypeInfo_CustomLogic_CustomLogicSymbol_array
                                                                  ,6);
                                              System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                                                        ((System_Array_o *)pIVar7,
                                                                                                                  
                                                       FieldRva_PrivateImplementationDetails_341C48B8D763F5BBDF402ED0A0B00F95DB0A677600E86CE8938E7748EB505AFD
                                                       ,(MethodInfo *)0x0);
                                              uVar8 = uVar9;
                                              if (pIVar7 != (Il2CppObject *)0x0) {
                                                for (; (int)uVar8 < *(int *)&pIVar7[1].monitor;
                                                    uVar8 = uVar8 + 1) {
                                                  if (*(uint *)&pIVar7[1].monitor <= uVar8)
                                                  goto label_1820e9c5e;
                                                  iVar1 = *(int32_t *)
                                                           ((longlong)&pIVar7[2].klass +
                                                           (longlong)(int)uVar8 * 4);
                                                  if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    il2cpp_codegen_runtime_class_init
                                                              ((Il2CppClass *)
                                                               TypeInfo_CustomLogic_CustomLogicSymbols);
                                                  }
                                                  pSVar3 = TypeInfo_CustomLogic_CustomLogicSymbols->
                                                           static_fields->BinopSymbolPriorities;
                                                  if (pSVar3 == (
                                                       System_Collections_Generic_Dictionary_int__int__o *)0x0
                                                     ) goto label_1820e9c64;
                                                  System_Collections_Generic_Dictionary_int__int___Add
                                                            (pSVar3,iVar1,2,
                                                             (MethodInfo_1407050 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                       );
                                                }
                                                pIVar7 = SZArrayNew(
                                                       TypeInfo_CustomLogic_CustomLogicSymbol_array,2);
                                                if (pIVar7 != (Il2CppObject *)0x0) {
                                                  if ((*(int *)&pIVar7[1].monitor == 0) ||
                                                     (*(undefined4 *)&pIVar7[2].klass = 0x21,
                                                     *(uint *)&pIVar7[1].monitor < 2)) goto label_1820e9c5e;
                                                  *(undefined4 *)((longlong)&pIVar7[2].klass + 4) = 0x22;
                                                  for (uVar8 = uVar9; (int)uVar8 < *(int *)&pIVar7[1].monitor;
                                                      uVar8 = uVar8 + 1) {
                                                    if (*(uint *)&pIVar7[1].monitor <= uVar8)
                                                    goto label_1820e9c5e;
                                                    iVar1 = *(int32_t *)
                                                             ((longlong)&pIVar7[2].klass +
                                                             (longlong)(int)uVar8 * 4);
                                                    if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      il2cpp_codegen_runtime_class_init
                                                                ((Il2CppClass *)
                                                                 TypeInfo_CustomLogic_CustomLogicSymbols);
                                                    }
                                                    pSVar3 = TypeInfo_CustomLogic_CustomLogicSymbols->
                                                             static_fields->BinopSymbolPriorities;
                                                    if (pSVar3 == (
                                                       System_Collections_Generic_Dictionary_int__int__o *)0x0
                                                       ) goto label_1820e9c64;
                                                    System_Collections_Generic_Dictionary_int__int___Add
                                                              (pSVar3,iVar1,3,
                                                               (MethodInfo_1407050 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                       );
                                                  }
                                                  pIVar7 = SZArrayNew(
                                                       TypeInfo_CustomLogic_CustomLogicSymbol_array,3);
                                                  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                                                            ((System_Array_o *)pIVar7,
                                                                                                                          
                                                       FieldRva_PrivateImplementationDetails_22616551FC537E058E1A89FBDE586BDE75467E11C6B1CB1963B5F892FB2B5894
                                                       ,(MethodInfo *)0x0);
                                                  uVar8 = uVar9;
                                                  if (pIVar7 != (Il2CppObject *)0x0) {
                                                    for (; (int)uVar8 < *(int *)&pIVar7[1].monitor;
                                                        uVar8 = uVar8 + 1) {
                                                      if (*(uint *)&pIVar7[1].monitor <= uVar8)
                                                      goto label_1820e9c5e;
                                                      iVar1 = *(int32_t *)
                                                               ((longlong)&pIVar7[2].klass +
                                                               (longlong)(int)uVar8 * 4);
                                                      if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        il2cpp_codegen_runtime_class_init
                                                                  ((Il2CppClass *)
                                                                   TypeInfo_CustomLogic_CustomLogicSymbols);
                                                      }
                                                      pSVar3 = TypeInfo_CustomLogic_CustomLogicSymbols->
                                                               static_fields->BinopSymbolPriorities;
                                                      if (pSVar3 == (
                                                       System_Collections_Generic_Dictionary_int__int__o *)0x0
                                                       ) goto label_1820e9c64;
                                                      System_Collections_Generic_Dictionary_int__int___Add
                                                                (pSVar3,iVar1,4,
                                                                 (MethodInfo_1407050 *)
                                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                       );
                                                    }
                                                    pIVar7 = SZArrayNew(
                                                       TypeInfo_CustomLogic_CustomLogicSymbol_array,5);
                                                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                                                              ((System_Array_o *)pIVar7,
                                                                                                                              
                                                       FieldRva_PrivateImplementationDetails_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075C209B87C175E5590
                                                       ,(MethodInfo *)0x0);
                                                    uVar8 = uVar9;
                                                    if (pIVar7 != (Il2CppObject *)0x0) {
                                                      for (; (int)uVar8 < *(int *)&pIVar7[1].monitor;
                                                          uVar8 = uVar8 + 1) {
                                                        if (*(uint *)&pIVar7[1].monitor <= uVar8)
                                                        goto label_1820e9c5e;
                                                        iVar1 = *(int32_t *)
                                                                 ((longlong)&pIVar7[2].klass +
                                                                 (longlong)(int)uVar8 * 4);
                                                        if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                                            cctor_finished_or_no_cctor == 0) {
                                                          il2cpp_codegen_runtime_class_init
                                                                    ((Il2CppClass *)
                                                                     TypeInfo_CustomLogic_CustomLogicSymbols);
                                                        }
                                                        pSVar4 = TypeInfo_CustomLogic_CustomLogicSymbols->
                                                                 static_fields->ClassSymbols;
                                                        if (pSVar4 == (
                                                       System_Collections_Generic_HashSet_int__o *)0x0)
                                                       goto label_1820e9c64;
                                                       System_Collections_Generic_HashSet_int___Add
                                                                 (pSVar4,iVar1,
                                                                  (MethodInfo_1757D20 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_HashSet_int_Add);
                                                      }
                                                      pIVar7 = SZArrayNew(
                                                       TypeInfo_CustomLogic_CustomLogicSymbol_array,4);
                                                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_1a54600
                                                                ((System_Array_o *)pIVar7,
                                                                                                                                  
                                                       FieldRva_PrivateImplementationDetails_23971E4980DDAEE2D4BD5DC364AF0446A660BE4E95EAC134739B20FABD26981F
                                                       ,(MethodInfo *)0x0);
                                                      if (pIVar7 != (Il2CppObject *)0x0) {
                                                        while( true ) {
                                                          if (*(int *)&pIVar7[1].monitor <= (int)uVar9) {
                                                            return;
                                                          }
                                                          if (*(uint *)&pIVar7[1].monitor <= uVar9) break;
                                                          iVar1 = *(int32_t *)
                                                                   ((longlong)&pIVar7[2].klass +
                                                                   (longlong)(int)uVar9 * 4);
                                                          if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                                              cctor_finished_or_no_cctor == 0) {
                                                            il2cpp_codegen_runtime_class_init
                                                                      ((Il2CppClass *)
                                                                       TypeInfo_CustomLogic_CustomLogicSymbols
                                                                      );
                                                          }
                                                          pSVar4 = TypeInfo_CustomLogic_CustomLogicSymbols->
                                                                   static_fields->ConditionalSymbols;
                                                          if (pSVar4 == (
                                                       System_Collections_Generic_HashSet_int__o *)0x0)
                                                       goto label_1820e9c64;
                                                       System_Collections_Generic_HashSet_int___Add
                                                                 (pSVar4,iVar1,
                                                                  (MethodInfo_1757D20 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_HashSet_int_Add);
                                                       uVar9 = uVar9 + 1;
                                                       }
                                                       goto label_1820e9c5e;
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
label_1820e9c64:
                                      ThrowNullReferenceException();
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_1820e9c5e:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicSymbols$$.ctor
// il2cpp: void CustomLogic_CustomLogicSymbols___ctor (CustomLogic_CustomLogicSymbols_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicSymbols___ctor(CustomLogic_CustomLogicSymbols_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSymbols$$.cctor
// il2cpp: void CustomLogic_CustomLogicSymbols___cctor (const MethodInfo* method);
// 0x1820e9f90

void CustomLogic_CustomLogicSymbols___cctor(MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__int__o *__this;
  System_Collections_Generic_HashSet_string__o *pSVar1;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar2;
  
  if (Il2CppMethodInitialized_1843469d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_int_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    Il2CppMethodInitialized_1843469d6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int)
  ;
  System_Collections_Generic_Dictionary_object__ProbeReferenceVolume_CellData_PerScenarioData____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols,__this);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar1,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->SpecialSymbolNames = pSVar1;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->SpecialSymbolNames,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar1,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->AlphaSymbolNames = pSVar1;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->AlphaSymbolNames,pSVar1);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int)
  ;
  System_Collections_Generic_Dictionary_int__RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1404750 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->BinopSymbolPriorities = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->BinopSymbolPriorities,__this_00);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar2,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ClassSymbols = pSVar2;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ClassSymbols,pSVar2);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar2,(MethodInfo_176CDF0 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ConditionalSymbols = pSVar2;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ConditionalSymbols,pSVar2);
  TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->_loaded = false;
  return;
}


