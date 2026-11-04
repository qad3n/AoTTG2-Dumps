// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceOptionSelection.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* owner, int32_t index, const MethodInfo* method);
// 0x1818f7330

void
Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__Setup(Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* owner, int32_t index, MethodInfo* method)

{
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  (__this->fields)._index = index;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerEnter (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818f71e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f7263: mov rdi, qword ptr [rsp + 0x40]

void
Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerEnter(Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  int32_t index;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  UnityEngine_Vector2_o *pUVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    index = (__this->fields)._index;
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      pUVar1 = (UnityEngine_Vector2_o *)UnityEngine_Input__get_mousePosition(&local_18,(MethodInfo *)0x0);
      fVar3 = ((UnityEngine_Vector3_Fields *)&pUVar1->fields)->y;
    }
    else {
      fVar3 = (eventData->fields)._position_k__BackingField.fields.y;
      pUVar1 = &(eventData->fields)._position_k__BackingField;
    }
    if ((__this_00->fields)._pointerSelectionLocked != false) {
      fVar2 = ((UnityEngine_Vector3_Fields *)&pUVar1->fields)->x -
              (__this_00->fields)._pointerLockPosition.fields.x;
      fVar3 = fVar3 - (__this_00->fields)._pointerLockPosition.fields.y;
      if (fVar3 * fVar3 + fVar2 * fVar2 < 4.0) {
        return;
      }
      (__this_00->fields)._pointerSelectionLocked = false;
    }
    Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,index,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerMove (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818f71e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f7263: mov rdi, qword ptr [rsp + 0x40]

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerMove
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  int32_t index;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  UnityEngine_Vector2_o *pUVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    index = (__this->fields)._index;
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      pUVar1 = (UnityEngine_Vector2_o *)UnityEngine_Input__get_mousePosition(&local_18,(MethodInfo *)0x0);
      fVar3 = ((UnityEngine_Vector3_Fields *)&pUVar1->fields)->y;
    }
    else {
      fVar3 = (eventData->fields)._position_k__BackingField.fields.y;
      pUVar1 = &(eventData->fields)._position_k__BackingField;
    }
    if ((__this_00->fields)._pointerSelectionLocked != false) {
      fVar2 = ((UnityEngine_Vector3_Fields *)&pUVar1->fields)->x -
              (__this_00->fields)._pointerLockPosition.fields.x;
      fVar3 = fVar3 - (__this_00->fields)._pointerLockPosition.fields.y;
      if (fVar3 * fVar3 + fVar2 * fVar2 < 4.0) {
        return;
      }
      (__this_00->fields)._pointerSelectionLocked = false;
    }
    Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,index,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnSelect (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818f7270
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818f7320: mov rsi, qword ptr [rsp + 0x48]

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnSelect
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  int32_t index;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  UnityEngine_GameObject_o *focused;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_184341f35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode);
    Il2CppMethodInitialized_184341f35 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchFocusInputMode->static_fields->_Mode_k__BackingField == 1)
     && (__this_00 = (__this->fields)._owner,
        __this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0)) {
    index = (__this->fields)._index;
    focused = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetMode(1,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetSelectedIndex(__this_00,index,(MethodInfo *)0x0);
    pUVar2 = UnityEngine_Input__get_mousePosition(&local_18,(MethodInfo *)0x0);
    fVar1 = (pUVar2->fields).x;
    (__this_00->fields)._pointerLockPosition.fields.y = (pUVar2->fields).y;
    (__this_00->fields)._pointerLockPosition.fields.x = fVar1;
    (__this_00->fields)._pointerSelectionLocked = true;
    Gisketch_Aottg2UI_Actions_GisketchScrollFocus__Reveal(focused,12.0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection___ctor(Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


