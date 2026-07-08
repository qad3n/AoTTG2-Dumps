// Type: UI.HoverTooltip
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/HoverTooltip.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/HoverTooltip.cs  [CHANGED since prior version]
// --------------------------------

// UI.HoverTooltip$$GetPopup
// il2cpp: UI_TooltipPopup_o* UI_HoverTooltip__GetPopup (UI_HoverTooltip_o* __this, const MethodInfo* method);
// 0x4023880

UI_TooltipPopup_o * UI_HoverTooltip__GetPopup(UI_HoverTooltip_o *__this,MethodInfo *method)

{
  UI_TooltipPopup_o *exists;
  long lVar1;
  bool_conflict bVar2;
  UI_TooltipPopup_o **ppUVar3;
  
  if (DAT_05704300 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05704300 = '\x01';
  }
  exists = (__this->fields).PopupOverride;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)exists,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    ppUVar3 = (UI_TooltipPopup_o **)(lVar1 + 0x28);
  }
  else {
    ppUVar3 = &(__this->fields).PopupOverride;
  }
  return *ppUVar3;
}


// UI.HoverTooltip$$UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter
// il2cpp: void UI_HoverTooltip__UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter (UI_HoverTooltip_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x4023920

void UI_HoverTooltip__UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter
               (UI_HoverTooltip_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  bool_conflict bVar1;
  UI_TooltipPopup_o *pUVar2;
  MethodInfo *in_RCX;
  MethodInfo *pMVar3;
  
  if (DAT_05704301 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704301 = '\x01';
  }
  pMVar3 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  bVar1 = System_String__op_Inequality
                    ((__this->fields).Message,(System_String_o *)pMVar3,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pUVar2 = UI_HoverTooltip__GetPopup(__this,pMVar3);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar3 = (MethodInfo *)0x0;
    bVar1 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pUVar2 = UI_HoverTooltip__GetPopup(__this,pMVar3);
      (__this->fields).popup = pUVar2;
      il2cpp_runtime_glue(&(__this->fields).popup,pUVar2);
      pUVar2 = (__this->fields).popup;
      if (pUVar2 != (UI_TooltipPopup_o *)0x0) {
        UI_TooltipPopup__Show
                  (pUVar2,(__this->fields).Message,(UnityEngine_Component_o *)__this,
                   (__this->fields).Offset,in_RCX);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// UI.HoverTooltip$$UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit
// il2cpp: void UI_HoverTooltip__UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit (UI_HoverTooltip_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x4023b00

void UI_HoverTooltip__UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit
               (UI_HoverTooltip_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UI_TooltipPopup_o **ppUVar1;
  UI_TooltipPopup_o *pUVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  
  if (DAT_05704302 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704302 = '\x01';
  }
  pUVar2 = (__this->fields).popup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppUVar1 = &(__this->fields).popup;
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*ppUVar1 == (UI_TooltipPopup_o *)0x0) {
LAB_04023bbc:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    x = (UnityEngine_Object_o *)((*ppUVar1)->fields).Caller;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar2 = *ppUVar1;
      if (pUVar2 == (UI_TooltipPopup_o *)0x0) goto LAB_04023bbc;
      (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
    }
  }
  *ppUVar1 = (UI_TooltipPopup_o *)0x0;
  il2cpp_runtime_glue(ppUVar1,0);
  return;
}


// UI.HoverTooltip$$.ctor
// il2cpp: void UI_HoverTooltip___ctor (UI_HoverTooltip_o* __this, const MethodInfo* method);
// 0x4023bd0

void UI_HoverTooltip___ctor(UI_HoverTooltip_o *__this,MethodInfo *method)

{
  (__this->fields).Offset = 40.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


