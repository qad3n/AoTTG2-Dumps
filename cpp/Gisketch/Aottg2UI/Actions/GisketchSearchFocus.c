// Type: Gisketch.Aottg2UI.Actions.GisketchSearchFocus
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSearchFocus.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSearchFocus$$Focus
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchFocus__Focus (UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x3b99370

void Gisketch_Aottg2UI_Actions_GisketchSearchFocus__Focus(UnityEngine_GameObject_o *target,MethodInfo *method)

{
  bool_conflict bVar1;
  long lVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  MethodInfo *method_00;
  
  if (g_data_057a9f0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_EventSystem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f0f = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (g_data_057a9eed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9eed = '\x01';
  }
  if (g_data_057a9c87 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
    g_data_057a9c87 = '\x01';
  }
  lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar2 + 0x18) != 1) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    }
    *(undefined4 *)(lVar2 + 0x18) = 1;
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
    }
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    method_00 = (MethodInfo *)target;
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject_50f16d0(pUVar3,target,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(target,12.0,method_00);
  return;
}


