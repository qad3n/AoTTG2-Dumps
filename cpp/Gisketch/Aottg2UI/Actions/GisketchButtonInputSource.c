// Type: Gisketch.Aottg2UI.Actions.GisketchButtonInputSource
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchButtonInputSource.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$get_Source
// il2cpp: int32_t Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__get_Source (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, const MethodInfo* method);
// 0x539e6f0

int32_t Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__get_Source
                  (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,MethodInfo *method)

{
  return (__this->fields)._Source_k__BackingField;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$set_Source
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__set_Source (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, int32_t value, const MethodInfo* method);
// 0x539e700

void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__set_Source
               (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,int32_t value,MethodInfo *method
               )

{
  (__this->fields)._Source_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x539e710

void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  
  (__this->fields)._Source_k__BackingField = 1;
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != 0) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
    }
    else {
      pGVar1->_Mode_k__BackingField = 0;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x539e7c0

void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode_StaticFields *pGVar1;
  System_Action_o *pSVar2;
  
  (__this->fields)._Source_k__BackingField = 2;
  if (Il2CppMethodInitialized_07542bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542bac = '\x01';
  }
  if (Il2CppMethodInitialized_07542884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_07542884 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
  if (pGVar1->_Mode_k__BackingField != 1) {
    if (Il2CppMethodInitialized_07542bea == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
      Il2CppMethodInitialized_07542bea = '\x01';
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields;
      pGVar1->_Mode_k__BackingField = 1;
      pSVar2 = pGVar1->Changed;
    }
    else {
      pGVar1->_Mode_k__BackingField = 1;
      pSVar2 = pGVar1->Changed;
    }
    if (pSVar2 != (System_Action_o *)0x0) {
      (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,(pSVar2->fields).method);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchButtonInputSource$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource___ctor (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o* __this, const MethodInfo* method);
// 0x539e870

void Gisketch_Aottg2UI_Actions_GisketchButtonInputSource___ctor
               (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


