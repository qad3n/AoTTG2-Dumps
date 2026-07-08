// Type: Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/AottgChoiceOptionSelection.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__Setup (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* owner, int32_t index, const MethodInfo* method);
// 0x3b20520

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__Setup
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,
               Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *owner,int32_t index,
               MethodInfo *method)

{
  (__this->fields)._owner = owner;
  il2cpp_runtime_glue(&(__this->fields)._owner);
  (__this->fields)._index = index;
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerEnter (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b217a0

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  int32_t index;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  MethodInfo *extraout_RDX;
  UnityEngine_Vector2_Fields pointerPosition;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    index = (__this->fields)._index;
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      UVar1 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      pointerPosition = UVar1.fields._0_8_;
      method = extraout_RDX;
    }
    else {
      pointerPosition = (eventData->fields)._position_k__BackingField.fields;
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromPointer
              (__this_00,index,(UnityEngine_Vector2_o)pointerPosition,method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerMove (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b217e0

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnPointerMove
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  int32_t index;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  MethodInfo *extraout_RDX;
  UnityEngine_Vector2_Fields pointerPosition;
  UnityEngine_Vector3_o UVar1;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    index = (__this->fields)._index;
    if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
      UVar1 = UnityEngine_Input__get_mousePosition((MethodInfo *)0x0);
      pointerPosition = UVar1.fields._0_8_;
      method = extraout_RDX;
    }
    else {
      pointerPosition = (eventData->fields)._position_k__BackingField.fields;
    }
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromPointer
              (__this_00,index,(UnityEngine_Vector2_o)pointerPosition,method);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnSelect (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b21820

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection__OnSelect
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  int32_t index;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  UnityEngine_GameObject_o *option;
  MethodInfo *in_RCX;
  
  __this_00 = (__this->fields)._owner;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    index = (__this->fields)._index;
    option = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SelectFromNavigation
              (__this_00,index,option,in_RCX);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.AottgChoiceOptionSelection$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection___ctor (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o* __this, const MethodInfo* method);
// 0x3b21850

void Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection___ctor
               (Gisketch_Aottg2UI_Actions_AottgChoiceOptionSelection_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


