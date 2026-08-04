// Type: Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchHoverMarqueeText.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Setup
// il2cpp: Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup (UnityEngine_GameObject_o* viewport, TMPro_TextMeshProUGUI_o* label, bool selfActivate, const MethodInfo* method);
// 0x3b94850

Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *
Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup
          (UnityEngine_GameObject_o *viewport,TMPro_TextMeshProUGUI_o *label,bool_conflict selfActivate,
          MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *pGVar2;
  
  if (g_data_057a9ee4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchHoverMarqueeText_AddComponent_GisketchHoverMarqu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchHoverMarqueeText_GetComponent_GisketchHoverMarqu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ee4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)viewport,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (viewport != (UnityEngine_GameObject_o *)0x0) {
        pGVar2 = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)
                 UnityEngine_GameObject__GetComponent_object_(viewport,MethodInfo_GisketchHoverMarqueeText_GetComponent_GisketchHoverMarqu);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          pGVar2 = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)
                   UnityEngine_GameObject__AddComponent_object_(viewport,MethodInfo_GisketchHoverMarqueeText_AddComponent_GisketchHoverMarqu);
        }
        if (pGVar2 != (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
          Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Configure
                    (pGVar2,label,selfActivate & 0xff,method);
          return pGVar2;
        }
      }
      pGVar2 = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)il2cpp_runtime_helper_022b2c90();
      return pGVar2;
    }
  }
  return (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$SetActive
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__SetActive (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, bool active, const MethodInfo* method);
// 0x3b94d30

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__SetActive
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,bool_conflict active,
               MethodInfo *method)

