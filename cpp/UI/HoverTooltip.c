// Type: UI.HoverTooltip
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/HoverTooltip.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/HoverTooltip.cs
// --------------------------------

// UI.HoverTooltip$$GetPopup
// il2cpp: UI_TooltipPopup_o* UI_HoverTooltip__GetPopup (UI_HoverTooltip_o* __this, const MethodInfo* method);
// 0x1821c33c0

UI_TooltipPopup_o * UI_HoverTooltip__GetPopup(UI_HoverTooltip_o *__this,MethodInfo *method)

{
  UI_TooltipPopup_o *exists;
  UI_BaseMenu_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346f12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_184346f12 = '\x01';
  }
  exists = (__this->fields).PopupOverride;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if (bVar2) {
    return (__this->fields).PopupOverride;
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
  if (pUVar1 != (UI_BaseMenu_o *)0x0) {
    return (pUVar1->fields).TooltipPopup;
  }
  ThrowNullReferenceException();
}


// UI.HoverTooltip$$UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter
// il2cpp: void UI_HoverTooltip__UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter (UI_HoverTooltip_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1821c3540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821c366d: mov rdi, qword ptr [rsp + 0x40]

void UI_HoverTooltip__UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter
               (UI_HoverTooltip_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UI_BaseMenu_o *pUVar1;
  bool bVar2;
  UI_TooltipPopup_o *pUVar3;
  
  if (Il2CppMethodInitialized_184346f13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346f13 = '\x01';
  }
  bVar2 = System_String__op_Equality
                    ((__this->fields).Message,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                     (MethodInfo *)0x0);
  if (!bVar2) {
    if (Il2CppMethodInitialized_184346f12 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
      Il2CppMethodInitialized_184346f12 = '\x01';
    }
    pUVar3 = (__this->fields).PopupOverride;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar3 = (__this->fields).PopupOverride;
    }
    else {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar1 == (UI_BaseMenu_o *)0x0) goto label_1821c3678;
      pUVar3 = (pUVar1->fields).TooltipPopup;
    }
    (__this->fields).popup = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).popup,pUVar3);
    pUVar3 = (__this->fields).popup;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar3,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar3 = (__this->fields).popup;
      if (pUVar3 == (UI_TooltipPopup_o *)0x0) {
label_1821c3678:
        ThrowNullReferenceException();
      }
      UI_TooltipPopup__Show
                (pUVar3,(__this->fields).Message,(UnityEngine_Component_o *)__this,(__this->fields).Offset,
                 (MethodInfo *)0x0);
    }
  }
  return;
}


// UI.HoverTooltip$$UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit
// il2cpp: void UI_HoverTooltip__UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit (UI_HoverTooltip_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x1821c3680

void UI_HoverTooltip__UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit
               (UI_HoverTooltip_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UI_TooltipPopup_o *pUVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346f14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346f14 = '\x01';
  }
  pUVar1 = (__this->fields).popup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).popup;
    if (pUVar1 == (UI_TooltipPopup_o *)0x0) {
label_1821c373d:
      ThrowNullReferenceException();
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields).Caller;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields).popup;
      if (pUVar1 == (UI_TooltipPopup_o *)0x0) goto label_1821c373d;
      (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    }
  }
  (__this->fields).popup = (UI_TooltipPopup_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).popup,(void *)0x0);
  return;
}


// UI.HoverTooltip$$OnDisable
// il2cpp: void UI_HoverTooltip__OnDisable (UI_HoverTooltip_o* __this, const MethodInfo* method);
// 0x1821c3470

void UI_HoverTooltip__OnDisable(UI_HoverTooltip_o *__this,MethodInfo *method)

{
  UI_TooltipPopup_o *pUVar1;
  UnityEngine_Object_o *x;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184346f15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346f15 = '\x01';
  }
  pUVar1 = (__this->fields).popup;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar1,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields).popup;
    if (pUVar1 == (UI_TooltipPopup_o *)0x0) {
label_1821c352d:
      ThrowNullReferenceException();
    }
    x = (UnityEngine_Object_o *)(pUVar1->fields).Caller;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields).popup;
      if (pUVar1 == (UI_TooltipPopup_o *)0x0) goto label_1821c352d;
      (*(pUVar1->klass->vtable)._58_HideImmediate.methodPtr)
                (pUVar1,(pUVar1->klass->vtable)._58_HideImmediate.method);
    }
  }
  (__this->fields).popup = (UI_TooltipPopup_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields).popup,(void *)0x0);
  return;
}


// UI.HoverTooltip$$.ctor
// il2cpp: void UI_HoverTooltip___ctor (UI_HoverTooltip_o* __this, const MethodInfo* method);
// 0x1821c3750

void UI_HoverTooltip___ctor(UI_HoverTooltip_o *__this,MethodInfo *method)

{
  (__this->fields).Offset = 40.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


