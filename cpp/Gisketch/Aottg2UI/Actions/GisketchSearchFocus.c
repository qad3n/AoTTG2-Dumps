// Type: Gisketch.Aottg2UI.Actions.GisketchSearchFocus
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSearchFocus.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSearchFocus$$Focus
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSearchFocus__Focus (UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x3b2c840

void Gisketch_Aottg2UI_Actions_GisketchSearchFocus__Focus
               (UnityEngine_GameObject_o *target,MethodInfo *method)

{
  bool_conflict bVar1;
  long lVar2;
  UnityEngine_EventSystems_EventSystem_o *pUVar3;
  MethodInfo *method_00;
  
  if (DAT_057015d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_EventSystem);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015d7 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (DAT_057015b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_057015b9 = '\x01';
  }
  if (DAT_0570136d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
    DAT_0570136d = '\x01';
  }
  lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar2 + 0x18) != 1) {
    if (DAT_057015f6 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GisketchFocusInputMode);
      DAT_057015f6 = '\x01';
      lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    }
    *(undefined4 *)(lVar2 + 0x18) = 1;
    lVar2 = *(long *)(lVar2 + 0x10);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
    }
  }
  if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_EventSystem + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar3 = UnityEngine_EventSystems_EventSystem__get_current((MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_EventSystems_EventSystem_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_00 = (MethodInfo *)target;
    UnityEngine_EventSystems_EventSystem__SetSelectedGameObject(pUVar3,target,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(target,12.0,method_00);
  return;
}


