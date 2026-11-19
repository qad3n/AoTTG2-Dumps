// Type: CustomLogic.CustomLogicSymbols
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicSymbols.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicSymbols.cs
// --------------------------------

// CustomLogic.CustomLogicSymbols$$Init
// il2cpp: void CustomLogic_CustomLogicSymbols__Init (const MethodInfo* method);
// 0x5b74620

void CustomLogic_CustomLogicSymbols__Init(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754739d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    Il2CppMethodInitialized_0754739d = '\x01';
    uVar2 = (TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
    cVar1 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->_loaded;
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols)->static_fields + 0x30);
    klass = (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols;
  }
  if (cVar1 != '\0') {
    TypeInfo_CustomLogic_CustomLogicSymbols = (CustomLogic_CustomLogicSymbols_c *)klass;
    return;
  }
  TypeInfo_CustomLogic_CustomLogicSymbols = (CustomLogic_CustomLogicSymbols_c *)klass;
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
  }
  CustomLogic_CustomLogicSymbols__ClearSymbols((MethodInfo *)klass);
  CustomLogic_CustomLogicSymbols__AddSymbols((MethodInfo *)klass);
  CustomLogic_CustomLogicSymbols__CategorizeSymbols((MethodInfo *)klass);
  TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->_loaded = true;
  return;
}


// CustomLogic.CustomLogicSymbols$$ClearSymbols
// il2cpp: void CustomLogic_CustomLogicSymbols__ClearSymbols (const MethodInfo* method);
// 0x5b7f430
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7f45f: jmp 0x5b7f58b

