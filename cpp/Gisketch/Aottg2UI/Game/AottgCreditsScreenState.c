// Type: Gisketch.Aottg2UI.Game.AottgCreditsScreenState
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsScreenState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$get_Credits
// il2cpp: ApplicationManagers_Credits_AottgCreditsResponse_o* Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_Credits (const MethodInfo* method);
// 0x1823aa440

ApplicationManagers_Credits_AottgCreditsResponse_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_Credits(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_184347d0c = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$set_Credits
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__set_Credits (ApplicationManagers_Credits_AottgCreditsResponse_o* value, const MethodInfo* method);
// 0x1823aa530

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__set_Credits
               (ApplicationManagers_Credits_AottgCreditsResponse_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_184347d0d = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField
             ,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$get_HasCategories
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_HasCategories (const MethodInfo* method);
// 0x1823aa480

bool Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_HasCategories(MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar1;
  Il2CppObject *obj;
  void *pvVar2;
  
  if (Il2CppMethodInitialized_184347d0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory);
    Il2CppMethodInitialized_184347d0e = '\x01';
  }
  if (Il2CppMethodInitialized_184347d4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_184347d4a = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField ==
      (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    return false;
  }
  if (Il2CppMethodInitialized_184347d4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_184347d4a = '\x01';
  }
  pAVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField;
  if ((pAVar1 != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) &&
     (obj = (Il2CppObject *)(pAVar1->fields)._Categories_k__BackingField, obj != (Il2CppObject *)0x0)) {
    pvVar2 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditCategory,obj);
    return 0 < (int)pvVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$Set
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Set (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x1823aa3e0

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Set
               (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_184347d4b = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField = credits;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField
             ,credits);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreenState$$Clear
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Clear (const MethodInfo* method);
// 0x1823aa390

void Gisketch_Aottg2UI_Game_AottgCreditsScreenState__Clear(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState);
    Il2CppMethodInitialized_184347d4b = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField =
       (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsScreenState->static_fields->_Credits_k__BackingField
             ,(void *)0x0);
  return;
}


