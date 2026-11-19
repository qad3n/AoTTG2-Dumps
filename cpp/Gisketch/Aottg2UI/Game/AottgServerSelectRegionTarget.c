// Type: Gisketch.Aottg2UI.Game.AottgServerSelectRegionTarget
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgServerSelectRegionTarget.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgServerSelectRegionTarget$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__Setup (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o* __this, Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o* map, int32_t index, bool connectOnClick, const MethodInfo* method);
// 0x58d4870

void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__Setup
               (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o *__this,
               Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *map,int32_t index,bool connectOnClick,
               MethodInfo *method)

{
  (__this->fields)._map = map;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._map);
  (__this->fields)._index = index;
  (__this->fields)._connectOnClick = connectOnClick;
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectRegionTarget$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__OnPointerEnter (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x58d49b0

void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__OnPointerEnter
               (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this_00;
  
  if (Il2CppMethodInitialized_07545495 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Il2CppMethodInitialized_07545495 = '\x01';
  }
  __this_00 = (__this->fields)._map;
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields)._focused = (__this->fields)._index;
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AnimateToFocus(__this_00,(MethodInfo *)eventData);
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(2,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectRegionTarget$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__OnPointerExit (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x58d4a20

void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__OnPointerExit
               (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this_00;
  
  __this_00 = (__this->fields)._map;
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this_00->fields)._focused == (__this->fields)._index) {
    (__this_00->fields)._focused = -1;
    Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AnimateToFocus(__this_00,(MethodInfo *)eventData);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectRegionTarget$$OnPointerClick
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__OnPointerClick (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x58d4a50

void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__OnPointerClick
               (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this_00;
  
  if ((__this->fields)._connectOnClick == false) {
    return;
  }
  __this_00 = (__this->fields)._map;
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__Connect(__this_00,(__this->fields)._index,method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectRegionTarget$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__OnSelect (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x58d4a80

void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__OnSelect
               (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this_00;
  
  __this_00 = (__this->fields)._map;
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields)._focused = (__this->fields)._index;
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AnimateToFocus(__this_00,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectRegionTarget$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__OnDeselect (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x58d4aa0

void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget__OnDeselect
               (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this_00;
  
  __this_00 = (__this->fields)._map;
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__this_00->fields)._focused == (__this->fields)._index) {
    (__this_00->fields)._focused = -1;
    Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__AnimateToFocus(__this_00,(MethodInfo *)eventData);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectRegionTarget$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget___ctor (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o* __this, const MethodInfo* method);
// 0x58d4ad0

void Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget___ctor
               (Gisketch_Aottg2UI_Game_AottgServerSelectRegionTarget_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


