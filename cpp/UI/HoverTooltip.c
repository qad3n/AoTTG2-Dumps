// Type: UI.HoverTooltip
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/HoverTooltip.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/HoverTooltip.cs
// --------------------------------

// UI.HoverTooltip$$GetPopup
// il2cpp: UI_TooltipPopup_o* UI_HoverTooltip__GetPopup (UI_HoverTooltip_o* __this, const MethodInfo* method);
// 0x434d030

UI_TooltipPopup_o * UI_HoverTooltip__GetPopup(UI_HoverTooltip_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer pIVar1;
  code *pcVar2;
  UnityEngine_Object_o *x;
  MethodInfo *pMVar3;
  bool_conflict bVar4;
  undefined4 extraout_var;
  UI_TooltipPopup_o *pUVar5;
  undefined4 extraout_var_00;
  Il2CppRGCTXData *pIVar6;
  UnityEngine_GameObject_o *__this_00;
  Il2CppRGCTXData *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  UI_TooltipPopup_o *extraout_RAX;
  undefined8 uVar7;
  UI_TooltipPopup_o *extraout_RAX_00;
  Il2CppClass *extraout_RDX;
  Il2CppClass *pIVar8;
  UI_TooltipPopup_o **ppUVar9;
  Il2CppClass *__this_03;
  undefined8 *puVar10;
  MethodInfo *pMVar11;
  Il2CppRGCTXData *pIVar12;
  Il2CppRGCTXData *y;
  undefined8 unaff_R12;
  undefined8 unaff_R15;
  uint uVar13;
  undefined4 uVar14;
  undefined8 uStack_30;
  Il2CppClass *pIStack_28;
  UI_TooltipPopup_o *pUStack_20;
  undefined1 auStack_18 [8];
  
  if (g_data_057ae116 == '\0') {
    pUStack_20 = (UI_TooltipPopup_o *)0x434d04c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_20 = (UI_TooltipPopup_o *)0x434d058;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae116 = '\x01';
  }
  pUVar5 = (__this->fields).PopupOverride;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_20 = (UI_TooltipPopup_o *)0x434d07b;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_20 = (UI_TooltipPopup_o *)0x434d085;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    ppUVar9 = &(__this->fields).PopupOverride;
label_0434d0be:
    return *ppUVar9;
  }
  if (*(int *)((long)&TypeInfo_UIManager[2].parameters + 4) == 0) {
    pUStack_20 = (UI_TooltipPopup_o *)0x434d0a7;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar8 = *(Il2CppClass **)(TypeInfo_UIManager[2].virtualMethodPointer + 0x28);
  if (pIVar8 != (Il2CppClass *)0x0) {
    ppUVar9 = (UI_TooltipPopup_o **)&(pIVar8->_1).byval_arg.bits;
    goto label_0434d0be;
  }
  pUStack_20 = (UI_TooltipPopup_o *)0x434d0ce;
  __this_03 = (Il2CppClass *)TypeInfo_UIManager;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  puVar10 = &uStack_30;
  pIStack_28 = pIVar8;
  pUStack_20 = pUVar5;
  if (g_data_057ae117 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae117 = '\x01';
  }
  pMVar11 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  bVar4 = System_String__op_Inequality
                    ((System_String_o *)(__this_03->_1).byval_arg.data,(System_String_o *)pMVar11,
                     (MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (UI_TooltipPopup_o *)CONCAT44(extraout_var,bVar4);
  }
  pUVar5 = UI_HoverTooltip__GetPopup((UI_HoverTooltip_o *)__this_03,pMVar11);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar11 = (MethodInfo *)0x0;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar5,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return (UI_TooltipPopup_o *)CONCAT44(extraout_var_00,bVar4);
  }
  pIVar6 = (Il2CppRGCTXData *)UI_HoverTooltip__GetPopup((UI_HoverTooltip_o *)__this_03,pMVar11);
  ((_union_13 *)&(__this_03->_1).this_arg.bits)->rgctx_data = pIVar6;
  il2cpp_runtime_helper_022b4080((_union_13 *)&(__this_03->_1).this_arg.bits);
  pIVar12 = ((_union_13 *)&(__this_03->_1).this_arg.bits)->rgctx_data;
  if (pIVar12 == (Il2CppRGCTXData *)0x0) {
    uVar13 = il2cpp_runtime_helper_022b2c90();
    pIVar8 = extraout_RDX;
  }
  else {
    uVar13 = (__this_03->_1).byval_arg.bits;
    pIVar6 = (__this_03->_1).byval_arg.data;
    puVar10 = (undefined8 *)auStack_18;
    pIVar8 = __this_03;
    __this_03 = pIStack_28;
    pUVar5 = pUStack_20;
  }
  *(undefined8 *)((long)puVar10 + -8) = unaff_R15;
  *(UI_TooltipPopup_o **)((long)puVar10 + -0x10) = pUVar5;
  *(Il2CppClass **)((long)puVar10 + -0x18) = __this_03;
  *(uint *)((long)puVar10 + -0x1c) = uVar13;
  *(undefined8 *)((long)puVar10 + -0x30) = 0x434d1af;
  y = pIVar12;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar12,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    *(undefined8 *)((long)puVar10 + -0x30) = 0x434d1c2;
    bVar4 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
label_0434d23f:
      pMVar11 = pIVar12[0x15].method;
      y = (Il2CppRGCTXData *)0x0;
      if (pMVar11 != (MethodInfo *)0x0) {
        uVar7 = *(undefined8 *)(pMVar11->methodPointer + 0x5f0);
        pcVar2 = *(code **)(pMVar11->methodPointer + 0x5e8);
        *(undefined8 *)((long)puVar10 + -0x30) = 0x434d25e;
        (*pcVar2)(pMVar11,pIVar6,uVar7);
        pIVar12[0x17].klass = pIVar8;
        *(undefined8 *)((long)puVar10 + -0x30) = 0x434d274;
        il2cpp_runtime_helper_022b4080();
        *(undefined4 *)(pIVar12 + 0x18) = *(undefined4 *)((long)puVar10 + -0x1c);
        *(undefined8 *)((long)puVar10 + -0x30) = 0x434d289;
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        *(undefined8 *)((long)puVar10 + -0x30) = 0x434d291;
        UI_TooltipPopup__SetTooltipPosition((UI_TooltipPopup_o *)pIVar12,(MethodInfo *)pIVar8);
        UI_BasePopup__Show((UI_BasePopup_o *)pIVar12,(MethodInfo *)pIVar8);
        return extraout_RAX;
      }
    }
    else {
      *(undefined8 *)((long)puVar10 + -0x30) = 0x434d1d0;
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)pIVar12,(MethodInfo *)0x0);
      pIVar1 = pIVar12->klass->vtable[0x30].methodPtr;
      *(undefined8 *)((long)puVar10 + -0x30) = 0x434d1e3;
      uVar14 = (*pIVar1)(pIVar12);
      *(undefined4 *)((long)puVar10 + -0x20) = uVar14;
      if (g_data_057ae0e3 == '\0') {
        *(undefined8 *)((long)puVar10 + -0x30) = 0x434d1fe;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        g_data_057ae0e3 = '\x01';
      }
      *(undefined8 *)((long)puVar10 + -0x30) = 0x434d20f;
      y = pIVar12;
      __this_01 = (Il2CppRGCTXData *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pIVar12,(MethodInfo *)0x0);
      if (__this_01 != (Il2CppRGCTXData *)0x0) {
        *(undefined8 *)((long)puVar10 + -0x30) = 0x434d22a;
        __this_02 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_01,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        y = __this_01;
        if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
          *(undefined8 *)((long)puVar10 + -0x30) = 0x434d23f;
          UnityEngine_CanvasGroup__set_alpha(__this_02,*(float *)((long)puVar10 + -0x20),(MethodInfo *)0x0);
          goto label_0434d23f;
        }
      }
    }
  }
  *(undefined8 *)((long)puVar10 + -0x30) = 0x434d2a7;
  uVar7 = il2cpp_runtime_helper_022b2c90();
  *(Il2CppRGCTXData **)((long)puVar10 + -0x30) = pIVar6;
  *(Il2CppClass **)((long)puVar10 + -0x38) = pIVar8;
  *(undefined8 *)((long)puVar10 + -0x40) = unaff_R12;
  *(Il2CppRGCTXData **)((long)puVar10 + -0x48) = pIVar12;
  *(undefined8 *)((long)puVar10 + -0x50) = uVar7;
  if (g_data_057ae118 == '\0') {
    *(undefined8 *)((long)puVar10 + -0x58) = 0x434d2d0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae118 = '\x01';
  }
  pMVar11 = y[7].method;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)puVar10 + -0x58) = 0x434d2f4;
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar12 = y + 7;
  *(undefined8 *)((long)puVar10 + -0x58) = 0x434d302;
  bVar4 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pMVar11,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (pIVar12->klass == (Il2CppClass *)0x0) {
label_0434d36c:
      *(undefined8 *)((long)puVar10 + -0x58) = 0x434d371;
      il2cpp_runtime_helper_022b2c90();
      *(undefined4 *)&pMVar11->return_type = 0x42200000;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pMVar11,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
    x = pIVar12->klass->static_fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar10 + -0x58) = 0x434d327;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)puVar10 + -0x58) = 0x434d334;
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      pMVar3 = pIVar12->method;
      pMVar11 = (MethodInfo *)0x0;
      if (pMVar3 == (MethodInfo *)0x0) goto label_0434d36c;
      uVar7 = *(undefined8 *)(pMVar3->methodPointer + 0x2a0);
      pcVar2 = *(code **)(pMVar3->methodPointer + 0x298);
      *(undefined8 *)((long)puVar10 + -0x58) = 0x434d350;
      (*pcVar2)(pMVar3,uVar7);
    }
  }
  pIVar12->rgctxDataDummy = (void *)0x0;
  pUVar5 = (UI_TooltipPopup_o *)il2cpp_runtime_helper_022b4080(pIVar12,0);
  return pUVar5;
}


