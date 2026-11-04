// Type: Gisketch.Aottg2UI.Actions.AottgSearchResultSelection
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgSearchResultSelection.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__Setup (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o* owner, int32_t index, const MethodInfo* method);
// 0x1818f7330

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__Setup
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *owner,int32_t index,MethodInfo *method)

{
  (__this->fields)._owner = owner;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._owner,owner);
  (__this->fields)._index = index;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerEnter (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818f9fe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818fa05a: mov rdi, qword ptr [rsp + 0x40]

void
Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerEnter(Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, MethodInfo* method)

{
  int32_t index;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_00;
  UnityEngine_Vector2_o *pUVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
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
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation
              (__this_00,index,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerMove (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1818f9fe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818fa05a: mov rdi, qword ptr [rsp + 0x40]

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnPointerMove
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  int32_t index;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_00;
  UnityEngine_Vector2_o *pUVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o local_18;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
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
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation
              (__this_00,index,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnSelect (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x1818fa070

void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection__OnSelect
               (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_00;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
    Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__SelectFromNavigation
              (__this_00,(__this->fields)._index,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgSearchResultSelection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgSearchResultSelection___ctor (Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Actions_AottgSearchResultSelection___ctor(Gisketch_Aottg2UI_Actions_AottgSearchResultSelection_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


