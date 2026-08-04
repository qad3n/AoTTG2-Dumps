// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceOptionSelection.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* owner, int32_t index, const MethodInfo* method);
// 0x3b8c6e0

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,
               Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *owner,int32_t index,MethodInfo *method)

{
  (__this->fields)._owner = owner;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._owner);
  (__this->fields)._index = index;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerEnter (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b8dad0

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  int32_t index;
  long lVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  float fVar3;
  float fVar5;
  UnityEngine_Vector2_Fields UVar4;
  UnityEngine_Vector3_o UVar6;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    return;
  }
  index = (__this->fields)._index;
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UVar6 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    UVar4 = UVar6.fields._0_8_;
    method = extraout_RDX_03;
  }
  else {
    UVar4 = (eventData->fields)._position_k__BackingField.fields;
  }
  if ((char)(__this_00->fields)._pointerSelectionLocked != '\0') {
    UVar1 = (__this_00->fields)._pointerLockPosition.fields;
    fVar3 = UVar4.x - UVar1.x;
    fVar5 = UVar4.y - UVar1.y;
    if (fVar5 * fVar5 + fVar3 * fVar3 < 4.0) {
      return;
    }
    *(undefined1 *)&(__this_00->fields)._pointerSelectionLocked = 0;
  }
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
  lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar2 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
      method = extraout_RDX_02;
    }
    else {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      method = extraout_RDX_01;
    }
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,index,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerMove (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b8db10

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerMove
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  int32_t index;
  long lVar2;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  float fVar3;
  float fVar5;
  UnityEngine_Vector2_Fields UVar4;
  UnityEngine_Vector3_o UVar6;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    return;
  }
  index = (__this->fields)._index;
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    UVar6 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    UVar4 = UVar6.fields._0_8_;
    method = extraout_RDX_03;
  }
  else {
    UVar4 = (eventData->fields)._position_k__BackingField.fields;
  }
  if ((char)(__this_00->fields)._pointerSelectionLocked != '\0') {
    UVar1 = (__this_00->fields)._pointerLockPosition.fields;
    fVar3 = UVar4.x - UVar1.x;
    fVar5 = UVar4.y - UVar1.y;
    if (fVar5 * fVar5 + fVar3 * fVar3 < 4.0) {
      return;
    }
    *(undefined1 *)&(__this_00->fields)._pointerSelectionLocked = 0;
  }
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
  lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
  if (*(int *)(lVar2 + 0x18) != 0) {
    if (g_data_057a9f2a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9f2a = '\x01';
      lVar2 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
      method = extraout_RDX_02;
    }
    else {
      *(undefined4 *)(lVar2 + 0x18) = 0;
      lVar2 = *(long *)(lVar2 + 0x10);
    }
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
      method = extraout_RDX_01;
    }
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,index,method);
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnSelect (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b8db50

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnSelect
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  uint index;
  long lVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  MethodInfo *focused;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_01;
  UnityEngine_Vector3_o UVar2;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    index = (__this->fields)._index;
    focused = (MethodInfo *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    method_01 = (MethodInfo *)(ulong)index;
    method_00 = focused;
    if (g_data_057a9eed == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9eed = '\x01';
      method_00 = extraout_RDX;
    }
    if (g_data_057a9c87 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
      g_data_057a9c87 = '\x01';
      method_00 = extraout_RDX_00;
    }
    lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
    if (*(int *)(lVar1 + 0x18) != 1) {
      if (g_data_057a9f2a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchFocusInputMode);
        g_data_057a9f2a = '\x01';
        lVar1 = *(long *)(TypeInfo_GisketchFocusInputMode + 0xb8);
        *(undefined4 *)(lVar1 + 0x18) = 1;
        lVar1 = *(long *)(lVar1 + 0x10);
        method_00 = extraout_RDX_02;
      }
      else {
        *(undefined4 *)(lVar1 + 0x18) = 1;
        lVar1 = *(long *)(lVar1 + 0x10);
      }
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        method_00 = extraout_RDX_01;
      }
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,index,method_00);
    UVar2 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
    *(undefined1 *)&(__this_00->fields)._pointerSelectionLocked = 1;
    (__this_00->fields)._pointerLockPosition.fields = UVar2.fields._0_8_;
    Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal((UnityEngine_GameObject_o *)focused,12.0,method_01);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, const MethodInfo* method);
// 0x3b8db80

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