// UI.HoverTooltip$$UnityEngine.EventSystems.IPointerEnterHandler.OnPointerEnter
// il2cpp: void UI_HoverTooltip__UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter (UI_HoverTooltip_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x434d0d0

void UI_HoverTooltip__UnityEngine_EventSystems_IPointerEnterHandler_OnPointerEnter
               (UI_HoverTooltip_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  System_Collections_Generic_List_BasePopup__o **ppSVar1;
  Il2CppMethodPointer pIVar2;
  UnityEngine_UI_Text_o *pUVar3;
  MethodInfo *pMVar4;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_BasePopup__o *pSVar5;
  bool_conflict bVar6;
  UI_TooltipPopup_o *pUVar7;
  UI_TooltipPopup_o *pUVar8;
  UnityEngine_GameObject_o *__this_00;
  UI_TooltipPopup_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  undefined8 uVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar10;
  UI_HoverTooltip_o *unaff_RBX;
  undefined1 *puVar11;
  UI_TooltipPopup_o *__this_03;
  System_Collections_Generic_List_BasePopup__o *__this_04;
  undefined8 unaff_R12;
  UI_TooltipPopup_o *unaff_R14;
  undefined8 unaff_R15;
  float fVar12;
  undefined4 uVar13;
  undefined1 auStack_18 [8];
  
  puVar11 = auStack_18;
  if (g_data_057ae117 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae117 = '\x01';
  }
  pMVar10 = (MethodInfo *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  bVar6 = System_String__op_Inequality((__this->fields).Message,(System_String_o *)pMVar10,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar7 = UI_HoverTooltip__GetPopup(__this,pMVar10);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar10 = (MethodInfo *)0x0;
  bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    return;
  }
  pUVar8 = UI_HoverTooltip__GetPopup(__this,pMVar10);
  (__this->fields).popup = pUVar8;
  il2cpp_runtime_helper_022b4080(&(__this->fields).popup);
  __this_03 = (__this->fields).popup;
  if (__this_03 == (UI_TooltipPopup_o *)0x0) {
    fVar12 = (float)il2cpp_runtime_helper_022b2c90();
    pMVar10 = extraout_RDX;
  }
  else {
    fVar12 = (__this->fields).Offset;
    pUVar8 = (UI_TooltipPopup_o *)(__this->fields).Message;
    pMVar10 = (MethodInfo *)__this;
    __this = unaff_RBX;
    puVar11 = (undefined1 *)register0x00000020;
    pUVar7 = unaff_R14;
  }
  *(undefined8 *)(puVar11 + -8) = unaff_R15;
  *(UI_TooltipPopup_o **)(puVar11 + -0x10) = pUVar7;
  *(UI_HoverTooltip_o **)(puVar11 + -0x18) = __this;
  *(float *)(puVar11 + -0x1c) = fVar12;
  *(undefined8 *)(puVar11 + -0x30) = 0x434d1af;
  pUVar7 = __this_03;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    *(undefined8 *)(puVar11 + -0x30) = 0x434d1c2;
    bVar6 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
label_0434d23f:
      pUVar3 = (__this_03->fields)._label;
      pUVar7 = (UI_TooltipPopup_o *)0x0;
      if (pUVar3 != (UnityEngine_UI_Text_o *)0x0) {
        pMVar4 = (pUVar3->klass->vtable)._75_set_text.method;
        pIVar2 = (pUVar3->klass->vtable)._75_set_text.methodPtr;
        *(undefined8 *)(puVar11 + -0x30) = 0x434d25e;
        (*pIVar2)(pUVar3,pUVar8,pMVar4);
        (__this_03->fields).Caller = (UnityEngine_Component_o *)pMVar10;
        *(undefined8 *)(puVar11 + -0x30) = 0x434d274;
        il2cpp_runtime_helper_022b4080();
        (__this_03->fields)._offset = *(float *)(puVar11 + -0x1c);
        *(undefined8 *)(puVar11 + -0x30) = 0x434d289;
        UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
        *(undefined8 *)(puVar11 + -0x30) = 0x434d291;
        UI_TooltipPopup__SetTooltipPosition(__this_03,pMVar10);
        UI_BasePopup__Show((UI_BasePopup_o *)__this_03,pMVar10);
        return;
      }
    }
    else {
      *(undefined8 *)(puVar11 + -0x30) = 0x434d1d0;
      UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0)
      ;
      pIVar2 = (__this_03->klass->vtable)._48_get_MaxFadeAlpha.methodPtr;
      *(undefined8 *)(puVar11 + -0x30) = 0x434d1e3;
      uVar13 = (*pIVar2)(__this_03);
      *(undefined4 *)(puVar11 + -0x20) = uVar13;
      if (g_data_057ae0e3 == '\0') {
        *(undefined8 *)(puVar11 + -0x30) = 0x434d1fe;
        il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        g_data_057ae0e3 = '\x01';
      }
      *(undefined8 *)(puVar11 + -0x30) = 0x434d20f;
      pUVar7 = __this_03;
      __this_01 = (UI_TooltipPopup_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0)
      ;
      if (__this_01 != (UI_TooltipPopup_o *)0x0) {
        *(undefined8 *)(puVar11 + -0x30) = 0x434d22a;
        __this_02 = (UnityEngine_CanvasGroup_o *)
                    UnityEngine_Component__GetComponent_object_
                              ((UnityEngine_Component_o *)__this_01,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
        pUVar7 = __this_01;
        if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
          *(undefined8 *)(puVar11 + -0x30) = 0x434d23f;
          UnityEngine_CanvasGroup__set_alpha(__this_02,*(float *)(puVar11 + -0x20),(MethodInfo *)0x0);
          goto label_0434d23f;
        }
      }
    }
  }
  *(undefined8 *)(puVar11 + -0x30) = 0x434d2a7;
  uVar9 = il2cpp_runtime_helper_022b2c90();
  *(UI_TooltipPopup_o **)(puVar11 + -0x30) = pUVar8;
  *(MethodInfo **)(puVar11 + -0x38) = pMVar10;
  *(undefined8 *)(puVar11 + -0x40) = unaff_R12;
  *(UI_TooltipPopup_o **)(puVar11 + -0x48) = __this_03;
  *(undefined8 *)(puVar11 + -0x50) = uVar9;
  if (g_data_057ae118 == '\0') {
    *(undefined8 *)(puVar11 + -0x58) = 0x434d2d0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae118 = '\x01';
  }
  __this_04 = (pUVar7->fields)._popups;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)(puVar11 + -0x58) = 0x434d2f4;
    il2cpp_runtime_helper_02337ed0();
  }
  ppSVar1 = &(pUVar7->fields)._popups;
  *(undefined8 *)(puVar11 + -0x58) = 0x434d302;
  bVar6 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_04,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (*ppSVar1 == (System_Collections_Generic_List_BasePopup__o *)0x0) {
label_0434d36c:
      *(undefined8 *)(puVar11 + -0x58) = 0x434d371;
      il2cpp_runtime_helper_022b2c90();
      *(undefined4 *)&__this_04[1].klass = 0x42200000;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_04,(MethodInfo *)0x0);
      return;
    }
    x = *(UnityEngine_Object_o **)&(*ppSVar1)[4].fields._size;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar11 + -0x58) = 0x434d327;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar11 + -0x58) = 0x434d334;
    bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pSVar5 = *ppSVar1;
      __this_04 = (System_Collections_Generic_List_BasePopup__o *)0x0;
      if (pSVar5 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_0434d36c;
      pMVar10 = (pSVar5->klass->vtable)._22_Clear.method;
      pIVar2 = (pSVar5->klass->vtable)._22_Clear.methodPtr;
      *(undefined8 *)(puVar11 + -0x58) = 0x434d350;
      (*pIVar2)(pSVar5,pMVar10);
    }
  }
  *ppSVar1 = (System_Collections_Generic_List_BasePopup__o *)0x0;
  il2cpp_runtime_helper_022b4080(ppSVar1,0);
  return;
}


