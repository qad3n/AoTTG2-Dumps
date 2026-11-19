// Type: UI.MobileInputLookAreaForwarder
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileInputLookAreaForwarder.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputLookAreaForwarder$$OnInitializePotentialDrag
// il2cpp: void UI_MobileInputLookAreaForwarder__OnInitializePotentialDrag (UI_MobileInputLookAreaForwarder_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c70cc0

void UI_MobileInputLookAreaForwarder__OnInitializePotentialDrag
               (UI_MobileInputLookAreaForwarder_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    ThrowNullReferenceException();
  }
  (eventData->fields)._useDragThreshold_k__BackingField = false;
  return;
}


// UI.MobileInputLookAreaForwarder$$OnPointerDown
// il2cpp: void UI_MobileInputLookAreaForwarder__OnPointerDown (UI_MobileInputLookAreaForwarder_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c70ce0

void UI_MobileInputLookAreaForwarder__OnPointerDown
               (UI_MobileInputLookAreaForwarder_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_EventSystems_PointerEventData_o *pUVar2;
  
  pUVar2 = eventData;
  if (Il2CppMethodInitialized_075478fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLookArea);
    Il2CppMethodInitialized_075478fd = '\x01';
    uVar1 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLookArea);
    UI_MobileInputLookArea__ForwardPointerDown(eventData,(MethodInfo *)pUVar2);
    return;
  }
  UI_MobileInputLookArea__ForwardPointerDown(eventData,(MethodInfo *)pUVar2);
  return;
}


// UI.MobileInputLookAreaForwarder$$OnDrag
// il2cpp: void UI_MobileInputLookAreaForwarder__OnDrag (UI_MobileInputLookAreaForwarder_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c70d40

void UI_MobileInputLookAreaForwarder__OnDrag
               (UI_MobileInputLookAreaForwarder_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  return;
}


// UI.MobileInputLookAreaForwarder$$OnPointerUp
// il2cpp: void UI_MobileInputLookAreaForwarder__OnPointerUp (UI_MobileInputLookAreaForwarder_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5c70d50

void UI_MobileInputLookAreaForwarder__OnPointerUp
               (UI_MobileInputLookAreaForwarder_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_EventSystems_PointerEventData_o *pUVar2;
  
  pUVar2 = eventData;
  if (Il2CppMethodInitialized_075478fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLookArea);
    Il2CppMethodInitialized_075478fe = '\x01';
    uVar1 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileInputLookArea->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileInputLookArea);
    UI_MobileInputLookArea__ForwardPointerUp(eventData,(MethodInfo *)pUVar2);
    return;
  }
  UI_MobileInputLookArea__ForwardPointerUp(eventData,(MethodInfo *)pUVar2);
  return;
}


// UI.MobileInputLookAreaForwarder$$.ctor
// il2cpp: void UI_MobileInputLookAreaForwarder___ctor (UI_MobileInputLookAreaForwarder_o* __this, const MethodInfo* method);
// 0x5c70db0

void UI_MobileInputLookAreaForwarder___ctor(UI_MobileInputLookAreaForwarder_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


