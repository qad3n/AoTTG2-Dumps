// Type: Gisketch.Aottg2UI.Actions.GisketchSearchFocus
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSearchFocus.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSearchFocus$$Focus
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchFocus__Focus (UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x53a64d0

void Gisketch_Aottg2UI_Actions_GisketchSearchFocus__Focus(UnityEngine_GameObject_o *target,MethodInfo *method)

{
  System_Action_o *pSVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar3;
  UnityEngine_EventSystems_EventSystem_o *pUVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542be3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_EventSystems_EventSystem);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542be3 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar3->_Mode_k__BackingField != 1) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
    }
    pGVar3->_Mode_k__BackingField = 1;
    pSVar1 = pGVar3->Changed;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
    }
  }
  if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
  }
  pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_EventSystems_EventSystem->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_EventSystems_EventSystem);
    }
    pUVar4 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)target;
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_6d01480(pUVar4,target,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Actions_GisketchScrollFocus__RevealAtCenter(target,method_00);
  return;
}


