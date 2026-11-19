// Type: UI.HoverTooltip
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/HoverTooltip.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/HoverTooltip.cs
// --------------------------------

// UI.HoverTooltip$$GetPopup
// il2cpp: UI_TooltipPopup_o* UI_HoverTooltip__GetPopup (UI_HoverTooltip_o* __this, const MethodInfo* method);
// 0x5cbeda0

UI_TooltipPopup_o * UI_HoverTooltip__GetPopup(UI_HoverTooltip_o *__this,MethodInfo *method)

{
  UI_TooltipPopup_o *exists;
  UI_BaseMenu_o *pUVar1;
  bool bVar2;
  UI_TooltipPopup_o **ppUVar3;
  
  if (Il2CppMethodInitialized_07547b0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_07547b0c = '\x01';
  }
  exists = (__this->fields).PopupOverride;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (bVar2) {
    ppUVar3 = &(__this->fields).PopupOverride;
  }
  else {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar1 == (UI_BaseMenu_o *)0x0) {
      ThrowNullReferenceException();
    }
    ppUVar3 = &(pUVar1->fields).TooltipPopup;
  }
  return *ppUVar3;
}


// UI.HoverTooltip$$UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter
// il2cpp: void UI_HoverTooltip__UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter (UI_HoverTooltip_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5cbee40

void UI_HoverTooltip__UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter
               (UI_HoverTooltip_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UI_TooltipPopup_o **targetAddress;
  bool bVar1;
  UI_TooltipPopup_o *pUVar2;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547b0d = '\x01';
  }
  method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
  bVar1 = System_String__op_Equality((__this->fields).Message,(System_String_o *)method_00,(MethodInfo *)0x0);
  if (!bVar1) {
    pUVar2 = UI_HoverTooltip__GetPopup(__this,method_00);
    targetAddress = &(__this->fields).popup;
    (__this->fields).popup = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar2 = (__this->fields).popup;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = *targetAddress;
      if (pUVar2 == (UI_TooltipPopup_o *)0x0) {
        ThrowNullReferenceException();
      }
      UI_TooltipPopup__Show
                (pUVar2,(__this->fields).Message,(UnityEngine_Component_o *)__this,(__this->fields).Offset,
                 in_RCX);
      return;
    }
  }
  return;
}


// UI.HoverTooltip$$UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit
// il2cpp: void UI_HoverTooltip__UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit (UI_HoverTooltip_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5cbf1e0

void UI_HoverTooltip__UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit
               (UI_HoverTooltip_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UI_TooltipPopup_o **targetAddress;
  UI_TooltipPopup_o *pUVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547b0e = '\x01';
  }
  pUVar1 = (__this->fields).popup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).popup;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  if (bVar2) {
    if (*targetAddress == (UI_TooltipPopup_o *)0x0) {
label_05cbf29c:
      ThrowNullReferenceException();
    }
    x = (UnityEngine_Object_o *)((*targetAddress)->fields).Caller;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = *targetAddress;
      if (pUVar1 == (UI_TooltipPopup_o *)0x0) goto label_05cbf29c;
      (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    }
  }
  *targetAddress = (UI_TooltipPopup_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// UI.HoverTooltip$$OnDisable
// il2cpp: void UI_HoverTooltip__OnDisable (UI_HoverTooltip_o* __this, const MethodInfo* method);
// 0x5cbf2b0

void UI_HoverTooltip__OnDisable(UI_HoverTooltip_o *__this,MethodInfo *method)

{
  UI_TooltipPopup_o **targetAddress;
  UI_TooltipPopup_o *pUVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547b0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547b0f = '\x01';
  }
  pUVar1 = (__this->fields).popup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields).popup;
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  if (bVar2) {
    if (*targetAddress == (UI_TooltipPopup_o *)0x0) {
label_05cbf36c:
      ThrowNullReferenceException();
    }
    x = (UnityEngine_Object_o *)((*targetAddress)->fields).Caller;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = *targetAddress;
      if (pUVar1 == (UI_TooltipPopup_o *)0x0) goto label_05cbf36c;
      (*(pUVar1->klass->vtable)._58_HideImmediate.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._58_HideImmediate.method);
    }
  }
  *targetAddress = (UI_TooltipPopup_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  return;
}


// UI.HoverTooltip$$.ctor
// il2cpp: void UI_HoverTooltip___ctor (UI_HoverTooltip_o* __this, const MethodInfo* method);
// 0x5cbf380

void UI_HoverTooltip___ctor(UI_HoverTooltip_o *__this,MethodInfo *method)

{
  (__this->fields).Offset = 40.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


