// Type: Gisketch.Aottg2UI.Actions.GisketchFocusInputSource
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchFocusInputSource.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchFocusInputSource$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputSource__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchFocusInputSource_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b95e00

void Gisketch_Aottg2UI_Actions_GisketchFocusInputSource__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchFocusInputSource_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
    method = extraout_RDX;
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
    method = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
      method = extraout_RDX_01;
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 0;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),method,*(code **)(lVar1 + 0x18));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputSource$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputSource__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchFocusInputSource_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b95eb0

void Gisketch_Aottg2UI_Actions_GisketchFocusInputSource__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchFocusInputSource_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  long lVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
    method = extraout_RDX;
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
    method = extraout_RDX_00;
  }
  lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar1 + 0x18) != 1) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
      method = extraout_RDX_01;
    }
    else {
      *(undefined4 *)(lVar1 + 0x18) = 1;
      lVar1 = *(long *)(lVar1 + 0x10);
    }
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x18))
                (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28),method,*(code **)(lVar1 + 0x18));
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchFocusInputSource$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchFocusInputSource___ctor (Gisketch_Aottg2UI_Actions_GisketchFocusInputSource_o* __this, const MethodInfo* method);
// 0x3b95f60

void Gisketch_Aottg2UI_Actions_GisketchFocusInputSource___ctor
               (Gisketch_Aottg2UI_Actions_GisketchFocusInputSource_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


