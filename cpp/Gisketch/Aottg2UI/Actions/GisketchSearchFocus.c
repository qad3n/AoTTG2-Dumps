// Type: Gisketch.Aottg2UI.Actions.GisketchSearchFocus
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSearchFocus.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSearchFocus$$Focus
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchFocus__Focus (UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x1819064d0

void Gisketch_Aottg2UI_Actions_GisketchSearchFocus__Focus(UnityEngine_GameObject_o *target,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_EventSystems_EventSystem_o *pUVar2;
  
  if (Il2CppMethodInitialized_184342264 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342264 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(1,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
      }
      pUVar2 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
      if (pUVar2 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_32f3500(pUVar2,target,(MethodInfo *)0x0);
    }
    Gisketch_Aottg2UI_Actions_GisketchScrollFocus__RevealAtCenter(target,(MethodInfo *)0x0);
    return;
  }
  return;
}