{
  float fVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Il2CppMethodPointer pIVar4;
  undefined1 auVar5 [16];
  UnityEngine_Vector2_o UVar6;
  undefined1 auVar7 [16];
  float fVar8;
  ulong uVar9;
  bool_conflict bVar10;
  MethodInfo *pMVar11;
  long *unaff_RBX;
  undefined1 *puVar12;
  TMPro_TextMeshProUGUI_o *unaff_RBP;
  ulong uVar13;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this_00;
  long *__this_01;
  ulong unaff_R14;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar14;
  
  puVar12 = (undefined1 *)register0x00000020;
  uVar9 = (ulong)(uint)active;
  do {
    __this_00 = __this;
    uVar13 = uVar9;
    *(TMPro_TextMeshProUGUI_o **)(puVar12 + -8) = unaff_RBP;
    *(Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o **)(puVar12 + -0x10) = unaff_R15;
    *(ulong *)(puVar12 + -0x18) = unaff_R14;
    *(long **)(puVar12 + -0x20) = unaff_RBX;
    if (g_data_057a9ee7 == '\0') {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94fa5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94fb1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9ee7 = '\x01';
    }
    pTVar2 = (__this_00->fields)._label;
    unaff_RBX = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94fd4;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b94fe0;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    pUVar3 = (__this_00->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94ff9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b95005;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    unaff_RBP = (TMPro_TextMeshProUGUI_o *)(__this_00->fields)._viewport;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b9501e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b9502a;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    __this_01 = (long *)(__this_00->fields)._viewport;
    if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
        (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b9504d;
      UVar14 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0)
      ;
      auVar7._8_4_ = in_XMM1_Dc;
      auVar7._0_8_ = UVar14.fields._8_8_;
      auVar7._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])(puVar12 + -0x38) = auVar7;
      unaff_RBP = (__this_00->fields)._label;
      if (unaff_RBP != (TMPro_TextMeshProUGUI_o *)0x0) {
        pMVar11 = (unaff_RBP->klass->vtable)._65_get_text.method;
        pIVar4 = (unaff_RBP->klass->vtable)._65_get_text.methodPtr;
        *(undefined8 *)(puVar12 + -0x50) = 0x3b95073;
        pMVar11 = (MethodInfo *)(*pIVar4)(UVar14.fields.m_XMin,unaff_RBP,pMVar11);
        *(undefined8 *)(puVar12 + -0x50) = 0x3b95080;
        UVar6 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                          ((TMPro_TMP_Text_o *)unaff_RBP,(System_String_o *)pMVar11,(MethodInfo *)0x0);
        if (((*(float *)(puVar12 + -0x38) <= 1.0) || (UVar6.fields.x <= *(float *)(puVar12 + -0x38) + 1.0)) ||
           ((char)uVar13 == '\0')) {
label_03b95206:
          Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this_00,pMVar11);
          return;
        }
        auVar5._8_4_ = extraout_XMM0_Dc;
        auVar5._0_4_ = UVar6.fields.x;
        auVar5._4_4_ = UVar6.fields.y;
        auVar5._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])(puVar12 + -0x48) = auVar5;
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          *(undefined8 *)(puVar12 + -0x50) = 0x3b950cf;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar12 + -0x50) = 0x3b950d6;
        bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        fVar1 = *(float *)(puVar12 + -0x48);
        fVar8 = *(float *)(puVar12 + -0x38);
        in_XMM1_Dc = *(undefined4 *)(puVar12 + -0x30);
        in_XMM1_Dd = *(undefined4 *)(puVar12 + -0x2c);
        if ((char)bVar10 == '\0') goto label_03b95206;
        *(undefined1 *)((long)&(__this_00->fields)._selfActivate + 3) = 1;
        (__this_00->fields)._hovered = 0;
        (__this_00->fields)._selected = (bool_conflict)((fVar1 - fVar8) + 24.0);
        pTVar2 = (__this_00->fields)._label;
        __this_01 = (long *)0x0;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          *(undefined8 *)(puVar12 + -0x50) = 0x3b9511c;
          TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar2,0,(MethodInfo *)0x0);
          pTVar2 = (__this_00->fields)._label;
          __this_01 = (long *)0x0;
          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
            *(undefined8 *)(puVar12 + -0x50) = 0x3b95135;
            TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar2,0x1001,(MethodInfo *)0x0);
            pUVar3 = (__this_00->fields)._textRect;
            __this_01 = (long *)0x0;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              fVar1 = (__this_00->fields)._normalAnchorMin.fields.y;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              *(undefined8 *)(puVar12 + -0x50) = 0x3b9515a;
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
              pUVar3 = (__this_00->fields)._textRect;
              __this_01 = (long *)0x0;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                fVar1 = (__this_00->fields)._normalAnchorMax.fields.y;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                *(undefined8 *)(puVar12 + -0x50) = 0x3b9517f;
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
                pUVar3 = (__this_00->fields)._textRect;
                __this_01 = (long *)0x0;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  *(undefined8 *)(puVar12 + -0x50) = 0x3b9519a;
                  UnityEngine_RectTransform__set_pivot
                            (pUVar3,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                  __this_01 = (long *)(__this_00->fields)._textRect;
                  if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
                      (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
                    *(undefined8 *)(puVar12 + -0x50) = 0x3b951b8;
                    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                              ((UnityEngine_RectTransform_o *)__this_01,0,*(float *)(puVar12 + -0x48) + 24.0,
                               (MethodInfo *)0x0);
                    pUVar3 = (__this_00->fields)._textRect;
                    if (g_data_057a694c == '\0') {
                      __this_01 = &TypeInfo_Vector2;
                      *(undefined8 *)(puVar12 + -0x50) = 0x3b951d1;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057a694c = '\x01';
                    }
                    unaff_RBX = (long *)0x0;
                    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchoredPosition
                                (pUVar3,(UnityEngine_Vector2_o)
                                        **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b9521d;
    il2cpp_runtime_helper_022b2c90();
    if ((char)(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate ==
        '\0') {
      return;
    }
    *(undefined1 *)
     ((long)&(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate + 1)
         = 1;
    puVar12 = puVar12 + -0x48;
    uVar9 = 1;
    __this = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01;
    unaff_R14 = uVar13;
    unaff_R15 = __this_00;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b95220

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Il2CppMethodPointer pIVar4;
  undefined1 auVar5 [16];
  UnityEngine_Vector2_o UVar6;
  undefined1 auVar7 [16];
  float fVar8;
  bool_conflict bVar9;
  MethodInfo *pMVar10;
  long *unaff_RBX;
  TMPro_TextMeshProUGUI_o *unaff_RBP;
  long *__this_00;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this_01;
  undefined8 unaff_R14;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar11;
  
  __this_00 = (long *)__this;
  do {
    __this_01 = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_00;
    if ((char)(__this_01->fields)._selfActivate == '\0') {
      return;
    }
    *(undefined1 *)((long)&(__this_01->fields)._selfActivate + 1) = 1;
    *(TMPro_TextMeshProUGUI_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_RBX;
    unaff_R14 = 1;
    if (g_data_057a9ee7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b94fa5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b94fb1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9ee7 = '\x01';
    }
    pTVar2 = (__this_01->fields)._label;
    unaff_RBX = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b94fd4;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b94fe0;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    pUVar3 = (__this_01->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b94ff9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b95005;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    unaff_RBP = (TMPro_TextMeshProUGUI_o *)(__this_01->fields)._viewport;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9501e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9502a;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    __this_00 = (long *)(__this_01->fields)._viewport;
    if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_00 !=
        (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9504d;
      UVar11 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_00,(MethodInfo *)0x0)
      ;
      auVar7._8_4_ = in_XMM1_Dc;
      auVar7._0_8_ = UVar11.fields._8_8_;
      auVar7._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar7;
      unaff_RBP = (__this_01->fields)._label;
      if (unaff_RBP != (TMPro_TextMeshProUGUI_o *)0x0) {
        pMVar10 = (unaff_RBP->klass->vtable)._65_get_text.method;
        pIVar4 = (unaff_RBP->klass->vtable)._65_get_text.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b95073;
        pMVar10 = (MethodInfo *)(*pIVar4)(UVar11.fields.m_XMin,unaff_RBP,pMVar10);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b95080;
        UVar6 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                          ((TMPro_TMP_Text_o *)unaff_RBP,(System_String_o *)pMVar10,(MethodInfo *)0x0);
        if ((*(float *)((long)register0x00000020 + -0x38) <= 1.0) ||
           (UVar6.fields.x <= *(float *)((long)register0x00000020 + -0x38) + 1.0)) {
label_03b95206:
          Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this_01,pMVar10);
          return;
        }
        auVar5._8_4_ = extraout_XMM0_Dc;
        auVar5._0_4_ = UVar6.fields.x;
        auVar5._4_4_ = UVar6.fields.y;
        auVar5._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar5;
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b950cf;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b950d6;
        bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        fVar1 = *(float *)((long)register0x00000020 + -0x48);
        fVar8 = *(float *)((long)register0x00000020 + -0x38);
        in_XMM1_Dc = *(undefined4 *)((long)register0x00000020 + -0x30);
        in_XMM1_Dd = *(undefined4 *)((long)register0x00000020 + -0x2c);
        if ((char)bVar9 == '\0') goto label_03b95206;
        *(undefined1 *)((long)&(__this_01->fields)._selfActivate + 3) = 1;
        (__this_01->fields)._hovered = 0;
        (__this_01->fields)._selected = (bool_conflict)((fVar1 - fVar8) + 24.0);
        pTVar2 = (__this_01->fields)._label;
        __this_00 = (long *)0x0;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9511c;
          TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar2,0,(MethodInfo *)0x0);
          pTVar2 = (__this_01->fields)._label;
          __this_00 = (long *)0x0;
          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b95135;
            TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar2,0x1001,(MethodInfo *)0x0);
            pUVar3 = (__this_01->fields)._textRect;
            __this_00 = (long *)0x0;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              fVar1 = (__this_01->fields)._normalAnchorMin.fields.y;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9515a;
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
              pUVar3 = (__this_01->fields)._textRect;
              __this_00 = (long *)0x0;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                fVar1 = (__this_01->fields)._normalAnchorMax.fields.y;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9517f;
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
                pUVar3 = (__this_01->fields)._textRect;
                __this_00 = (long *)0x0;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9519a;
                  UnityEngine_RectTransform__set_pivot
                            (pUVar3,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                  __this_00 = (long *)(__this_01->fields)._textRect;
                  if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_00 !=
                      (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b951b8;
                    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                              ((UnityEngine_RectTransform_o *)__this_00,0,
                               *(float *)((long)register0x00000020 + -0x48) + 24.0,(MethodInfo *)0x0);
                    pUVar3 = (__this_01->fields)._textRect;
                    if (g_data_057a694c == '\0') {
                      __this_00 = &TypeInfo_Vector2;
                      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b951d1;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057a694c = '\x01';
                    }
                    unaff_RBX = (long *)0x0;
                    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchoredPosition
                                (pUVar3,(UnityEngine_Vector2_o)
                                        **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9521d;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R15 = __this_01;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b95240

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Il2CppMethodPointer pIVar4;
  undefined1 auVar5 [16];
  UnityEngine_Vector2_o UVar6;
  undefined1 auVar7 [16];
  float fVar8;
  ulong uVar9;
  bool_conflict bVar10;
  MethodInfo *pMVar11;
  long *unaff_RBX;
  undefined1 *puVar12;
  TMPro_TextMeshProUGUI_o *unaff_RBP;
  ulong uVar13;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this_00;
  long *__this_01;
  ulong unaff_R14;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar14;
  
  if ((char)(__this->fields)._selfActivate == '\0') {
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._selfActivate + 1) = 0;
  puVar12 = (undefined1 *)register0x00000020;
  uVar9 = (ulong)*(byte *)((long)&(__this->fields)._selfActivate + 2);
  do {
    __this_00 = __this;
    uVar13 = uVar9;
    *(TMPro_TextMeshProUGUI_o **)(puVar12 + -8) = unaff_RBP;
    *(Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o **)(puVar12 + -0x10) = unaff_R15;
    *(ulong *)(puVar12 + -0x18) = unaff_R14;
    *(long **)(puVar12 + -0x20) = unaff_RBX;
    if (g_data_057a9ee7 == '\0') {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94fa5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94fb1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9ee7 = '\x01';
    }
    pTVar2 = (__this_00->fields)._label;
    unaff_RBX = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94fd4;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b94fe0;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    pUVar3 = (__this_00->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94ff9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b95005;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    unaff_RBP = (TMPro_TextMeshProUGUI_o *)(__this_00->fields)._viewport;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b9501e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b9502a;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    __this_01 = (long *)(__this_00->fields)._viewport;
    if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
        (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b9504d;
      UVar14 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0)
      ;
      auVar7._8_4_ = in_XMM1_Dc;
      auVar7._0_8_ = UVar14.fields._8_8_;
      auVar7._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])(puVar12 + -0x38) = auVar7;
      unaff_RBP = (__this_00->fields)._label;
      if (unaff_RBP != (TMPro_TextMeshProUGUI_o *)0x0) {
        pMVar11 = (unaff_RBP->klass->vtable)._65_get_text.method;
        pIVar4 = (unaff_RBP->klass->vtable)._65_get_text.methodPtr;
        *(undefined8 *)(puVar12 + -0x50) = 0x3b95073;
        pMVar11 = (MethodInfo *)(*pIVar4)(UVar14.fields.m_XMin,unaff_RBP,pMVar11);
        *(undefined8 *)(puVar12 + -0x50) = 0x3b95080;
        UVar6 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                          ((TMPro_TMP_Text_o *)unaff_RBP,(System_String_o *)pMVar11,(MethodInfo *)0x0);
        if (((*(float *)(puVar12 + -0x38) <= 1.0) || (UVar6.fields.x <= *(float *)(puVar12 + -0x38) + 1.0)) ||
           ((char)uVar13 == '\0')) {
label_03b95206:
          Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this_00,pMVar11);
          return;
        }
        auVar5._8_4_ = extraout_XMM0_Dc;
        auVar5._0_4_ = UVar6.fields.x;
        auVar5._4_4_ = UVar6.fields.y;
        auVar5._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])(puVar12 + -0x48) = auVar5;
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          *(undefined8 *)(puVar12 + -0x50) = 0x3b950cf;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar12 + -0x50) = 0x3b950d6;
        bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        fVar1 = *(float *)(puVar12 + -0x48);
        fVar8 = *(float *)(puVar12 + -0x38);
        in_XMM1_Dc = *(undefined4 *)(puVar12 + -0x30);
        in_XMM1_Dd = *(undefined4 *)(puVar12 + -0x2c);
        if ((char)bVar10 == '\0') goto label_03b95206;
        *(undefined1 *)((long)&(__this_00->fields)._selfActivate + 3) = 1;
        (__this_00->fields)._hovered = 0;
        (__this_00->fields)._selected = (bool_conflict)((fVar1 - fVar8) + 24.0);
        pTVar2 = (__this_00->fields)._label;
        __this_01 = (long *)0x0;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          *(undefined8 *)(puVar12 + -0x50) = 0x3b9511c;
          TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar2,0,(MethodInfo *)0x0);
          pTVar2 = (__this_00->fields)._label;
          __this_01 = (long *)0x0;
          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
            *(undefined8 *)(puVar12 + -0x50) = 0x3b95135;
            TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar2,0x1001,(MethodInfo *)0x0);
            pUVar3 = (__this_00->fields)._textRect;
            __this_01 = (long *)0x0;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              fVar1 = (__this_00->fields)._normalAnchorMin.fields.y;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              *(undefined8 *)(puVar12 + -0x50) = 0x3b9515a;
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
              pUVar3 = (__this_00->fields)._textRect;
              __this_01 = (long *)0x0;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                fVar1 = (__this_00->fields)._normalAnchorMax.fields.y;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                *(undefined8 *)(puVar12 + -0x50) = 0x3b9517f;
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
                pUVar3 = (__this_00->fields)._textRect;
                __this_01 = (long *)0x0;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  *(undefined8 *)(puVar12 + -0x50) = 0x3b9519a;
                  UnityEngine_RectTransform__set_pivot
                            (pUVar3,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                  __this_01 = (long *)(__this_00->fields)._textRect;
                  if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
                      (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
                    *(undefined8 *)(puVar12 + -0x50) = 0x3b951b8;
                    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                              ((UnityEngine_RectTransform_o *)__this_01,0,*(float *)(puVar12 + -0x48) + 24.0,
                               (MethodInfo *)0x0);
                    pUVar3 = (__this_00->fields)._textRect;
                    if (g_data_057a694c == '\0') {
                      __this_01 = &TypeInfo_Vector2;
                      *(undefined8 *)(puVar12 + -0x50) = 0x3b951d1;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057a694c = '\x01';
                    }
                    unaff_RBX = (long *)0x0;
                    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchoredPosition
                                (pUVar3,(UnityEngine_Vector2_o)
                                        **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b9521d;
    il2cpp_runtime_helper_022b2c90();
    if ((char)(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate ==
        '\0') {
      return;
    }
    *(undefined1 *)
     ((long)&(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate + 1)
         = 1;
    puVar12 = puVar12 + -0x48;
    uVar9 = 1;
    __this = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01;
    unaff_R14 = uVar13;
    unaff_R15 = __this_00;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnSelect (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b95260

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Il2CppMethodPointer pIVar4;
  undefined1 auVar5 [16];
  UnityEngine_Vector2_o UVar6;
  undefined1 auVar7 [16];
  float fVar8;
  bool_conflict bVar9;
  MethodInfo *pMVar10;
  long *unaff_RBX;
  undefined1 *puVar11;
  TMPro_TextMeshProUGUI_o *unaff_RBP;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this_00;
  long *__this_01;
  undefined8 unaff_R14;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar12;
  
  if ((char)(__this->fields)._selfActivate == '\0') {
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._selfActivate + 2) = 1;
  puVar11 = (undefined1 *)register0x00000020;
  do {
    __this_00 = __this;
    *(TMPro_TextMeshProUGUI_o **)(puVar11 + -8) = unaff_RBP;
    *(Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o **)(puVar11 + -0x10) = unaff_R15;
    *(undefined8 *)(puVar11 + -0x18) = unaff_R14;
    *(long **)(puVar11 + -0x20) = unaff_RBX;
    unaff_R14 = 1;
    if (g_data_057a9ee7 == '\0') {
      *(undefined8 *)(puVar11 + -0x50) = 0x3b94fa5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)(puVar11 + -0x50) = 0x3b94fb1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9ee7 = '\x01';
    }
    pTVar2 = (__this_00->fields)._label;
    unaff_RBX = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar11 + -0x50) = 0x3b94fd4;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar11 + -0x50) = 0x3b94fe0;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    pUVar3 = (__this_00->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar11 + -0x50) = 0x3b94ff9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar11 + -0x50) = 0x3b95005;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    unaff_RBP = (TMPro_TextMeshProUGUI_o *)(__this_00->fields)._viewport;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar11 + -0x50) = 0x3b9501e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar11 + -0x50) = 0x3b9502a;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    __this_01 = (long *)(__this_00->fields)._viewport;
    if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
        (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
      *(undefined8 *)(puVar11 + -0x50) = 0x3b9504d;
      UVar12 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0)
      ;
      auVar7._8_4_ = in_XMM1_Dc;
      auVar7._0_8_ = UVar12.fields._8_8_;
      auVar7._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])(puVar11 + -0x38) = auVar7;
      unaff_RBP = (__this_00->fields)._label;
      if (unaff_RBP != (TMPro_TextMeshProUGUI_o *)0x0) {
        pMVar10 = (unaff_RBP->klass->vtable)._65_get_text.method;
        pIVar4 = (unaff_RBP->klass->vtable)._65_get_text.methodPtr;
        *(undefined8 *)(puVar11 + -0x50) = 0x3b95073;
        pMVar10 = (MethodInfo *)(*pIVar4)(UVar12.fields.m_XMin,unaff_RBP,pMVar10);
        *(undefined8 *)(puVar11 + -0x50) = 0x3b95080;
        UVar6 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                          ((TMPro_TMP_Text_o *)unaff_RBP,(System_String_o *)pMVar10,(MethodInfo *)0x0);
        if ((*(float *)(puVar11 + -0x38) <= 1.0) || (UVar6.fields.x <= *(float *)(puVar11 + -0x38) + 1.0)) {
label_03b95206:
          Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this_00,pMVar10);
          return;
        }
        auVar5._8_4_ = extraout_XMM0_Dc;
        auVar5._0_4_ = UVar6.fields.x;
        auVar5._4_4_ = UVar6.fields.y;
        auVar5._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])(puVar11 + -0x48) = auVar5;
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          *(undefined8 *)(puVar11 + -0x50) = 0x3b950cf;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar11 + -0x50) = 0x3b950d6;
        bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        fVar1 = *(float *)(puVar11 + -0x48);
        fVar8 = *(float *)(puVar11 + -0x38);
        in_XMM1_Dc = *(undefined4 *)(puVar11 + -0x30);
        in_XMM1_Dd = *(undefined4 *)(puVar11 + -0x2c);
        if ((char)bVar9 == '\0') goto label_03b95206;
        *(undefined1 *)((long)&(__this_00->fields)._selfActivate + 3) = 1;
        (__this_00->fields)._hovered = 0;
        (__this_00->fields)._selected = (bool_conflict)((fVar1 - fVar8) + 24.0);
        pTVar2 = (__this_00->fields)._label;
        __this_01 = (long *)0x0;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          *(undefined8 *)(puVar11 + -0x50) = 0x3b9511c;
          TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar2,0,(MethodInfo *)0x0);
          pTVar2 = (__this_00->fields)._label;
          __this_01 = (long *)0x0;
          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
            *(undefined8 *)(puVar11 + -0x50) = 0x3b95135;
            TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar2,0x1001,(MethodInfo *)0x0);
            pUVar3 = (__this_00->fields)._textRect;
            __this_01 = (long *)0x0;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              fVar1 = (__this_00->fields)._normalAnchorMin.fields.y;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              *(undefined8 *)(puVar11 + -0x50) = 0x3b9515a;
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
              pUVar3 = (__this_00->fields)._textRect;
              __this_01 = (long *)0x0;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                fVar1 = (__this_00->fields)._normalAnchorMax.fields.y;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                *(undefined8 *)(puVar11 + -0x50) = 0x3b9517f;
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
                pUVar3 = (__this_00->fields)._textRect;
                __this_01 = (long *)0x0;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  *(undefined8 *)(puVar11 + -0x50) = 0x3b9519a;
                  UnityEngine_RectTransform__set_pivot
                            (pUVar3,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                  __this_01 = (long *)(__this_00->fields)._textRect;
                  if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
                      (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
                    *(undefined8 *)(puVar11 + -0x50) = 0x3b951b8;
                    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                              ((UnityEngine_RectTransform_o *)__this_01,0,*(float *)(puVar11 + -0x48) + 24.0,
                               (MethodInfo *)0x0);
                    pUVar3 = (__this_00->fields)._textRect;
                    if (g_data_057a694c == '\0') {
                      __this_01 = &TypeInfo_Vector2;
                      *(undefined8 *)(puVar11 + -0x50) = 0x3b951d1;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057a694c = '\x01';
                    }
                    unaff_RBX = (long *)0x0;
                    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchoredPosition
                                (pUVar3,(UnityEngine_Vector2_o)
                                        **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar11 + -0x50) = 0x3b9521d;
    il2cpp_runtime_helper_022b2c90();
    if ((char)(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate ==
        '\0') {
      return;
    }
    *(undefined1 *)
     ((long)&(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate + 1)
         = 1;
    puVar11 = puVar11 + -0x48;
    __this = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01;
    unaff_R15 = __this_00;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b95280

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  float fVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Il2CppMethodPointer pIVar4;
  undefined1 auVar5 [16];
  UnityEngine_Vector2_o UVar6;
  undefined1 auVar7 [16];
  float fVar8;
  ulong uVar9;
  bool_conflict bVar10;
  MethodInfo *pMVar11;
  long *unaff_RBX;
  undefined1 *puVar12;
  TMPro_TextMeshProUGUI_o *unaff_RBP;
  ulong uVar13;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this_00;
  long *__this_01;
  ulong unaff_R14;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar14;
  
  if ((char)(__this->fields)._selfActivate == '\0') {
    return;
  }
  *(undefined1 *)((long)&(__this->fields)._selfActivate + 2) = 0;
  puVar12 = (undefined1 *)register0x00000020;
  uVar9 = (ulong)*(byte *)((long)&(__this->fields)._selfActivate + 1);
  do {
    __this_00 = __this;
    uVar13 = uVar9;
    *(TMPro_TextMeshProUGUI_o **)(puVar12 + -8) = unaff_RBP;
    *(Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o **)(puVar12 + -0x10) = unaff_R15;
    *(ulong *)(puVar12 + -0x18) = unaff_R14;
    *(long **)(puVar12 + -0x20) = unaff_RBX;
    if (g_data_057a9ee7 == '\0') {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94fa5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94fb1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9ee7 = '\x01';
    }
    pTVar2 = (__this_00->fields)._label;
    unaff_RBX = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94fd4;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b94fe0;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    pUVar3 = (__this_00->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b94ff9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b95005;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    unaff_RBP = (TMPro_TextMeshProUGUI_o *)(__this_00->fields)._viewport;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b9501e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b9502a;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    __this_01 = (long *)(__this_00->fields)._viewport;
    if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
        (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
      *(undefined8 *)(puVar12 + -0x50) = 0x3b9504d;
      UVar14 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0)
      ;
      auVar7._8_4_ = in_XMM1_Dc;
      auVar7._0_8_ = UVar14.fields._8_8_;
      auVar7._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])(puVar12 + -0x38) = auVar7;
      unaff_RBP = (__this_00->fields)._label;
      if (unaff_RBP != (TMPro_TextMeshProUGUI_o *)0x0) {
        pMVar11 = (unaff_RBP->klass->vtable)._65_get_text.method;
        pIVar4 = (unaff_RBP->klass->vtable)._65_get_text.methodPtr;
        *(undefined8 *)(puVar12 + -0x50) = 0x3b95073;
        pMVar11 = (MethodInfo *)(*pIVar4)(UVar14.fields.m_XMin,unaff_RBP,pMVar11);
        *(undefined8 *)(puVar12 + -0x50) = 0x3b95080;
        UVar6 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                          ((TMPro_TMP_Text_o *)unaff_RBP,(System_String_o *)pMVar11,(MethodInfo *)0x0);
        if (((*(float *)(puVar12 + -0x38) <= 1.0) || (UVar6.fields.x <= *(float *)(puVar12 + -0x38) + 1.0)) ||
           ((char)uVar13 == '\0')) {
label_03b95206:
          Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this_00,pMVar11);
          return;
        }
        auVar5._8_4_ = extraout_XMM0_Dc;
        auVar5._0_4_ = UVar6.fields.x;
        auVar5._4_4_ = UVar6.fields.y;
        auVar5._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])(puVar12 + -0x48) = auVar5;
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          *(undefined8 *)(puVar12 + -0x50) = 0x3b950cf;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar12 + -0x50) = 0x3b950d6;
        bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        fVar1 = *(float *)(puVar12 + -0x48);
        fVar8 = *(float *)(puVar12 + -0x38);
        in_XMM1_Dc = *(undefined4 *)(puVar12 + -0x30);
        in_XMM1_Dd = *(undefined4 *)(puVar12 + -0x2c);
        if ((char)bVar10 == '\0') goto label_03b95206;
        *(undefined1 *)((long)&(__this_00->fields)._selfActivate + 3) = 1;
        (__this_00->fields)._hovered = 0;
        (__this_00->fields)._selected = (bool_conflict)((fVar1 - fVar8) + 24.0);
        pTVar2 = (__this_00->fields)._label;
        __this_01 = (long *)0x0;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          *(undefined8 *)(puVar12 + -0x50) = 0x3b9511c;
          TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar2,0,(MethodInfo *)0x0);
          pTVar2 = (__this_00->fields)._label;
          __this_01 = (long *)0x0;
          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
            *(undefined8 *)(puVar12 + -0x50) = 0x3b95135;
            TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar2,0x1001,(MethodInfo *)0x0);
            pUVar3 = (__this_00->fields)._textRect;
            __this_01 = (long *)0x0;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              fVar1 = (__this_00->fields)._normalAnchorMin.fields.y;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              *(undefined8 *)(puVar12 + -0x50) = 0x3b9515a;
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
              pUVar3 = (__this_00->fields)._textRect;
              __this_01 = (long *)0x0;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                fVar1 = (__this_00->fields)._normalAnchorMax.fields.y;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                *(undefined8 *)(puVar12 + -0x50) = 0x3b9517f;
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
                pUVar3 = (__this_00->fields)._textRect;
                __this_01 = (long *)0x0;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  *(undefined8 *)(puVar12 + -0x50) = 0x3b9519a;
                  UnityEngine_RectTransform__set_pivot
                            (pUVar3,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                  __this_01 = (long *)(__this_00->fields)._textRect;
                  if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
                      (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
                    *(undefined8 *)(puVar12 + -0x50) = 0x3b951b8;
                    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                              ((UnityEngine_RectTransform_o *)__this_01,0,*(float *)(puVar12 + -0x48) + 24.0,
                               (MethodInfo *)0x0);
                    pUVar3 = (__this_00->fields)._textRect;
                    if (g_data_057a694c == '\0') {
                      __this_01 = &TypeInfo_Vector2;
                      *(undefined8 *)(puVar12 + -0x50) = 0x3b951d1;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057a694c = '\x01';
                    }
                    unaff_RBX = (long *)0x0;
                    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchoredPosition
                                (pUVar3,(UnityEngine_Vector2_o)
                                        **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar12 + -0x50) = 0x3b9521d;
    il2cpp_runtime_helper_022b2c90();
    if ((char)(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate ==
        '\0') {
      return;
    }
    *(undefined1 *)
     ((long)&(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate + 1)
         = 1;
    puVar12 = puVar12 + -0x48;
    uVar9 = 1;
    __this = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01;
    unaff_R14 = uVar13;
    unaff_R15 = __this_00;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Configure
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Configure (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, TMPro_TextMeshProUGUI_o* label, bool selfActivate, const MethodInfo* method);
// 0x3b94d80

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Configure
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,TMPro_TextMeshProUGUI_o *label,
               bool_conflict selfActivate,MethodInfo *method)

{
  float fVar1;
  Il2CppMethodPointer pIVar2;
  undefined1 auVar3 [16];
  UnityEngine_Vector2_Fields UVar4;
  UnityEngine_Vector2_o UVar5;
  undefined1 auVar6 [16];
  float fVar7;
  int32_t iVar8;
  bool_conflict bVar9;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_GameObject_o *pUVar11;
  TMPro_TextMeshProUGUI_o *pTVar12;
  MethodInfo *pMVar13;
  UnityEngine_RectTransform_o *pUVar14;
  long *plVar15;
  undefined1 *puVar16;
  TMPro_TextMeshProUGUI_o *pTVar17;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this_00;
  long *__this_01;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar18;
  
  pTVar12 = (TMPro_TextMeshProUGUI_o *)(ulong)(uint)selfActivate;
  if (g_data_057a9ee5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectMask2D_GetComponent_RectMask2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9ee5 = '\x01';
  }
  __this_01 = (long *)&(__this->fields)._label;
  (__this->fields)._label = label;
  pTVar17 = label;
  il2cpp_runtime_helper_022b4080();
  if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
    pUVar10 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)label,MethodInfo_RectTransform_GetComponent_RectTransform);
    (__this->fields)._textRect = pUVar10;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._textRect);
    pUVar10 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_RectTransform_o *)0x0) {
      (__this->fields)._viewport = (UnityEngine_RectTransform_o *)0x0;
    }
    else {
      pUVar14 = (UnityEngine_RectTransform_o *)0x0;
      if (pUVar10->klass == TypeInfo_RectTransform) {
        pUVar14 = pUVar10;
      }
      (__this->fields)._viewport = pUVar14;
    }
    il2cpp_runtime_helper_022b4080(&(__this->fields)._viewport);
    *(char *)&(__this->fields)._selfActivate = (char)selfActivate;
    pTVar17 = (TMPro_TextMeshProUGUI_o *)0x0;
    iVar8 = TMPro_TMP_Text__get_alignment((TMPro_TMP_Text_o *)label,(MethodInfo *)0x0);
    (__this->fields)._normalAlignment = iVar8;
    pUVar10 = (__this->fields)._textRect;
    __this_01 = (long *)0x0;
    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
      pTVar17 = (TMPro_TextMeshProUGUI_o *)0x0;
      UVar4 = (UnityEngine_Vector2_Fields)UnityEngine_RectTransform__get_anchorMin(pUVar10,(MethodInfo *)0x0);
      (__this->fields)._normalAnchorMin.fields = UVar4;
      pUVar10 = (__this->fields)._textRect;
      __this_01 = (long *)0x0;
      if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
        pTVar17 = (TMPro_TextMeshProUGUI_o *)0x0;
        UVar4 = (UnityEngine_Vector2_Fields)
                UnityEngine_RectTransform__get_anchorMax(pUVar10,(MethodInfo *)0x0);
        (__this->fields)._normalAnchorMax.fields = UVar4;
        pUVar10 = (__this->fields)._textRect;
        __this_01 = (long *)0x0;
        if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
          pTVar17 = (TMPro_TextMeshProUGUI_o *)0x0;
          UVar4 = (UnityEngine_Vector2_Fields)UnityEngine_RectTransform__get_pivot(pUVar10,(MethodInfo *)0x0);
          (__this->fields)._normalPivot.fields = UVar4;
          pUVar10 = (__this->fields)._textRect;
          __this_01 = (long *)0x0;
          if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
            pTVar17 = (TMPro_TextMeshProUGUI_o *)0x0;
            UVar4 = (UnityEngine_Vector2_Fields)
                    UnityEngine_RectTransform__get_sizeDelta(pUVar10,(MethodInfo *)0x0);
            (__this->fields)._normalSizeDelta.fields = UVar4;
            pUVar10 = (__this->fields)._textRect;
            __this_01 = (long *)0x0;
            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
              UVar4 = (UnityEngine_Vector2_Fields)
                      UnityEngine_RectTransform__get_anchoredPosition(pUVar10,(MethodInfo *)0x0);
              (__this->fields)._normalAnchoredPosition.fields = UVar4;
              pTVar17 = (TMPro_TextMeshProUGUI_o *)0x0;
              __this_01 = (long *)__this;
              pUVar11 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                pTVar12 = (TMPro_TextMeshProUGUI_o *)
                          UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_RectMask2D_GetComponent_RectMask2D);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar9 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar9 != '\0') {
                  pTVar17 = (TMPro_TextMeshProUGUI_o *)0x0;
                  __this_01 = (long *)__this;
                  pUVar11 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_03b94f73;
                  UnityEngine_GameObject__AddComponent_object_(pUVar11,MethodInfo_RectMask2D_AddComponent_RectMask2D);
                }
                TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)label,0,(MethodInfo *)0x0);
                TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)label,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_03b94f73:
  il2cpp_runtime_helper_022b2c90();
  puVar16 = &stack0xffffffffffffffe8;
  do {
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01;
    *(TMPro_TextMeshProUGUI_o **)(puVar16 + -8) = pTVar12;
    *(Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o **)(puVar16 + -0x10) = unaff_R15;
    *(TMPro_TextMeshProUGUI_o **)(puVar16 + -0x18) = label;
    *(Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o **)(puVar16 + -0x20) = __this;
    label = (TMPro_TextMeshProUGUI_o *)((ulong)pTVar17 & 0xffffffff);
    if (g_data_057a9ee7 == '\0') {
      *(undefined8 *)(puVar16 + -0x50) = 0x3b94fa5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)(puVar16 + -0x50) = 0x3b94fb1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9ee7 = '\x01';
    }
    pTVar12 = (__this_00->fields)._label;
    plVar15 = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar16 + -0x50) = 0x3b94fd4;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar16 + -0x50) = 0x3b94fe0;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    pUVar10 = (__this_00->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar16 + -0x50) = 0x3b94ff9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar16 + -0x50) = 0x3b95005;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    pTVar12 = (TMPro_TextMeshProUGUI_o *)(__this_00->fields)._viewport;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar16 + -0x50) = 0x3b9501e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar16 + -0x50) = 0x3b9502a;
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pTVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      return;
    }
    __this_01 = (long *)(__this_00->fields)._viewport;
    if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
        (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
      *(undefined8 *)(puVar16 + -0x50) = 0x3b9504d;
      UVar18 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0)
      ;
      auVar6._8_4_ = in_XMM1_Dc;
      auVar6._0_8_ = UVar18.fields._8_8_;
      auVar6._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])(puVar16 + -0x38) = auVar6;
      pTVar12 = (__this_00->fields)._label;
      if (pTVar12 != (TMPro_TextMeshProUGUI_o *)0x0) {
        pMVar13 = (pTVar12->klass->vtable)._65_get_text.method;
        pIVar2 = (pTVar12->klass->vtable)._65_get_text.methodPtr;
        *(undefined8 *)(puVar16 + -0x50) = 0x3b95073;
        pMVar13 = (MethodInfo *)(*pIVar2)(UVar18.fields.m_XMin,pTVar12,pMVar13);
        *(undefined8 *)(puVar16 + -0x50) = 0x3b95080;
        UVar5 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                          ((TMPro_TMP_Text_o *)pTVar12,(System_String_o *)pMVar13,(MethodInfo *)0x0);
        if (((*(float *)(puVar16 + -0x38) <= 1.0) || (UVar5.fields.x <= *(float *)(puVar16 + -0x38) + 1.0)) ||
           ((char)label == '\0')) {
label_03b95206:
          Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this_00,pMVar13);
          return;
        }
        auVar3._8_4_ = extraout_XMM0_Dc;
        auVar3._0_4_ = UVar5.fields.x;
        auVar3._4_4_ = UVar5.fields.y;
        auVar3._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])(puVar16 + -0x48) = auVar3;
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          *(undefined8 *)(puVar16 + -0x50) = 0x3b950cf;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)(puVar16 + -0x50) = 0x3b950d6;
        bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        fVar1 = *(float *)(puVar16 + -0x48);
        fVar7 = *(float *)(puVar16 + -0x38);
        in_XMM1_Dc = *(undefined4 *)(puVar16 + -0x30);
        in_XMM1_Dd = *(undefined4 *)(puVar16 + -0x2c);
        if ((char)bVar9 == '\0') goto label_03b95206;
        *(undefined1 *)((long)&(__this_00->fields)._selfActivate + 3) = 1;
        (__this_00->fields)._hovered = 0;
        (__this_00->fields)._selected = (bool_conflict)((fVar1 - fVar7) + 24.0);
        pTVar17 = (__this_00->fields)._label;
        __this_01 = (long *)0x0;
        if (pTVar17 != (TMPro_TextMeshProUGUI_o *)0x0) {
          *(undefined8 *)(puVar16 + -0x50) = 0x3b9511c;
          TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar17,0,(MethodInfo *)0x0);
          pTVar17 = (__this_00->fields)._label;
          __this_01 = (long *)0x0;
          if (pTVar17 != (TMPro_TextMeshProUGUI_o *)0x0) {
            *(undefined8 *)(puVar16 + -0x50) = 0x3b95135;
            TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar17,0x1001,(MethodInfo *)0x0);
            pUVar10 = (__this_00->fields)._textRect;
            __this_01 = (long *)0x0;
            if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
              fVar1 = (__this_00->fields)._normalAnchorMin.fields.y;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              *(undefined8 *)(puVar16 + -0x50) = 0x3b9515a;
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar10,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
              pUVar10 = (__this_00->fields)._textRect;
              __this_01 = (long *)0x0;
              if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                fVar1 = (__this_00->fields)._normalAnchorMax.fields.y;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                *(undefined8 *)(puVar16 + -0x50) = 0x3b9517f;
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar10,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
                pUVar10 = (__this_00->fields)._textRect;
                __this_01 = (long *)0x0;
                if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                  *(undefined8 *)(puVar16 + -0x50) = 0x3b9519a;
                  UnityEngine_RectTransform__set_pivot
                            (pUVar10,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                  __this_01 = (long *)(__this_00->fields)._textRect;
                  if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
                      (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
                    *(undefined8 *)(puVar16 + -0x50) = 0x3b951b8;
                    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                              ((UnityEngine_RectTransform_o *)__this_01,0,*(float *)(puVar16 + -0x48) + 24.0,
                               (MethodInfo *)0x0);
                    pUVar10 = (__this_00->fields)._textRect;
                    if (g_data_057a694c == '\0') {
                      __this_01 = &TypeInfo_Vector2;
                      *(undefined8 *)(puVar16 + -0x50) = 0x3b951d1;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057a694c = '\x01';
                    }
                    plVar15 = (long *)0x0;
                    if (pUVar10 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchoredPosition
                                (pUVar10,(UnityEngine_Vector2_o)
                                         **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar16 + -0x50) = 0x3b9521d;
    il2cpp_runtime_helper_022b2c90();
    if ((char)(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate ==
        '\0') {
      return;
    }
    *(undefined1 *)
     ((long)&(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate + 1)
         = 1;
    pTVar17 = (TMPro_TextMeshProUGUI_o *)0x1;
    __this = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)plVar15;
    puVar16 = puVar16 + -0x48;
    unaff_R15 = __this_00;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDisable (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, const MethodInfo* method);
// 0x3b952a0

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__OnDisable
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this,method);
  *(undefined2 *)((long)&(__this->fields)._selfActivate + 1) = 0;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Update
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Update (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, const MethodInfo* method);
// 0x3b953f0

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Update
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_MonoBehaviour_o *__this_00;
  float fVar3;
  UnityEngine_Vector2_o value;
  float fVar4;
  float fVar5;
  
  if (g_data_057a9ee6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ee6 = '\x01';
  }
  if (*(char *)((long)&(__this->fields)._selfActivate + 3) != '\0') {
    pUVar1 = (__this->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      fVar4 = (float)(__this->fields)._hovered;
      fVar3 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
      fVar3 = fVar3 + fVar4;
      (__this->fields)._hovered = (bool_conflict)fVar3;
      if (0.45 <= fVar3) {
        __this_00 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._textRect;
        if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) {
label_03b9554e:
          il2cpp_runtime_helper_022b2c90();
          UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
          return;
        }
        fVar4 = 0.0;
        if (0.0 <= fVar3 + -0.45) {
          fVar4 = fVar3 + -0.45;
        }
        fVar3 = (float)(__this->fields)._selected;
        fVar5 = fVar4 * 42.0;
        if (fVar3 <= fVar4 * 42.0) {
          fVar5 = fVar3;
        }
        value.fields.y = 0.0;
        value.fields.x = -fVar5;
        UnityEngine_RectTransform__set_anchoredPosition
                  ((UnityEngine_RectTransform_o *)__this_00,value,(MethodInfo *)0x0);
        fVar4 = (float)(__this->fields)._selected;
        if (fVar4 <= fVar5) {
          if (fVar4 / 42.0 + 0.45 + 0.45 <= (float)(__this->fields)._hovered) {
            (__this->fields)._hovered = 0;
            pUVar1 = (__this->fields)._textRect;
            if (g_data_057a694c == '\0') {
              __this_00 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_Vector2;
              il2cpp_runtime_helper_023445d0();
              g_data_057a694c = '\x01';
            }
            if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchoredPosition
                        (pUVar1,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                         (MethodInfo *)0x0);
              return;
            }
            goto label_03b9554e;
          }
        }
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, bool active, const MethodInfo* method);
// 0x3b94f80

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,bool_conflict active,
               MethodInfo *method)

{
  float fVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  UnityEngine_RectTransform_o *pUVar3;
  Il2CppMethodPointer pIVar4;
  undefined1 auVar5 [16];
  UnityEngine_Vector2_o UVar6;
  undefined1 auVar7 [16];
  float fVar8;
  ulong uVar9;
  bool_conflict bVar10;
  MethodInfo *pMVar11;
  long *unaff_RBX;
  TMPro_TextMeshProUGUI_o *unaff_RBP;
  ulong uVar12;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this_00;
  long *__this_01;
  ulong unaff_R14;
  Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *unaff_R15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Rect_o UVar13;
  
  uVar9 = (ulong)(uint)active;
  __this_01 = (long *)__this;
  do {
    __this_00 = (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01;
    uVar12 = uVar9;
    *(TMPro_TextMeshProUGUI_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(long **)((long)register0x00000020 + -0x20) = unaff_RBX;
    if (g_data_057a9ee7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b94fa5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b94fb1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9ee7 = '\x01';
    }
    pTVar2 = (__this_00->fields)._label;
    unaff_RBX = &TypeInfo_Object;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b94fd4;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b94fe0;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    pUVar3 = (__this_00->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b94ff9;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b95005;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    unaff_RBP = (TMPro_TextMeshProUGUI_o *)(__this_00->fields)._viewport;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9501e;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9502a;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    __this_01 = (long *)(__this_00->fields)._viewport;
    if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
        (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9504d;
      UVar13 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)__this_01,(MethodInfo *)0x0)
      ;
      auVar7._8_4_ = in_XMM1_Dc;
      auVar7._0_8_ = UVar13.fields._8_8_;
      auVar7._12_4_ = in_XMM1_Dd;
      *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar7;
      unaff_RBP = (__this_00->fields)._label;
      if (unaff_RBP != (TMPro_TextMeshProUGUI_o *)0x0) {
        pMVar11 = (unaff_RBP->klass->vtable)._65_get_text.method;
        pIVar4 = (unaff_RBP->klass->vtable)._65_get_text.methodPtr;
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b95073;
        pMVar11 = (MethodInfo *)(*pIVar4)(UVar13.fields.m_XMin,unaff_RBP,pMVar11);
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b95080;
        UVar6 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0
                          ((TMPro_TMP_Text_o *)unaff_RBP,(System_String_o *)pMVar11,(MethodInfo *)0x0);
        if (((*(float *)((long)register0x00000020 + -0x38) <= 1.0) ||
            (UVar6.fields.x <= *(float *)((long)register0x00000020 + -0x38) + 1.0)) || ((char)uVar12 == '\0'))
        {
label_03b95206:
          Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore(__this_00,pMVar11);
          return;
        }
        auVar5._8_4_ = extraout_XMM0_Dc;
        auVar5._0_4_ = UVar6.fields.x;
        auVar5._4_4_ = UVar6.fields.y;
        auVar5._12_4_ = extraout_XMM0_Dd;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar5;
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b950cf;
          il2cpp_runtime_helper_02337ed0();
        }
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b950d6;
        bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        fVar1 = *(float *)((long)register0x00000020 + -0x48);
        fVar8 = *(float *)((long)register0x00000020 + -0x38);
        in_XMM1_Dc = *(undefined4 *)((long)register0x00000020 + -0x30);
        in_XMM1_Dd = *(undefined4 *)((long)register0x00000020 + -0x2c);
        if ((char)bVar10 == '\0') goto label_03b95206;
        *(undefined1 *)((long)&(__this_00->fields)._selfActivate + 3) = 1;
        (__this_00->fields)._hovered = 0;
        (__this_00->fields)._selected = (bool_conflict)((fVar1 - fVar8) + 24.0);
        pTVar2 = (__this_00->fields)._label;
        __this_01 = (long *)0x0;
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9511c;
          TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar2,0,(MethodInfo *)0x0);
          pTVar2 = (__this_00->fields)._label;
          __this_01 = (long *)0x0;
          if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b95135;
            TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar2,0x1001,(MethodInfo *)0x0);
            pUVar3 = (__this_00->fields)._textRect;
            __this_01 = (long *)0x0;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              fVar1 = (__this_00->fields)._normalAnchorMin.fields.y;
              in_XMM1_Dc = 0;
              in_XMM1_Dd = 0;
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9515a;
              UnityEngine_RectTransform__set_anchorMin
                        (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
              pUVar3 = (__this_00->fields)._textRect;
              __this_01 = (long *)0x0;
              if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                fVar1 = (__this_00->fields)._normalAnchorMax.fields.y;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9517f;
                UnityEngine_RectTransform__set_anchorMax
                          (pUVar3,(UnityEngine_Vector2_o)((ulong)(uint)fVar1 << 0x20),(MethodInfo *)0x0);
                pUVar3 = (__this_00->fields)._textRect;
                __this_01 = (long *)0x0;
                if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9519a;
                  UnityEngine_RectTransform__set_pivot
                            (pUVar3,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
                  __this_01 = (long *)(__this_00->fields)._textRect;
                  if ((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01 !=
                      (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b951b8;
                    UnityEngine_RectTransform__SetSizeWithCurrentAnchors
                              ((UnityEngine_RectTransform_o *)__this_01,0,
                               *(float *)((long)register0x00000020 + -0x48) + 24.0,(MethodInfo *)0x0);
                    pUVar3 = (__this_00->fields)._textRect;
                    if (g_data_057a694c == '\0') {
                      __this_01 = &TypeInfo_Vector2;
                      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b951d1;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057a694c = '\x01';
                    }
                    unaff_RBX = (long *)0x0;
                    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_anchoredPosition
                                (pUVar3,(UnityEngine_Vector2_o)
                                        **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x3b9521d;
    il2cpp_runtime_helper_022b2c90();
    if ((char)(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate ==
        '\0') {
      return;
    }
    *(undefined1 *)
     ((long)&(((Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *)__this_01)->fields)._selfActivate + 1)
         = 1;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    uVar9 = 1;
    unaff_R14 = uVar12;
    unaff_R15 = __this_00;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$Restore
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, const MethodInfo* method);
// 0x3b952c0

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Restore
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  long lVar4;
  UnityEngine_MonoBehaviour_o *__this_00;
  float fVar5;
  UnityEngine_Vector2_o value;
  float fVar6;
  
  if (g_data_057a9ee8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9ee8 = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar2 = (__this->fields)._textRect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      *(undefined1 *)((long)&(__this->fields)._selfActivate + 3) = 0;
      (__this->fields)._hovered = 0;
      pTVar1 = (__this->fields)._label;
      if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
        TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)pTVar1,1,(MethodInfo *)0x0);
        pTVar1 = (__this->fields)._label;
        if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
          TMPro_TMP_Text__set_alignment
                    ((TMPro_TMP_Text_o *)pTVar1,(__this->fields)._normalAlignment,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._textRect;
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (pUVar2,(UnityEngine_Vector2_o)(__this->fields)._normalAnchorMin.fields,
                       (MethodInfo *)0x0);
            pUVar2 = (__this->fields)._textRect;
            if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMax
                        (pUVar2,(UnityEngine_Vector2_o)(__this->fields)._normalAnchorMax.fields,
                         (MethodInfo *)0x0);
              pUVar2 = (__this->fields)._textRect;
              if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_pivot
                          (pUVar2,(UnityEngine_Vector2_o)(__this->fields)._normalPivot.fields,
                           (MethodInfo *)0x0);
                pUVar2 = (__this->fields)._textRect;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_sizeDelta
                            (pUVar2,(UnityEngine_Vector2_o)(__this->fields)._normalSizeDelta.fields,
                             (MethodInfo *)0x0);
                  pUVar2 = (__this->fields)._textRect;
                  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchoredPosition
                              (pUVar2,(UnityEngine_Vector2_o)(__this->fields)._normalAnchoredPosition.fields,
                               (MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
      lVar4 = 0;
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9ee6 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9ee6 = '\x01';
      }
      if (*(char *)(lVar4 + 0x67) != '\0') {
        x = *(UnityEngine_Object_o **)(lVar4 + 0x30);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          fVar6 = *(float *)(lVar4 + 0x68);
          fVar5 = UnityEngine_Time__get_unscaledDeltaTime((MethodInfo *)0x0);
          fVar5 = fVar5 + fVar6;
          *(float *)(lVar4 + 0x68) = fVar5;
          if (0.45 <= fVar5) {
            __this_00 = *(UnityEngine_MonoBehaviour_o **)(lVar4 + 0x30);
            if (__this_00 == (UnityEngine_MonoBehaviour_o *)0x0) {
label_03b9554e:
              il2cpp_runtime_helper_022b2c90();
              UnityEngine_MonoBehaviour___ctor(__this_00,(MethodInfo *)0x0);
              return;
            }
            fVar6 = 0.0;
            if (0.0 <= fVar5 + -0.45) {
              fVar6 = fVar5 + -0.45;
            }
            fVar5 = fVar6 * 42.0;
            if (*(float *)(lVar4 + 0x6c) <= fVar6 * 42.0) {
              fVar5 = *(float *)(lVar4 + 0x6c);
            }
            value.fields.y = 0.0;
            value.fields.x = -fVar5;
            UnityEngine_RectTransform__set_anchoredPosition
                      ((UnityEngine_RectTransform_o *)__this_00,value,(MethodInfo *)0x0);
            if (*(float *)(lVar4 + 0x6c) <= fVar5) {
              if (*(float *)(lVar4 + 0x6c) / 42.0 + 0.45 + 0.45 <= *(float *)(lVar4 + 0x68)) {
                *(undefined4 *)(lVar4 + 0x68) = 0;
                pUVar2 = *(UnityEngine_RectTransform_o **)(lVar4 + 0x30);
                if (g_data_057a694c == '\0') {
                  __this_00 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_Vector2;
                  il2cpp_runtime_helper_023445d0();
                  g_data_057a694c = '\x01';
                }
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchoredPosition
                            (pUVar2,(UnityEngine_Vector2_o)
                                    **(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                  return;
                }
                goto label_03b9554e;
              }
            }
          }
        }
      }
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchHoverMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText___ctor (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o* __this, const MethodInfo* method);
// 0x3b95560

void Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText___ctor
               (Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