void CustomLogic_CustomLogicSymbols__ClearSymbols(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  
  if (Il2CppMethodInitialized_0754739e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbols);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_int_Clear);
    Il2CppMethodInitialized_0754739e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
    __this = (System_Collections_Generic_Dictionary_object__int__o *)
             TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
  }
  else {
    __this = *(System_Collections_Generic_Dictionary_object__int__o **)
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols)->static_fields;
  }
  if (__this != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary_object__int___Clear
              (__this,(MethodInfo_4A9D930 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Clear)
    ;
    pSVar2 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->SpecialSymbolNames;
    if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear
                (pSVar2,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->AlphaSymbolNames;
      if (pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Clear
                  (pSVar2,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
        __this_00 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->BinopSymbolPriorities;
        if (__this_00 != (System_Collections_Generic_Dictionary_int__int__o *)0x0) {
          System_Collections_Generic_Dictionary_int__int___Clear
                    (__this_00,
                     (MethodInfo_4A040E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_Clear);
          pSVar3 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ClassSymbols;
          if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
            System_Collections_Generic_HashSet_int___Clear
                      (pSVar3,(MethodInfo_4FA7DB0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear);
            pSVar3 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->ConditionalSymbols;
            if (pSVar3 != (System_Collections_Generic_HashSet_int__o *)0x0) {
              System_Collections_Generic_HashSet_int___Clear
                        (pSVar3,(MethodInfo_4FA7DB0 *)MethodInfo_System_Collections_Generic_HashSet_int_Clear)
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
// 0x5b7f590
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b7f5c7: jmp 0x5b800b6

void CustomLogic_CustomLogicSymbols__AddSymbols(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_Dictionary_object__int__o *pSVar2;
  
  if (Il2CppMethodInitialized_0754739f == '\0') {
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
    Il2CppMethodInitialized_0754739f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSymbols->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
    pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
             TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__int__o **)
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols)->static_fields;
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    System_Collections_Generic_Dictionary_object__int___Add
              (pSVar2,(Il2CppObject *)"class",1,
               (MethodInfo_4A9D780 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
    pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
             TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
      System_Collections_Generic_Dictionary_object__int___Add
                (pSVar2,(Il2CppObject *)"extension",2,
                 (MethodInfo_4A9D780 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
      pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
               TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
      if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
        System_Collections_Generic_Dictionary_object__int___Add
                  (pSVar2,(Il2CppObject *)"addon",3,
                   (MethodInfo_4A9D780 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
        pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                 TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
        if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          System_Collections_Generic_Dictionary_object__int___Add
                    (pSVar2,(Il2CppObject *)"component",0,
                     (MethodInfo_4A9D780 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
          pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                   TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
          if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
            System_Collections_Generic_Dictionary_object__int___Add
                      (pSVar2,(Il2CppObject *)"cutscene",4,
                       (MethodInfo_4A9D780 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
            pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                     TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
            if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
              System_Collections_Generic_Dictionary_object__int___Add
                        (pSVar2,(Il2CppObject *)"function",5,
                         (MethodInfo_4A9D780 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                        );
              pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
              if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                System_Collections_Generic_Dictionary_object__int___Add
                          (pSVar2,(Il2CppObject *)"coroutine",6,
                           (MethodInfo_4A9D780 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                         TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__int___Add
                            (pSVar2,(Il2CppObject *)"wait",7,
                             (MethodInfo_4A9D780 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                  pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                           TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                  if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__int___Add
                              (pSVar2,(Il2CppObject *)"null",8,
                               (MethodInfo_4A9D780 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                    pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                             TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                    if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                      System_Collections_Generic_Dictionary_object__int___Add
                                (pSVar2,(Il2CppObject *)"return",0x10,
                                 (MethodInfo_4A9D780 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                      pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                               TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                      if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                        System_Collections_Generic_Dictionary_object__int___Add
                                  (pSVar2,(Il2CppObject *)"break",0x12,
                                   (MethodInfo_4A9D780 *)
                                   MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                        pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                                 TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                        if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                          System_Collections_Generic_Dictionary_object__int___Add
                                    (pSVar2,(Il2CppObject *)"continue",0x11,
                                     (MethodInfo_4A9D780 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                          pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                                   TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                          if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                            System_Collections_Generic_Dictionary_object__int___Add
                                      (pSVar2,(Il2CppObject *)"if",0x2a,
                                       (MethodInfo_4A9D780 *)
                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                            pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                                     TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                            if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                              System_Collections_Generic_Dictionary_object__int___Add
                                        (pSVar2,(Il2CppObject *)"else",0x2b,
                                         (MethodInfo_4A9D780 *)
                                         MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                              pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                              if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                System_Collections_Generic_Dictionary_object__int___Add
                                          (pSVar2,(Il2CppObject *)"elif",0x2c,
                                           (MethodInfo_4A9D780 *)
                                           MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                                pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                                         TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                                if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                  System_Collections_Generic_Dictionary_object__int___Add
                                            (pSVar2,(Il2CppObject *)"for",0x2e,
                                             (MethodInfo_4A9D780 *)
                                             MethodInfo_System_Collections_Generic_Dictionary_string_int_Add);
                                  pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                                           TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                                  if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                                    System_Collections_Generic_Dictionary_object__int___Add
                                              (pSVar2,(Il2CppObject *)"while",0x2d,
                                               (MethodInfo_4A9D780 *)
                                               MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                              );
                                    pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                                             TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols;
                                    if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0)
                                    {
                                      System_Collections_Generic_Dictionary_object__int___Add
                                                (pSVar2,(Il2CppObject *)"in",0x2f,
                                                 (MethodInfo_4A9D780 *)
                                                 MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                );
                                      pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                                               TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols
                                      ;
                                      if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)
                                                    0x0) {
                                        System_Collections_Generic_Dictionary_object__int___Add
                                                  (pSVar2,(Il2CppObject *)"{",9,
                                                   (MethodInfo_4A9D780 *)
                                                   MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                  );
                                        pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                                                 TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                 Symbols;
                                        if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)
                                                      0x0) {
                                          System_Collections_Generic_Dictionary_object__int___Add
                                                    (pSVar2,(Il2CppObject *)"}",10,
                                                     (MethodInfo_4A9D780 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                    );
                                          pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                                                   TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                   Symbols;
                                          if (pSVar2 != (System_Collections_Generic_Dictionary_object__int__o
                                                         *)0x0) {
                                            System_Collections_Generic_Dictionary_object__int___Add
                                                      (pSVar2,(Il2CppObject *)"(",0xb,
                                                       (MethodInfo_4A9D780 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                      );
                                            pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)
                                                     TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                     Symbols;
                                            if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                              System_Collections_Generic_Dictionary_object__int___Add
                                                        (pSVar2,(Il2CppObject *)")",0xc,
                                                         (MethodInfo_4A9D780 *)
                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                              pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *
                                                       )TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                        ->Symbols;
                                              if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                System_Collections_Generic_Dictionary_object__int___Add
                                                          (pSVar2,(Il2CppObject *)"[",0xd,
                                                           (MethodInfo_4A9D780 *)
                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                pSVar2 = (System_Collections_Generic_Dictionary_object__int__o
                                                          *)TypeInfo_CustomLogic_CustomLogicSymbols->
                                                            static_fields->Symbols;
                                                if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                  System_Collections_Generic_Dictionary_object__int___Add
                                                            (pSVar2,(Il2CppObject *)"]",0xe,
                                                             (MethodInfo_4A9D780 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                  pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                  if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                    System_Collections_Generic_Dictionary_object__int___Add
                                                              (pSVar2,(Il2CppObject *)"@",
                                                               0xf,(MethodInfo_4A9D780 *)
                                                                                                                                      
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                    pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                    if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                      System_Collections_Generic_Dictionary_object__int___Add
                                                                (pSVar2,(Il2CppObject *)";",
                                                                 0x26,(MethodInfo_4A9D780 *)
                                                                                                                                            
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                      pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                      if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"\""
                                                                  ,0x27,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"="
                                                                  ,0x14,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"+="
                                                                  ,0x15,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"-="
                                                                  ,0x16,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"*="
                                                                  ,0x17,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"/="
                                                                  ,0x18,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)","
                                                                  ,0x28,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"."
                                                                  ,0x29,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"||"
                                                                  ,0x1a,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"&&"
                                                                  ,0x19,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"+"
                                                                  ,0x21,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"-"
                                                                  ,0x22,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"*"
                                                                  ,0x23,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"/"
                                                                  ,0x24,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"%"
                                                                  ,0x25,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"=="
                                                                  ,0x1f,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"!="
                                                                  ,0x20,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"<"
                                                                  ,0x1b,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)">"
                                                                  ,0x1c,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"<="
                                                                  ,0x1d,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)">="
                                                                  ,0x1e,(MethodInfo_4A9D780 *)
                                                                                                                                                
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_Add
                                                       );
                                                       pSVar2 = (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->Symbols;
                                                       if (pSVar2 != (
                                                       System_Collections_Generic_Dictionary_object__int__o *)
                                                       0x0) {
                                                                                                                  
                                                       System_Collections_Generic_Dictionary_object__int___Add
                                                                 (pSVar2,(Il2CppObject *)"!"
                                                                  ,0x13,(MethodInfo_4A9D780 *)
                                                                                                                                                
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
// 0x5b800c0
// eh: try 0x5b80664..0x5b80b7d -> pad 0x5b80b89 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b80ba1..0x5b80ba6 -> pad 0x5b80bc9 cleanup
// eh: try 0x5b80bcc..0x5b80bd6 -> pad 0x5b80bde catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b80659: nop dword ptr [rax]
// asm:   0x5b80b0f: nop 
// asm:   0x5b80b7d: jmp 0x5b80b89
// asm:   0x5b80b7f: jmp 0x5b80b89
// asm:   0x5b80b81: jmp 0x5b80b89
// asm:   0x5b80b83: jmp 0x5b80b89
// asm:   0x5b80b85: jmp 0x5b80b89
// asm:   0x5b80b87: jmp 0x5b80b89
// asm:   0x5b80b89: mov rbx, rax
// asm:   0x5b80b8c: cmp edx, 1
// asm:   0x5b80b8f: jne 0x5b80bcc
// asm:   0x5b80b91: mov rdi, rbx
// asm:   0x5b80b94: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b80b99: mov rbx, qword ptr [rax]
// asm:   0x5b80b9c: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5b80ba1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b80ba6: lea rax, [rip + 0x170f44b]  ; MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_Dispose
// asm:   0x5b80bad: mov rsi, qword ptr [rax]
// asm:   0x5b80bb0: mov rdi, rsp
// asm:   0x5b80bb3: call 0x4de4600  ; System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose()
// asm:   0x5b80bb8: test rbx, rbx
// asm:   0x5b80bbb: je 0x5b806f8
// asm:   0x5b80bc1: mov rdi, rbx
// asm:   0x5b80bc4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b80bc9: mov rbx, rax
// asm:   0x5b80bcc: lea rdi, [rsp + 0x20]
// asm:   0x5b80bd1: call 0x2fd7710  ; il2cpp_runtime_helper_02fd7710()
// asm:   0x5b80bd6: mov rdi, rbx
// asm:   0x5b80bd9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b80bde: mov rdi, rax
// asm:   0x5b80be1: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicSymbols__CategorizeSymbols(MethodInfo *method)

{
  int32_t iVar1;
  Il2CppClass *item;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_object__int__o *__this;
  System_Collections_Generic_Dictionary_int__int__o *pSVar3;
  void *pvVar4;
  System_Collections_Generic_HashSet_int__o *pSVar5;
  bool bVar6;
  int iVar7;
  Il2CppObject *pIVar8;
  ulong uVar9;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_00;
  ulong uVar10;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  Il2CppObject *local_58;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_075473a0 == '\0') {
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
    Il2CppMethodInitialized_075473a0 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (Il2CppObject *)0x0;
  pIVar8 = SZArrayNew(TypeInfo_string_array,0x12);
  if (pIVar8 == (Il2CppObject *)0x0) goto label_05b80b6e;
  if (*(int *)&pIVar8[1].monitor != 0) {
    pIVar8[2].klass = (Il2CppClass *)"class";
    Il2CppCodeGenWriteBarrier(&pIVar8[2].klass);
    if (((ulong)pIVar8[1].monitor & 0xfffffffe) != 0) {
      pIVar8[2].monitor = "component";
      Il2CppCodeGenWriteBarrier(&pIVar8[2].monitor);
      if (2 < *(uint *)&pIVar8[1].monitor) {
        pIVar8[3].klass = (Il2CppClass *)"extension";
        Il2CppCodeGenWriteBarrier(&pIVar8[3].klass);
        if (((ulong)pIVar8[1].monitor & 0xfffffffc) != 0) {
          pIVar8[3].monitor = "addon";
          Il2CppCodeGenWriteBarrier(&pIVar8[3].monitor);
          if (4 < *(uint *)&pIVar8[1].monitor) {
            pIVar8[4].klass = (Il2CppClass *)"cutscene";
            Il2CppCodeGenWriteBarrier(&pIVar8[4].klass);
            if (5 < *(uint *)&pIVar8[1].monitor) {
              pIVar8[4].monitor = "function";
              Il2CppCodeGenWriteBarrier(&pIVar8[4].monitor);
              if (6 < *(uint *)&pIVar8[1].monitor) {
                pIVar8[5].klass = (Il2CppClass *)"coroutine";
                Il2CppCodeGenWriteBarrier(&pIVar8[5].klass);
                if (((ulong)pIVar8[1].monitor & 0xfffffff8) != 0) {
                  pIVar8[5].monitor = "wait";
                  Il2CppCodeGenWriteBarrier(&pIVar8[5].monitor);
                  if (8 < *(uint *)&pIVar8[1].monitor) {
                    pIVar8[6].klass = (Il2CppClass *)"null";
                    Il2CppCodeGenWriteBarrier(&pIVar8[6].klass);
                    if (9 < *(uint *)&pIVar8[1].monitor) {
                      pIVar8[6].monitor = "return";
                      Il2CppCodeGenWriteBarrier(&pIVar8[6].monitor);
                      if (10 < *(uint *)&pIVar8[1].monitor) {
                        pIVar8[7].klass = (Il2CppClass *)"break";
                        Il2CppCodeGenWriteBarrier(&pIVar8[7].klass);
                        if (0xb < *(uint *)&pIVar8[1].monitor) {
                          pIVar8[7].monitor = "continue";
                          Il2CppCodeGenWriteBarrier(&pIVar8[7].monitor);
                          if (0xc < *(uint *)&pIVar8[1].monitor) {
                            pIVar8[8].klass = (Il2CppClass *)"if";
                            Il2CppCodeGenWriteBarrier(&pIVar8[8].klass);
                            if (0xd < *(uint *)&pIVar8[1].monitor) {
                              pIVar8[8].monitor = "else";
                              Il2CppCodeGenWriteBarrier(&pIVar8[8].monitor);
                              if (0xe < *(uint *)&pIVar8[1].monitor) {
                                pIVar8[9].klass = (Il2CppClass *)"for";
                                Il2CppCodeGenWriteBarrier(&pIVar8[9].klass);
                                if (((ulong)pIVar8[1].monitor & 0xfffffff0) != 0) {
                                  pIVar8[9].monitor = "while";
                                  Il2CppCodeGenWriteBarrier(&pIVar8[9].monitor);
                                  if (0x10 < *(uint *)&pIVar8[1].monitor) {
                                    pIVar8[10].klass = (Il2CppClass *)"elif";
                                    Il2CppCodeGenWriteBarrier(&pIVar8[10].klass);
                                    if (0x11 < *(uint *)&pIVar8[1].monitor) {
                                      pIVar8[10].monitor = "in";
                                      Il2CppCodeGenWriteBarrier(&pIVar8[10].monitor);
                                      if (0 < (int)pIVar8[1].monitor) {
                                        uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
                                        uVar10 = 0;
                                        do {
                                          if (uVar9 <= uVar10) goto label_05b80b69;
                                          item = (&pIVar8[2].klass)[uVar10];
                                          if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                              cctor_finished_or_no_cctor == 0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols)
                                            ;
                                          }
                                          pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                                                   TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                   AlphaSymbolNames;
                                          if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0)
                                          goto label_05b80b6e;
                                          System_Collections_Generic_HashSet_object___Add
                                                    (pSVar2,(Il2CppObject *)item,
                                                     (MethodInfo_4FB4450 *)
                                                     MethodInfo_System_Collections_Generic_HashSet_string_Add)
                                          ;
                                          uVar10 = uVar10 + 1;
                                          uVar9 = (ulong)*(uint *)&pIVar8[1].monitor;
                                        } while ((long)uVar10 < (long)(int)*(uint *)&pIVar8[1].monitor);
                                      }
                                      if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                          cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols);
                                      }
                                      __this = (System_Collections_Generic_Dictionary_object__int__o *)
                                               TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols
                                      ;
                                      if (__this != (System_Collections_Generic_Dictionary_object__int__o *)
                                                    0x0) {
                                        __this_00 = System_Collections_Generic_Dictionary_object__int___get_Keys
                                                              (__this,(MethodInfo_4A9D3A0 *)
                                                                                                                                            
                                                       MethodInfo_System_Collections_Generic_Dictionary_string_int_get_Keys
                                                       );
                                        if (__this_00 !=
                                            (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o
                                             *)0x0) {
                                          System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator
                                                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                                      *)local_48,__this_00,
                                                     (MethodInfo_5118A60 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_string_int_GetEnumerator
                                                    );
                                          local_58 = local_38;
                                          local_68 = (undefined1  [8])local_48._0_8_;
                                          puStack_60 = (undefined1 *)local_48._8_8_;
                                          local_48._0_8_ =
                                               (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
                                          local_48._8_8_ = local_68;
                                          while( true ) {
                                            bVar6 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext
                                                              ((
                                                       System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                                       *)local_68,
                                                       (MethodInfo_4CE4610 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_MoveNext
                                                       );
                                            pIVar8 = local_58;
                                            if (!bVar6) break;
                                            if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                                cctor_finished_or_no_cctor == 0) {
                                              il2cpp_codegen_runtime_class_init
                                                        ((Il2CppClass *)
                                                         TypeInfo_CustomLogic_CustomLogicSymbols);
                                            }
                                            pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                                                     TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                     AlphaSymbolNames;
                                            if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0)
                                            {
                                              ThrowNullReferenceException();
                                            }
                                            bVar6 = System_Collections_Generic_HashSet_object___Contains
                                                              (pSVar2,pIVar8,
                                                               (MethodInfo_4FB3720 *)
                                                                                                                              
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
                                                       TypeInfo_CustomLogic_CustomLogicSymbols->static_fields
                                                       ->SpecialSymbolNames;
                                              if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)
                                                            0x0) {
                                                ThrowNullReferenceException();
                                              }
                                              System_Collections_Generic_HashSet_object___Add
                                                        (pSVar2,pIVar8,
                                                         (MethodInfo_4FB4450 *)
                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_HashSet_string_Add
                                                       );
                                            }
                                          }
                                          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
                                                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                                                      *)local_68,
                                                     (MethodInfo_4CE4600 *)
                                                     MethodInfo_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string_int_Dispose
                                                    );
                                          if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                              cctor_finished_or_no_cctor == 0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSymbols)
                                            ;
                                          }
                                          pSVar3 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->
                                                   BinopSymbolPriorities;
                                          if (pSVar3 != (System_Collections_Generic_Dictionary_int__int__o *)
                                                        0x0) {
                                            System_Collections_Generic_Dictionary_int__int___Add
                                                      (pSVar3,0x14,0,
                                                       (MethodInfo_4A03F20 *)
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                      );
                                            pIVar8 = SZArrayNew(TypeInfo_CustomLogic_CustomLogicSymbol_array,4
                                                               );
                                            System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                                                      ((System_Array_o *)pIVar8,
                                                       FieldRva_PrivateImplementationDetails_9D8E086A55799BAA9861B56B4512C9434A47E3C37C0CC4624235075AEEEA35EC
                                                       ,(MethodInfo *)0x0);
                                            if (pIVar8 != (Il2CppObject *)0x0) {
                                              if (0 < (int)pIVar8[1].monitor) {
                                                uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
                                                uVar10 = 0;
                                                do {
                                                  if (uVar9 <= uVar10) goto label_05b80b69;
                                                  iVar1 = *(int32_t *)((long)&pIVar8[2].klass + uVar10 * 4);
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
                                                     ) goto label_05b80b6e;
                                                  System_Collections_Generic_Dictionary_int__int___Add
                                                            (pSVar3,iVar1,0,
                                                             (MethodInfo_4A03F20 *)
                                                                                                                          
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                       );
                                                  uVar10 = uVar10 + 1;
                                                  uVar9 = (ulong)*(uint *)&pIVar8[1].monitor;
                                                } while ((long)uVar10 < (long)(int)*(uint *)&pIVar8[1].monitor
                                                        );
                                              }
                                              pIVar8 = SZArrayNew(TypeInfo_CustomLogic_CustomLogicSymbol_array
                                                                  ,2);
                                              if (pIVar8 != (Il2CppObject *)0x0) {
                                                pvVar4 = pIVar8[1].monitor;
                                                iVar7 = (int)pvVar4;
                                                if ((iVar7 == 0) ||
                                                   (*(undefined4 *)&pIVar8[2].klass = 0x1a, iVar7 == 1))
                                                goto label_05b80b69;
                                                *(undefined4 *)((long)&pIVar8[2].klass + 4) = 0x19;
                                                if (0 < iVar7) {
                                                  uVar9 = (ulong)pvVar4 & 0xffffffff;
                                                  uVar10 = 0;
                                                  do {
                                                    if (uVar9 <= uVar10) goto label_05b80b69;
                                                    iVar1 = *(int32_t *)((long)&pIVar8[2].klass + uVar10 * 4);
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
                                                       ) goto label_05b80b6e;
                                                    System_Collections_Generic_Dictionary_int__int___Add
                                                              (pSVar3,iVar1,1,
                                                               (MethodInfo_4A03F20 *)
                                                                                                                              
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                       );
                                                    uVar10 = uVar10 + 1;
                                                    uVar9 = (ulong)*(uint *)&pIVar8[1].monitor;
                                                  } while ((long)uVar10 <
                                                           (long)(int)*(uint *)&pIVar8[1].monitor);
                                                }
                                                pIVar8 = SZArrayNew(
                                                       TypeInfo_CustomLogic_CustomLogicSymbol_array,6);
                                                System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                                                          ((System_Array_o *)pIVar8,
                                                                                                                      
                                                       FieldRva_PrivateImplementationDetails_341C48B8D763F5BBDF402ED0A0B00F95DB0A677600E86CE8938E7748EB505AFD
                                                       ,(MethodInfo *)0x0);
                                                if (pIVar8 != (Il2CppObject *)0x0) {
                                                  if (0 < (int)pIVar8[1].monitor) {
                                                    uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
                                                    uVar10 = 0;
                                                    do {
                                                      if (uVar9 <= uVar10) goto label_05b80b69;
                                                      iVar1 = *(int32_t *)
                                                               ((long)&pIVar8[2].klass + uVar10 * 4);
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
                                                       ) goto label_05b80b6e;
                                                      System_Collections_Generic_Dictionary_int__int___Add
                                                                (pSVar3,iVar1,2,
                                                                 (MethodInfo_4A03F20 *)
                                                                                                                                  
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                       );
                                                      uVar10 = uVar10 + 1;
                                                      uVar9 = (ulong)*(uint *)&pIVar8[1].monitor;
                                                    } while ((long)uVar10 <
                                                             (long)(int)*(uint *)&pIVar8[1].monitor);
                                                  }
                                                  pIVar8 = SZArrayNew(
                                                       TypeInfo_CustomLogic_CustomLogicSymbol_array,2);
                                                  if (pIVar8 != (Il2CppObject *)0x0) {
                                                    pvVar4 = pIVar8[1].monitor;
                                                    iVar7 = (int)pvVar4;
                                                    if ((iVar7 == 0) ||
                                                       (*(undefined4 *)&pIVar8[2].klass = 0x21, iVar7 == 1))
                                                    goto label_05b80b69;
                                                    *(undefined4 *)((long)&pIVar8[2].klass + 4) = 0x22;
                                                    if (0 < iVar7) {
                                                      uVar9 = (ulong)pvVar4 & 0xffffffff;
                                                      uVar10 = 0;
                                                      do {
                                                        if (uVar9 <= uVar10) goto label_05b80b69;
                                                        iVar1 = *(int32_t *)
                                                                 ((long)&pIVar8[2].klass + uVar10 * 4);
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
                                                       ) goto label_05b80b6e;
                                                       System_Collections_Generic_Dictionary_int__int___Add
                                                                 (pSVar3,iVar1,3,
                                                                  (MethodInfo_4A03F20 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                       );
                                                       uVar10 = uVar10 + 1;
                                                       uVar9 = (ulong)*(uint *)&pIVar8[1].monitor;
                                                      } while ((long)uVar10 <
                                                               (long)(int)*(uint *)&pIVar8[1].monitor);
                                                    }
                                                    pIVar8 = SZArrayNew(
                                                       TypeInfo_CustomLogic_CustomLogicSymbol_array,3);
                                                    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                                                              ((System_Array_o *)pIVar8,
                                                                                                                              
                                                       FieldRva_PrivateImplementationDetails_22616551FC537E058E1A89FBDE586BDE75467E11C6B1CB1963B5F892FB2B5894
                                                       ,(MethodInfo *)0x0);
                                                    if (pIVar8 != (Il2CppObject *)0x0) {
                                                      if (0 < (int)pIVar8[1].monitor) {
                                                        uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
                                                        uVar10 = 0;
                                                        do {
                                                          if (uVar9 <= uVar10) goto label_05b80b69;
                                                          iVar1 = *(int32_t *)
                                                                   ((long)&pIVar8[2].klass + uVar10 * 4);
                                                          if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                                              cctor_finished_or_no_cctor == 0) {
                                                            il2cpp_codegen_runtime_class_init
                                                                      ((Il2CppClass *)
                                                                       TypeInfo_CustomLogic_CustomLogicSymbols
                                                                      );
                                                          }
                                                          pSVar3 = TypeInfo_CustomLogic_CustomLogicSymbols->
                                                                   static_fields->BinopSymbolPriorities;
                                                          if (pSVar3 == (
                                                       System_Collections_Generic_Dictionary_int__int__o *)0x0
                                                       ) goto label_05b80b6e;
                                                       System_Collections_Generic_Dictionary_int__int___Add
                                                                 (pSVar3,iVar1,4,
                                                                  (MethodInfo_4A03F20 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_Dictionary_int_int_Add
                                                       );
                                                       uVar10 = uVar10 + 1;
                                                       uVar9 = (ulong)*(uint *)&pIVar8[1].monitor;
                                                       } while ((long)uVar10 <
                                                                (long)(int)*(uint *)&pIVar8[1].monitor);
                                                      }
                                                      pIVar8 = SZArrayNew(
                                                       TypeInfo_CustomLogic_CustomLogicSymbol_array,5);
                                                      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                                                                ((System_Array_o *)pIVar8,
                                                                                                                                  
                                                       FieldRva_PrivateImplementationDetails_AAA9A0887F1FFCCD7D9FAFD6C581C10DD56E042994AF9075C209B87C175E5590
                                                       ,(MethodInfo *)0x0);
                                                      if (pIVar8 != (Il2CppObject *)0x0) {
                                                        if (0 < (int)pIVar8[1].monitor) {
                                                          uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
                                                          uVar10 = 0;
                                                          do {
                                                            if (uVar9 <= uVar10) goto label_05b80b69;
                                                            iVar1 = *(int32_t *)
                                                                     ((long)&pIVar8[2].klass + uVar10 * 4);
                                                            if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2).
                                                                cctor_finished_or_no_cctor == 0) {
                                                              il2cpp_codegen_runtime_class_init
                                                                        ((Il2CppClass *)
                                                                                                                                                  
                                                       TypeInfo_CustomLogic_CustomLogicSymbols);
                                                       }
                                                       pSVar5 = TypeInfo_CustomLogic_CustomLogicSymbols->
                                                                static_fields->ClassSymbols;
                                                       if (pSVar5 == (
                                                       System_Collections_Generic_HashSet_int__o *)0x0)
                                                       goto label_05b80b6e;
                                                       System_Collections_Generic_HashSet_int___Add
                                                                 (pSVar5,iVar1,
                                                                  (MethodInfo_4FA8AF0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_HashSet_int_Add);
                                                       uVar10 = uVar10 + 1;
                                                       uVar9 = (ulong)*(uint *)&pIVar8[1].monitor;
                                                       } while ((long)uVar10 <
                                                                (long)(int)*(uint *)&pIVar8[1].monitor);
                                                       }
                                                       pIVar8 = SZArrayNew(
                                                       TypeInfo_CustomLogic_CustomLogicSymbol_array,4);
                                                       System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_53cbb40
                                                                 ((System_Array_o *)pIVar8,
                                                                                                                                    
                                                       FieldRva_PrivateImplementationDetails_23971E4980DDAEE2D4BD5DC364AF0446A660BE4E95EAC134739B20FABD26981F
                                                       ,(MethodInfo *)0x0);
                                                       if (pIVar8 != (Il2CppObject *)0x0) {
                                                         if (0 < (int)pIVar8[1].monitor) {
                                                           uVar9 = (ulong)pIVar8[1].monitor & 0xffffffff;
                                                           uVar10 = 0;
                                                           do {
                                                             if (uVar9 <= uVar10) goto label_05b80b69;
                                                             iVar1 = *(int32_t *)
                                                                      ((long)&pIVar8[2].klass + uVar10 * 4);
                                                             if ((TypeInfo_CustomLogic_CustomLogicSymbols->_2)
                                                                 .cctor_finished_or_no_cctor == 0) {
                                                               il2cpp_codegen_runtime_class_init
                                                                         ((Il2CppClass *)
                                                                                                                                                    
                                                       TypeInfo_CustomLogic_CustomLogicSymbols);
                                                       }
                                                       pSVar5 = TypeInfo_CustomLogic_CustomLogicSymbols->
                                                                static_fields->ConditionalSymbols;
                                                       if (pSVar5 == (
                                                       System_Collections_Generic_HashSet_int__o *)0x0)
                                                       goto label_05b80b6e;
                                                       System_Collections_Generic_HashSet_int___Add
                                                                 (pSVar5,iVar1,
                                                                  (MethodInfo_4FA8AF0 *)
                                                                                                                                    
                                                       MethodInfo_System_Collections_Generic_HashSet_int_Add);
                                                       uVar10 = uVar10 + 1;
                                                       uVar9 = (ulong)*(uint *)&pIVar8[1].monitor;
                                                       } while ((long)uVar10 <
                                                                (long)(int)*(uint *)&pIVar8[1].monitor);
                                                       }
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
label_05b80b6e:
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
label_05b80b69:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicSymbols$$.ctor
// il2cpp: void CustomLogic_CustomLogicSymbols___ctor (CustomLogic_CustomLogicSymbols_o* __this, const MethodInfo* method);
// 0x5b80bf0

void CustomLogic_CustomLogicSymbols___ctor(CustomLogic_CustomLogicSymbols_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSymbols$$.cctor
// il2cpp: void CustomLogic_CustomLogicSymbols___cctor (const MethodInfo* method);
// 0x5b80c00

void CustomLogic_CustomLogicSymbols___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicSymbols_StaticFields *pCVar1;
  System_Collections_Generic_Dictionary_string__int__o *__this;
  System_Collections_Generic_HashSet_string__o *pSVar2;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  System_Collections_Generic_HashSet_int__o *pSVar3;
  
  if (Il2CppMethodInitialized_075473a1 == '\0') {
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
    Il2CppMethodInitialized_075473a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_int)
  ;
  System_Collections_Generic_Dictionary_object__int____ctor
            ((System_Collections_Generic_Dictionary_object__int__o *)__this,
             (MethodInfo_4A9CB80 *)MethodInfo_System_Collections_Generic_Dictionary_string_int_ctor);
  TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->Symbols);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar2,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields;
  pCVar1->SpecialSymbolNames = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->SpecialSymbolNames);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar2,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields;
  pCVar1->AlphaSymbolNames = pSVar2;
  Il2CppCodeGenWriteBarrier(&pCVar1->AlphaSymbolNames);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_int_int)
  ;
  System_Collections_Generic_Dictionary_int__int____ctor
            (__this_00,(MethodInfo_4A032E0 *)MethodInfo_System_Collections_Generic_Dictionary_int_int_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields;
  pCVar1->BinopSymbolPriorities = __this_00;
  Il2CppCodeGenWriteBarrier(&pCVar1->BinopSymbolPriorities);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar3,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields;
  pCVar1->ClassSymbols = pSVar3;
  Il2CppCodeGenWriteBarrier(&pCVar1->ClassSymbols);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_int);
  System_Collections_Generic_HashSet_int____ctor
            (pSVar3,(MethodInfo_4FA7520 *)MethodInfo_System_Collections_Generic_HashSet_int_ctor);
  pCVar1 = TypeInfo_CustomLogic_CustomLogicSymbols->static_fields;
  pCVar1->ConditionalSymbols = pSVar3;
  Il2CppCodeGenWriteBarrier(&pCVar1->ConditionalSymbols);
  TypeInfo_CustomLogic_CustomLogicSymbols->static_fields->_loaded = false;
  return;
}