// UI.HoverTooltip$$UnityEngine.EventSystems.IPointerExitHandler.OnPointerExit
// il2cpp: void UI_HoverTooltip__UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit (UI_HoverTooltip_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x434d2b0

void UI_HoverTooltip__UnityEngine_EventSystems_IPointerExitHandler_OnPointerExit
               (UI_HoverTooltip_o *__this,UnityEngine_EventSystems_PointerEventData_o *eventData,
               MethodInfo *method)

{
  UI_TooltipPopup_o **ppUVar1;
  UnityEngine_Object_o *x;
  UI_TooltipPopup_o *pUVar2;
  bool_conflict bVar3;
  UI_TooltipPopup_o *__this_00;
  
  if (g_data_057ae118 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae118 = '\x01';
  }
  __this_00 = (__this->fields).popup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields).popup;
  bVar3 = UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*ppUVar1 == (UI_TooltipPopup_o *)0x0) {
label_0434d36c:
      il2cpp_runtime_helper_022b2c90();
      *(undefined4 *)&(__this_00->fields).DoublePanelLeft = 0x42200000;
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
    x = (UnityEngine_Object_o *)((*ppUVar1)->fields).Caller;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      pUVar2 = *ppUVar1;
      __this_00 = (UI_TooltipPopup_o *)0x0;
      if (pUVar2 == (UI_TooltipPopup_o *)0x0) goto label_0434d36c;
      (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
    }
  }
  *ppUVar1 = (UI_TooltipPopup_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  return;
}


// UI.HoverTooltip$$.ctor
// il2cpp: void UI_HoverTooltip___ctor (UI_HoverTooltip_o* __this, const MethodInfo* method);
// 0x434d380

void UI_HoverTooltip___ctor(UI_HoverTooltip_o *__this,MethodInfo *method)

{
  (__this->fields).Offset = 40.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


