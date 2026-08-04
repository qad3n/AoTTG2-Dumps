// Type: Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Overlays/GisketchTooltipTrigger.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$Setup
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, System_String_o* text, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b584b0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,System_String_o *text,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  if (g_data_057a9d27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    g_data_057a9d27 = '\x01';
  }
  (__this->fields)._text = text;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._text,text);
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
  }
  (__this->fields)._theme = theme;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._theme,theme);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerEnter (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b58530

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerEnter
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Canvas_o *x;
  UnityEngine_RectTransform_o *__this_00;
  float *pfVar3;
  UnityEngine_RectTransform_c *pUVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  UnityEngine_Camera_o *cam;
  undefined8 unaff_RBX;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_EventSystems_PointerEventData_o *method_00;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Vector2_Fields *pUVar8;
  uint uVar9;
  float fVar10;
  float fVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Rect_o UVar22;
  UnityEngine_Vector2_Fields UStack_60;
  UnityEngine_Vector2_Fields UStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = 0x3b58541;
  uStack_1c = 0;
  method_00 = eventData;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer((MethodInfo *)0x0);
  uStack_20 = 0x3b58549;
  uStack_1c = 0;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip(__this,(MethodInfo *)method_00);
  uStack_20 = (undefined4)unaff_RBX;
  uStack_1c = (undefined4)((ulong)unaff_RBX >> 0x20);
  if (g_data_057a9d2c == '\0') {
    uStack_50 = 0x3b58ef6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
    uStack_50 = 0x3b58f02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d2c = '\x01';
  }
  pUVar2 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_50 = 0x3b58f26;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_50 = 0x3b58f32;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    x = (__this->fields)._placementCanvas;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_50 = 0x3b58f4c;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_50 = 0x3b58f58;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar2 = (UnityEngine_RectTransform_o *)(__this->fields)._placementCanvas;
      if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
        if (g_data_057a694c == '\0') {
          uStack_50 = 0x3b58f90;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        pUVar8 = *(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
      }
      else {
        pUVar8 = &(eventData->fields)._position_k__BackingField.fields;
      }
      UStack_58 = *pUVar8;
      UVar1 = (__this->fields)._tooltipSize.fields;
      __this_00 = (__this->fields)._tooltipRect;
      fStack_28 = UVar1.x;
      fStack_24 = UVar1.y;
      uVar16 = 0;
      uVar17 = 0;
      uStack_50 = 0;
      if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
        uStack_30 = 0;
        auStack_38._0_4_ = UStack_58.x;
        auStack_38._4_4_ = UStack_58.y;
        _uStack_40 = 0;
        auStack_48._0_4_ = UVar1.x;
        auStack_48._4_4_ = UVar1.y;
        uStack_50 = 0x3b58fda;
        il2cpp_runtime_helper_02337ed0();
        fStack_28 = (float)auStack_48._0_4_;
        fStack_24 = (float)auStack_48._4_4_;
        uVar16 = uStack_40;
        uVar17 = uStack_3c;
        UStack_58 = (UnityEngine_Vector2_Fields)auStack_38;
        uStack_50 = uStack_30;
      }
      pUVar7 = pUVar2;
      uStack_20 = uVar16;
      uStack_1c = uVar17;
      if (g_data_057a9d31 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
        pUVar7 = (UnityEngine_RectTransform_o *)&TypeInfo_RectTransform;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9d31 = '\x01';
      }
      UStack_60.x = 0.0;
      UStack_60.y = 0.0;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar7 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        rect = (UnityEngine_RectTransform_o *)0x0;
        if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
           (rect = (UnityEngine_RectTransform_o *)0x0, pUVar7->klass == TypeInfo_RectTransform)) {
          rect = pUVar7;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          return;
        }
        cam = UnityEngine_Canvas__get_worldCamera((UnityEngine_Canvas_o *)pUVar2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar7 = rect;
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  (rect,(UnityEngine_Vector2_o)UStack_58,cam,(UnityEngine_Vector2_o *)&UStack_60,
                   (MethodInfo *)0x0);
        if (rect != (UnityEngine_RectTransform_o *)0x0) {
          UVar22 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
          auVar12._0_8_ = UVar22.fields._0_8_;
          auVar12._8_8_ = extraout_XMM0_Qb;
          fVar18 = UVar22.fields.m_Width;
          fVar15 = UVar22.fields.m_Height;
          fVar20 = UStack_60.x;
          fVar21 = 0.0;
          if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
            UStack_58 = (UnityEngine_Vector2_Fields)((ulong)UStack_60 & 0xffffffff);
            uStack_50 = 0;
            unique0x10000194 = uVar16;
            auStack_38 = (undefined1  [8])UVar22.fields._8_8_;
            unique0x10000198 = uVar17;
            _auStack_48 = auVar12;
            il2cpp_runtime_helper_02337ed0();
            auVar12._0_8_ = auStack_48;
            fVar18 = (float)auStack_38._0_4_;
            fVar15 = (float)auStack_38._4_4_;
            fVar20 = UStack_58.x;
            fVar21 = UStack_58.y;
          }
          pUVar7 = TypeInfo_GisketchTooltipTrigger;
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            auVar5._4_4_ = fStack_24;
            auVar5._0_4_ = fStack_28;
            auVar5._8_4_ = uStack_20;
            auVar5._12_4_ = uStack_1c;
            pfVar3 = (float *)((UnityEngine_Canvas_Fields *)&TypeInfo_GisketchTooltipTrigger[7].fields)->m_CachedPtr;
            fVar10 = (float)auVar12._0_8_;
            fVar20 = fVar20 + *pfVar3;
            fVar18 = (fVar18 + fVar10) - fStack_28;
            fVar13 = (float)((ulong)auVar12._0_8_ >> 0x20);
            fVar19 = pfVar3[1] + UStack_60.y;
            if (fVar20 <= fVar18) {
              fVar18 = fVar20;
            }
            fVar14 = fVar15 + fVar13;
            if (fVar19 <= fVar15 + fVar13) {
              fVar14 = fVar19;
            }
            uVar9 = -(uint)(fVar13 + fStack_24 <= fVar19);
            auVar11._0_4_ =
                 UStack_60.x -
                 (float)(~-(uint)(fVar10 <= fVar20) & (uint)fVar10 | (uint)fVar18 & -(uint)(fVar10 <= fVar20))
            ;
            auVar11._4_4_ =
                 UStack_60.y -
                 ((float)(~uVar9 & (uint)(fVar13 + fStack_24) | (uint)fVar14 & uVar9) - fStack_24);
            auVar11._8_4_ = 0.0 - (float)(~(uint)fVar21 & (uint)fVar13 | (uint)fVar15 & (uint)fVar21);
            auVar11._12_4_ = 0.0 - fVar13;
            auVar12 = divps(auVar11,auVar5);
            UnityEngine_RectTransform__set_pivot
                      (__this_00,(UnityEngine_Vector2_o)auVar12._0_8_,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchoredPosition
                      (__this_00,(UnityEngine_Vector2_o)UStack_60,(MethodInfo *)0x0);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d30 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9d30 = '\x01';
      }
      pUVar4 = pUVar7[3].klass;
      pUVar7[3].klass = (UnityEngine_RectTransform_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar7 + 3);
      if (pUVar4 != (UnityEngine_RectTransform_c *)0x0) {
        DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pUVar4,0,(MethodInfo *)0x0);
      }
      pUVar4 = pUVar7[2].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pUVar4 = pUVar7[2].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
      }
      pUVar7[2].klass = (UnityEngine_RectTransform_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar7 + 2,0);
      pUVar7[2].monitor = (void *)0x0;
      il2cpp_runtime_helper_022b4080(&pUVar7[2].monitor,0);
      ((UnityEngine_Canvas_Fields *)&pUVar7[2].fields)->m_CachedPtr = 0;
      il2cpp_runtime_helper_022b4080((UnityEngine_Canvas_Fields *)&pUVar7[2].fields,0);
      ((UnityEngine_Canvas_Fields *)&pUVar7[3].fields)->m_CachedPtr = 0;
      il2cpp_runtime_helper_022b4080((UnityEngine_Canvas_Fields *)&pUVar7[3].fields,0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerExit (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b59000

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerExit
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  void *pvVar2;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_00;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_CanvasGroup_o *x;
  UnityEngine_Canvas_o *pUVar5;
  undefined1 auVar6 [16];
  char cVar7;
  bool_conflict bVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  DG_Tweening_Sequence_o *pDVar9;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar10;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *t_01;
  undefined4 extraout_var_02;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGVar11;
  undefined8 *unaff_RBX;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *rect;
  UnityEngine_CanvasGroup_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *unaff_R12;
  UnityEngine_Vector2_Fields *pUVar12;
  UnityEngine_RectTransform_o *unaff_R14;
  UnityEngine_Camera_o *unaff_R15;
  uint uVar13;
  float fVar14;
  float fVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Rect_o UVar26;
  undefined1 auStack_90 [8];
  UnityEngine_Vector2_Fields UStack_88;
  UnityEngine_Vector2_Fields UStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGStack_40;
  DG_Tweening_Sequence_o *pDStack_38;
  DG_Tweening_Sequence_o *pDStack_30;
  float fStack_24;
  
  if (g_data_057a9d2f == '\0') {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59030;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5903c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59048;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_DestroyTooltip);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59054;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PlayExit_b__26_0);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59060;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5906c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59078;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59084;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59090;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5909c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9d2f = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b590c0;
    il2cpp_runtime_helper_02337ed0();
  }
  pDStack_30 = (DG_Tweening_Sequence_o *)0x3b590cc;
  bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pDVar10 = (__this->fields)._tween;
  if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b590ef;
    DG_Tweening_TweenExtensions__Kill(pDVar10,0,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59105;
    il2cpp_runtime_helper_02337ed0();
  }
  pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59111;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  auVar16._0_8_ = CONCAT44(extraout_var,bVar8);
  if ((char)bVar8 == '\0') {
    x = (__this->fields)._group;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5912f;
      il2cpp_runtime_helper_02337ed0();
    }
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5913b;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    auVar16._0_8_ = CONCAT44(extraout_var_00,bVar8);
    if ((char)bVar8 == '\0') {
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592f8;
        il2cpp_runtime_helper_02337ed0();
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592ff;
        bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        auVar16._0_8_ = CONCAT44(extraout_var_02,bVar8);
        cVar7 = (char)bVar8;
      }
      else {
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59161;
        bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        auVar16._0_8_ = CONCAT44(extraout_var_01,bVar8);
        cVar7 = (char)bVar8;
      }
      if (cVar7 != '\0') {
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59181;
          il2cpp_runtime_helper_02337ed0();
        }
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59188;
        pDVar9 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pUVar4 = (__this->fields)._tooltipRect;
        if (g_data_057a6932 == '\0') {
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b591a5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6932 = '\x01';
        }
        auVar16._0_8_ = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        endValue.fields.x = (float)auVar16._0_8_ * (float)0x3f666666;
        endValue.fields.y = (float)((ulong)auVar16._0_8_ >> 0x20) * (float)0x3f666666;
        endValue.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.9;
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b591e8;
        t = DG_Tweening_ShortcutExtensions__DOScale
                      ((UnityEngine_Transform_o *)pUVar4,endValue,0.1,(MethodInfo *)0x0);
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b591ff;
        pDVar10 = (DG_Tweening_Tween_o *)
                  DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5920c;
        s = DG_Tweening_TweenSettingsExtensions__Join(pDVar9,pDVar10,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._group;
        if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59229;
          fStack_24 = UnityEngine_CanvasGroup__get_alpha(__this_01,(MethodInfo *)0x0);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5923e;
          onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59258;
          DG_Tweening_TweenCallback_float____ctor();
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59273;
          t_00 = DG_Tweening_DOVirtual__Float(fStack_24,0.0,0.08,onVirtualUpdate,(MethodInfo *)0x0);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59280;
          pDVar9 = DG_Tweening_TweenSettingsExtensions__Join(s,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59292;
          action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592ac;
          DG_Tweening_TweenCallback___ctor();
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592c1;
          t_01 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar9,action,MethodInfo_Sequence_OnComplete_Sequence);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592d8;
          pDVar10 = (DG_Tweening_Tween_o *)
                    DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_01,1,MethodInfo_Sequence_SetUpdate_Sequence);
          (__this->fields)._tween = pDVar10;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._tween,pDVar10);
          return;
        }
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5931f;
        pGStack_40 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)il2cpp_runtime_helper_022b2c90();
        uStack_48 = 0x3b59331;
        uStack_44 = 0;
        pDStack_38 = (DG_Tweening_Sequence_o *)x;
        pDStack_30 = pDVar9;
        Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer((MethodInfo *)0x0);
        pDVar9 = pDStack_38;
        pDStack_38 = pDStack_30;
        uStack_48 = SUB84(pDVar9,0);
        uStack_44 = (undefined4)((ulong)pDVar9 >> 0x20);
        pGStack_40 = __this;
        pDStack_30 = (DG_Tweening_Sequence_o *)pUVar4;
        if (g_data_057a9d2c == '\0') {
          uStack_78 = 0x3b58ef6;
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
          uStack_78 = 0x3b58f02;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9d2c = '\x01';
        }
        pUVar3 = __this_01[2].monitor;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          uStack_78 = 0x3b58f26;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_78 = 0x3b58f32;
        bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          pUVar3 = (UnityEngine_Object_o *)__this_01[3].fields.m_CachedPtr;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            uStack_78 = 0x3b58f4c;
            il2cpp_runtime_helper_02337ed0();
          }
          uStack_78 = 0x3b58f58;
          bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)__this_01[3].fields.m_CachedPtr
            ;
            if (pDVar10 == (DG_Tweening_Tween_o *)0x0) {
              if (g_data_057a694c == '\0') {
                uStack_78 = 0x3b58f90;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              pUVar12 = *(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
            }
            else {
              pUVar12 = (UnityEngine_Vector2_Fields *)&(pDVar10->fields).isSequenced;
            }
            UStack_80 = *pUVar12;
            pvVar2 = __this_01[3].monitor;
            unaff_R14 = __this_01[2].monitor;
            fStack_50 = SUB84(pvVar2,0);
            fStack_4c = (float)((ulong)pvVar2 >> 0x20);
            uVar20 = 0;
            uVar21 = 0;
            uStack_78 = 0;
            if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[2].fields._text + 4) == 0) {
              uStack_58 = 0;
              auStack_60._0_4_ = UStack_80.x;
              auStack_60._4_4_ = UStack_80.y;
              _uStack_68 = 0;
              auStack_70 = (undefined1  [8])pvVar2;
              uStack_78 = 0x3b58fda;
              il2cpp_runtime_helper_02337ed0();
              fStack_50 = (float)auStack_70._0_4_;
              fStack_4c = (float)auStack_70._4_4_;
              uVar20 = uStack_68;
              uVar21 = uStack_64;
              UStack_80 = (UnityEngine_Vector2_Fields)auStack_60;
              uStack_78 = uStack_58;
            }
            unaff_R12 = pGStack_40;
            unaff_RBX = (undefined8 *)CONCAT44(uStack_44,uStack_48);
            __this = __this_00;
            uStack_48 = uVar20;
            uStack_44 = uVar21;
            pGStack_40 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)unaff_RBX;
            if (g_data_057a9d31 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
              __this = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)&TypeInfo_RectTransform;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9d31 = '\x01';
            }
            UStack_88.x = 0.0;
            UStack_88.y = 0.0;
            unaff_R15 = (UnityEngine_Camera_o *)0x0;
            if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
              pGVar11 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              rect = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0;
              if ((pGVar11 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) &&
                 (rect = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0,
                 pGVar11->klass == TypeInfo_RectTransform)) {
                rect = pGVar11;
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar8 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                return;
              }
              unaff_R15 = UnityEngine_Canvas__get_worldCamera
                                    ((UnityEngine_Canvas_o *)__this_00,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this = rect;
              UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                        ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UStack_80,unaff_R15,
                         (UnityEngine_Vector2_o *)&UStack_88,(MethodInfo *)0x0);
              unaff_RBX = (undefined8 *)0x0;
              if (rect != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
                UVar26 = UnityEngine_RectTransform__get_rect
                                   ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
                auVar16._0_8_ = UVar26.fields._0_8_;
                auVar16._8_8_ = extraout_XMM0_Qb;
                unaff_RBX = &TypeInfo_GisketchTooltipTrigger;
                fVar22 = UVar26.fields.m_Width;
                fVar19 = UVar26.fields.m_Height;
                fVar24 = UStack_88.x;
                fVar25 = 0.0;
                if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[2].fields._text + 4) == 0) {
                  UStack_80 = (UnityEngine_Vector2_Fields)((ulong)UStack_88 & 0xffffffff);
                  uStack_78 = 0;
                  unique0x100002d8 = uVar20;
                  auStack_60 = (undefined1  [8])UVar26.fields._8_8_;
                  unique0x100002dc = uVar21;
                  _auStack_70 = auVar16;
                  il2cpp_runtime_helper_02337ed0();
                  auVar16._0_8_ = auStack_70;
                  fVar22 = (float)auStack_60._0_4_;
                  fVar19 = (float)auStack_60._4_4_;
                  fVar24 = UStack_80.x;
                  fVar25 = UStack_80.y;
                }
                __this = TypeInfo_GisketchTooltipTrigger;
                if (unaff_R14 != (UnityEngine_RectTransform_o *)0x0) {
                  auVar6._4_4_ = fStack_4c;
                  auVar6._0_4_ = fStack_50;
                  auVar6._8_4_ = uStack_48;
                  auVar6._12_4_ = uStack_44;
                  pUVar5 = TypeInfo_GisketchTooltipTrigger[1].fields._placementCanvas;
                  fVar14 = (float)auVar16._0_8_;
                  fVar24 = fVar24 + *(float *)&pUVar5->klass;
                  fVar22 = (fVar22 + fVar14) - fStack_50;
                  fVar17 = (float)((ulong)auVar16._0_8_ >> 0x20);
                  fVar23 = *(float *)((long)&pUVar5->klass + 4) + UStack_88.y;
                  if (fVar24 <= fVar22) {
                    fVar22 = fVar24;
                  }
                  fVar18 = fVar19 + fVar17;
                  if (fVar23 <= fVar19 + fVar17) {
                    fVar18 = fVar23;
                  }
                  uVar13 = -(uint)(fVar17 + fStack_4c <= fVar23);
                  auVar15._0_4_ =
                       UStack_88.x -
                       (float)(~-(uint)(fVar14 <= fVar24) & (uint)fVar14 |
                              (uint)fVar22 & -(uint)(fVar14 <= fVar24));
                  auVar15._4_4_ =
                       UStack_88.y -
                       ((float)(~uVar13 & (uint)(fVar17 + fStack_4c) | (uint)fVar18 & uVar13) - fStack_4c);
                  auVar15._8_4_ = 0.0 - (float)(~(uint)fVar25 & (uint)fVar17 | (uint)fVar19 & (uint)fVar25);
                  auVar15._12_4_ = 0.0 - fVar17;
                  auVar16 = divps(auVar15,auVar6);
                  UnityEngine_RectTransform__set_pivot
                            (unaff_R14,(UnityEngine_Vector2_o)auVar16._0_8_,(MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_anchoredPosition
                            (unaff_R14,(UnityEngine_Vector2_o)UStack_88,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            auVar16._0_8_ = il2cpp_runtime_helper_022b2c90();
            register0x00000020 = (BADSPACEBASE *)auStack_90;
            goto Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip;
          }
        }
        return;
      }
    }
  }
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip:
  *(UnityEngine_Camera_o **)((long)register0x00000020 + -8) = unaff_R15;
  *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o **)((long)register0x00000020 + -0x18) = unaff_R12;
  *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x28) = auVar16._0_8_;
  if (g_data_057a9d30 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c50;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d30 = '\x01';
  }
  pDVar10 = (__this->fields)._tween;
  (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c6e;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tween);
  if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c7f;
    DG_Tweening_TweenExtensions__Kill(pDVar10,0,(MethodInfo *)0x0);
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c9c;
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._tooltip;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59cac;
  bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59cc5;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59ccf;
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
  }
  (__this->fields)._tooltip = (UnityEngine_GameObject_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59ce1;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  (__this->fields)._tooltipRect = (UnityEngine_RectTransform_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59cf4;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltipRect,0);
  (__this->fields)._group = (UnityEngine_CanvasGroup_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59d07;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._group,0);
  (__this->fields)._placementCanvas = (UnityEngine_Canvas_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._placementCanvas,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnPointerMove
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerMove (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b59320

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnPointerMove
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Canvas_o *x;
  UnityEngine_RectTransform_o *__this_00;
  float *pfVar3;
  UnityEngine_RectTransform_c *pUVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  UnityEngine_Camera_o *cam;
  undefined8 unaff_RBX;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Vector2_Fields *pUVar8;
  uint uVar9;
  float fVar10;
  float fVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Rect_o UVar22;
  UnityEngine_Vector2_Fields UStack_60;
  UnityEngine_Vector2_Fields UStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = 0x3b59331;
  uStack_1c = 0;
  Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer((MethodInfo *)0x0);
  uStack_20 = (undefined4)unaff_RBX;
  uStack_1c = (undefined4)((ulong)unaff_RBX >> 0x20);
  if (g_data_057a9d2c == '\0') {
    uStack_50 = 0x3b58ef6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
    uStack_50 = 0x3b58f02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d2c = '\x01';
  }
  pUVar2 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_50 = 0x3b58f26;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_50 = 0x3b58f32;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    x = (__this->fields)._placementCanvas;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_50 = 0x3b58f4c;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_50 = 0x3b58f58;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar2 = (UnityEngine_RectTransform_o *)(__this->fields)._placementCanvas;
      if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
        if (g_data_057a694c == '\0') {
          uStack_50 = 0x3b58f90;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        pUVar8 = *(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
      }
      else {
        pUVar8 = &(eventData->fields)._position_k__BackingField.fields;
      }
      UStack_58 = *pUVar8;
      UVar1 = (__this->fields)._tooltipSize.fields;
      __this_00 = (__this->fields)._tooltipRect;
      fStack_28 = UVar1.x;
      fStack_24 = UVar1.y;
      uVar16 = 0;
      uVar17 = 0;
      uStack_50 = 0;
      if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
        uStack_30 = 0;
        auStack_38._0_4_ = UStack_58.x;
        auStack_38._4_4_ = UStack_58.y;
        _uStack_40 = 0;
        auStack_48._0_4_ = UVar1.x;
        auStack_48._4_4_ = UVar1.y;
        uStack_50 = 0x3b58fda;
        il2cpp_runtime_helper_02337ed0();
        fStack_28 = (float)auStack_48._0_4_;
        fStack_24 = (float)auStack_48._4_4_;
        uVar16 = uStack_40;
        uVar17 = uStack_3c;
        UStack_58 = (UnityEngine_Vector2_Fields)auStack_38;
        uStack_50 = uStack_30;
      }
      pUVar7 = pUVar2;
      uStack_20 = uVar16;
      uStack_1c = uVar17;
      if (g_data_057a9d31 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
        pUVar7 = (UnityEngine_RectTransform_o *)&TypeInfo_RectTransform;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9d31 = '\x01';
      }
      UStack_60.x = 0.0;
      UStack_60.y = 0.0;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar7 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        rect = (UnityEngine_RectTransform_o *)0x0;
        if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
           (rect = (UnityEngine_RectTransform_o *)0x0, pUVar7->klass == TypeInfo_RectTransform)) {
          rect = pUVar7;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          return;
        }
        cam = UnityEngine_Canvas__get_worldCamera((UnityEngine_Canvas_o *)pUVar2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar7 = rect;
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  (rect,(UnityEngine_Vector2_o)UStack_58,cam,(UnityEngine_Vector2_o *)&UStack_60,
                   (MethodInfo *)0x0);
        if (rect != (UnityEngine_RectTransform_o *)0x0) {
          UVar22 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
          auVar12._0_8_ = UVar22.fields._0_8_;
          auVar12._8_8_ = extraout_XMM0_Qb;
          fVar18 = UVar22.fields.m_Width;
          fVar15 = UVar22.fields.m_Height;
          fVar20 = UStack_60.x;
          fVar21 = 0.0;
          if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
            UStack_58 = (UnityEngine_Vector2_Fields)((ulong)UStack_60 & 0xffffffff);
            uStack_50 = 0;
            unique0x1000018b = uVar16;
            auStack_38 = (undefined1  [8])UVar22.fields._8_8_;
            unique0x1000018f = uVar17;
            _auStack_48 = auVar12;
            il2cpp_runtime_helper_02337ed0();
            auVar12._0_8_ = auStack_48;
            fVar18 = (float)auStack_38._0_4_;
            fVar15 = (float)auStack_38._4_4_;
            fVar20 = UStack_58.x;
            fVar21 = UStack_58.y;
          }
          pUVar7 = TypeInfo_GisketchTooltipTrigger;
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            auVar5._4_4_ = fStack_24;
            auVar5._0_4_ = fStack_28;
            auVar5._8_4_ = uStack_20;
            auVar5._12_4_ = uStack_1c;
            pfVar3 = (float *)((UnityEngine_Canvas_Fields *)&TypeInfo_GisketchTooltipTrigger[7].fields)->m_CachedPtr;
            fVar10 = (float)auVar12._0_8_;
            fVar20 = fVar20 + *pfVar3;
            fVar18 = (fVar18 + fVar10) - fStack_28;
            fVar13 = (float)((ulong)auVar12._0_8_ >> 0x20);
            fVar19 = pfVar3[1] + UStack_60.y;
            if (fVar20 <= fVar18) {
              fVar18 = fVar20;
            }
            fVar14 = fVar15 + fVar13;
            if (fVar19 <= fVar15 + fVar13) {
              fVar14 = fVar19;
            }
            uVar9 = -(uint)(fVar13 + fStack_24 <= fVar19);
            auVar11._0_4_ =
                 UStack_60.x -
                 (float)(~-(uint)(fVar10 <= fVar20) & (uint)fVar10 | (uint)fVar18 & -(uint)(fVar10 <= fVar20))
            ;
            auVar11._4_4_ =
                 UStack_60.y -
                 ((float)(~uVar9 & (uint)(fVar13 + fStack_24) | (uint)fVar14 & uVar9) - fStack_24);
            auVar11._8_4_ = 0.0 - (float)(~(uint)fVar21 & (uint)fVar13 | (uint)fVar15 & (uint)fVar21);
            auVar11._12_4_ = 0.0 - fVar13;
            auVar12 = divps(auVar11,auVar5);
            UnityEngine_RectTransform__set_pivot
                      (__this_00,(UnityEngine_Vector2_o)auVar12._0_8_,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchoredPosition
                      (__this_00,(UnityEngine_Vector2_o)UStack_60,(MethodInfo *)0x0);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d30 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9d30 = '\x01';
      }
      pUVar4 = pUVar7[3].klass;
      pUVar7[3].klass = (UnityEngine_RectTransform_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar7 + 3);
      if (pUVar4 != (UnityEngine_RectTransform_c *)0x0) {
        DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pUVar4,0,(MethodInfo *)0x0);
      }
      pUVar4 = pUVar7[2].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pUVar4 = pUVar7[2].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
      }
      pUVar7[2].klass = (UnityEngine_RectTransform_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar7 + 2,0);
      pUVar7[2].monitor = (void *)0x0;
      il2cpp_runtime_helper_022b4080(&pUVar7[2].monitor,0);
      ((UnityEngine_Canvas_Fields *)&pUVar7[2].fields)->m_CachedPtr = 0;
      il2cpp_runtime_helper_022b4080((UnityEngine_Canvas_Fields *)&pUVar7[2].fields,0);
      ((UnityEngine_Canvas_Fields *)&pUVar7[3].fields)->m_CachedPtr = 0;
      il2cpp_runtime_helper_022b4080((UnityEngine_Canvas_Fields *)&pUVar7[3].fields,0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnSelect (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b59350

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnSelect
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  void *pvVar1;
  UnityEngine_Vector2_Fields UVar2;
  undefined1 auVar3 [16];
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Canvas_o *__this_00;
  float *pfVar5;
  char cVar6;
  bool_conflict bVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *t_00;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_01;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *t_02;
  UnityEngine_RectTransform_c *pUVar9;
  undefined4 extraout_var_02;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_Camera_o *cam;
  UnityEngine_RectTransform_o *unaff_RBX;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *x;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_Vector2_Fields *pUVar12;
  UnityEngine_Vector2_Fields *pUVar15;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  UnityEngine_RectTransform_o *pUVar16;
  UnityEngine_RectTransform_o *unaff_R12;
  DG_Tweening_Sequence_o *unaff_R14;
  UnityEngine_Transform_o *unaff_R15;
  uint uVar17;
  float fVar18;
  float fVar22;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o worldPoint;
  UnityEngine_Rect_o UVar33;
  undefined8 uStack_70;
  UnityEngine_RectTransform_o *pUStack_68;
  UnityEngine_RectTransform_o *pUStack_60;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGStack_58;
  UnityEngine_RectTransform_o *pUStack_50;
  UnityEngine_Vector2_Fields local_48;
  undefined8 uStack_40;
  UnityEngine_Vector2_Fields local_38;
  undefined8 uStack_30;
  UnityEngine_RectTransform_o *pUStack_20;
  UnityEngine_Vector2_Fields *pUVar13;
  UnityEngine_Vector2_Fields *pUVar14;
  UnityEngine_Vector2_Fields UVar19;
  
  bVar7 = Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__get_IsNavigation((MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    return;
  }
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip(__this,(MethodInfo *)eventData);
  pUVar12 = &local_48;
  pUVar13 = &local_48;
  pUVar14 = &local_48;
  pUStack_20 = unaff_RBX;
  if (g_data_057a9d2d == '\0') {
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59393;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b5939f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b593ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b593b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9d2d = '\x01';
  }
  pUVar11 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b593db;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_50 = (UnityEngine_RectTransform_o *)0x3b593e7;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  pUStack_50 = (UnityEngine_RectTransform_o *)0x3b593f7;
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar11 = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar10 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar11 = (UnityEngine_RectTransform_o *)0x0, pUVar10->klass == TypeInfo_RectTransform)) {
    pUVar11 = pUVar10;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59421;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_50 = (UnityEngine_RectTransform_o *)0x3b5942d;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  pUVar10 = (UnityEngine_RectTransform_o *)(__this->fields)._placementCanvas;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59447;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59453;
  pUVar16 = pUVar10;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  if (pUVar11 == (UnityEngine_RectTransform_o *)0x0) {
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit:
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b5952d;
    uStack_70 = il2cpp_runtime_helper_022b2c90();
    pUStack_60 = (UnityEngine_RectTransform_o *)&TypeInfo_Object;
    register0x00000020 = (BADSPACEBASE *)&uStack_70;
    pUStack_68 = pUVar11;
    pGStack_58 = __this;
    pUStack_50 = pUVar10;
    if (g_data_057a9d2f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_DestroyTooltip);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PlayExit_b__26_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
      il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
      g_data_057a9d2f = '\x01';
    }
    pUVar9 = pUVar16[2].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    if (pUVar16[3].klass != (UnityEngine_RectTransform_c *)0x0) {
      DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pUVar16[3].klass,0,(MethodInfo *)0x0);
    }
    pUVar4 = pUVar16[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    auVar21._0_8_ = CONCAT44(extraout_var,bVar7);
    pUVar11 = pUStack_68;
    pUVar15 = pUVar12;
    unaff_R12 = pUStack_60;
    __this_01 = pGStack_58;
    pUVar10 = pUStack_50;
    if ((char)bVar7 != '\0') goto Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip;
    x = (UnityEngine_RectTransform_o *)((UnityEngine_Object_Fields *)&pUVar16[2].fields)->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    auVar21._0_8_ = CONCAT44(extraout_var_00,bVar7);
    pUVar11 = pUStack_68;
    pUVar15 = pUVar13;
    unaff_R12 = pUStack_60;
    __this_01 = pGStack_58;
    pUVar10 = pUStack_50;
    if ((char)bVar7 != '\0') goto Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      auVar21._0_8_ = CONCAT44(extraout_var_02,bVar7);
      cVar6 = (char)bVar7;
      pUVar11 = pUStack_68;
      unaff_R12 = pUStack_60;
      __this_01 = pGStack_58;
      pUVar10 = pUStack_50;
    }
    else {
      bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      auVar21._0_8_ = CONCAT44(extraout_var_01,bVar7);
      cVar6 = (char)bVar7;
      pUVar11 = pUStack_68;
      unaff_R12 = pUStack_60;
      __this_01 = pGStack_58;
      pUVar10 = pUStack_50;
    }
    pUVar15 = pUVar14;
    pUStack_68 = pUVar11;
    pUStack_60 = unaff_R12;
    pGStack_58 = __this_01;
    pUStack_50 = pUVar10;
    if (cVar6 == '\0') goto Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip;
    if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    unaff_R15 = pUVar16[2].monitor;
    if (g_data_057a6932 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6932 = '\x01';
    }
    auVar21._0_8_ = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    endValue.fields.x = (float)auVar21._0_8_ * (float)0x3f666666;
    endValue.fields.y = (float)((ulong)auVar21._0_8_ >> 0x20) * (float)0x3f666666;
    endValue.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.9;
    t = DG_Tweening_ShortcutExtensions__DOScale(unaff_R15,endValue,0.1,(MethodInfo *)0x0);
    t_00 = (DG_Tweening_Tween_o *)
           DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(unaff_R14,t_00,(MethodInfo *)0x0);
    __this_02 = (UnityEngine_CanvasGroup_o *)((UnityEngine_Object_Fields *)&pUVar16[2].fields)->m_CachedPtr;
    if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
      fVar30 = UnityEngine_CanvasGroup__get_alpha(__this_02,(MethodInfo *)0x0);
      uStack_70._4_4_ = fVar30;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor();
      t_01 = DG_Tweening_DOVirtual__Float(uStack_70._4_4_,0.0,0.08,onVirtualUpdate,(MethodInfo *)0x0);
      pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(pDVar8,(DG_Tweening_Tween_o *)t_01,(MethodInfo *)0x0)
      ;
      action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
      DG_Tweening_TweenCallback___ctor();
      t_02 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                       ((Il2CppObject *)pDVar8,action,MethodInfo_Sequence_OnComplete_Sequence);
      pUVar9 = (UnityEngine_RectTransform_c *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_02,1,MethodInfo_Sequence_SetUpdate_Sequence);
      pUVar16[3].klass = pUVar9;
      il2cpp_runtime_helper_022b4080(pUVar16 + 3,pUVar9);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer((MethodInfo *)0x0);
    if (g_data_057a9d2c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d2c = '\x01';
    }
    pUVar4 = __this_02[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    pUVar4 = (UnityEngine_Object_o *)__this_02[3].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    pUVar11 = (UnityEngine_RectTransform_o *)__this_02[3].fields.m_CachedPtr;
    if (t_00 == (DG_Tweening_Tween_o *)0x0) {
      if (g_data_057a694c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
      }
      pUVar15 = *(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
    }
    else {
      pUVar15 = (UnityEngine_Vector2_Fields *)&(t_00->fields).isSequenced;
    }
    UVar19 = *pUVar15;
    pvVar1 = __this_02[3].monitor;
    __this_01 = __this_02[2].monitor;
    if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R12 = pUVar16;
    fVar30 = SUB84(pvVar1,0);
    fVar27 = (float)((ulong)pvVar1 >> 0x20);
    uVar25 = 0;
    uVar26 = 0;
    auVar21._0_8_ = 0;
  }
  else {
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59476;
    UVar33 = UnityEngine_RectTransform__get_rect(pUVar11,(MethodInfo *)0x0);
    UVar32.fields.x = UVar33.fields.m_XMin + UVar33.fields.m_Width * 0.5;
    UVar32.fields.y = UVar33.fields.m_YMin + UVar33.fields.m_Height * 0.5;
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b5948d;
    UVar32.fields.z = 0.0;
    UVar32 = UnityEngine_Transform__TransformPoint
                       ((UnityEngine_Transform_o *)pUVar11,UVar32,(MethodInfo *)0x0);
    local_38 = UVar32.fields._0_8_;
    local_48.x = UVar32.fields.z;
    __this_00 = (__this->fields)._placementCanvas;
    pUVar16 = (UnityEngine_RectTransform_o *)0x0;
    if (__this_00 == (UnityEngine_Canvas_o *)0x0)
    goto Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit;
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b594ab;
    cam = UnityEngine_Canvas__get_worldCamera(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pUStack_50 = (UnityEngine_RectTransform_o *)0x3b594c6;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b594da;
    worldPoint.fields.z = local_48.x;
    worldPoint.fields.x = local_38.x;
    worldPoint.fields.y = local_38.y;
    UVar19 = (UnityEngine_Vector2_Fields)
             UnityEngine_RectTransformUtility__WorldToScreenPoint(cam,worldPoint,(MethodInfo *)0x0);
    pUVar11 = (UnityEngine_RectTransform_o *)(__this->fields)._placementCanvas;
    UVar2 = (__this->fields)._tooltipSize.fields;
    __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)(__this->fields)._tooltipRect;
    x = pUStack_20;
    fVar30 = UVar2.x;
    fVar27 = UVar2.y;
    uVar25 = 0;
    uVar26 = 0;
    auVar21._0_8_ = extraout_XMM0_Qb;
    if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
      uStack_40 = 0;
      pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59509;
      local_48 = UVar2;
      local_38 = UVar19;
      uStack_30 = extraout_XMM0_Qb;
      il2cpp_runtime_helper_02337ed0();
      x = pUStack_20;
      fVar30 = local_48.x;
      fVar27 = local_48.y;
      uVar25 = (undefined4)uStack_40;
      uVar26 = uStack_40._4_4_;
      UVar19 = local_38;
      auVar21._0_8_ = uStack_30;
    }
  }
  *(UnityEngine_Transform_o **)((long)register0x00000020 + -8) = unaff_R15;
  *(DG_Tweening_Sequence_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x18) = x;
  *(float *)((long)register0x00000020 + -0x28) = fVar30;
  *(float *)((long)register0x00000020 + -0x24) = fVar27;
  *(undefined4 *)((long)register0x00000020 + -0x20) = uVar25;
  *(undefined4 *)((long)register0x00000020 + -0x1c) = uVar26;
  *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x58) = UVar19;
  *(undefined8 *)((long)register0x00000020 + -0x50) = auVar21._0_8_;
  pUVar16 = pUVar11;
  if (g_data_057a9d31 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59a5e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59a6a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59a76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    pUVar16 = (UnityEngine_RectTransform_o *)&TypeInfo_RectTransform;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59a82;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d31 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
  pUVar10 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59aa7;
    pUVar10 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
    rect = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar10 != (UnityEngine_RectTransform_o *)0x0) &&
       (rect = (UnityEngine_RectTransform_o *)0x0, pUVar10->klass == TypeInfo_RectTransform)) {
      rect = pUVar10;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59ad7;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59ae3;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59af5;
    pUVar10 = (UnityEngine_RectTransform_o *)
              UnityEngine_Canvas__get_worldCamera((UnityEngine_Canvas_o *)pUVar11,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59b10;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59b27;
    pUVar16 = rect;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x58),
               (UnityEngine_Camera_o *)pUVar10,(UnityEngine_Vector2_o *)((long)register0x00000020 + -0x60),
               (MethodInfo *)0x0);
    x = (UnityEngine_RectTransform_o *)0x0;
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59b3a;
      UVar33 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      fVar27 = UVar33.fields.m_Width;
      fVar24 = UVar33.fields.m_Height;
      auVar21._0_8_ = UVar33.fields._0_8_;
      auVar21._8_8_ = extraout_XMM0_Qb_00;
      fVar30 = *(float *)((long)register0x00000020 + -0x60);
      uVar31 = 0;
      x = (UnityEngine_RectTransform_o *)&TypeInfo_GisketchTooltipTrigger;
      if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
        *(float *)((long)register0x00000020 + -0x58) = fVar30;
        *(undefined4 *)((long)register0x00000020 + -0x54) = 0;
        *(undefined4 *)((long)register0x00000020 + -0x50) = 0;
        *(undefined4 *)((long)register0x00000020 + -0x4c) = 0;
        auVar3._8_4_ = uVar25;
        auVar3._0_8_ = UVar33.fields._8_8_;
        auVar3._12_4_ = uVar26;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar3;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar21;
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59b67;
        il2cpp_runtime_helper_02337ed0();
        auVar21._0_8_ = SUB168(*(undefined1 (*) [16])((long)register0x00000020 + -0x48),0);
        fVar27 = *(float *)((long)register0x00000020 + -0x38);
        fVar24 = *(float *)((long)register0x00000020 + -0x34);
        fVar30 = *(float *)((long)register0x00000020 + -0x58);
        uVar31 = *(uint *)((long)register0x00000020 + -0x54);
      }
      pUVar16 = TypeInfo_GisketchTooltipTrigger;
      if (__this_01 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
        auVar3 = *(undefined1 (*) [16])((long)register0x00000020 + -0x28);
        pfVar5 = (float *)((UnityEngine_Object_Fields *)&TypeInfo_GisketchTooltipTrigger[7].fields)->m_CachedPtr;
        fVar18 = (float)auVar21._0_8_;
        fVar30 = fVar30 + *pfVar5;
        fVar27 = (fVar27 + fVar18) - auVar3._0_4_;
        fVar22 = (float)((ulong)auVar21._0_8_ >> 0x20);
        fVar29 = pfVar5[1] + *(float *)((long)register0x00000020 + -0x5c);
        fVar28 = fVar22 + auVar3._4_4_;
        if (fVar30 <= fVar27) {
          fVar27 = fVar30;
        }
        fVar23 = fVar24 + fVar22;
        if (fVar29 <= fVar24 + fVar22) {
          fVar23 = fVar29;
        }
        uVar17 = -(uint)(fVar28 <= fVar29);
        auVar20._0_4_ =
             *(float *)((long)register0x00000020 + -0x60) -
             (float)(~-(uint)(fVar18 <= fVar30) & (uint)fVar18 | (uint)fVar27 & -(uint)(fVar18 <= fVar30));
        auVar20._4_4_ =
             *(float *)((long)register0x00000020 + -0x5c) -
             ((float)(~uVar17 & (uint)fVar28 | (uint)fVar23 & uVar17) - auVar3._4_4_);
        auVar20._8_4_ = 0.0 - (float)(~uVar31 & (uint)fVar22 | (uint)fVar24 & uVar31);
        auVar20._12_4_ = 0.0 - fVar22;
        auVar21 = divps(auVar20,auVar3);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59c0f;
        UnityEngine_RectTransform__set_pivot
                  ((UnityEngine_RectTransform_o *)__this_01,(UnityEngine_Vector2_o)auVar21._0_8_,
                   (MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59c1f;
        UnityEngine_RectTransform__set_anchoredPosition
                  ((UnityEngine_RectTransform_o *)__this_01,
                   (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x60),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59c2e;
  auVar21._0_8_ = il2cpp_runtime_helper_022b2c90();
  pUVar11 = x;
  pUVar15 = (UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x68);
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip:
  *(UnityEngine_RectTransform_o **)((long)pUVar15 + -8) = pUVar10;
  *(Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o **)((long)pUVar15 + -0x10) = __this_01;
  *(UnityEngine_RectTransform_o **)((long)pUVar15 + -0x18) = unaff_R12;
  *(UnityEngine_RectTransform_o **)((long)pUVar15 + -0x20) = pUVar11;
  *(undefined8 *)((long)pUVar15 + -0x28) = auVar21._0_8_;
  if (g_data_057a9d30 == '\0') {
    *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59c50;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d30 = '\x01';
  }
  pUVar9 = pUVar16[3].klass;
  pUVar16[3].klass = (UnityEngine_RectTransform_c *)0x0;
  *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59c6e;
  il2cpp_runtime_helper_022b4080(pUVar16 + 3);
  if (pUVar9 != (UnityEngine_RectTransform_c *)0x0) {
    *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59c7f;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pUVar9,0,(MethodInfo *)0x0);
  }
  pUVar9 = pUVar16[2].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59c9c;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59cac;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar9 = pUVar16[2].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59cc5;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59ccf;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
  }
  pUVar16[2].klass = (UnityEngine_RectTransform_c *)0x0;
  *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59ce1;
  il2cpp_runtime_helper_022b4080(pUVar16 + 2,0);
  pUVar16[2].monitor = (void *)0x0;
  *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59cf4;
  il2cpp_runtime_helper_022b4080(&pUVar16[2].monitor,0);
  ((UnityEngine_Object_Fields *)&pUVar16[2].fields)->m_CachedPtr = 0;
  *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59d07;
  il2cpp_runtime_helper_022b4080((UnityEngine_Object_Fields *)&pUVar16[2].fields,0);
  ((UnityEngine_Object_Fields *)&pUVar16[3].fields)->m_CachedPtr = 0;
  il2cpp_runtime_helper_022b4080((UnityEngine_Object_Fields *)&pUVar16[3].fields,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDeselect (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b59530

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDeselect
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  void *pvVar2;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_00;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_CanvasGroup_o *x;
  UnityEngine_Canvas_o *pUVar5;
  undefined1 auVar6 [16];
  char cVar7;
  bool_conflict bVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  DG_Tweening_Sequence_o *pDVar9;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar10;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *t_01;
  undefined4 extraout_var_02;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGVar11;
  undefined8 *unaff_RBX;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *rect;
  UnityEngine_CanvasGroup_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *unaff_R12;
  UnityEngine_Vector2_Fields *pUVar12;
  UnityEngine_RectTransform_o *unaff_R14;
  UnityEngine_Camera_o *unaff_R15;
  uint uVar13;
  float fVar14;
  float fVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Rect_o UVar26;
  undefined1 auStack_90 [8];
  UnityEngine_Vector2_Fields UStack_88;
  UnityEngine_Vector2_Fields UStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGStack_40;
  DG_Tweening_Sequence_o *pDStack_38;
  DG_Tweening_Sequence_o *pDStack_30;
  float fStack_24;
  
  if (g_data_057a9d2f == '\0') {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59030;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5903c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59048;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_DestroyTooltip);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59054;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PlayExit_b__26_0);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59060;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5906c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59078;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59084;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59090;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5909c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9d2f = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b590c0;
    il2cpp_runtime_helper_02337ed0();
  }
  pDStack_30 = (DG_Tweening_Sequence_o *)0x3b590cc;
  bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pDVar10 = (__this->fields)._tween;
  if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b590ef;
    DG_Tweening_TweenExtensions__Kill(pDVar10,0,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59105;
    il2cpp_runtime_helper_02337ed0();
  }
  pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59111;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  auVar16._0_8_ = CONCAT44(extraout_var,bVar8);
  if ((char)bVar8 == '\0') {
    x = (__this->fields)._group;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5912f;
      il2cpp_runtime_helper_02337ed0();
    }
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5913b;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    auVar16._0_8_ = CONCAT44(extraout_var_00,bVar8);
    if ((char)bVar8 == '\0') {
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592f8;
        il2cpp_runtime_helper_02337ed0();
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592ff;
        bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        auVar16._0_8_ = CONCAT44(extraout_var_02,bVar8);
        cVar7 = (char)bVar8;
      }
      else {
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59161;
        bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        auVar16._0_8_ = CONCAT44(extraout_var_01,bVar8);
        cVar7 = (char)bVar8;
      }
      if (cVar7 != '\0') {
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59181;
          il2cpp_runtime_helper_02337ed0();
        }
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59188;
        pDVar9 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pUVar4 = (__this->fields)._tooltipRect;
        if (g_data_057a6932 == '\0') {
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b591a5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6932 = '\x01';
        }
        auVar16._0_8_ = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        endValue.fields.x = (float)auVar16._0_8_ * (float)0x3f666666;
        endValue.fields.y = (float)((ulong)auVar16._0_8_ >> 0x20) * (float)0x3f666666;
        endValue.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.9;
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b591e8;
        t = DG_Tweening_ShortcutExtensions__DOScale
                      ((UnityEngine_Transform_o *)pUVar4,endValue,0.1,(MethodInfo *)0x0);
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b591ff;
        pDVar10 = (DG_Tweening_Tween_o *)
                  DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5920c;
        s = DG_Tweening_TweenSettingsExtensions__Join(pDVar9,pDVar10,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._group;
        if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59229;
          fStack_24 = UnityEngine_CanvasGroup__get_alpha(__this_01,(MethodInfo *)0x0);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5923e;
          onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59258;
          DG_Tweening_TweenCallback_float____ctor();
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59273;
          t_00 = DG_Tweening_DOVirtual__Float(fStack_24,0.0,0.08,onVirtualUpdate,(MethodInfo *)0x0);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59280;
          pDVar9 = DG_Tweening_TweenSettingsExtensions__Join(s,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59292;
          action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592ac;
          DG_Tweening_TweenCallback___ctor();
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592c1;
          t_01 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar9,action,MethodInfo_Sequence_OnComplete_Sequence);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592d8;
          pDVar10 = (DG_Tweening_Tween_o *)
                    DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_01,1,MethodInfo_Sequence_SetUpdate_Sequence);
          (__this->fields)._tween = pDVar10;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._tween,pDVar10);
          return;
        }
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5931f;
        pGStack_40 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)il2cpp_runtime_helper_022b2c90();
        uStack_48 = 0x3b59331;
        uStack_44 = 0;
        pDStack_38 = (DG_Tweening_Sequence_o *)x;
        pDStack_30 = pDVar9;
        Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer((MethodInfo *)0x0);
        pDVar9 = pDStack_38;
        pDStack_38 = pDStack_30;
        uStack_48 = SUB84(pDVar9,0);
        uStack_44 = (undefined4)((ulong)pDVar9 >> 0x20);
        pGStack_40 = __this;
        pDStack_30 = (DG_Tweening_Sequence_o *)pUVar4;
        if (g_data_057a9d2c == '\0') {
          uStack_78 = 0x3b58ef6;
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
          uStack_78 = 0x3b58f02;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9d2c = '\x01';
        }
        pUVar3 = __this_01[2].monitor;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          uStack_78 = 0x3b58f26;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_78 = 0x3b58f32;
        bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          pUVar3 = (UnityEngine_Object_o *)__this_01[3].fields.m_CachedPtr;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            uStack_78 = 0x3b58f4c;
            il2cpp_runtime_helper_02337ed0();
          }
          uStack_78 = 0x3b58f58;
          bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)__this_01[3].fields.m_CachedPtr
            ;
            if (pDVar10 == (DG_Tweening_Tween_o *)0x0) {
              if (g_data_057a694c == '\0') {
                uStack_78 = 0x3b58f90;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              pUVar12 = *(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
            }
            else {
              pUVar12 = (UnityEngine_Vector2_Fields *)&(pDVar10->fields).isSequenced;
            }
            UStack_80 = *pUVar12;
            pvVar2 = __this_01[3].monitor;
            unaff_R14 = __this_01[2].monitor;
            fStack_50 = SUB84(pvVar2,0);
            fStack_4c = (float)((ulong)pvVar2 >> 0x20);
            uVar20 = 0;
            uVar21 = 0;
            uStack_78 = 0;
            if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[2].fields._text + 4) == 0) {
              uStack_58 = 0;
              auStack_60._0_4_ = UStack_80.x;
              auStack_60._4_4_ = UStack_80.y;
              _uStack_68 = 0;
              auStack_70 = (undefined1  [8])pvVar2;
              uStack_78 = 0x3b58fda;
              il2cpp_runtime_helper_02337ed0();
              fStack_50 = (float)auStack_70._0_4_;
              fStack_4c = (float)auStack_70._4_4_;
              uVar20 = uStack_68;
              uVar21 = uStack_64;
              UStack_80 = (UnityEngine_Vector2_Fields)auStack_60;
              uStack_78 = uStack_58;
            }
            unaff_R12 = pGStack_40;
            unaff_RBX = (undefined8 *)CONCAT44(uStack_44,uStack_48);
            __this = __this_00;
            uStack_48 = uVar20;
            uStack_44 = uVar21;
            pGStack_40 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)unaff_RBX;
            if (g_data_057a9d31 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
              __this = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)&TypeInfo_RectTransform;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9d31 = '\x01';
            }
            UStack_88.x = 0.0;
            UStack_88.y = 0.0;
            unaff_R15 = (UnityEngine_Camera_o *)0x0;
            if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
              pGVar11 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              rect = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0;
              if ((pGVar11 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) &&
                 (rect = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0,
                 pGVar11->klass == TypeInfo_RectTransform)) {
                rect = pGVar11;
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar8 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                return;
              }
              unaff_R15 = UnityEngine_Canvas__get_worldCamera
                                    ((UnityEngine_Canvas_o *)__this_00,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this = rect;
              UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                        ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UStack_80,unaff_R15,
                         (UnityEngine_Vector2_o *)&UStack_88,(MethodInfo *)0x0);
              unaff_RBX = (undefined8 *)0x0;
              if (rect != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
                UVar26 = UnityEngine_RectTransform__get_rect
                                   ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
                auVar16._0_8_ = UVar26.fields._0_8_;
                auVar16._8_8_ = extraout_XMM0_Qb;
                unaff_RBX = &TypeInfo_GisketchTooltipTrigger;
                fVar22 = UVar26.fields.m_Width;
                fVar19 = UVar26.fields.m_Height;
                fVar24 = UStack_88.x;
                fVar25 = 0.0;
                if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[2].fields._text + 4) == 0) {
                  UStack_80 = (UnityEngine_Vector2_Fields)((ulong)UStack_88 & 0xffffffff);
                  uStack_78 = 0;
                  unique0x100002d8 = uVar20;
                  auStack_60 = (undefined1  [8])UVar26.fields._8_8_;
                  unique0x100002dc = uVar21;
                  _auStack_70 = auVar16;
                  il2cpp_runtime_helper_02337ed0();
                  auVar16._0_8_ = auStack_70;
                  fVar22 = (float)auStack_60._0_4_;
                  fVar19 = (float)auStack_60._4_4_;
                  fVar24 = UStack_80.x;
                  fVar25 = UStack_80.y;
                }
                __this = TypeInfo_GisketchTooltipTrigger;
                if (unaff_R14 != (UnityEngine_RectTransform_o *)0x0) {
                  auVar6._4_4_ = fStack_4c;
                  auVar6._0_4_ = fStack_50;
                  auVar6._8_4_ = uStack_48;
                  auVar6._12_4_ = uStack_44;
                  pUVar5 = TypeInfo_GisketchTooltipTrigger[1].fields._placementCanvas;
                  fVar14 = (float)auVar16._0_8_;
                  fVar24 = fVar24 + *(float *)&pUVar5->klass;
                  fVar22 = (fVar22 + fVar14) - fStack_50;
                  fVar17 = (float)((ulong)auVar16._0_8_ >> 0x20);
                  fVar23 = *(float *)((long)&pUVar5->klass + 4) + UStack_88.y;
                  if (fVar24 <= fVar22) {
                    fVar22 = fVar24;
                  }
                  fVar18 = fVar19 + fVar17;
                  if (fVar23 <= fVar19 + fVar17) {
                    fVar18 = fVar23;
                  }
                  uVar13 = -(uint)(fVar17 + fStack_4c <= fVar23);
                  auVar15._0_4_ =
                       UStack_88.x -
                       (float)(~-(uint)(fVar14 <= fVar24) & (uint)fVar14 |
                              (uint)fVar22 & -(uint)(fVar14 <= fVar24));
                  auVar15._4_4_ =
                       UStack_88.y -
                       ((float)(~uVar13 & (uint)(fVar17 + fStack_4c) | (uint)fVar18 & uVar13) - fStack_4c);
                  auVar15._8_4_ = 0.0 - (float)(~(uint)fVar25 & (uint)fVar17 | (uint)fVar19 & (uint)fVar25);
                  auVar15._12_4_ = 0.0 - fVar17;
                  auVar16 = divps(auVar15,auVar6);
                  UnityEngine_RectTransform__set_pivot
                            (unaff_R14,(UnityEngine_Vector2_o)auVar16._0_8_,(MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_anchoredPosition
                            (unaff_R14,(UnityEngine_Vector2_o)UStack_88,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            auVar16._0_8_ = il2cpp_runtime_helper_022b2c90();
            register0x00000020 = (BADSPACEBASE *)auStack_90;
            goto Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip;
          }
        }
        return;
      }
    }
  }
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip:
  *(UnityEngine_Camera_o **)((long)register0x00000020 + -8) = unaff_R15;
  *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o **)((long)register0x00000020 + -0x18) = unaff_R12;
  *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x28) = auVar16._0_8_;
  if (g_data_057a9d30 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c50;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d30 = '\x01';
  }
  pDVar10 = (__this->fields)._tween;
  (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c6e;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tween);
  if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c7f;
    DG_Tweening_TweenExtensions__Kill(pDVar10,0,(MethodInfo *)0x0);
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c9c;
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._tooltip;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59cac;
  bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59cc5;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59ccf;
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
  }
  (__this->fields)._tooltip = (UnityEngine_GameObject_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59ce1;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  (__this->fields)._tooltipRect = (UnityEngine_RectTransform_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59cf4;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltipRect,0);
  (__this->fields)._group = (UnityEngine_CanvasGroup_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59d07;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._group,0);
  (__this->fields)._placementCanvas = (UnityEngine_Canvas_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._placementCanvas,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$ShowTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3b58560

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ShowTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  Il2CppClass *pIVar2;
  UnityEngine_RectTransform_o *__this_00;
  float *pfVar3;
  UnityEngine_RectTransform_c *pUVar4;
  float fVar5;
  UnityEngine_Vector2_Fields UVar6;
  undefined1 auVar7 [16];
  bool_conflict bVar8;
  int32_t weight;
  UnityEngine_Canvas_o *pUVar9;
  System_Type_array *components;
  System_Type_array *pSVar10;
  long lVar11;
  System_RuntimeTypeHandle_o SVar12;
  System_String_o *pSVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_RectTransform_o *pUVar15;
  UnityEngine_CanvasGroup_o *pUVar16;
  UnityEngine_Canvas_o *pUVar17;
  System_Type_array *pSVar18;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  TMPro_TMP_FontAsset_o *value;
  System_String_o **ppSVar19;
  UnityEngine_RectTransform_o *pUVar20;
  UnityEngine_Camera_o *cam;
  MethodInfo *pMVar21;
  UnityEngine_RectTransform_o *rect;
  long lVar22;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar23;
  UnityEngine_RectTransform_c **ppUVar24;
  MethodInfo *in_R8;
  System_String_o *unaff_R12;
  UnityEngine_Vector2_Fields *pUVar25;
  uint uVar26;
  float fVar27;
  undefined4 extraout_XMM0_Db;
  UnityEngine_Vector2_o UVar28;
  UnityEngine_Vector2_o value_00;
  float fVar31;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar32;
  float fVar33;
  undefined8 extraout_XMM1_Qb;
  undefined8 uVar35;
  undefined8 extraout_XMM1_Qb_00;
  undefined8 extraout_XMM1_Qb_01;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  UnityEngine_Color_o UVar40;
  UnityEngine_Color_o fallback;
  UnityEngine_Rect_Fields UVar41;
  UnityEngine_Vector2_Fields UStack_c8;
  UnityEngine_Vector2_Fields UStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  ulong uStack_90;
  System_Type_array *pSStack_88;
  System_Type_array *pSStack_80;
  UnityEngine_Canvas_o *pUStack_78;
  System_Type_array *pSStack_70;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_60;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *local_58;
  float local_4c;
  undefined1 local_48 [16];
  undefined1 auVar34 [16];
  
  if (g_data_057a9d28 == '\0') {
    pSStack_70 = (System_Type_array *)0x3b5858a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_GetComponentInParent_Canvas);
    pSStack_70 = (System_Type_array *)0x3b58596;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pSStack_70 = (System_Type_array *)0x3b585a2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
    pSStack_70 = (System_Type_array *)0x3b585ae;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_AddComponent_Image);
    pSStack_70 = (System_Type_array *)0x3b585ba;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
    pSStack_70 = (System_Type_array *)0x3b585c6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pSStack_70 = (System_Type_array *)0x3b585d2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    pSStack_70 = (System_Type_array *)0x3b585de;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
    pSStack_70 = (System_Type_array *)0x3b585ea;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTypography);
    pSStack_70 = (System_Type_array *)0x3b585f6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_GetValueOrDefault);
    pSStack_70 = (System_Type_array *)0x3b58602;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_GetValueOrDefault);
    pSStack_70 = (System_Type_array *)0x3b5860e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pSStack_70 = (System_Type_array *)0x3b5861a;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    pSStack_70 = (System_Type_array *)0x3b58626;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_70 = (System_Type_array *)0x3b58632;
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    pSStack_70 = (System_Type_array *)0x3b5863e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    pSStack_70 = (System_Type_array *)0x3b5864a;
    il2cpp_runtime_helper_023445d0(&"tooltipText");
    pSStack_70 = (System_Type_array *)0x3b58656;
    il2cpp_runtime_helper_023445d0(&"AoTTG Tooltip Label");
    pSStack_70 = (System_Type_array *)0x3b58662;
    il2cpp_runtime_helper_023445d0(&"tooltip");
    pSStack_70 = (System_Type_array *)0x3b5866e;
    il2cpp_runtime_helper_023445d0(&"text");
    pSStack_70 = (System_Type_array *)0x3b5867a;
    il2cpp_runtime_helper_023445d0(&"AoTTG Tooltip");
    pSStack_70 = (System_Type_array *)0x3b58686;
    il2cpp_runtime_helper_023445d0(&"ink");
    g_data_057a9d28 = '\x01';
  }
  local_58 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  local_60 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
  pSStack_70 = (System_Type_array *)0x3b586aa;
  bVar8 = System_String__IsNullOrEmpty((__this->fields)._text,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_70 = (System_Type_array *)0x3b586cf;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_70 = (System_Type_array *)0x3b586db;
  bVar8 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pSStack_70 = (System_Type_array *)0x3b586f5;
  pUVar9 = (UnityEngine_Canvas_o *)
           UnityEngine_Component__GetComponentInParent_object_((UnityEngine_Component_o *)__this,MethodInfo_Canvas_GetComponentInParent_Canvas)
  ;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_70 = (System_Type_array *)0x3b5870a;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_70 = (System_Type_array *)0x3b58716;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  (__this->fields)._placementCanvas = pUVar9;
  pSStack_70 = (System_Type_array *)0x3b5872e;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._placementCanvas,pUVar9);
  pSStack_70 = (System_Type_array *)0x3b58743;
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar12 = TypeRef_RectTransform;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    pSStack_70 = (System_Type_array *)0x3b5876c;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_70 = (System_Type_array *)0x3b58776;
  pSVar10 = (System_Type_array *)System_Type__GetTypeFromHandle(SVar12,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_03b58eb3:
    pSStack_70 = (System_Type_array *)0x3b58eb8;
    il2cpp_runtime_helper_022b2c90();
    pUVar17 = pUVar9;
    pSVar18 = components;
  }
  else {
    SVar12.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar10;
    pUVar17 = pUVar9;
    pSVar18 = components;
    if (pSVar10 != (System_Type_array *)0x0) {
      pSStack_70 = (System_Type_array *)0x3b58796;
      lVar11 = il2cpp_runtime_helper_023051f0(pSVar10);
      if (lVar11 == 0) goto label_03b58ebd;
    }
    if ((int)components->max_length != 0) {
      unaff_R12 = (System_String_o *)&(__this->fields)._tooltip;
      components->m_Items[0] = (System_Type_o *)pSVar10;
      pSStack_70 = (System_Type_array *)0x3b587c1;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar10);
      pSStack_70 = (System_Type_array *)0x3b587d0;
      SVar12.fields.value = (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      pSStack_70 = (System_Type_array *)0x3b587ea;
      UnityEngine_GameObject___ctor_4dfc440
                ((UnityEngine_GameObject_o *)SVar12.fields.value,"AoTTG Tooltip",components,(MethodInfo *)0x0);
      *(System_RuntimeTypeHandle_Fields *)unaff_R12 = SVar12.fields.value;
      pSStack_70 = (System_Type_array *)0x3b587f9;
      il2cpp_runtime_helper_022b4080(unaff_R12);
      if (*(UnityEngine_GameObject_o **)unaff_R12 != (UnityEngine_GameObject_o *)0x0) {
        pSStack_70 = (System_Type_array *)0x3b5880d;
        pSVar13 = (System_String_o *)
                  UnityEngine_GameObject__get_transform
                            (*(UnityEngine_GameObject_o **)unaff_R12,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Canvas_o *)0x0) {
          pSStack_70 = (System_Type_array *)0x3b58823;
          pUVar14 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar9,(MethodInfo *)0x0);
          SVar12.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar13;
          if (pSVar13 != (System_String_o *)0x0) {
            pSStack_70 = (System_Type_array *)0x3b5883b;
            UnityEngine_Transform__SetParent_4e09e30
                      ((UnityEngine_Transform_o *)pSVar13,pUVar14,0,(MethodInfo *)0x0);
            if (*(UnityEngine_GameObject_o **)unaff_R12 != (UnityEngine_GameObject_o *)0x0) {
              pSStack_70 = (System_Type_array *)0x3b58857;
              pUVar15 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__GetComponent_object_
                                  (*(UnityEngine_GameObject_o **)unaff_R12,MethodInfo_RectTransform_GetComponent_RectTransform);
              (__this->fields)._tooltipRect = pUVar15;
              pSStack_70 = (System_Type_array *)0x3b58867;
              il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltipRect);
              pUVar15 = (__this->fields)._tooltipRect;
              if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                pSStack_70 = (System_Type_array *)0x3b58883;
                UnityEngine_RectTransform__set_pivot
                          (pUVar15,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
                SVar12.fields.value = *(System_RuntimeTypeHandle_Fields *)unaff_R12;
                if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
                  pSStack_70 = (System_Type_array *)0x3b588b2;
                  il2cpp_runtime_helper_02337ed0();
                }
                if (g_data_057a9d2a == '\0') {
                  pSStack_70 = (System_Type_array *)0x3b588c7;
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
                  g_data_057a9d2a = '\x01';
                }
                if (SVar12.fields.value != 0) {
                  pSStack_70 = (System_Type_array *)0x3b588e9;
                  pSVar13 = (System_String_o *)
                            UnityEngine_GameObject__AddComponent_object_
                                      ((UnityEngine_GameObject_o *)SVar12.fields.value,MethodInfo_Canvas_AddComponent_Canvas);
                  if (pSVar13 != (System_String_o *)0x0) {
                    pSStack_70 = (System_Type_array *)0x3b58904;
                    UnityEngine_Canvas__set_overrideSorting
                              ((UnityEngine_Canvas_o *)pSVar13,1,(MethodInfo *)0x0);
                    pSStack_70 = (System_Type_array *)0x3b58913;
                    UnityEngine_Canvas__set_sortingOrder
                              ((UnityEngine_Canvas_o *)pSVar13,0x3b6,(MethodInfo *)0x0);
                    SVar12.fields.value =
                         (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)pSVar13;
                    if (*(UnityEngine_GameObject_o **)unaff_R12 != (UnityEngine_GameObject_o *)0x0) {
                      pSStack_70 = (System_Type_array *)0x3b5892f;
                      pUVar16 = (UnityEngine_CanvasGroup_o *)
                                UnityEngine_GameObject__AddComponent_object_
                                          (*(UnityEngine_GameObject_o **)unaff_R12,MethodInfo_CanvasGroup_AddComponent_CanvasGroup);
                      SVar12.fields.value = (System_RuntimeTypeHandle_Fields)&(__this->fields)._group;
                      (__this->fields)._group = pUVar16;
                      pSStack_70 = (System_Type_array *)0x3b58942;
                      il2cpp_runtime_helper_022b4080(SVar12.fields.value);
                      pUVar16 = (__this->fields)._group;
                      if (pUVar16 != (UnityEngine_CanvasGroup_o *)0x0) {
                        pSStack_70 = (System_Type_array *)0x3b58958;
                        UnityEngine_CanvasGroup__set_blocksRaycasts(pUVar16,0,(MethodInfo *)0x0);
                        if (*(UnityEngine_CanvasGroup_o **)SVar12.fields.value !=
                            (UnityEngine_CanvasGroup_o *)0x0) {
                          pSStack_70 = (System_Type_array *)0x3b5896d;
                          UnityEngine_CanvasGroup__set_interactable
                                    (*(UnityEngine_CanvasGroup_o **)SVar12.fields.value,0,(MethodInfo *)0x0);
                          if (*(UnityEngine_GameObject_o **)unaff_R12 != (UnityEngine_GameObject_o *)0x0) {
                            pSStack_70 = (System_Type_array *)0x3b58989;
                            pUVar17 = (UnityEngine_Canvas_o *)
                                      UnityEngine_GameObject__AddComponent_object_
                                                (*(UnityEngine_GameObject_o **)unaff_R12,MethodInfo_Image_AddComponent_Image);
                            if (pUVar17 != (UnityEngine_Canvas_o *)0x0) {
                              pSStack_70 = (System_Type_array *)0x3b589aa;
                              (*(code *)(((UnityEngine_Object_VTable *)&pUVar17->klass[1].vtable)->_1_Finalize
                                        ).method)(pUVar17,0,
                                                  (((UnityEngine_Object_VTable *)&pUVar17->klass[1].vtable)->
                                                  _2_GetHashCode).methodPtr);
                              SVar12.fields.value =
                                   (System_RuntimeTypeHandle_Fields)
                                   (System_RuntimeTypeHandle_Fields)"tooltip";
                              if (g_data_057a9d29 == '\0') {
                                pSStack_70 = (System_Type_array *)0x3b589c9;
                                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
                                g_data_057a9d29 = '\x01';
                              }
                              pGVar23 = (__this->fields)._theme;
                              pUVar9 = pUVar17;
                              if (pGVar23 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                components = (System_Type_array *)&TypeInfo_Type;
                                if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
                                  pSStack_70 = (System_Type_array *)0x3b589f5;
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pGVar23 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)
                                          **(long **)(TypeInfo_GisketchTheme + 0xb8);
                                if (pGVar23 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                goto label_03b58eb3;
                              }
                              pMVar21 = (MethodInfo *)0x0;
                              pSStack_70 = (System_Type_array *)0x3b58a1e;
                              Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
                                        (pGVar23,(System_String_o *)SVar12.fields.value,&local_58,
                                         (MethodInfo *)0x0);
                              pSStack_70 = (System_Type_array *)0x3b58a2f;
                              Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ApplyShadow
                                        (__this,(__this->fields)._tooltip,local_58,pMVar21);
                              pSStack_70 = (System_Type_array *)0x3b58a3d;
                              SVar12.fields.value =
                                   (System_RuntimeTypeHandle_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
                              pSStack_70 = (System_Type_array *)0x3b58a51;
                              pSVar18 = (System_Type_array *)
                                        System_Type__GetTypeFromHandle(TypeRef_RectTransform,(MethodInfo *)0x0);
                              if (SVar12.fields.value != 0) {
                                if (pSVar18 != (System_Type_array *)0x0) {
                                  pSStack_70 = (System_Type_array *)0x3b58a71;
                                  lVar11 = il2cpp_runtime_helper_023051f0(pSVar18);
                                  if (lVar11 == 0) goto label_03b58ebd;
                                }
                                if ((int)((System_Type_array *)SVar12.fields.value)->max_length == 0)
                                goto label_03b58eb8;
                                ((System_Type_array *)SVar12.fields.value)->m_Items[0] =
                                     (System_Type_o *)pSVar18;
                                pSStack_70 = (System_Type_array *)0x3b58a97;
                                il2cpp_runtime_helper_022b4080(((System_Type_array *)SVar12.fields.value)->m_Items,pSVar18
                                                  );
                                pSStack_70 = (System_Type_array *)0x3b58aa6;
                                __this_01 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
                                pSStack_70 = (System_Type_array *)0x3b58ac0;
                                UnityEngine_GameObject___ctor_4dfc440
                                          (__this_01,"AoTTG Tooltip Label",(System_Type_array *)SVar12.fields.value,
                                           (MethodInfo *)0x0);
                                components = pSVar18;
                                if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
                                  pSStack_70 = (System_Type_array *)0x3b58adb;
                                  pSVar10 = (System_Type_array *)
                                            UnityEngine_GameObject__AddComponent_object_
                                                      (__this_01,MethodInfo_TextMeshProUGUI_AddComponent_TextMeshProUGUI);
                                  if (pSVar10 != (System_Type_array *)0x0) {
                                    pSStack_70 = (System_Type_array *)0x3b58af1;
                                    pUVar14 = TMPro_TMP_Text__get_transform
                                                        ((TMPro_TMP_Text_o *)pSVar10,(MethodInfo *)0x0);
                                    components = pSVar10;
                                    if (*(UnityEngine_GameObject_o **)unaff_R12 !=
                                        (UnityEngine_GameObject_o *)0x0) {
                                      pSStack_70 = (System_Type_array *)0x3b58b08;
                                      parent = UnityEngine_GameObject__get_transform
                                                         (*(UnityEngine_GameObject_o **)unaff_R12,
                                                          (MethodInfo *)0x0);
                                      SVar12.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
                                        pSStack_70 = (System_Type_array *)0x3b58b20;
                                        UnityEngine_Transform__SetParent_4e09e30
                                                  (pUVar14,parent,0,(MethodInfo *)0x0);
                                        pSStack_70 = (System_Type_array *)0x3b58b32;
                                        pUVar15 = (UnityEngine_RectTransform_o *)
                                                  UnityEngine_Component__GetComponent_object_
                                                            ((UnityEngine_Component_o *)pSVar10,MethodInfo_RectTransform_GetComponent_RectTransform);
                                        if (g_data_057a694c == '\0') {
                                          pSStack_70 = (System_Type_array *)0x3b58b4a;
                                          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                          g_data_057a694c = '\x01';
                                        }
                                        SVar12.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                        if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                          pSStack_70 = (System_Type_array *)0x3b58b7a;
                                          UnityEngine_RectTransform__set_anchorMin
                                                    (pUVar15,(UnityEngine_Vector2_o)
                                                             **(UnityEngine_Vector2_Fields **)
                                                               (TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
                                          if (g_data_057a9c86 == '\0') {
                                            pSStack_70 = (System_Type_array *)0x3b58b8f;
                                            il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                                            g_data_057a9c86 = '\x01';
                                          }
                                          pSStack_70 = (System_Type_array *)0x3b58bb0;
                                          UnityEngine_RectTransform__set_anchorMax
                                                    (pUVar15,(UnityEngine_Vector2_o)
                                                             *(UnityEngine_Vector2_Fields *)
                                                              (*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                                                     (MethodInfo *)0x0);
                                          local_48._0_12_ = ZEXT812(0x41400000);
                                          local_48._12_4_ = 0;
                                          if ((local_58 !=
                                               (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                                             ((char)(local_58->fields).padding.fields.hasValue != '\0')) {
                                            pSStack_70 = (System_Type_array *)0x3b58be0;
                                            local_48._0_4_ =
                                                 System_Nullable_float___get_Value
                                                           ((System_Nullable_float__o)
                                                            &(local_58->fields).padding,MethodInfo_Single_get_Value);
                                            local_48._4_4_ = extraout_XMM0_Db;
                                            local_48._8_4_ = extraout_XMM0_Dc;
                                            local_48._12_4_ = extraout_XMM0_Dd;
                                          }
                                          UVar28.fields.y = (float)local_48._0_4_;
                                          UVar28.fields.x = (float)local_48._0_4_;
                                          pSStack_70 = (System_Type_array *)0x3b58bf8;
                                          UnityEngine_RectTransform__set_offsetMin
                                                    (pUVar15,UVar28,(MethodInfo *)0x0);
                                          pSStack_70 = (System_Type_array *)0x3b58c15;
                                          UnityEngine_RectTransform__set_offsetMax
                                                    (pUVar15,(UnityEngine_Vector2_o)
                                                             (CONCAT44(local_48._0_4_,local_48._0_4_) ^
                                                             0x8000000080000000),(MethodInfo *)0x0);
                                          SVar12.fields.value =
                                               (System_RuntimeTypeHandle_Fields)
                                               (System_RuntimeTypeHandle_Fields)"tooltipText";
                                          if (g_data_057a9d29 == '\0') {
                                            pSStack_70 = (System_Type_array *)0x3b58c34;
                                            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
                                            g_data_057a9d29 = '\x01';
                                          }
                                          pGVar23 = (__this->fields)._theme;
                                          if (pGVar23 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                            if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
                                              pSStack_70 = (System_Type_array *)0x3b58c5d;
                                              il2cpp_runtime_helper_02337ed0();
                                            }
                                            pGVar23 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)
                                                      **(long **)(TypeInfo_GisketchTheme + 0xb8);
                                            if (pGVar23 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)
                                            goto label_03b58eb3;
                                          }
                                          pSStack_70 = (System_Type_array *)0x3b58c83;
                                          Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
                                                    (pGVar23,(System_String_o *)SVar12.fields.value,&local_60,
                                                     (MethodInfo *)0x0);
                                          fVar39 = 18.0;
                                          if ((local_60 !=
                                               (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                                             (0.0 < (local_60->fields).fontSize.fields.value)) {
                                            pSStack_70 = (System_Type_array *)0x3b58cb5;
                                            fVar39 = System_Nullable_float___get_Value
                                                               ((System_Nullable_float__o)
                                                                &(local_60->fields).fontSize,MethodInfo_Single_get_Value);
                                          }
                                          pSStack_70 = (System_Type_array *)0x3b58cbf;
                                          TMPro_TMP_Text__set_fontSize
                                                    ((TMPro_TMP_Text_o *)pSVar10,fVar39,(MethodInfo *)0x0);
                                          if (local_60 ==
                                              (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                            weight = 400;
                                            unaff_R12 = "text";
                                          }
                                          else {
                                            unaff_R12 = (local_60->fields).fontFamily;
                                            pSStack_70 = (System_Type_array *)0x3b58ce5;
                                            weight = System_Nullable_int___GetValueOrDefault_37e7730
                                                               ((System_Nullable_int__o)
                                                                &(local_60->fields).fontWeight,400,
                                                                MethodInfo_Int32_GetValueOrDefault);
                                          }
                                          SVar12.fields.value =
                                               (System_RuntimeTypeHandle_Fields)(__this->fields)._text;
                                          if (*(int *)(TypeInfo_GisketchTypography + 0xe4) == 0) {
                                            pSStack_70 = (System_Type_array *)0x3b58d14;
                                            il2cpp_runtime_helper_02337ed0();
                                          }
                                          pSStack_70 = (System_Type_array *)0x3b58d23;
                                          value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                                                            (unaff_R12,weight,
                                                             (System_String_o *)SVar12.fields.value,0,in_R8);
                                          pSStack_70 = (System_Type_array *)0x3b58d30;
                                          TMPro_TMP_Text__set_font
                                                    ((TMPro_TMP_Text_o *)pSVar10,value,(MethodInfo *)0x0);
                                          pIVar2 = (pSVar10->obj).klass;
                                          pSStack_70 = (System_Type_array *)0x3b58d47;
                                          (*pIVar2->vtable[0x42].methodPtr)
                                                    (pSVar10,(__this->fields)._text,
                                                     pIVar2->vtable[0x42].method);
                                          pGVar23 = (__this->fields)._theme;
                                          if (pGVar23 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                            if (local_60 ==
                                                (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                              ppSVar19 = (System_String_o **)&"ink";
                                            }
                                            else {
                                              ppSVar19 = &(local_60->fields).textColor;
                                            }
                                            SVar12.fields.value = (System_RuntimeTypeHandle_Fields)0;
                                            pSStack_70 = (System_Type_array *)0x3b58d83;
                                            UVar40.fields.b = 1.0;
                                            UVar40.fields.a = 1.0;
                                            UVar40.fields.r = 1.0;
                                            UVar40.fields.g = 1.0;
                                            UVar40 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                               (pGVar23,*ppSVar19,UVar40,(MethodInfo *)0x0);
                                            pIVar2 = (pSVar10->obj).klass;
                                            pSStack_70 = (System_Type_array *)0x3b58d96;
                                            (*pIVar2->vtable[0x17].methodPtr)
                                                      (UVar40.fields._0_8_,UVar40.fields._8_8_,pSVar10,
                                                       pIVar2->vtable[0x17].method);
                                            pIVar2 = (pSVar10->obj).klass;
                                            pSStack_70 = (System_Type_array *)0x3b58dab;
                                            (*pIVar2->vtable[0x19].methodPtr)
                                                      (pSVar10,0,pIVar2->vtable[0x19].method);
                                            pSStack_70 = (System_Type_array *)0x3b58dba;
                                            TMPro_TMP_Text__set_enableWordWrapping
                                                      ((TMPro_TMP_Text_o *)pSVar10,1,(MethodInfo *)0x0);
                                            pGVar23 = (__this->fields)._theme;
                                            if (local_58 !=
                                                (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                                              SVar12.fields.value =
                                                   (System_RuntimeTypeHandle_Fields)
                                                   (local_58->fields).background;
                                            }
                                            if (pGVar23 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                              pSStack_70 = (System_Type_array *)0x3b58ded;
                                              fallback.fields.b = 0.07;
                                              fallback.fields.a = 0.96;
                                              fallback.fields.r = 0.05;
                                              fallback.fields.g = 0.05;
                                              UVar40 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                                 (pGVar23,(System_String_o *)
                                                                          SVar12.fields.value,fallback,
                                                                  (MethodInfo *)0x0);
                                              pSStack_70 = (System_Type_array *)0x3b58e00;
                                              (**(code **)&pUVar17->klass[1]._2.naturalAligment)
                                                        (UVar40.fields._0_8_,UVar40.fields._8_8_,pUVar17,
                                                         (((UnityEngine_Object_VTable *)
                                                          &pUVar17->klass[1].vtable)->_0_Equals).methodPtr);
                                              if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
                                                pSStack_70 = (System_Type_array *)0x3b58e18;
                                                il2cpp_runtime_helper_02337ed0();
                                              }
                                              local_48._0_4_ = local_48._0_4_ + local_48._0_4_;
                                              local_4c = 420.0 - (float)local_48._0_4_;
                                              pIVar2 = (pSVar10->obj).klass;
                                              pSStack_70 = (System_Type_array *)0x3b58e4b;
                                              pSVar13 = (System_String_o *)
                                                        (*pIVar2->vtable[0x41].methodPtr)
                                                                  (pSVar10,pIVar2->vtable[0x41].method);
                                              pSStack_70 = (System_Type_array *)0x3b58e61;
                                              UVar28 = TMPro_TMP_Text__GetPreferredValues_4c70170
                                                                 ((TMPro_TMP_Text_o *)pSVar10,pSVar13,local_4c
                                                                  ,0.0,(MethodInfo *)0x0);
                                              fVar32 = (float)local_48._0_4_ + UVar28.fields.x;
                                              fVar39 = 420.0;
                                              if (fVar32 <= 420.0) {
                                                fVar39 = fVar32;
                                              }
                                              fVar32 = UVar28.fields.y + (float)local_48._0_4_;
                                              UVar6.y = fVar32;
                                              UVar6.x = fVar39;
                                              (__this->fields)._tooltipSize.fields = UVar6;
                                              pUVar15 = (__this->fields)._tooltipRect;
                                              if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
                                                value_00.fields.y = fVar32;
                                                value_00.fields.x = fVar39;
                                                pMVar21 = (MethodInfo *)0x0;
                                                pSStack_70 = (System_Type_array *)0x3b58e9c;
                                                UnityEngine_RectTransform__set_sizeDelta
                                                          (pUVar15,value_00,(MethodInfo *)0x0);
                                                pSStack_70 = (System_Type_array *)0x3b58ea4;
                                                Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayEnter
                                                          (__this,pMVar21);
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
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto label_03b58eb3;
    }
  }
label_03b58eb8:
  pSStack_70 = (System_Type_array *)0x3b58ebd;
  il2cpp_runtime_helper_022b2ca0();
label_03b58ebd:
  pSStack_70 = (System_Type_array *)0x3b58ec2;
  lVar11 = il2cpp_runtime_helper_0231b270();
  lVar22 = 0;
  pSStack_70 = (System_Type_array *)0x3b58ecc;
  il2cpp_runtime_helper_022b2b10();
  pSStack_88 = (System_Type_array *)SVar12.fields.value;
  pSStack_80 = (System_Type_array *)unaff_R12;
  pUStack_78 = pUVar17;
  pSStack_70 = pSVar18;
  if (g_data_057a9d2c == '\0') {
    uStack_b8 = 0x3b58ef6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
    uStack_b8 = 0x3b58f02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d2c = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)(lVar11 + 0x38);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_b8 = 0x3b58f26;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_b8 = 0x3b58f32;
  bVar8 = UnityEngine_Object__op_Equality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar1 = *(UnityEngine_Object_o **)(lVar11 + 0x58);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_b8 = 0x3b58f4c;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_b8 = 0x3b58f58;
    bVar8 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      pUVar15 = *(UnityEngine_RectTransform_o **)(lVar11 + 0x58);
      if (lVar22 == 0) {
        if (g_data_057a694c == '\0') {
          uStack_b8 = 0x3b58f90;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        pUVar25 = *(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
      }
      else {
        pUVar25 = (UnityEngine_Vector2_Fields *)(lVar22 + 0x104);
      }
      UStack_c0 = *pUVar25;
      __this_00 = *(UnityEngine_RectTransform_o **)(lVar11 + 0x38);
      uStack_90 = *(ulong *)(lVar11 + 0x50);
      uVar35 = 0;
      uStack_b8 = 0;
      if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
        local_a0._8_8_ = 0;
        local_a0._0_4_ = UStack_c0.x;
        local_a0._4_4_ = UStack_c0.y;
        local_b0._8_8_ = 0;
        local_b0._0_8_ = *(ulong *)(lVar11 + 0x50);
        uStack_b8 = 0x3b58fda;
        il2cpp_runtime_helper_02337ed0();
        uStack_90 = local_b0._0_8_;
        uVar35 = local_b0._8_8_;
        UStack_c0 = (UnityEngine_Vector2_Fields)local_a0._0_8_;
        uStack_b8 = local_a0._8_8_;
      }
      pSStack_80 = pSStack_88;
      ppUVar24 = &pUVar15->klass;
      pSStack_88 = (System_Type_array *)uVar35;
      if (g_data_057a9d31 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
        ppUVar24 = &TypeInfo_RectTransform;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9d31 = '\x01';
        uVar35 = extraout_XMM1_Qb;
      }
      UStack_c8.x = 0.0;
      UStack_c8.y = 0.0;
      if (pUVar15 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar20 = (UnityEngine_RectTransform_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar15,(MethodInfo *)0x0);
        rect = (UnityEngine_RectTransform_o *)0x0;
        if ((pUVar20 != (UnityEngine_RectTransform_o *)0x0) &&
           (rect = (UnityEngine_RectTransform_o *)0x0, pUVar20->klass == TypeInfo_RectTransform)) {
          rect = pUVar20;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          uVar35 = extraout_XMM1_Qb_00;
        }
        bVar8 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 != '\0') {
          return;
        }
        cam = UnityEngine_Canvas__get_worldCamera((UnityEngine_Canvas_o *)pUVar15,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          uVar35 = extraout_XMM1_Qb_01;
        }
        ppUVar24 = &rect->klass;
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  (rect,(UnityEngine_Vector2_o)UStack_c0,cam,(UnityEngine_Vector2_o *)&UStack_c8,
                   (MethodInfo *)0x0);
        if (rect != (UnityEngine_RectTransform_o *)0x0) {
          UVar41 = (UnityEngine_Rect_Fields)UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
          auVar34._0_8_ = UVar41._8_8_;
          auVar34._8_8_ = uVar35;
          auVar30._0_8_ = UVar41._0_8_;
          auVar30._8_8_ = extraout_XMM0_Qb;
          fVar39 = UStack_c8.x;
          fVar32 = 0.0;
          if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
            UStack_c0 = (UnityEngine_Vector2_Fields)((ulong)UStack_c8 & 0xffffffff);
            uStack_b8 = 0;
            local_b0 = auVar30;
            local_a0 = auVar34;
            il2cpp_runtime_helper_02337ed0();
            UVar41.m_Width = (float)(int)local_a0._0_8_;
            UVar41.m_Height = (float)(int)((ulong)local_a0._0_8_ >> 0x20);
            UVar41.m_XMin = (float)(int)local_b0._0_8_;
            UVar41.m_YMin = (float)(int)((ulong)local_b0._0_8_ >> 0x20);
            fVar39 = UStack_c0.x;
            fVar32 = UStack_c0.y;
          }
          ppUVar24 = &TypeInfo_GisketchTooltipTrigger->klass;
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            auVar7._8_8_ = pSStack_88;
            auVar7._0_8_ = uStack_90;
            fVar5 = (float)(uStack_90 >> 0x20);
            pfVar3 = (float *)TypeInfo_GisketchTooltipTrigger[7].fields.m_CachedPtr;
            fVar27 = UVar41.m_XMin;
            fVar39 = fVar39 + *pfVar3;
            fVar36 = (UVar41.m_Width + fVar27) - (float)uStack_90;
            fVar31 = UVar41.m_YMin;
            fVar33 = UVar41.m_Height + fVar31;
            fVar38 = pfVar3[1] + UStack_c8.y;
            fVar37 = fVar31 + fVar5;
            if (fVar39 <= fVar36) {
              fVar36 = fVar39;
            }
            if (fVar38 <= fVar33) {
              fVar33 = fVar38;
            }
            uVar26 = -(uint)(fVar37 <= fVar38);
            auVar29._0_4_ =
                 UStack_c8.x -
                 (float)(~-(uint)(fVar27 <= fVar39) & (uint)fVar27 | (uint)fVar36 & -(uint)(fVar27 <= fVar39))
            ;
            auVar29._4_4_ = UStack_c8.y - ((float)(~uVar26 & (uint)fVar37 | (uint)fVar33 & uVar26) - fVar5);
            auVar29._8_4_ = 0.0 - (float)(~(uint)fVar32 & (uint)fVar31 | (uint)UVar41.m_Height & (uint)fVar32)
            ;
            auVar29._12_4_ = 0.0 - fVar31;
            auVar30 = divps(auVar29,auVar7);
            UnityEngine_RectTransform__set_pivot
                      (__this_00,(UnityEngine_Vector2_o)auVar30._0_8_,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchoredPosition
                      (__this_00,(UnityEngine_Vector2_o)UStack_c8,(MethodInfo *)0x0);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d30 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9d30 = '\x01';
      }
      pUVar4 = ((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x48))->klass;
      ((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x48))->klass = (UnityEngine_RectTransform_c *)0x0;
      il2cpp_runtime_helper_022b4080((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x48));
      if (pUVar4 != (UnityEngine_RectTransform_c *)0x0) {
        DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pUVar4,0,(MethodInfo *)0x0);
      }
      pUVar4 = ((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x30))->klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        pUVar4 = ((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x30))->klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
      }
      ((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x30))->klass = (UnityEngine_RectTransform_c *)0x0;
      il2cpp_runtime_helper_022b4080((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x30),0);
      ((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x30))->monitor = (void *)0x0;
      il2cpp_runtime_helper_022b4080(&((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x30))->monitor,0);
      ((UnityEngine_Canvas_Fields *)&((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x30))->fields)->
      m_CachedPtr = 0;
      il2cpp_runtime_helper_022b4080((UnityEngine_Canvas_Fields *)
                         &((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x30))->fields,0);
      ((UnityEngine_Canvas_Fields *)&((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x48))->fields)->
      m_CachedPtr = 0;
      il2cpp_runtime_helper_022b4080((UnityEngine_Canvas_Fields *)
                         &((UnityEngine_RectTransform_o *)((long)ppUVar24 + 0x48))->fields,0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$Style
// il2cpp: bool Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Style (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, System_String_o* name, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o** style, const MethodInfo* method);
// 0x3b595b0

bool_conflict
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Style
          (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,System_String_o *name,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o **style,MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_CanvasGroup_o *__this_00;
  float *pfVar4;
  undefined1 auVar5 [16];
  char cVar6;
  bool_conflict bVar7;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_01;
  System_String_o *pSVar8;
  DG_Tweening_Sequence_o *pDVar9;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar10;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  Il2CppObject *pIVar11;
  DG_Tweening_Tween_o *pDVar12;
  UnityEngine_Camera_o *cam;
  long extraout_RDX;
  long lVar13;
  long *x;
  UnityEngine_RectTransform_o *__this_02;
  TMPro_TMP_Text_o *__this_03;
  System_String_o **__this_04;
  long *t_01;
  DG_Tweening_Tween_c **ppDVar14;
  uint uVar15;
  float fVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float in_XMM1_Da;
  float fVar21;
  float in_XMM1_Db;
  float fVar22;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Vector3_o value;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o UVar26;
  UnityEngine_Vector2_Fields UStack_d0;
  UnityEngine_Vector2_Fields UStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  UnityEngine_Object_o *pUStack_88;
  UnityEngine_Transform_o *pUStack_80;
  System_String_o *pSStack_78;
  long lStack_70;
  undefined8 extraout_XMM0_Qb_00;
  
  pSVar8 = name;
  if (g_data_057a9d29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    g_data_057a9d29 = '\x01';
  }
  __this_03 = (TMPro_TMP_Text_o *)(__this->fields)._theme;
  if (__this_03 == (TMPro_TMP_Text_o *)0x0) {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_03 = (TMPro_TMP_Text_o *)**(long **)(TypeInfo_GisketchTheme + 0xb8);
    if (__this_03 == (TMPro_TMP_Text_o *)0x0) {
      bVar7 = il2cpp_runtime_helper_022b2c90();
      __this_04 = (System_String_o **)__this_03;
      if (g_data_057a9d2b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetValueOrDefault);
        __this_04 = &"shadow";
        bVar7 = il2cpp_runtime_helper_023445d0();
        g_data_057a9d2b = '\x01';
      }
      if ((extraout_RDX == 0) || (*(char *)(extraout_RDX + 0xb9) == '\0')) {
        return bVar7;
      }
      lVar13 = extraout_RDX;
      if (pSVar8 != (System_String_o *)0x0) {
        __this_01 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)pSVar8,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
        __this_04 = *(System_String_o ***)&(__this_03->fields).m_Color.fields;
        if ((TMPro_TMP_Text_o *)__this_04 != (TMPro_TMP_Text_o *)0x0) {
          in_XMM1_Dc = g_data_00d1a770._8_4_;
          in_XMM1_Dd = g_data_00d1a770._12_4_;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = (ulong)g_data_00d1a770;
          color = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                            ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_04,"shadow",
                             (UnityEngine_Color_o)(auVar19 << 0x40),(MethodInfo *)0x0);
          in_XMM1_Da = color.fields.b;
          in_XMM1_Db = color.fields.a;
          lVar13 = 0;
          if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
            Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup(__this_01,color,(MethodInfo *)0x0);
            return extraout_EAX;
          }
        }
      }
      value.fields.z = (float)il2cpp_runtime_helper_022b2c90();
      if ((TMPro_TMP_Text_o *)__this_04 == (TMPro_TMP_Text_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        lStack_70 = lVar13;
        if (g_data_057a9d2e == '\0') {
          pSStack_78 = (System_String_o *)0x3b59791;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
          pSStack_78 = (System_String_o *)0x3b5979d;
          il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
          pSStack_78 = (System_String_o *)0x3b597a9;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PlayEnter_b__25_0);
          pSStack_78 = (System_String_o *)0x3b597b5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          pSStack_78 = (System_String_o *)0x3b597c1;
          il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
          pSStack_78 = (System_String_o *)0x3b597cd;
          il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
          pSStack_78 = (System_String_o *)0x3b597d9;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
          g_data_057a9d2e = '\x01';
        }
        pUVar2 = *(UnityEngine_Object_o **)&(((TMPro_TMP_Text_o *)__this_04)->fields).m_SkipLayoutUpdate;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pSStack_78 = (System_String_o *)0x3b597fc;
          il2cpp_runtime_helper_02337ed0();
        }
        pSStack_78 = (System_String_o *)0x3b59808;
        bVar7 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          x = *(long **)&(((TMPro_TMP_Text_o *)__this_04)->fields).m_RaycastTarget;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pSStack_78 = (System_String_o *)0x3b59825;
            il2cpp_runtime_helper_02337ed0();
          }
          __this_02 = (UnityEngine_RectTransform_o *)0x0;
          pSStack_78 = (System_String_o *)0x3b59831;
          bVar7 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              pSStack_78 = (System_String_o *)0x3b59a07;
              il2cpp_runtime_helper_02337ed0();
              pSStack_78 = (System_String_o *)0x3b59a0e;
              bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar6 = (char)bVar7;
              value.fields.z = in_XMM1_Da;
            }
            else {
              pSStack_78 = (System_String_o *)0x3b59857;
              bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar6 = (char)bVar7;
              value.fields.z = in_XMM1_Da;
            }
            if (cVar6 != '\0') {
              t_01 = *(long **)&(((TMPro_TMP_Text_o *)__this_04)->fields).m_RaycastPadding.fields;
              if ((DG_Tweening_Tween_o *)t_01 != (DG_Tweening_Tween_o *)0x0) {
                __this_02 = (UnityEngine_RectTransform_o *)0x0;
                pSStack_78 = (System_String_o *)0x3b59871;
                DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t_01,0,(MethodInfo *)0x0);
              }
              pUVar3 = *(UnityEngine_Transform_o **)
                        &(((TMPro_TMP_Text_o *)__this_04)->fields).m_SkipLayoutUpdate;
              if (g_data_057a6932 == '\0') {
                t_01 = &TypeInfo_Vector3;
                pSStack_78 = (System_String_o *)0x3b5988a;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6932 = '\x01';
              }
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                x = &TypeInfo_Vector3;
                auVar17._0_8_ = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                value.fields.x = (float)auVar17._0_8_ * (float)0x3f570a3d;
                value.fields.y = (float)((ulong)auVar17._0_8_ >> 0x20) * (float)0x3f570a3d;
                in_XMM1_Db = 0.0;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.84;
                __this_02 = (UnityEngine_RectTransform_o *)0x0;
                pSStack_78 = (System_String_o *)0x3b598ce;
                UnityEngine_Transform__set_localScale(pUVar3,value,(MethodInfo *)0x0);
                __this_00 = *(UnityEngine_CanvasGroup_o **)
                             &(((TMPro_TMP_Text_o *)__this_04)->fields).m_RaycastTarget;
                t_01 = (long *)0x0;
                if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
                  pSStack_78 = (System_String_o *)0x3b598e5;
                  UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                    pSStack_78 = (System_String_o *)0x3b598fd;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStack_78 = (System_String_o *)0x3b59908;
                  pDVar9 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                  pUVar3 = *(UnityEngine_Transform_o **)
                            &(((TMPro_TMP_Text_o *)__this_04)->fields).m_SkipLayoutUpdate;
                  if (g_data_057a6932 == '\0') {
                    pSStack_78 = (System_String_o *)0x3b59924;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6932 = '\x01';
                  }
                  pSStack_78 = (System_String_o *)0x3b59951;
                  t = DG_Tweening_ShortcutExtensions__DOScale
                                (pUVar3,(UnityEngine_Vector3_o)
                                        *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                                 0.14,(MethodInfo *)0x0);
                  pSStack_78 = (System_String_o *)0x3b59970;
                  pDVar10 = (DG_Tweening_Tween_o *)
                            DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                                      ((Il2CppObject *)t,0x1b,1.04,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
                  pSStack_78 = (System_String_o *)0x3b5997d;
                  pDVar9 = DG_Tweening_TweenSettingsExtensions__Join(pDVar9,pDVar10,(MethodInfo *)0x0);
                  pSStack_78 = (System_String_o *)0x3b5998f;
                  onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                  pSStack_78 = (System_String_o *)0x3b599a9;
                  DG_Tweening_TweenCallback_float____ctor();
                  pSStack_78 = (System_String_o *)0x3b599c6;
                  t_00 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,onVirtualUpdate,(MethodInfo *)0x0);
                  pSStack_78 = (System_String_o *)0x3b599d3;
                  pDVar9 = DG_Tweening_TweenSettingsExtensions__Join
                                     (pDVar9,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
                  pSStack_78 = (System_String_o *)0x3b599ea;
                  pIVar11 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                      ((Il2CppObject *)pDVar9,1,MethodInfo_Sequence_SetUpdate_Sequence);
                  *(Il2CppObject **)&(((TMPro_TMP_Text_o *)__this_04)->fields).m_RaycastPadding.fields =
                       pIVar11;
                  bVar7 = il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)__this_04)->fields).m_RaycastPadding,
                                             pIVar11);
                  return bVar7;
                }
              }
              pSStack_78 = (System_String_o *)0x3b59a25;
              UStack_c8 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
              ppDVar14 = (DG_Tweening_Tween_c **)t_01;
              uStack_c0 = extraout_XMM0_Qb;
              fStack_98 = value.fields.z;
              fStack_94 = in_XMM1_Db;
              uStack_90 = in_XMM1_Dc;
              uStack_8c = in_XMM1_Dd;
              pUStack_88 = (UnityEngine_Object_o *)x;
              pUStack_80 = pUVar3;
              pSStack_78 = pSVar8;
              if (g_data_057a9d31 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                ppDVar14 = &TypeInfo_RectTransform;
                il2cpp_runtime_helper_023445d0();
                g_data_057a9d31 = '\x01';
              }
              UStack_d0.x = 0.0;
              UStack_d0.y = 0.0;
              if ((DG_Tweening_Tween_o *)t_01 != (DG_Tweening_Tween_o *)0x0) {
                pDVar12 = (DG_Tweening_Tween_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)t_01,(MethodInfo *)0x0);
                pDVar10 = (DG_Tweening_Tween_o *)0x0;
                if ((pDVar12 != (DG_Tweening_Tween_o *)0x0) &&
                   (pDVar10 = (DG_Tweening_Tween_o *)0x0, pDVar12->klass == TypeInfo_RectTransform)) {
                  pDVar10 = pDVar12;
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar7 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)pDVar10,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  return bVar7;
                }
                cam = UnityEngine_Canvas__get_worldCamera((UnityEngine_Canvas_o *)t_01,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                ppDVar14 = &pDVar10->klass;
                UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                          ((UnityEngine_RectTransform_o *)pDVar10,(UnityEngine_Vector2_o)UStack_c8,cam,
                           (UnityEngine_Vector2_o *)&UStack_d0,(MethodInfo *)0x0);
                if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
                  UVar26 = UnityEngine_RectTransform__get_rect
                                     ((UnityEngine_RectTransform_o *)pDVar10,(MethodInfo *)0x0);
                  auVar17._0_8_ = UVar26.fields._0_8_;
                  auVar17._8_8_ = extraout_XMM0_Qb_00;
                  value.fields.z = UVar26.fields.m_Width;
                  fVar22 = UVar26.fields.m_Height;
                  fVar24 = UStack_d0.x;
                  fVar25 = 0.0;
                  if (*(int *)((long)&(TypeInfo_GisketchTooltipTrigger->fields).debugTargetId + 4) == 0) {
                    UStack_c8 = (UnityEngine_Vector2_Fields)((ulong)UStack_d0 & 0xffffffff);
                    uStack_c0 = 0;
                    auStack_a8._8_4_ = in_XMM1_Dc;
                    auStack_a8._0_8_ = UVar26.fields._8_8_;
                    auStack_a8._12_4_ = in_XMM1_Dd;
                    auStack_b8 = auVar17;
                    il2cpp_runtime_helper_02337ed0();
                    auVar17._0_8_ = auStack_b8._0_8_;
                    value.fields.z = (float)auStack_a8._0_4_;
                    fVar22 = (float)auStack_a8._4_4_;
                    fVar24 = UStack_c8.x;
                    fVar25 = UStack_c8.y;
                  }
                  ppDVar14 = &TypeInfo_GisketchTooltipTrigger->klass;
                  if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                    auVar5._4_4_ = fStack_94;
                    auVar5._0_4_ = fStack_98;
                    auVar5._8_4_ = uStack_90;
                    auVar5._12_4_ = uStack_8c;
                    pfVar4 = *(float **)&(TypeInfo_GisketchTooltipTrigger->fields).loops;
                    fVar16 = (float)auVar17._0_8_;
                    fVar24 = fVar24 + *pfVar4;
                    value.fields.z = (value.fields.z + fVar16) - fStack_98;
                    fVar20 = (float)((ulong)auVar17._0_8_ >> 0x20);
                    fVar23 = pfVar4[1] + UStack_d0.y;
                    if (fVar24 <= value.fields.z) {
                      value.fields.z = fVar24;
                    }
                    fVar21 = fVar22 + fVar20;
                    if (fVar23 <= fVar22 + fVar20) {
                      fVar21 = fVar23;
                    }
                    uVar15 = -(uint)(fVar20 + fStack_94 <= fVar23);
                    auVar18._0_4_ =
                         UStack_d0.x -
                         (float)(~-(uint)(fVar16 <= fVar24) & (uint)fVar16 |
                                (uint)value.fields.z & -(uint)(fVar16 <= fVar24));
                    auVar18._4_4_ =
                         UStack_d0.y -
                         ((float)(~uVar15 & (uint)(fVar20 + fStack_94) | (uint)fVar21 & uVar15) - fStack_94);
                    auVar18._8_4_ = 0.0 - (float)(~(uint)fVar25 & (uint)fVar20 | (uint)fVar22 & (uint)fVar25);
                    auVar18._12_4_ = 0.0 - fVar20;
                    auVar19 = divps(auVar18,auVar5);
                    UnityEngine_RectTransform__set_pivot
                              (__this_02,(UnityEngine_Vector2_o)auVar19._0_8_,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_anchoredPosition
                              (__this_02,(UnityEngine_Vector2_o)UStack_d0,(MethodInfo *)0x0);
                    return extraout_EAX_01;
                  }
                }
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057a9d30 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057a9d30 = '\x01';
              }
              pDVar10 = *(DG_Tweening_Tween_o **)&(((DG_Tweening_Tween_o *)ppDVar14)->fields).intId;
              *(undefined8 *)&(((DG_Tweening_Tween_o *)ppDVar14)->fields).intId = 0;
              il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar14)->fields).intId);
              if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
                DG_Tweening_TweenExtensions__Kill(pDVar10,0,(MethodInfo *)0x0);
              }
              pUVar2 = *(UnityEngine_Object_o **)&(((DG_Tweening_Tween_o *)ppDVar14)->fields).isInverted;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pbVar1 = &(((DG_Tweening_Tween_o *)ppDVar14)->fields).isInverted;
              bVar7 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                pUVar2 = *(UnityEngine_Object_o **)pbVar1;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
              }
              *(undefined8 *)&(((DG_Tweening_Tween_o *)ppDVar14)->fields).isInverted = 0;
              il2cpp_runtime_helper_022b4080(pbVar1,0);
              (((DG_Tweening_Tween_o *)ppDVar14)->fields).id = (Il2CppObject *)0x0;
              il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar14)->fields).id,0);
              (((DG_Tweening_Tween_o *)ppDVar14)->fields).stringId = (System_String_o *)0x0;
              il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar14)->fields).stringId,0);
              (((DG_Tweening_Tween_o *)ppDVar14)->fields).updateType = 0;
              (((DG_Tweening_Tween_o *)ppDVar14)->fields).isIndependentUpdate = 0;
              bVar7 = il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar14)->fields).updateType,0);
              return bVar7;
            }
          }
        }
        return bVar7;
      }
      pSVar8 = (System_String_o *)(*(((TMPro_TMP_Text_o *)__this_04)->klass->vtable)._65_get_text.methodPtr)()
      ;
      TMPro_TMP_Text__GetPreferredValues_4c70170
                ((TMPro_TMP_Text_o *)__this_04,pSVar8,420.0 - (value.fields.z + value.fields.z),0.0,
                 (MethodInfo *)0x0);
      return extraout_EAX_00;
    }
  }
  bVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
                    ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_03,name,style,(MethodInfo *)0x0);
  return bVar7;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PromoteTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PromoteTooltip (UnityEngine_GameObject_o* tooltip, const MethodInfo* method);
// 0x3b59540

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PromoteTooltip
               (UnityEngine_GameObject_o *tooltip,MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_CanvasGroup_o *__this;
  float *pfVar4;
  undefined1 auVar5 [16];
  char cVar6;
  bool_conflict bVar7;
  UnityEngine_Canvas_o *__this_00;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_01;
  System_String_o *text;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar9;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  Il2CppObject *pIVar10;
  DG_Tweening_Tween_o *pDVar11;
  UnityEngine_Camera_o *cam;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o **style;
  long extraout_RDX;
  long lVar12;
  long *x;
  MethodInfo *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  MethodInfo **ppMVar13;
  TMPro_TMP_Text_o *__this_04;
  System_String_o **__this_05;
  long *t_01;
  DG_Tweening_Tween_c **ppDVar14;
  uint uVar15;
  float fVar16;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar17 [16];
  float fVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float in_XMM1_Da;
  float fVar21;
  float in_XMM1_Db;
  float fVar22;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Vector3_o value;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o UVar26;
  UnityEngine_Vector2_Fields UStack_d8;
  UnityEngine_Vector2_Fields UStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  UnityEngine_Object_o *pUStack_90;
  UnityEngine_Transform_o *pUStack_88;
  MethodInfo *pMStack_80;
  long lStack_78;
  undefined8 extraout_XMM0_Qb_00;
  
  ppMVar13 = (MethodInfo **)tooltip;
  if (g_data_057a9d2a == '\0') {
    ppMVar13 = &MethodInfo_Canvas_AddComponent_Canvas;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d2a = '\x01';
  }
  if ((tooltip != (UnityEngine_GameObject_o *)0x0) &&
     (method = MethodInfo_Canvas_AddComponent_Canvas,
     __this_00 = (UnityEngine_Canvas_o *)
                 UnityEngine_GameObject__AddComponent_object_(tooltip,(MethodInfo_255A020 *)MethodInfo_Canvas_AddComponent_Canvas),
     ppMVar13 = (MethodInfo **)tooltip, __this_00 != (UnityEngine_Canvas_o *)0x0)) {
    UnityEngine_Canvas__set_overrideSorting(__this_00,1,(MethodInfo *)0x0);
    UnityEngine_Canvas__set_sortingOrder(__this_00,0x3b6,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_02 = method;
  if (g_data_057a9d29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    g_data_057a9d29 = '\x01';
  }
  __this_04 = (TMPro_TMP_Text_o *)(((UnityEngine_GameObject_o *)((long)ppMVar13 + 0x18))->fields).m_CachedPtr;
  if (__this_04 == (TMPro_TMP_Text_o *)0x0) {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04 = (TMPro_TMP_Text_o *)**(long **)(TypeInfo_GisketchTheme + 0xb8);
    if (__this_04 == (TMPro_TMP_Text_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      __this_05 = (System_String_o **)__this_04;
      if (g_data_057a9d2b == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetValueOrDefault);
        __this_05 = &"shadow";
        il2cpp_runtime_helper_023445d0();
        g_data_057a9d2b = '\x01';
      }
      if ((extraout_RDX == 0) || (*(char *)(extraout_RDX + 0xb9) == '\0')) {
        return;
      }
      lVar12 = extraout_RDX;
      if (__this_02 != (MethodInfo *)0x0) {
        __this_01 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                    UnityEngine_GameObject__AddComponent_object_
                              ((UnityEngine_GameObject_o *)__this_02,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
        __this_05 = *(System_String_o ***)&(__this_04->fields).m_Color.fields;
        if ((TMPro_TMP_Text_o *)__this_05 != (TMPro_TMP_Text_o *)0x0) {
          in_XMM1_Dc = g_data_00d1a770._8_4_;
          in_XMM1_Dd = g_data_00d1a770._12_4_;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = (ulong)g_data_00d1a770;
          color = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                            ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_05,"shadow",
                             (UnityEngine_Color_o)(auVar19 << 0x40),(MethodInfo *)0x0);
          in_XMM1_Da = color.fields.b;
          in_XMM1_Db = color.fields.a;
          lVar12 = 0;
          if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
            Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup(__this_01,color,(MethodInfo *)0x0);
            return;
          }
        }
      }
      value.fields.z = (float)il2cpp_runtime_helper_022b2c90();
      if ((TMPro_TMP_Text_o *)__this_05 == (TMPro_TMP_Text_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        lStack_78 = lVar12;
        if (g_data_057a9d2e == '\0') {
          pMStack_80 = (MethodInfo *)0x3b59791;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
          pMStack_80 = (MethodInfo *)0x3b5979d;
          il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
          pMStack_80 = (MethodInfo *)0x3b597a9;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PlayEnter_b__25_0);
          pMStack_80 = (MethodInfo *)0x3b597b5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          pMStack_80 = (MethodInfo *)0x3b597c1;
          il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
          pMStack_80 = (MethodInfo *)0x3b597cd;
          il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
          pMStack_80 = (MethodInfo *)0x3b597d9;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
          g_data_057a9d2e = '\x01';
        }
        pUVar2 = *(UnityEngine_Object_o **)&(((TMPro_TMP_Text_o *)__this_05)->fields).m_SkipLayoutUpdate;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pMStack_80 = (MethodInfo *)0x3b597fc;
          il2cpp_runtime_helper_02337ed0();
        }
        pMStack_80 = (MethodInfo *)0x3b59808;
        bVar7 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          x = *(long **)&(((TMPro_TMP_Text_o *)__this_05)->fields).m_RaycastTarget;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pMStack_80 = (MethodInfo *)0x3b59825;
            il2cpp_runtime_helper_02337ed0();
          }
          __this_03 = (UnityEngine_RectTransform_o *)0x0;
          pMStack_80 = (MethodInfo *)0x3b59831;
          bVar7 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              pMStack_80 = (MethodInfo *)0x3b59a07;
              il2cpp_runtime_helper_02337ed0();
              pMStack_80 = (MethodInfo *)0x3b59a0e;
              bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar6 = (char)bVar7;
              value.fields.z = in_XMM1_Da;
            }
            else {
              pMStack_80 = (MethodInfo *)0x3b59857;
              bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar6 = (char)bVar7;
              value.fields.z = in_XMM1_Da;
            }
            if (cVar6 != '\0') {
              t_01 = *(long **)&(((TMPro_TMP_Text_o *)__this_05)->fields).m_RaycastPadding.fields;
              if ((DG_Tweening_Tween_o *)t_01 != (DG_Tweening_Tween_o *)0x0) {
                __this_03 = (UnityEngine_RectTransform_o *)0x0;
                pMStack_80 = (MethodInfo *)0x3b59871;
                DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t_01,0,(MethodInfo *)0x0);
              }
              pUVar3 = *(UnityEngine_Transform_o **)
                        &(((TMPro_TMP_Text_o *)__this_05)->fields).m_SkipLayoutUpdate;
              if (g_data_057a6932 == '\0') {
                t_01 = &TypeInfo_Vector3;
                pMStack_80 = (MethodInfo *)0x3b5988a;
                il2cpp_runtime_helper_023445d0();
                g_data_057a6932 = '\x01';
              }
              if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                x = &TypeInfo_Vector3;
                auVar17._0_8_ = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
                value.fields.x = (float)auVar17._0_8_ * (float)0x3f570a3d;
                value.fields.y = (float)((ulong)auVar17._0_8_ >> 0x20) * (float)0x3f570a3d;
                in_XMM1_Db = 0.0;
                in_XMM1_Dc = 0;
                in_XMM1_Dd = 0;
                value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.84;
                __this_03 = (UnityEngine_RectTransform_o *)0x0;
                pMStack_80 = (MethodInfo *)0x3b598ce;
                UnityEngine_Transform__set_localScale(pUVar3,value,(MethodInfo *)0x0);
                __this = *(UnityEngine_CanvasGroup_o **)
                          &(((TMPro_TMP_Text_o *)__this_05)->fields).m_RaycastTarget;
                t_01 = (long *)0x0;
                if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
                  pMStack_80 = (MethodInfo *)0x3b598e5;
                  UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
                  if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                    pMStack_80 = (MethodInfo *)0x3b598fd;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pMStack_80 = (MethodInfo *)0x3b59908;
                  pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
                  pUVar3 = *(UnityEngine_Transform_o **)
                            &(((TMPro_TMP_Text_o *)__this_05)->fields).m_SkipLayoutUpdate;
                  if (g_data_057a6932 == '\0') {
                    pMStack_80 = (MethodInfo *)0x3b59924;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                    g_data_057a6932 = '\x01';
                  }
                  pMStack_80 = (MethodInfo *)0x3b59951;
                  t = DG_Tweening_ShortcutExtensions__DOScale
                                (pUVar3,(UnityEngine_Vector3_o)
                                        *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                                 0.14,(MethodInfo *)0x0);
                  pMStack_80 = (MethodInfo *)0x3b59970;
                  pDVar9 = (DG_Tweening_Tween_o *)
                           DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                                     ((Il2CppObject *)t,0x1b,1.04,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
                  pMStack_80 = (MethodInfo *)0x3b5997d;
                  pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar9,(MethodInfo *)0x0);
                  pMStack_80 = (MethodInfo *)0x3b5998f;
                  onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                  pMStack_80 = (MethodInfo *)0x3b599a9;
                  DG_Tweening_TweenCallback_float____ctor();
                  pMStack_80 = (MethodInfo *)0x3b599c6;
                  t_00 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,onVirtualUpdate,(MethodInfo *)0x0);
                  pMStack_80 = (MethodInfo *)0x3b599d3;
                  pDVar8 = DG_Tweening_TweenSettingsExtensions__Join
                                     (pDVar8,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
                  pMStack_80 = (MethodInfo *)0x3b599ea;
                  pIVar10 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                      ((Il2CppObject *)pDVar8,1,MethodInfo_Sequence_SetUpdate_Sequence);
                  *(Il2CppObject **)&(((TMPro_TMP_Text_o *)__this_05)->fields).m_RaycastPadding.fields =
                       pIVar10;
                  il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)__this_05)->fields).m_RaycastPadding,pIVar10);
                  return;
                }
              }
              pMStack_80 = (MethodInfo *)0x3b59a25;
              UStack_d0 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
              ppDVar14 = (DG_Tweening_Tween_c **)t_01;
              uStack_c8 = extraout_XMM0_Qb;
              fStack_a0 = value.fields.z;
              fStack_9c = in_XMM1_Db;
              uStack_98 = in_XMM1_Dc;
              uStack_94 = in_XMM1_Dd;
              pUStack_90 = (UnityEngine_Object_o *)x;
              pUStack_88 = pUVar3;
              pMStack_80 = __this_02;
              if (g_data_057a9d31 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
                ppDVar14 = &TypeInfo_RectTransform;
                il2cpp_runtime_helper_023445d0();
                g_data_057a9d31 = '\x01';
              }
              UStack_d8.x = 0.0;
              UStack_d8.y = 0.0;
              if ((DG_Tweening_Tween_o *)t_01 != (DG_Tweening_Tween_o *)0x0) {
                pDVar11 = (DG_Tweening_Tween_o *)
                          UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)t_01,(MethodInfo *)0x0);
                pDVar9 = (DG_Tweening_Tween_o *)0x0;
                if ((pDVar11 != (DG_Tweening_Tween_o *)0x0) &&
                   (pDVar9 = (DG_Tweening_Tween_o *)0x0, pDVar11->klass == TypeInfo_RectTransform)) {
                  pDVar9 = pDVar11;
                }
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar7 = UnityEngine_Object__op_Equality
                                  ((UnityEngine_Object_o *)pDVar9,(UnityEngine_Object_o *)0x0,
                                   (MethodInfo *)0x0);
                if ((char)bVar7 != '\0') {
                  return;
                }
                cam = UnityEngine_Canvas__get_worldCamera((UnityEngine_Canvas_o *)t_01,(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                ppDVar14 = &pDVar9->klass;
                UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                          ((UnityEngine_RectTransform_o *)pDVar9,(UnityEngine_Vector2_o)UStack_d0,cam,
                           (UnityEngine_Vector2_o *)&UStack_d8,(MethodInfo *)0x0);
                if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
                  UVar26 = UnityEngine_RectTransform__get_rect
                                     ((UnityEngine_RectTransform_o *)pDVar9,(MethodInfo *)0x0);
                  auVar17._0_8_ = UVar26.fields._0_8_;
                  auVar17._8_8_ = extraout_XMM0_Qb_00;
                  value.fields.z = UVar26.fields.m_Width;
                  fVar22 = UVar26.fields.m_Height;
                  fVar24 = UStack_d8.x;
                  fVar25 = 0.0;
                  if (*(int *)((long)&(TypeInfo_GisketchTooltipTrigger->fields).debugTargetId + 4) == 0) {
                    UStack_d0 = (UnityEngine_Vector2_Fields)((ulong)UStack_d8 & 0xffffffff);
                    uStack_c8 = 0;
                    auStack_b0._8_4_ = in_XMM1_Dc;
                    auStack_b0._0_8_ = UVar26.fields._8_8_;
                    auStack_b0._12_4_ = in_XMM1_Dd;
                    auStack_c0 = auVar17;
                    il2cpp_runtime_helper_02337ed0();
                    auVar17._0_8_ = auStack_c0._0_8_;
                    value.fields.z = (float)auStack_b0._0_4_;
                    fVar22 = (float)auStack_b0._4_4_;
                    fVar24 = UStack_d0.x;
                    fVar25 = UStack_d0.y;
                  }
                  ppDVar14 = &TypeInfo_GisketchTooltipTrigger->klass;
                  if (__this_03 != (UnityEngine_RectTransform_o *)0x0) {
                    auVar5._4_4_ = fStack_9c;
                    auVar5._0_4_ = fStack_a0;
                    auVar5._8_4_ = uStack_98;
                    auVar5._12_4_ = uStack_94;
                    pfVar4 = *(float **)&(TypeInfo_GisketchTooltipTrigger->fields).loops;
                    fVar16 = (float)auVar17._0_8_;
                    fVar24 = fVar24 + *pfVar4;
                    value.fields.z = (value.fields.z + fVar16) - fStack_a0;
                    fVar20 = (float)((ulong)auVar17._0_8_ >> 0x20);
                    fVar23 = pfVar4[1] + UStack_d8.y;
                    if (fVar24 <= value.fields.z) {
                      value.fields.z = fVar24;
                    }
                    fVar21 = fVar22 + fVar20;
                    if (fVar23 <= fVar22 + fVar20) {
                      fVar21 = fVar23;
                    }
                    uVar15 = -(uint)(fVar20 + fStack_9c <= fVar23);
                    auVar18._0_4_ =
                         UStack_d8.x -
                         (float)(~-(uint)(fVar16 <= fVar24) & (uint)fVar16 |
                                (uint)value.fields.z & -(uint)(fVar16 <= fVar24));
                    auVar18._4_4_ =
                         UStack_d8.y -
                         ((float)(~uVar15 & (uint)(fVar20 + fStack_9c) | (uint)fVar21 & uVar15) - fStack_9c);
                    auVar18._8_4_ = 0.0 - (float)(~(uint)fVar25 & (uint)fVar20 | (uint)fVar22 & (uint)fVar25);
                    auVar18._12_4_ = 0.0 - fVar20;
                    auVar19 = divps(auVar18,auVar5);
                    UnityEngine_RectTransform__set_pivot
                              (__this_03,(UnityEngine_Vector2_o)auVar19._0_8_,(MethodInfo *)0x0);
                    UnityEngine_RectTransform__set_anchoredPosition
                              (__this_03,(UnityEngine_Vector2_o)UStack_d8,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              il2cpp_runtime_helper_022b2c90();
              if (g_data_057a9d30 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
                g_data_057a9d30 = '\x01';
              }
              pDVar9 = *(DG_Tweening_Tween_o **)&(((DG_Tweening_Tween_o *)ppDVar14)->fields).intId;
              *(undefined8 *)&(((DG_Tweening_Tween_o *)ppDVar14)->fields).intId = 0;
              il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar14)->fields).intId);
              if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
                DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
              }
              pUVar2 = *(UnityEngine_Object_o **)&(((DG_Tweening_Tween_o *)ppDVar14)->fields).isInverted;
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pbVar1 = &(((DG_Tweening_Tween_o *)ppDVar14)->fields).isInverted;
              bVar7 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                pUVar2 = *(UnityEngine_Object_o **)pbVar1;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
              }
              *(undefined8 *)&(((DG_Tweening_Tween_o *)ppDVar14)->fields).isInverted = 0;
              il2cpp_runtime_helper_022b4080(pbVar1,0);
              (((DG_Tweening_Tween_o *)ppDVar14)->fields).id = (Il2CppObject *)0x0;
              il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar14)->fields).id,0);
              (((DG_Tweening_Tween_o *)ppDVar14)->fields).stringId = (System_String_o *)0x0;
              il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar14)->fields).stringId,0);
              (((DG_Tweening_Tween_o *)ppDVar14)->fields).updateType = 0;
              (((DG_Tweening_Tween_o *)ppDVar14)->fields).isIndependentUpdate = 0;
              il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar14)->fields).updateType,0);
              return;
            }
          }
        }
        return;
      }
      text = (System_String_o *)(*(((TMPro_TMP_Text_o *)__this_05)->klass->vtable)._65_get_text.methodPtr)();
      TMPro_TMP_Text__GetPreferredValues_4c70170
                ((TMPro_TMP_Text_o *)__this_05,text,420.0 - (value.fields.z + value.fields.z),0.0,
                 (MethodInfo *)0x0);
      return;
    }
  }
  Gisketch_Aottg2UI_Styling_GisketchTheme__TryGetStyle
            ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_04,(System_String_o *)method,style,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$ApplyShadow
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ApplyShadow (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x3b59630

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__ApplyShadow
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_CanvasGroup_o *__this_00;
  float *pfVar4;
  undefined1 auVar5 [16];
  char cVar6;
  bool_conflict bVar7;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_01;
  System_String_o *text;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar9;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  Il2CppObject *pIVar10;
  DG_Tweening_Tween_o *pDVar11;
  UnityEngine_Camera_o *cam;
  long *x;
  UnityEngine_RectTransform_o *__this_02;
  System_String_o **__this_03;
  long *t_01;
  DG_Tweening_Tween_c **ppDVar12;
  uint uVar13;
  float fVar14;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  float fVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float in_XMM1_Da;
  float fVar19;
  float in_XMM1_Db;
  float fVar20;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar21;
  float fVar22;
  float fVar23;
  UnityEngine_Vector3_o value;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o UVar24;
  UnityEngine_Vector2_Fields UStack_b8;
  UnityEngine_Vector2_Fields UStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  UnityEngine_Object_o *pUStack_70;
  UnityEngine_Transform_o *pUStack_68;
  UnityEngine_GameObject_o *pUStack_60;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGStack_58;
  undefined8 extraout_XMM0_Qb_00;
  
  __this_03 = (System_String_o **)__this;
  if (g_data_057a9d2b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_GetValueOrDefault);
    __this_03 = &"shadow";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d2b = '\x01';
  }
  if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
     (*(char *)((long)&(style->fields).reliefGradient.fields.hasValue + 1) == '\0')) {
    return;
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)
                UnityEngine_GameObject__AddComponent_object_(go,MethodInfo_GisketchDropShadow_AddComponent_GisketchDropShadow);
    __this_03 = (System_String_o **)(__this->fields)._theme;
    if ((TMPro_TMP_Text_o *)__this_03 != (TMPro_TMP_Text_o *)0x0) {
      in_XMM1_Dc = g_data_00d1a770._8_4_;
      in_XMM1_Dd = g_data_00d1a770._12_4_;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)g_data_00d1a770;
      color = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this_03,"shadow",
                         (UnityEngine_Color_o)(auVar17 << 0x40),(MethodInfo *)0x0);
      in_XMM1_Da = color.fields.b;
      in_XMM1_Db = color.fields.a;
      style = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
      if (__this_01 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
        Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup(__this_01,color,(MethodInfo *)0x0);
        return;
      }
    }
  }
  value.fields.z = (float)il2cpp_runtime_helper_022b2c90();
  if ((TMPro_TMP_Text_o *)__this_03 == (TMPro_TMP_Text_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pGStack_58 = style;
    if (g_data_057a9d2e == '\0') {
      pUStack_60 = (UnityEngine_GameObject_o *)0x3b59791;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      pUStack_60 = (UnityEngine_GameObject_o *)0x3b5979d;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
      pUStack_60 = (UnityEngine_GameObject_o *)0x3b597a9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PlayEnter_b__25_0);
      pUStack_60 = (UnityEngine_GameObject_o *)0x3b597b5;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      pUStack_60 = (UnityEngine_GameObject_o *)0x3b597c1;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      pUStack_60 = (UnityEngine_GameObject_o *)0x3b597cd;
      il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      pUStack_60 = (UnityEngine_GameObject_o *)0x3b597d9;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
      g_data_057a9d2e = '\x01';
    }
    pUVar2 = *(UnityEngine_Object_o **)&(((TMPro_TMP_Text_o *)__this_03)->fields).m_SkipLayoutUpdate;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_60 = (UnityEngine_GameObject_o *)0x3b597fc;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_60 = (UnityEngine_GameObject_o *)0x3b59808;
    bVar7 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      x = *(long **)&(((TMPro_TMP_Text_o *)__this_03)->fields).m_RaycastTarget;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pUStack_60 = (UnityEngine_GameObject_o *)0x3b59825;
        il2cpp_runtime_helper_02337ed0();
      }
      __this_02 = (UnityEngine_RectTransform_o *)0x0;
      pUStack_60 = (UnityEngine_GameObject_o *)0x3b59831;
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          pUStack_60 = (UnityEngine_GameObject_o *)0x3b59a07;
          il2cpp_runtime_helper_02337ed0();
          pUStack_60 = (UnityEngine_GameObject_o *)0x3b59a0e;
          bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          cVar6 = (char)bVar7;
          value.fields.z = in_XMM1_Da;
        }
        else {
          pUStack_60 = (UnityEngine_GameObject_o *)0x3b59857;
          bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          cVar6 = (char)bVar7;
          value.fields.z = in_XMM1_Da;
        }
        if (cVar6 != '\0') {
          t_01 = *(long **)&(((TMPro_TMP_Text_o *)__this_03)->fields).m_RaycastPadding.fields;
          if ((DG_Tweening_Tween_o *)t_01 != (DG_Tweening_Tween_o *)0x0) {
            __this_02 = (UnityEngine_RectTransform_o *)0x0;
            pUStack_60 = (UnityEngine_GameObject_o *)0x3b59871;
            DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t_01,0,(MethodInfo *)0x0);
          }
          pUVar3 = *(UnityEngine_Transform_o **)&(((TMPro_TMP_Text_o *)__this_03)->fields).m_SkipLayoutUpdate;
          if (g_data_057a6932 == '\0') {
            t_01 = &TypeInfo_Vector3;
            pUStack_60 = (UnityEngine_GameObject_o *)0x3b5988a;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6932 = '\x01';
          }
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            x = &TypeInfo_Vector3;
            auVar15._0_8_ = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
            value.fields.x = (float)auVar15._0_8_ * (float)0x3f570a3d;
            value.fields.y = (float)((ulong)auVar15._0_8_ >> 0x20) * (float)0x3f570a3d;
            in_XMM1_Db = 0.0;
            in_XMM1_Dc = 0;
            in_XMM1_Dd = 0;
            value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.84;
            __this_02 = (UnityEngine_RectTransform_o *)0x0;
            pUStack_60 = (UnityEngine_GameObject_o *)0x3b598ce;
            UnityEngine_Transform__set_localScale(pUVar3,value,(MethodInfo *)0x0);
            __this_00 = *(UnityEngine_CanvasGroup_o **)
                         &(((TMPro_TMP_Text_o *)__this_03)->fields).m_RaycastTarget;
            t_01 = (long *)0x0;
            if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
              pUStack_60 = (UnityEngine_GameObject_o *)0x3b598e5;
              UnityEngine_CanvasGroup__set_alpha(__this_00,0.0,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
                pUStack_60 = (UnityEngine_GameObject_o *)0x3b598fd;
                il2cpp_runtime_helper_02337ed0();
              }
              pUStack_60 = (UnityEngine_GameObject_o *)0x3b59908;
              pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
              pUVar3 = *(UnityEngine_Transform_o **)
                        &(((TMPro_TMP_Text_o *)__this_03)->fields).m_SkipLayoutUpdate;
              if (g_data_057a6932 == '\0') {
                pUStack_60 = (UnityEngine_GameObject_o *)0x3b59924;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a6932 = '\x01';
              }
              pUStack_60 = (UnityEngine_GameObject_o *)0x3b59951;
              t = DG_Tweening_ShortcutExtensions__DOScale
                            (pUVar3,(UnityEngine_Vector3_o)
                                    *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),0.14
                             ,(MethodInfo *)0x0);
              pUStack_60 = (UnityEngine_GameObject_o *)0x3b59970;
              pDVar9 = (DG_Tweening_Tween_o *)
                       DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                                 ((Il2CppObject *)t,0x1b,1.04,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
              pUStack_60 = (UnityEngine_GameObject_o *)0x3b5997d;
              pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar9,(MethodInfo *)0x0);
              pUStack_60 = (UnityEngine_GameObject_o *)0x3b5998f;
              onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
              pUStack_60 = (UnityEngine_GameObject_o *)0x3b599a9;
              DG_Tweening_TweenCallback_float____ctor();
              pUStack_60 = (UnityEngine_GameObject_o *)0x3b599c6;
              t_00 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,onVirtualUpdate,(MethodInfo *)0x0);
              pUStack_60 = (UnityEngine_GameObject_o *)0x3b599d3;
              pDVar8 = DG_Tweening_TweenSettingsExtensions__Join
                                 (pDVar8,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
              pUStack_60 = (UnityEngine_GameObject_o *)0x3b599ea;
              pIVar10 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                  ((Il2CppObject *)pDVar8,1,MethodInfo_Sequence_SetUpdate_Sequence);
              *(Il2CppObject **)&(((TMPro_TMP_Text_o *)__this_03)->fields).m_RaycastPadding.fields = pIVar10;
              il2cpp_runtime_helper_022b4080(&(((TMPro_TMP_Text_o *)__this_03)->fields).m_RaycastPadding,pIVar10);
              return;
            }
          }
          pUStack_60 = (UnityEngine_GameObject_o *)0x3b59a25;
          UStack_b0 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
          ppDVar12 = (DG_Tweening_Tween_c **)t_01;
          uStack_a8 = extraout_XMM0_Qb;
          fStack_80 = value.fields.z;
          fStack_7c = in_XMM1_Db;
          uStack_78 = in_XMM1_Dc;
          uStack_74 = in_XMM1_Dd;
          pUStack_70 = (UnityEngine_Object_o *)x;
          pUStack_68 = pUVar3;
          pUStack_60 = go;
          if (g_data_057a9d31 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
            ppDVar12 = &TypeInfo_RectTransform;
            il2cpp_runtime_helper_023445d0();
            g_data_057a9d31 = '\x01';
          }
          UStack_b8.x = 0.0;
          UStack_b8.y = 0.0;
          if ((DG_Tweening_Tween_o *)t_01 != (DG_Tweening_Tween_o *)0x0) {
            pDVar11 = (DG_Tweening_Tween_o *)
                      UnityEngine_Component__get_transform((UnityEngine_Component_o *)t_01,(MethodInfo *)0x0);
            pDVar9 = (DG_Tweening_Tween_o *)0x0;
            if ((pDVar11 != (DG_Tweening_Tween_o *)0x0) &&
               (pDVar9 = (DG_Tweening_Tween_o *)0x0, pDVar11->klass == TypeInfo_RectTransform)) {
              pDVar9 = pDVar11;
            }
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar7 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pDVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar7 != '\0') {
              return;
            }
            cam = UnityEngine_Canvas__get_worldCamera((UnityEngine_Canvas_o *)t_01,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            ppDVar12 = &pDVar9->klass;
            UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                      ((UnityEngine_RectTransform_o *)pDVar9,(UnityEngine_Vector2_o)UStack_b0,cam,
                       (UnityEngine_Vector2_o *)&UStack_b8,(MethodInfo *)0x0);
            if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
              UVar24 = UnityEngine_RectTransform__get_rect
                                 ((UnityEngine_RectTransform_o *)pDVar9,(MethodInfo *)0x0);
              auVar15._0_8_ = UVar24.fields._0_8_;
              auVar15._8_8_ = extraout_XMM0_Qb_00;
              value.fields.z = UVar24.fields.m_Width;
              fVar20 = UVar24.fields.m_Height;
              fVar22 = UStack_b8.x;
              fVar23 = 0.0;
              if (*(int *)((long)&(TypeInfo_GisketchTooltipTrigger->fields).debugTargetId + 4) == 0) {
                UStack_b0 = (UnityEngine_Vector2_Fields)((ulong)UStack_b8 & 0xffffffff);
                uStack_a8 = 0;
                auStack_90._8_4_ = in_XMM1_Dc;
                auStack_90._0_8_ = UVar24.fields._8_8_;
                auStack_90._12_4_ = in_XMM1_Dd;
                auStack_a0 = auVar15;
                il2cpp_runtime_helper_02337ed0();
                auVar15._0_8_ = auStack_a0._0_8_;
                value.fields.z = (float)auStack_90._0_4_;
                fVar20 = (float)auStack_90._4_4_;
                fVar22 = UStack_b0.x;
                fVar23 = UStack_b0.y;
              }
              ppDVar12 = &TypeInfo_GisketchTooltipTrigger->klass;
              if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                auVar5._4_4_ = fStack_7c;
                auVar5._0_4_ = fStack_80;
                auVar5._8_4_ = uStack_78;
                auVar5._12_4_ = uStack_74;
                pfVar4 = *(float **)&(TypeInfo_GisketchTooltipTrigger->fields).loops;
                fVar14 = (float)auVar15._0_8_;
                fVar22 = fVar22 + *pfVar4;
                value.fields.z = (value.fields.z + fVar14) - fStack_80;
                fVar18 = (float)((ulong)auVar15._0_8_ >> 0x20);
                fVar21 = pfVar4[1] + UStack_b8.y;
                if (fVar22 <= value.fields.z) {
                  value.fields.z = fVar22;
                }
                fVar19 = fVar20 + fVar18;
                if (fVar21 <= fVar20 + fVar18) {
                  fVar19 = fVar21;
                }
                uVar13 = -(uint)(fVar18 + fStack_7c <= fVar21);
                auVar16._0_4_ =
                     UStack_b8.x -
                     (float)(~-(uint)(fVar14 <= fVar22) & (uint)fVar14 |
                            (uint)value.fields.z & -(uint)(fVar14 <= fVar22));
                auVar16._4_4_ =
                     UStack_b8.y -
                     ((float)(~uVar13 & (uint)(fVar18 + fStack_7c) | (uint)fVar19 & uVar13) - fStack_7c);
                auVar16._8_4_ = 0.0 - (float)(~(uint)fVar23 & (uint)fVar18 | (uint)fVar20 & (uint)fVar23);
                auVar16._12_4_ = 0.0 - fVar18;
                auVar17 = divps(auVar16,auVar5);
                UnityEngine_RectTransform__set_pivot
                          (__this_02,(UnityEngine_Vector2_o)auVar17._0_8_,(MethodInfo *)0x0);
                UnityEngine_RectTransform__set_anchoredPosition
                          (__this_02,(UnityEngine_Vector2_o)UStack_b8,(MethodInfo *)0x0);
                return;
              }
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9d30 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057a9d30 = '\x01';
          }
          pDVar9 = *(DG_Tweening_Tween_o **)&(((DG_Tweening_Tween_o *)ppDVar12)->fields).intId;
          *(undefined8 *)&(((DG_Tweening_Tween_o *)ppDVar12)->fields).intId = 0;
          il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar12)->fields).intId);
          if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
            DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
          }
          pUVar2 = *(UnityEngine_Object_o **)&(((DG_Tweening_Tween_o *)ppDVar12)->fields).isInverted;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pbVar1 = &(((DG_Tweening_Tween_o *)ppDVar12)->fields).isInverted;
          bVar7 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            pUVar2 = *(UnityEngine_Object_o **)pbVar1;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
          }
          *(undefined8 *)&(((DG_Tweening_Tween_o *)ppDVar12)->fields).isInverted = 0;
          il2cpp_runtime_helper_022b4080(pbVar1,0);
          (((DG_Tweening_Tween_o *)ppDVar12)->fields).id = (Il2CppObject *)0x0;
          il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar12)->fields).id,0);
          (((DG_Tweening_Tween_o *)ppDVar12)->fields).stringId = (System_String_o *)0x0;
          il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar12)->fields).stringId,0);
          (((DG_Tweening_Tween_o *)ppDVar12)->fields).updateType = 0;
          (((DG_Tweening_Tween_o *)ppDVar12)->fields).isIndependentUpdate = 0;
          il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar12)->fields).updateType,0);
          return;
        }
      }
    }
    return;
  }
  text = (System_String_o *)(*(((TMPro_TMP_Text_o *)__this_03)->klass->vtable)._65_get_text.methodPtr)();
  TMPro_TMP_Text__GetPreferredValues_4c70170
            ((TMPro_TMP_Text_o *)__this_03,text,420.0 - (value.fields.z + value.fields.z),0.0,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$MoveTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b58ed0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Canvas_o *x;
  UnityEngine_RectTransform_o *__this_00;
  float *pfVar3;
  UnityEngine_RectTransform_c *pUVar4;
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  UnityEngine_Camera_o *cam;
  undefined8 unaff_RBX;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_Vector2_Fields *pUVar8;
  uint uVar9;
  float fVar10;
  float fVar13;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  UnityEngine_Rect_o UVar22;
  UnityEngine_Vector2_Fields UStack_60;
  UnityEngine_Vector2_Fields UStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [8];
  undefined8 uStack_30;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uStack_20 = (undefined4)unaff_RBX;
  uStack_1c = (undefined4)((ulong)unaff_RBX >> 0x20);
  if (g_data_057a9d2c == '\0') {
    uStack_50 = 0x3b58ef6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
    uStack_50 = 0x3b58f02;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d2c = '\x01';
  }
  pUVar2 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    uStack_50 = 0x3b58f26;
    il2cpp_runtime_helper_02337ed0();
  }
  uStack_50 = 0x3b58f32;
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    x = (__this->fields)._placementCanvas;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_50 = 0x3b58f4c;
      il2cpp_runtime_helper_02337ed0();
    }
    uStack_50 = 0x3b58f58;
    bVar6 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar2 = (UnityEngine_RectTransform_o *)(__this->fields)._placementCanvas;
      if (eventData == (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
        if (g_data_057a694c == '\0') {
          uStack_50 = 0x3b58f90;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
          g_data_057a694c = '\x01';
        }
        pUVar8 = *(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
      }
      else {
        pUVar8 = &(eventData->fields)._position_k__BackingField.fields;
      }
      UStack_58 = *pUVar8;
      UVar1 = (__this->fields)._tooltipSize.fields;
      __this_00 = (__this->fields)._tooltipRect;
      fStack_28 = UVar1.x;
      fStack_24 = UVar1.y;
      uVar16 = 0;
      uVar17 = 0;
      uStack_50 = 0;
      if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
        uStack_30 = 0;
        auStack_38._0_4_ = UStack_58.x;
        auStack_38._4_4_ = UStack_58.y;
        _uStack_40 = 0;
        auStack_48._0_4_ = UVar1.x;
        auStack_48._4_4_ = UVar1.y;
        uStack_50 = 0x3b58fda;
        il2cpp_runtime_helper_02337ed0();
        fStack_28 = (float)auStack_48._0_4_;
        fStack_24 = (float)auStack_48._4_4_;
        uVar16 = uStack_40;
        uVar17 = uStack_3c;
        UStack_58 = (UnityEngine_Vector2_Fields)auStack_38;
        uStack_50 = uStack_30;
      }
      pUVar7 = pUVar2;
      uStack_20 = uVar16;
      uStack_1c = uVar17;
      if (g_data_057a9d31 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
        pUVar7 = (UnityEngine_RectTransform_o *)&TypeInfo_RectTransform;
        il2cpp_runtime_helper_023445d0();
        g_data_057a9d31 = '\x01';
      }
      UStack_60.x = 0.0;
      UStack_60.y = 0.0;
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        pUVar7 = (UnityEngine_RectTransform_o *)
                 UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        rect = (UnityEngine_RectTransform_o *)0x0;
        if ((pUVar7 != (UnityEngine_RectTransform_o *)0x0) &&
           (rect = (UnityEngine_RectTransform_o *)0x0, pUVar7->klass == TypeInfo_RectTransform)) {
          rect = pUVar7;
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          return;
        }
        cam = UnityEngine_Canvas__get_worldCamera((UnityEngine_Canvas_o *)pUVar2,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar7 = rect;
        UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                  (rect,(UnityEngine_Vector2_o)UStack_58,cam,(UnityEngine_Vector2_o *)&UStack_60,
                   (MethodInfo *)0x0);
        if (rect != (UnityEngine_RectTransform_o *)0x0) {
          UVar22 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
          auVar12._0_8_ = UVar22.fields._0_8_;
          auVar12._8_8_ = extraout_XMM0_Qb;
          fVar18 = UVar22.fields.m_Width;
          fVar15 = UVar22.fields.m_Height;
          fVar20 = UStack_60.x;
          fVar21 = 0.0;
          if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
            UStack_58 = (UnityEngine_Vector2_Fields)((ulong)UStack_60 & 0xffffffff);
            uStack_50 = 0;
            unique0x10000182 = uVar16;
            auStack_38 = (undefined1  [8])UVar22.fields._8_8_;
            unique0x10000186 = uVar17;
            _auStack_48 = auVar12;
            il2cpp_runtime_helper_02337ed0();
            auVar12._0_8_ = auStack_48;
            fVar18 = (float)auStack_38._0_4_;
            fVar15 = (float)auStack_38._4_4_;
            fVar20 = UStack_58.x;
            fVar21 = UStack_58.y;
          }
          pUVar7 = TypeInfo_GisketchTooltipTrigger;
          if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
            auVar5._4_4_ = fStack_24;
            auVar5._0_4_ = fStack_28;
            auVar5._8_4_ = uStack_20;
            auVar5._12_4_ = uStack_1c;
            pfVar3 = (float *)((UnityEngine_Canvas_Fields *)&TypeInfo_GisketchTooltipTrigger[7].fields)->m_CachedPtr;
            fVar10 = (float)auVar12._0_8_;
            fVar20 = fVar20 + *pfVar3;
            fVar18 = (fVar18 + fVar10) - fStack_28;
            fVar13 = (float)((ulong)auVar12._0_8_ >> 0x20);
            fVar19 = pfVar3[1] + UStack_60.y;
            if (fVar20 <= fVar18) {
              fVar18 = fVar20;
            }
            fVar14 = fVar15 + fVar13;
            if (fVar19 <= fVar15 + fVar13) {
              fVar14 = fVar19;
            }
            uVar9 = -(uint)(fVar13 + fStack_24 <= fVar19);
            auVar11._0_4_ =
                 UStack_60.x -
                 (float)(~-(uint)(fVar10 <= fVar20) & (uint)fVar10 | (uint)fVar18 & -(uint)(fVar10 <= fVar20))
            ;
            auVar11._4_4_ =
                 UStack_60.y -
                 ((float)(~uVar9 & (uint)(fVar13 + fStack_24) | (uint)fVar14 & uVar9) - fStack_24);
            auVar11._8_4_ = 0.0 - (float)(~(uint)fVar21 & (uint)fVar13 | (uint)fVar15 & (uint)fVar21);
            auVar11._12_4_ = 0.0 - fVar13;
            auVar12 = divps(auVar11,auVar5);
            UnityEngine_RectTransform__set_pivot
                      (__this_00,(UnityEngine_Vector2_o)auVar12._0_8_,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchoredPosition
                      (__this_00,(UnityEngine_Vector2_o)UStack_60,(MethodInfo *)0x0);
            return;
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057a9d30 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057a9d30 = '\x01';
      }
      pUVar4 = pUVar7[3].klass;
      pUVar7[3].klass = (UnityEngine_RectTransform_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar7 + 3);
      if (pUVar4 != (UnityEngine_RectTransform_c *)0x0) {
        DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pUVar4,0,(MethodInfo *)0x0);
      }
      pUVar4 = pUVar7[2].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        pUVar4 = pUVar7[2].klass;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar4,(MethodInfo *)0x0);
      }
      pUVar7[2].klass = (UnityEngine_RectTransform_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar7 + 2,0);
      pUVar7[2].monitor = (void *)0x0;
      il2cpp_runtime_helper_022b4080(&pUVar7[2].monitor,0);
      ((UnityEngine_Canvas_Fields *)&pUVar7[2].fields)->m_CachedPtr = 0;
      il2cpp_runtime_helper_022b4080((UnityEngine_Canvas_Fields *)&pUVar7[2].fields,0);
      ((UnityEngine_Canvas_Fields *)&pUVar7[3].fields)->m_CachedPtr = 0;
      il2cpp_runtime_helper_022b4080((UnityEngine_Canvas_Fields *)&pUVar7[3].fields,0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$MoveTooltipToTarget
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3b59370

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__MoveTooltipToTarget
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  void *pvVar1;
  UnityEngine_Vector2_Fields UVar2;
  undefined1 auVar3 [16];
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Canvas_o *__this_00;
  float *pfVar5;
  char cVar6;
  bool_conflict bVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *t_00;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_01;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *t_02;
  UnityEngine_RectTransform_c *pUVar9;
  undefined4 extraout_var_02;
  UnityEngine_RectTransform_o *pUVar10;
  UnityEngine_Camera_o *cam;
  UnityEngine_RectTransform_o *unaff_RBX;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *pUVar11;
  UnityEngine_Vector2_Fields *pUVar12;
  UnityEngine_Vector2_Fields *pUVar15;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_01;
  UnityEngine_CanvasGroup_o *__this_02;
  UnityEngine_RectTransform_o *pUVar16;
  UnityEngine_RectTransform_o *unaff_R12;
  DG_Tweening_Sequence_o *unaff_R14;
  UnityEngine_Transform_o *unaff_R15;
  uint uVar17;
  float fVar18;
  float fVar22;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  uint uVar31;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Vector3_o UVar32;
  UnityEngine_Vector3_o worldPoint;
  UnityEngine_Rect_o UVar33;
  undefined8 uStack_70;
  UnityEngine_RectTransform_o *pUStack_68;
  UnityEngine_RectTransform_o *pUStack_60;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGStack_58;
  UnityEngine_RectTransform_o *pUStack_50;
  UnityEngine_Vector2_Fields UStack_48;
  undefined8 uStack_40;
  UnityEngine_Vector2_Fields UStack_38;
  undefined8 uStack_30;
  UnityEngine_Vector2_Fields *pUVar13;
  UnityEngine_Vector2_Fields *pUVar14;
  UnityEngine_Vector2_Fields UVar19;
  
  pUVar12 = &UStack_48;
  pUVar13 = &UStack_48;
  pUVar14 = &UStack_48;
  if (g_data_057a9d2d == '\0') {
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59393;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b5939f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b593ab;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b593b7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9d2d = '\x01';
  }
  pUVar11 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b593db;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_50 = (UnityEngine_RectTransform_o *)0x3b593e7;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  pUStack_50 = (UnityEngine_RectTransform_o *)0x3b593f7;
  pUVar10 = (UnityEngine_RectTransform_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar11 = (UnityEngine_RectTransform_o *)0x0;
  if ((pUVar10 != (UnityEngine_RectTransform_o *)0x0) &&
     (pUVar11 = (UnityEngine_RectTransform_o *)0x0, pUVar10->klass == TypeInfo_RectTransform)) {
    pUVar11 = pUVar10;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59421;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_50 = (UnityEngine_RectTransform_o *)0x3b5942d;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  pUVar10 = (UnityEngine_RectTransform_o *)(__this->fields)._placementCanvas;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59447;
    il2cpp_runtime_helper_02337ed0();
  }
  pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59453;
  pUVar16 = pUVar10;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  if (pUVar11 == (UnityEngine_RectTransform_o *)0x0) {
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit:
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b5952d;
    uStack_70 = il2cpp_runtime_helper_022b2c90();
    pUStack_60 = (UnityEngine_RectTransform_o *)&TypeInfo_Object;
    register0x00000020 = (BADSPACEBASE *)&uStack_70;
    pUStack_68 = pUVar11;
    pGStack_58 = __this;
    pUStack_50 = pUVar10;
    if (g_data_057a9d2f == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_DestroyTooltip);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PlayExit_b__26_0);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
      il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
      g_data_057a9d2f = '\x01';
    }
    pUVar9 = pUVar16[2].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    if (pUVar16[3].klass != (UnityEngine_RectTransform_c *)0x0) {
      DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pUVar16[3].klass,0,(MethodInfo *)0x0);
    }
    pUVar4 = pUVar16[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    auVar21._0_8_ = CONCAT44(extraout_var,bVar7);
    pUVar11 = pUStack_68;
    pUVar15 = pUVar12;
    unaff_R12 = pUStack_60;
    __this_01 = pGStack_58;
    pUVar10 = pUStack_50;
    if ((char)bVar7 != '\0') goto Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip;
    unaff_RBX = (UnityEngine_RectTransform_o *)((UnityEngine_Object_Fields *)&pUVar16[2].fields)->m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    auVar21._0_8_ = CONCAT44(extraout_var_00,bVar7);
    pUVar11 = pUStack_68;
    pUVar15 = pUVar13;
    unaff_R12 = pUStack_60;
    __this_01 = pGStack_58;
    pUVar10 = pUStack_50;
    if ((char)bVar7 != '\0') goto Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip;
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      auVar21._0_8_ = CONCAT44(extraout_var_02,bVar7);
      cVar6 = (char)bVar7;
      pUVar11 = pUStack_68;
      unaff_R12 = pUStack_60;
      __this_01 = pGStack_58;
      pUVar10 = pUStack_50;
    }
    else {
      bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      auVar21._0_8_ = CONCAT44(extraout_var_01,bVar7);
      cVar6 = (char)bVar7;
      pUVar11 = pUStack_68;
      unaff_R12 = pUStack_60;
      __this_01 = pGStack_58;
      pUVar10 = pUStack_50;
    }
    pUVar15 = pUVar14;
    pUStack_68 = pUVar11;
    pUStack_60 = unaff_R12;
    pGStack_58 = __this_01;
    pUStack_50 = pUVar10;
    if (cVar6 == '\0') goto Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip;
    if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
    unaff_R15 = pUVar16[2].monitor;
    if (g_data_057a6932 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6932 = '\x01';
    }
    auVar21._0_8_ = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
    endValue.fields.x = (float)auVar21._0_8_ * (float)0x3f666666;
    endValue.fields.y = (float)((ulong)auVar21._0_8_ >> 0x20) * (float)0x3f666666;
    endValue.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.9;
    t = DG_Tweening_ShortcutExtensions__DOScale(unaff_R15,endValue,0.1,(MethodInfo *)0x0);
    t_00 = (DG_Tweening_Tween_o *)
           DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(unaff_R14,t_00,(MethodInfo *)0x0);
    __this_02 = (UnityEngine_CanvasGroup_o *)((UnityEngine_Object_Fields *)&pUVar16[2].fields)->m_CachedPtr;
    if (__this_02 != (UnityEngine_CanvasGroup_o *)0x0) {
      fVar30 = UnityEngine_CanvasGroup__get_alpha(__this_02,(MethodInfo *)0x0);
      uStack_70._4_4_ = fVar30;
      onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor();
      t_01 = DG_Tweening_DOVirtual__Float(uStack_70._4_4_,0.0,0.08,onVirtualUpdate,(MethodInfo *)0x0);
      pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(pDVar8,(DG_Tweening_Tween_o *)t_01,(MethodInfo *)0x0)
      ;
      action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
      DG_Tweening_TweenCallback___ctor();
      t_02 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                       ((Il2CppObject *)pDVar8,action,MethodInfo_Sequence_OnComplete_Sequence);
      pUVar9 = (UnityEngine_RectTransform_c *)
               DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_02,1,MethodInfo_Sequence_SetUpdate_Sequence);
      pUVar16[3].klass = pUVar9;
      il2cpp_runtime_helper_022b4080(pUVar16 + 3,pUVar9);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer((MethodInfo *)0x0);
    if (g_data_057a9d2c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9d2c = '\x01';
    }
    pUVar4 = __this_02[2].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    pUVar4 = (UnityEngine_Object_o *)__this_02[3].fields.m_CachedPtr;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      return;
    }
    pUVar11 = (UnityEngine_RectTransform_o *)__this_02[3].fields.m_CachedPtr;
    if (t_00 == (DG_Tweening_Tween_o *)0x0) {
      if (g_data_057a694c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
      }
      pUVar15 = *(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
    }
    else {
      pUVar15 = (UnityEngine_Vector2_Fields *)&(t_00->fields).isSequenced;
    }
    UVar19 = *pUVar15;
    pvVar1 = __this_02[3].monitor;
    __this_01 = __this_02[2].monitor;
    if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R12 = pUVar16;
    fVar30 = SUB84(pvVar1,0);
    fVar27 = (float)((ulong)pvVar1 >> 0x20);
    uVar25 = 0;
    uVar26 = 0;
    auVar21._0_8_ = 0;
  }
  else {
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59476;
    UVar33 = UnityEngine_RectTransform__get_rect(pUVar11,(MethodInfo *)0x0);
    UVar32.fields.x = UVar33.fields.m_XMin + UVar33.fields.m_Width * 0.5;
    UVar32.fields.y = UVar33.fields.m_YMin + UVar33.fields.m_Height * 0.5;
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b5948d;
    UVar32.fields.z = 0.0;
    UVar32 = UnityEngine_Transform__TransformPoint
                       ((UnityEngine_Transform_o *)pUVar11,UVar32,(MethodInfo *)0x0);
    UStack_38 = UVar32.fields._0_8_;
    UStack_48.x = UVar32.fields.z;
    __this_00 = (__this->fields)._placementCanvas;
    pUVar16 = (UnityEngine_RectTransform_o *)0x0;
    if (__this_00 == (UnityEngine_Canvas_o *)0x0)
    goto Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit;
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b594ab;
    cam = UnityEngine_Canvas__get_worldCamera(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      pUStack_50 = (UnityEngine_RectTransform_o *)0x3b594c6;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_50 = (UnityEngine_RectTransform_o *)0x3b594da;
    worldPoint.fields.z = UStack_48.x;
    worldPoint.fields.x = UStack_38.x;
    worldPoint.fields.y = UStack_38.y;
    UVar19 = (UnityEngine_Vector2_Fields)
             UnityEngine_RectTransformUtility__WorldToScreenPoint(cam,worldPoint,(MethodInfo *)0x0);
    pUVar11 = (UnityEngine_RectTransform_o *)(__this->fields)._placementCanvas;
    UVar2 = (__this->fields)._tooltipSize.fields;
    __this_01 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)(__this->fields)._tooltipRect;
    fVar30 = UVar2.x;
    fVar27 = UVar2.y;
    uVar25 = 0;
    uVar26 = 0;
    auVar21._0_8_ = extraout_XMM0_Qb;
    if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
      uStack_40 = 0;
      pUStack_50 = (UnityEngine_RectTransform_o *)0x3b59509;
      UStack_48 = UVar2;
      UStack_38 = UVar19;
      uStack_30 = extraout_XMM0_Qb;
      il2cpp_runtime_helper_02337ed0();
      fVar30 = UStack_48.x;
      fVar27 = UStack_48.y;
      uVar25 = (undefined4)uStack_40;
      uVar26 = uStack_40._4_4_;
      UVar19 = UStack_38;
      auVar21._0_8_ = uStack_30;
    }
  }
  *(UnityEngine_Transform_o **)((long)register0x00000020 + -8) = unaff_R15;
  *(DG_Tweening_Sequence_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
  *(float *)((long)register0x00000020 + -0x28) = fVar30;
  *(float *)((long)register0x00000020 + -0x24) = fVar27;
  *(undefined4 *)((long)register0x00000020 + -0x20) = uVar25;
  *(undefined4 *)((long)register0x00000020 + -0x1c) = uVar26;
  *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x58) = UVar19;
  *(undefined8 *)((long)register0x00000020 + -0x50) = auVar21._0_8_;
  pUVar16 = pUVar11;
  if (g_data_057a9d31 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59a5e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59a6a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59a76;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    pUVar16 = (UnityEngine_RectTransform_o *)&TypeInfo_RectTransform;
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59a82;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d31 = '\x01';
  }
  *(undefined8 *)((long)register0x00000020 + -0x60) = 0;
  pUVar10 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar11 != (UnityEngine_RectTransform_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59aa7;
    pUVar10 = (UnityEngine_RectTransform_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
    rect = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar10 != (UnityEngine_RectTransform_o *)0x0) &&
       (rect = (UnityEngine_RectTransform_o *)0x0, pUVar10->klass == TypeInfo_RectTransform)) {
      rect = pUVar10;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59ad7;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59ae3;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59af5;
    pUVar10 = (UnityEngine_RectTransform_o *)
              UnityEngine_Canvas__get_worldCamera((UnityEngine_Canvas_o *)pUVar11,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59b10;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59b27;
    pUVar16 = rect;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x58),
               (UnityEngine_Camera_o *)pUVar10,(UnityEngine_Vector2_o *)((long)register0x00000020 + -0x60),
               (MethodInfo *)0x0);
    unaff_RBX = (UnityEngine_RectTransform_o *)0x0;
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59b3a;
      UVar33 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      fVar27 = UVar33.fields.m_Width;
      fVar24 = UVar33.fields.m_Height;
      auVar21._0_8_ = UVar33.fields._0_8_;
      auVar21._8_8_ = extraout_XMM0_Qb_00;
      fVar30 = *(float *)((long)register0x00000020 + -0x60);
      uVar31 = 0;
      unaff_RBX = (UnityEngine_RectTransform_o *)&TypeInfo_GisketchTooltipTrigger;
      if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
        *(float *)((long)register0x00000020 + -0x58) = fVar30;
        *(undefined4 *)((long)register0x00000020 + -0x54) = 0;
        *(undefined4 *)((long)register0x00000020 + -0x50) = 0;
        *(undefined4 *)((long)register0x00000020 + -0x4c) = 0;
        auVar3._8_4_ = uVar25;
        auVar3._0_8_ = UVar33.fields._8_8_;
        auVar3._12_4_ = uVar26;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x38) = auVar3;
        *(undefined1 (*) [16])((long)register0x00000020 + -0x48) = auVar21;
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59b67;
        il2cpp_runtime_helper_02337ed0();
        auVar21._0_8_ = SUB168(*(undefined1 (*) [16])((long)register0x00000020 + -0x48),0);
        fVar27 = *(float *)((long)register0x00000020 + -0x38);
        fVar24 = *(float *)((long)register0x00000020 + -0x34);
        fVar30 = *(float *)((long)register0x00000020 + -0x58);
        uVar31 = *(uint *)((long)register0x00000020 + -0x54);
      }
      pUVar16 = TypeInfo_GisketchTooltipTrigger;
      if (__this_01 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
        auVar3 = *(undefined1 (*) [16])((long)register0x00000020 + -0x28);
        pfVar5 = (float *)((UnityEngine_Object_Fields *)&TypeInfo_GisketchTooltipTrigger[7].fields)->m_CachedPtr;
        fVar18 = (float)auVar21._0_8_;
        fVar30 = fVar30 + *pfVar5;
        fVar27 = (fVar27 + fVar18) - auVar3._0_4_;
        fVar22 = (float)((ulong)auVar21._0_8_ >> 0x20);
        fVar29 = pfVar5[1] + *(float *)((long)register0x00000020 + -0x5c);
        fVar28 = fVar22 + auVar3._4_4_;
        if (fVar30 <= fVar27) {
          fVar27 = fVar30;
        }
        fVar23 = fVar24 + fVar22;
        if (fVar29 <= fVar24 + fVar22) {
          fVar23 = fVar29;
        }
        uVar17 = -(uint)(fVar28 <= fVar29);
        auVar20._0_4_ =
             *(float *)((long)register0x00000020 + -0x60) -
             (float)(~-(uint)(fVar18 <= fVar30) & (uint)fVar18 | (uint)fVar27 & -(uint)(fVar18 <= fVar30));
        auVar20._4_4_ =
             *(float *)((long)register0x00000020 + -0x5c) -
             ((float)(~uVar17 & (uint)fVar28 | (uint)fVar23 & uVar17) - auVar3._4_4_);
        auVar20._8_4_ = 0.0 - (float)(~uVar31 & (uint)fVar22 | (uint)fVar24 & uVar31);
        auVar20._12_4_ = 0.0 - fVar22;
        auVar21 = divps(auVar20,auVar3);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59c0f;
        UnityEngine_RectTransform__set_pivot
                  ((UnityEngine_RectTransform_o *)__this_01,(UnityEngine_Vector2_o)auVar21._0_8_,
                   (MethodInfo *)0x0);
        *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59c1f;
        UnityEngine_RectTransform__set_anchoredPosition
                  ((UnityEngine_RectTransform_o *)__this_01,
                   (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x60),
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  *(undefined8 *)((long)register0x00000020 + -0x70) = 0x3b59c2e;
  auVar21._0_8_ = il2cpp_runtime_helper_022b2c90();
  pUVar11 = unaff_RBX;
  pUVar15 = (UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x68);
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip:
  *(UnityEngine_RectTransform_o **)((long)pUVar15 + -8) = pUVar10;
  *(Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o **)((long)pUVar15 + -0x10) = __this_01;
  *(UnityEngine_RectTransform_o **)((long)pUVar15 + -0x18) = unaff_R12;
  *(UnityEngine_RectTransform_o **)((long)pUVar15 + -0x20) = pUVar11;
  *(undefined8 *)((long)pUVar15 + -0x28) = auVar21._0_8_;
  if (g_data_057a9d30 == '\0') {
    *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59c50;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d30 = '\x01';
  }
  pUVar9 = pUVar16[3].klass;
  pUVar16[3].klass = (UnityEngine_RectTransform_c *)0x0;
  *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59c6e;
  il2cpp_runtime_helper_022b4080(pUVar16 + 3);
  if (pUVar9 != (UnityEngine_RectTransform_c *)0x0) {
    *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59c7f;
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pUVar9,0,(MethodInfo *)0x0);
  }
  pUVar9 = pUVar16[2].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59c9c;
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59cac;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar9 = pUVar16[2].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59cc5;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59ccf;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar9,(MethodInfo *)0x0);
  }
  pUVar16[2].klass = (UnityEngine_RectTransform_c *)0x0;
  *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59ce1;
  il2cpp_runtime_helper_022b4080(pUVar16 + 2,0);
  pUVar16[2].monitor = (void *)0x0;
  *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59cf4;
  il2cpp_runtime_helper_022b4080(&pUVar16[2].monitor,0);
  ((UnityEngine_Object_Fields *)&pUVar16[2].fields)->m_CachedPtr = 0;
  *(undefined8 *)((long)pUVar15 + -0x30) = 0x3b59d07;
  il2cpp_runtime_helper_022b4080((UnityEngine_Object_Fields *)&pUVar16[2].fields,0);
  ((UnityEngine_Object_Fields *)&pUVar16[3].fields)->m_CachedPtr = 0;
  il2cpp_runtime_helper_022b4080((UnityEngine_Object_Fields *)&pUVar16[3].fields,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$TooltipSize
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__TooltipSize (TMPro_TextMeshProUGUI_o* label, float padding, const MethodInfo* method);
// 0x3b596e0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__TooltipSize
          (TMPro_TextMeshProUGUI_o *label,float padding,MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_CanvasGroup_o *__this;
  float *pfVar4;
  undefined1 auVar5 [16];
  char cVar6;
  bool_conflict bVar7;
  System_String_o *text;
  DG_Tweening_Sequence_o *pDVar8;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar9;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  Il2CppObject *pIVar10;
  DG_Tweening_Tween_o *pDVar11;
  UnityEngine_Camera_o *cam;
  long *x;
  UnityEngine_RectTransform_o *__this_00;
  long *t_01;
  DG_Tweening_Tween_c **ppDVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Vector2_o UVar16;
  UnityEngine_Vector2_Fields extraout_XMM0_Qa;
  UnityEngine_Vector2_Fields extraout_XMM0_Qa_00;
  UnityEngine_Vector2_Fields extraout_XMM0_Qa_01;
  UnityEngine_Vector2_Fields UVar17;
  UnityEngine_Vector2_Fields extraout_XMM0_Qa_02;
  UnityEngine_Vector2_Fields extraout_XMM0_Qa_03;
  UnityEngine_Vector2_Fields extraout_XMM0_Qa_04;
  float fVar20;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float in_XMM1_Da;
  float fVar21;
  float fVar22;
  float in_XMM1_Db;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar23;
  float fVar24;
  UnityEngine_Vector3_o value;
  UnityEngine_Rect_o UVar25;
  UnityEngine_Vector2_Fields UStack_a0;
  UnityEngine_Vector2_Fields UStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  UnityEngine_Object_o *pUStack_58;
  UnityEngine_Transform_o *pUStack_50;
  
  if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
    fVar14 = padding + padding;
    text = (System_String_o *)
           (*(label->klass->vtable)._65_get_text.methodPtr)(label,(label->klass->vtable)._65_get_text.method);
    UVar16 = TMPro_TMP_Text__GetPreferredValues_4c70170
                       ((TMPro_TMP_Text_o *)label,text,420.0 - fVar14,0.0,(MethodInfo *)0x0);
    fVar21 = fVar14 + UVar16.fields.x;
    value.fields.z = 420.0;
    if (fVar21 <= 420.0) {
      value.fields.z = fVar21;
    }
    UVar17.y = UVar16.fields.y + fVar14;
    UVar17.x = value.fields.z;
    return (UnityEngine_Vector2_o)UVar17;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d2e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PlayEnter_b__25_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9d2e = '\x01';
  }
  pUVar2 = *(UnityEngine_Object_o **)&(label->fields).m_SkipLayoutUpdate;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  UVar17 = extraout_XMM0_Qa;
  if ((char)bVar7 == '\0') {
    x = *(long **)&(label->fields).m_RaycastTarget;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (UnityEngine_RectTransform_o *)0x0;
    bVar7 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    UVar17 = extraout_XMM0_Qa_00;
    if ((char)bVar7 == '\0') {
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar6 = (char)bVar7;
        value.fields.z = in_XMM1_Da;
        UVar17 = extraout_XMM0_Qa_02;
      }
      else {
        bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar6 = (char)bVar7;
        value.fields.z = in_XMM1_Da;
        UVar17 = extraout_XMM0_Qa_01;
      }
      if (cVar6 != '\0') {
        t_01 = *(long **)&(label->fields).m_RaycastPadding.fields;
        if ((DG_Tweening_Tween_o *)t_01 != (DG_Tweening_Tween_o *)0x0) {
          __this_00 = (UnityEngine_RectTransform_o *)0x0;
          DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)t_01,0,(MethodInfo *)0x0);
        }
        pUVar3 = *(UnityEngine_Transform_o **)&(label->fields).m_SkipLayoutUpdate;
        if (g_data_057a6932 == '\0') {
          t_01 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6932 = '\x01';
        }
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          x = &TypeInfo_Vector3;
          auVar19._0_8_ = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          value.fields.x = (float)auVar19._0_8_ * (float)0x3f570a3d;
          value.fields.y = (float)((ulong)auVar19._0_8_ >> 0x20) * (float)0x3f570a3d;
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.84;
          __this_00 = (UnityEngine_RectTransform_o *)0x0;
          UnityEngine_Transform__set_localScale(pUVar3,value,(MethodInfo *)0x0);
          __this = *(UnityEngine_CanvasGroup_o **)&(label->fields).m_RaycastTarget;
          t_01 = (long *)0x0;
          if (__this != (UnityEngine_CanvasGroup_o *)0x0) {
            UnityEngine_CanvasGroup__set_alpha(__this,0.0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pDVar8 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            pUVar3 = *(UnityEngine_Transform_o **)&(label->fields).m_SkipLayoutUpdate;
            if (g_data_057a6932 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6932 = '\x01';
            }
            t = DG_Tweening_ShortcutExtensions__DOScale
                          (pUVar3,(UnityEngine_Vector3_o)
                                  *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),0.14,
                           (MethodInfo *)0x0);
            pDVar9 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                               ((Il2CppObject *)t,0x1b,1.04,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
            pDVar8 = DG_Tweening_TweenSettingsExtensions__Join(pDVar8,pDVar9,(MethodInfo *)0x0);
            onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
            DG_Tweening_TweenCallback_float____ctor();
            t_00 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,onVirtualUpdate,(MethodInfo *)0x0);
            pDVar8 = DG_Tweening_TweenSettingsExtensions__Join
                               (pDVar8,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
            pIVar10 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                                ((Il2CppObject *)pDVar8,1,MethodInfo_Sequence_SetUpdate_Sequence);
            *(Il2CppObject **)&(label->fields).m_RaycastPadding.fields = pIVar10;
            UVar17 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b4080(&(label->fields).m_RaycastPadding,pIVar10)
            ;
            return (UnityEngine_Vector2_o)UVar17;
          }
        }
        UStack_98 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
        ppDVar12 = (DG_Tweening_Tween_c **)t_01;
        uStack_90 = extraout_XMM0_Qb;
        fStack_68 = value.fields.z;
        fStack_64 = in_XMM1_Db;
        uStack_60 = in_XMM1_Dc;
        uStack_5c = in_XMM1_Dd;
        pUStack_58 = (UnityEngine_Object_o *)x;
        pUStack_50 = pUVar3;
        if (g_data_057a9d31 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
          ppDVar12 = &TypeInfo_RectTransform;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9d31 = '\x01';
        }
        UStack_a0.x = 0.0;
        UStack_a0.y = 0.0;
        if ((DG_Tweening_Tween_o *)t_01 != (DG_Tweening_Tween_o *)0x0) {
          pDVar11 = (DG_Tweening_Tween_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)t_01,(MethodInfo *)0x0);
          pDVar9 = (DG_Tweening_Tween_o *)0x0;
          if ((pDVar11 != (DG_Tweening_Tween_o *)0x0) &&
             (pDVar9 = (DG_Tweening_Tween_o *)0x0, pDVar11->klass == TypeInfo_RectTransform)) {
            pDVar9 = pDVar11;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar7 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pDVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            return (UnityEngine_Vector2_o)extraout_XMM0_Qa_03;
          }
          cam = UnityEngine_Canvas__get_worldCamera((UnityEngine_Canvas_o *)t_01,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ppDVar12 = &pDVar9->klass;
          UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    ((UnityEngine_RectTransform_o *)pDVar9,(UnityEngine_Vector2_o)UStack_98,cam,
                     (UnityEngine_Vector2_o *)&UStack_a0,(MethodInfo *)0x0);
          if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
            UVar25 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)pDVar9,(MethodInfo *)0x0);
            auVar19._0_8_ = UVar25.fields._0_8_;
            auVar19._8_8_ = extraout_XMM0_Qb_00;
            value.fields.z = UVar25.fields.m_Width;
            fVar14 = UVar25.fields.m_Height;
            fVar21 = UStack_a0.x;
            fVar24 = 0.0;
            if (*(int *)((long)&(TypeInfo_GisketchTooltipTrigger->fields).debugTargetId + 4) == 0) {
              UStack_98 = (UnityEngine_Vector2_Fields)((ulong)UStack_a0 & 0xffffffff);
              uStack_90 = 0;
              auStack_78._8_4_ = in_XMM1_Dc;
              auStack_78._0_8_ = UVar25.fields._8_8_;
              auStack_78._12_4_ = in_XMM1_Dd;
              auStack_88 = auVar19;
              il2cpp_runtime_helper_02337ed0();
              auVar19._0_8_ = auStack_88._0_8_;
              value.fields.z = (float)auStack_78._0_4_;
              fVar14 = (float)auStack_78._4_4_;
              fVar21 = UStack_98.x;
              fVar24 = UStack_98.y;
            }
            ppDVar12 = &TypeInfo_GisketchTooltipTrigger->klass;
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              auVar5._4_4_ = fStack_64;
              auVar5._0_4_ = fStack_68;
              auVar5._8_4_ = uStack_60;
              auVar5._12_4_ = uStack_5c;
              pfVar4 = *(float **)&(TypeInfo_GisketchTooltipTrigger->fields).loops;
              fVar15 = (float)auVar19._0_8_;
              fVar21 = fVar21 + *pfVar4;
              value.fields.z = (value.fields.z + fVar15) - fStack_68;
              fVar20 = (float)((ulong)auVar19._0_8_ >> 0x20);
              fVar23 = pfVar4[1] + UStack_a0.y;
              if (fVar21 <= value.fields.z) {
                value.fields.z = fVar21;
              }
              fVar22 = fVar14 + fVar20;
              if (fVar23 <= fVar14 + fVar20) {
                fVar22 = fVar23;
              }
              uVar13 = -(uint)(fVar20 + fStack_64 <= fVar23);
              auVar18._0_4_ =
                   UStack_a0.x -
                   (float)(~-(uint)(fVar15 <= fVar21) & (uint)fVar15 |
                          (uint)value.fields.z & -(uint)(fVar15 <= fVar21));
              auVar18._4_4_ =
                   UStack_a0.y -
                   ((float)(~uVar13 & (uint)(fVar20 + fStack_64) | (uint)fVar22 & uVar13) - fStack_64);
              auVar18._8_4_ = 0.0 - (float)(~(uint)fVar24 & (uint)fVar20 | (uint)fVar14 & (uint)fVar24);
              auVar18._12_4_ = 0.0 - fVar20;
              auVar19 = divps(auVar18,auVar5);
              UnityEngine_RectTransform__set_pivot
                        (__this_00,(UnityEngine_Vector2_o)auVar19._0_8_,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchoredPosition
                        (__this_00,(UnityEngine_Vector2_o)UStack_a0,(MethodInfo *)0x0);
              return (UnityEngine_Vector2_o)extraout_XMM0_Qa_04;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9d30 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9d30 = '\x01';
        }
        pDVar9 = *(DG_Tweening_Tween_o **)&(((DG_Tweening_Tween_o *)ppDVar12)->fields).intId;
        *(undefined8 *)&(((DG_Tweening_Tween_o *)ppDVar12)->fields).intId = 0;
        il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar12)->fields).intId);
        if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
        }
        pUVar2 = *(UnityEngine_Object_o **)&(((DG_Tweening_Tween_o *)ppDVar12)->fields).isInverted;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pbVar1 = &(((DG_Tweening_Tween_o *)ppDVar12)->fields).isInverted;
        bVar7 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          pUVar2 = *(UnityEngine_Object_o **)pbVar1;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
        }
        *(undefined8 *)&(((DG_Tweening_Tween_o *)ppDVar12)->fields).isInverted = 0;
        il2cpp_runtime_helper_022b4080(pbVar1,0);
        (((DG_Tweening_Tween_o *)ppDVar12)->fields).id = (Il2CppObject *)0x0;
        il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar12)->fields).id,0);
        (((DG_Tweening_Tween_o *)ppDVar12)->fields).stringId = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar12)->fields).stringId,0);
        (((DG_Tweening_Tween_o *)ppDVar12)->fields).updateType = 0;
        (((DG_Tweening_Tween_o *)ppDVar12)->fields).isIndependentUpdate = 0;
        UVar17 = (UnityEngine_Vector2_Fields)
                 il2cpp_runtime_helper_022b4080(&(((DG_Tweening_Tween_o *)ppDVar12)->fields).updateType,0);
        return (UnityEngine_Vector2_o)UVar17;
      }
    }
  }
  return (UnityEngine_Vector2_o)UVar17;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlayEnter
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayEnter (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3b59770

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayEnter
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  bool_conflict *pbVar1;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_CanvasGroup_o *__this_01;
  float *pfVar2;
  UnityEngine_Object_o *pUVar3;
  undefined1 auVar4 [16];
  char cVar5;
  bool_conflict bVar6;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  UnityEngine_Camera_o *cam;
  UnityEngine_CanvasGroup_o *x;
  DG_Tweening_Tween_o *rect;
  UnityEngine_RectTransform_o *pUVar8;
  DG_Tweening_Tween_o *pDVar9;
  DG_Tweening_Tween_o *pDVar10;
  uint uVar11;
  float fVar12;
  float fVar15;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float in_XMM1_Da;
  float fVar16;
  float in_XMM1_Db;
  float fVar17;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Vector3_o value;
  UnityEngine_Rect_o UVar21;
  UnityEngine_Vector2_Fields local_88;
  UnityEngine_Vector2_Fields local_80;
  undefined8 uStack_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  float local_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  UnityEngine_CanvasGroup_o *pUStack_40;
  UnityEngine_RectTransform_o *pUStack_38;
  
  if (g_data_057a9d2e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PlayEnter_b__25_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9d2e = '\x01';
  }
  pUVar8 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    x = (__this->fields)._group;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar8 = (UnityEngine_RectTransform_o *)0x0;
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar5 = (char)bVar6;
        value.fields.z = in_XMM1_Da;
      }
      else {
        bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        cVar5 = (char)bVar6;
        value.fields.z = in_XMM1_Da;
      }
      if (cVar5 != '\0') {
        pDVar9 = (__this->fields)._tween;
        if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
          pUVar8 = (UnityEngine_RectTransform_o *)0x0;
          DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
        }
        __this_00 = (__this->fields)._tooltipRect;
        if (g_data_057a6932 == '\0') {
          pDVar9 = (DG_Tweening_Tween_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a6932 = '\x01';
        }
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          x = (UnityEngine_CanvasGroup_o *)&TypeInfo_Vector3;
          auVar14._0_8_ = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
          value.fields.x = (float)auVar14._0_8_ * (float)0x3f570a3d;
          value.fields.y = (float)((ulong)auVar14._0_8_ >> 0x20) * (float)0x3f570a3d;
          in_XMM1_Db = 0.0;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          value.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.84;
          pUVar8 = (UnityEngine_RectTransform_o *)0x0;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)__this_00,value,(MethodInfo *)0x0);
          __this_01 = (__this->fields)._group;
          pDVar9 = (DG_Tweening_Tween_o *)0x0;
          if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
            UnityEngine_CanvasGroup__set_alpha(__this_01,0.0,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
            pUVar8 = (__this->fields)._tooltipRect;
            if (g_data_057a6932 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
              g_data_057a6932 = '\x01';
            }
            t = DG_Tweening_ShortcutExtensions__DOScale
                          ((UnityEngine_Transform_o *)pUVar8,
                           (UnityEngine_Vector3_o)
                           *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),0.14,
                           (MethodInfo *)0x0);
            pDVar9 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__SetEase_object__25f40c0
                               ((Il2CppObject *)t,0x1b,1.04,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
            pDVar7 = DG_Tweening_TweenSettingsExtensions__Join(pDVar7,pDVar9,(MethodInfo *)0x0);
            onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
            DG_Tweening_TweenCallback_float____ctor();
            t_00 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,onVirtualUpdate,(MethodInfo *)0x0);
            pDVar7 = DG_Tweening_TweenSettingsExtensions__Join
                               (pDVar7,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
            pDVar9 = (DG_Tweening_Tween_o *)
                     DG_Tweening_TweenSettingsExtensions__SetUpdate_object_
                               ((Il2CppObject *)pDVar7,1,MethodInfo_Sequence_SetUpdate_Sequence);
            (__this->fields)._tween = pDVar9;
            il2cpp_runtime_helper_022b4080(&(__this->fields)._tween,pDVar9);
            return;
          }
        }
        local_80 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_022b2c90();
        pDVar10 = pDVar9;
        uStack_78 = extraout_XMM0_Qb;
        local_50 = value.fields.z;
        fStack_4c = in_XMM1_Db;
        uStack_48 = in_XMM1_Dc;
        uStack_44 = in_XMM1_Dd;
        pUStack_40 = x;
        pUStack_38 = __this_00;
        if (g_data_057a9d31 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
          pDVar10 = (DG_Tweening_Tween_o *)&TypeInfo_RectTransform;
          il2cpp_runtime_helper_023445d0();
          g_data_057a9d31 = '\x01';
        }
        local_88.x = 0.0;
        local_88.y = 0.0;
        if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
          pDVar10 = (DG_Tweening_Tween_o *)
                    UnityEngine_Component__get_transform((UnityEngine_Component_o *)pDVar9,(MethodInfo *)0x0);
          rect = (DG_Tweening_Tween_o *)0x0;
          if ((pDVar10 != (DG_Tweening_Tween_o *)0x0) &&
             (rect = (DG_Tweening_Tween_o *)0x0, pDVar10->klass == TypeInfo_RectTransform)) {
            rect = pDVar10;
          }
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar6 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            return;
          }
          cam = UnityEngine_Canvas__get_worldCamera((UnityEngine_Canvas_o *)pDVar9,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pDVar10 = rect;
          UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                    ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)local_80,cam,
                     (UnityEngine_Vector2_o *)&local_88,(MethodInfo *)0x0);
          if (rect != (DG_Tweening_Tween_o *)0x0) {
            UVar21 = UnityEngine_RectTransform__get_rect
                               ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
            auVar14._0_8_ = UVar21.fields._0_8_;
            auVar14._8_8_ = extraout_XMM0_Qb_00;
            value.fields.z = UVar21.fields.m_Width;
            fVar17 = UVar21.fields.m_Height;
            fVar19 = local_88.x;
            fVar20 = 0.0;
            if (*(int *)((long)&(TypeInfo_GisketchTooltipTrigger->fields).debugTargetId + 4) == 0) {
              local_80 = (UnityEngine_Vector2_Fields)((ulong)local_88 & 0xffffffff);
              uStack_78 = 0;
              local_60._8_4_ = in_XMM1_Dc;
              local_60._0_8_ = UVar21.fields._8_8_;
              local_60._12_4_ = in_XMM1_Dd;
              local_70 = auVar14;
              il2cpp_runtime_helper_02337ed0();
              auVar14._0_8_ = local_70._0_8_;
              value.fields.z = (float)local_60._0_4_;
              fVar17 = (float)local_60._4_4_;
              fVar19 = local_80.x;
              fVar20 = local_80.y;
            }
            pDVar10 = TypeInfo_GisketchTooltipTrigger;
            if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
              auVar4._4_4_ = fStack_4c;
              auVar4._0_4_ = local_50;
              auVar4._8_4_ = uStack_48;
              auVar4._12_4_ = uStack_44;
              pfVar2 = *(float **)&(TypeInfo_GisketchTooltipTrigger->fields).loops;
              fVar12 = (float)auVar14._0_8_;
              fVar19 = fVar19 + *pfVar2;
              value.fields.z = (value.fields.z + fVar12) - local_50;
              fVar15 = (float)((ulong)auVar14._0_8_ >> 0x20);
              fVar18 = pfVar2[1] + local_88.y;
              if (fVar19 <= value.fields.z) {
                value.fields.z = fVar19;
              }
              fVar16 = fVar17 + fVar15;
              if (fVar18 <= fVar17 + fVar15) {
                fVar16 = fVar18;
              }
              uVar11 = -(uint)(fVar15 + fStack_4c <= fVar18);
              auVar13._0_4_ =
                   local_88.x -
                   (float)(~-(uint)(fVar12 <= fVar19) & (uint)fVar12 |
                          (uint)value.fields.z & -(uint)(fVar12 <= fVar19));
              auVar13._4_4_ =
                   local_88.y -
                   ((float)(~uVar11 & (uint)(fVar15 + fStack_4c) | (uint)fVar16 & uVar11) - fStack_4c);
              auVar13._8_4_ = 0.0 - (float)(~(uint)fVar20 & (uint)fVar15 | (uint)fVar17 & (uint)fVar20);
              auVar13._12_4_ = 0.0 - fVar15;
              auVar14 = divps(auVar13,auVar4);
              UnityEngine_RectTransform__set_pivot
                        (pUVar8,(UnityEngine_Vector2_o)auVar14._0_8_,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchoredPosition
                        (pUVar8,(UnityEngine_Vector2_o)local_88,(MethodInfo *)0x0);
              return;
            }
          }
        }
        il2cpp_runtime_helper_022b2c90();
        if (g_data_057a9d30 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9d30 = '\x01';
        }
        pDVar9 = *(DG_Tweening_Tween_o **)&(pDVar10->fields).intId;
        *(undefined8 *)&(pDVar10->fields).intId = 0;
        il2cpp_runtime_helper_022b4080(&(pDVar10->fields).intId);
        if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
          DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
        }
        pUVar3 = *(UnityEngine_Object_o **)&(pDVar10->fields).isInverted;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pbVar1 = &(pDVar10->fields).isInverted;
        bVar6 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          pUVar3 = *(UnityEngine_Object_o **)pbVar1;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
        }
        *(undefined8 *)&(pDVar10->fields).isInverted = 0;
        il2cpp_runtime_helper_022b4080(pbVar1,0);
        (pDVar10->fields).id = (Il2CppObject *)0x0;
        il2cpp_runtime_helper_022b4080(&(pDVar10->fields).id,0);
        (pDVar10->fields).stringId = (System_String_o *)0x0;
        il2cpp_runtime_helper_022b4080(&(pDVar10->fields).stringId,0);
        (pDVar10->fields).updateType = 0;
        (pDVar10->fields).isIndependentUpdate = 0;
        il2cpp_runtime_helper_022b4080(&(pDVar10->fields).updateType,0);
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlayExit
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3b59010

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlayExit
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  void *pvVar2;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_00;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_CanvasGroup_o *x;
  UnityEngine_Canvas_o *pUVar5;
  undefined1 auVar6 [16];
  char cVar7;
  bool_conflict bVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  DG_Tweening_Sequence_o *pDVar9;
  DG_Tweening_Core_TweenerCore_Vector3__Vector3__VectorOptions__o *t;
  DG_Tweening_Tween_o *pDVar10;
  DG_Tweening_Sequence_o *s;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t_00;
  DG_Tweening_TweenCallback_o *action;
  Il2CppObject *t_01;
  undefined4 extraout_var_02;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGVar11;
  undefined8 *unaff_RBX;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *rect;
  UnityEngine_CanvasGroup_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *unaff_R12;
  UnityEngine_Vector2_Fields *pUVar12;
  UnityEngine_RectTransform_o *unaff_R14;
  UnityEngine_Camera_o *unaff_R15;
  uint uVar13;
  float fVar14;
  float fVar17;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  UnityEngine_Vector3_o endValue;
  UnityEngine_Rect_o UVar26;
  undefined1 auStack_90 [8];
  UnityEngine_Vector2_Fields UStack_88;
  UnityEngine_Vector2_Fields UStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *pGStack_40;
  DG_Tweening_Sequence_o *pDStack_38;
  DG_Tweening_Sequence_o *pDStack_30;
  float fStack_24;
  
  if (g_data_057a9d2f == '\0') {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59030;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5903c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59048;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_DestroyTooltip);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59054;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PlayExit_b__26_0);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59060;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5906c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59078;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59084;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_OnComplete_Sequence);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59090;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5909c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    g_data_057a9d2f = '\x01';
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b590c0;
    il2cpp_runtime_helper_02337ed0();
  }
  pDStack_30 = (DG_Tweening_Sequence_o *)0x3b590cc;
  bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  pDVar10 = (__this->fields)._tween;
  if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b590ef;
    DG_Tweening_TweenExtensions__Kill(pDVar10,0,(MethodInfo *)0x0);
  }
  pUVar4 = (__this->fields)._tooltipRect;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59105;
    il2cpp_runtime_helper_02337ed0();
  }
  pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59111;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  auVar16._0_8_ = CONCAT44(extraout_var,bVar8);
  if ((char)bVar8 == '\0') {
    x = (__this->fields)._group;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5912f;
      il2cpp_runtime_helper_02337ed0();
    }
    pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5913b;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    auVar16._0_8_ = CONCAT44(extraout_var_00,bVar8);
    if ((char)bVar8 == '\0') {
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592f8;
        il2cpp_runtime_helper_02337ed0();
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592ff;
        bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        auVar16._0_8_ = CONCAT44(extraout_var_02,bVar8);
        cVar7 = (char)bVar8;
      }
      else {
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59161;
        bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
        auVar16._0_8_ = CONCAT44(extraout_var_01,bVar8);
        cVar7 = (char)bVar8;
      }
      if (cVar7 != '\0') {
        if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59181;
          il2cpp_runtime_helper_02337ed0();
        }
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59188;
        pDVar9 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
        pUVar4 = (__this->fields)._tooltipRect;
        if (g_data_057a6932 == '\0') {
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b591a5;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
          g_data_057a6932 = '\x01';
        }
        auVar16._0_8_ = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
        endValue.fields.x = (float)auVar16._0_8_ * (float)0x3f666666;
        endValue.fields.y = (float)((ulong)auVar16._0_8_ >> 0x20) * (float)0x3f666666;
        endValue.fields.z = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x14) * 0.9;
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b591e8;
        t = DG_Tweening_ShortcutExtensions__DOScale
                      ((UnityEngine_Transform_o *)pUVar4,endValue,0.1,(MethodInfo *)0x0);
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b591ff;
        pDVar10 = (DG_Tweening_Tween_o *)
                  DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,8,MethodInfo_TweenerCore_3_UnityEngine_Vector3_UnityEngine_Vector3_DG);
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5920c;
        s = DG_Tweening_TweenSettingsExtensions__Join(pDVar9,pDVar10,(MethodInfo *)0x0);
        __this_01 = (__this->fields)._group;
        if (__this_01 != (UnityEngine_CanvasGroup_o *)0x0) {
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59229;
          fStack_24 = UnityEngine_CanvasGroup__get_alpha(__this_01,(MethodInfo *)0x0);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5923e;
          onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59258;
          DG_Tweening_TweenCallback_float____ctor();
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59273;
          t_00 = DG_Tweening_DOVirtual__Float(fStack_24,0.0,0.08,onVirtualUpdate,(MethodInfo *)0x0);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59280;
          pDVar9 = DG_Tweening_TweenSettingsExtensions__Join(s,(DG_Tweening_Tween_o *)t_00,(MethodInfo *)0x0);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b59292;
          action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592ac;
          DG_Tweening_TweenCallback___ctor();
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592c1;
          t_01 = DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                           ((Il2CppObject *)pDVar9,action,MethodInfo_Sequence_OnComplete_Sequence);
          pDStack_30 = (DG_Tweening_Sequence_o *)0x3b592d8;
          pDVar10 = (DG_Tweening_Tween_o *)
                    DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_01,1,MethodInfo_Sequence_SetUpdate_Sequence);
          (__this->fields)._tween = pDVar10;
          il2cpp_runtime_helper_022b4080(&(__this->fields)._tween,pDVar10);
          return;
        }
        pDStack_30 = (DG_Tweening_Sequence_o *)0x3b5931f;
        pGStack_40 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)il2cpp_runtime_helper_022b2c90();
        uStack_48 = 0x3b59331;
        uStack_44 = 0;
        pDStack_38 = (DG_Tweening_Sequence_o *)x;
        pDStack_30 = pDVar9;
        Gisketch_Aottg2UI_Actions_GisketchFocusInputMode__SetPointer((MethodInfo *)0x0);
        pDVar9 = pDStack_38;
        pDStack_38 = pDStack_30;
        uStack_48 = SUB84(pDVar9,0);
        uStack_44 = (undefined4)((ulong)pDVar9 >> 0x20);
        pGStack_40 = __this;
        pDStack_30 = (DG_Tweening_Sequence_o *)pUVar4;
        if (g_data_057a9d2c == '\0') {
          uStack_78 = 0x3b58ef6;
          il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
          uStack_78 = 0x3b58f02;
          il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
          g_data_057a9d2c = '\x01';
        }
        pUVar3 = __this_01[2].monitor;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          uStack_78 = 0x3b58f26;
          il2cpp_runtime_helper_02337ed0();
        }
        uStack_78 = 0x3b58f32;
        bVar8 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar8 == '\0') {
          pUVar3 = (UnityEngine_Object_o *)__this_01[3].fields.m_CachedPtr;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            uStack_78 = 0x3b58f4c;
            il2cpp_runtime_helper_02337ed0();
          }
          uStack_78 = 0x3b58f58;
          bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar8 != '\0') {
            __this_00 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)__this_01[3].fields.m_CachedPtr
            ;
            if (pDVar10 == (DG_Tweening_Tween_o *)0x0) {
              if (g_data_057a694c == '\0') {
                uStack_78 = 0x3b58f90;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
                g_data_057a694c = '\x01';
              }
              pUVar12 = *(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8);
            }
            else {
              pUVar12 = (UnityEngine_Vector2_Fields *)&(pDVar10->fields).isSequenced;
            }
            UStack_80 = *pUVar12;
            pvVar2 = __this_01[3].monitor;
            unaff_R14 = __this_01[2].monitor;
            fStack_50 = SUB84(pvVar2,0);
            fStack_4c = (float)((ulong)pvVar2 >> 0x20);
            uVar20 = 0;
            uVar21 = 0;
            uStack_78 = 0;
            if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[2].fields._text + 4) == 0) {
              uStack_58 = 0;
              auStack_60._0_4_ = UStack_80.x;
              auStack_60._4_4_ = UStack_80.y;
              _uStack_68 = 0;
              auStack_70 = (undefined1  [8])pvVar2;
              uStack_78 = 0x3b58fda;
              il2cpp_runtime_helper_02337ed0();
              fStack_50 = (float)auStack_70._0_4_;
              fStack_4c = (float)auStack_70._4_4_;
              uVar20 = uStack_68;
              uVar21 = uStack_64;
              UStack_80 = (UnityEngine_Vector2_Fields)auStack_60;
              uStack_78 = uStack_58;
            }
            unaff_R12 = pGStack_40;
            unaff_RBX = (undefined8 *)CONCAT44(uStack_44,uStack_48);
            __this = __this_00;
            uStack_48 = uVar20;
            uStack_44 = uVar21;
            pGStack_40 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)unaff_RBX;
            if (g_data_057a9d31 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
              __this = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)&TypeInfo_RectTransform;
              il2cpp_runtime_helper_023445d0();
              g_data_057a9d31 = '\x01';
            }
            UStack_88.x = 0.0;
            UStack_88.y = 0.0;
            unaff_R15 = (UnityEngine_Camera_o *)0x0;
            if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
              pGVar11 = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)
                        UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
              rect = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0;
              if ((pGVar11 != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) &&
                 (rect = (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0,
                 pGVar11->klass == TypeInfo_RectTransform)) {
                rect = pGVar11;
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              bVar8 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                return;
              }
              unaff_R15 = UnityEngine_Canvas__get_worldCamera
                                    ((UnityEngine_Canvas_o *)__this_00,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this = rect;
              UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
                        ((UnityEngine_RectTransform_o *)rect,(UnityEngine_Vector2_o)UStack_80,unaff_R15,
                         (UnityEngine_Vector2_o *)&UStack_88,(MethodInfo *)0x0);
              unaff_RBX = (undefined8 *)0x0;
              if (rect != (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
                UVar26 = UnityEngine_RectTransform__get_rect
                                   ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
                auVar16._0_8_ = UVar26.fields._0_8_;
                auVar16._8_8_ = extraout_XMM0_Qb;
                unaff_RBX = &TypeInfo_GisketchTooltipTrigger;
                fVar22 = UVar26.fields.m_Width;
                fVar19 = UVar26.fields.m_Height;
                fVar24 = UStack_88.x;
                fVar25 = 0.0;
                if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[2].fields._text + 4) == 0) {
                  UStack_80 = (UnityEngine_Vector2_Fields)((ulong)UStack_88 & 0xffffffff);
                  uStack_78 = 0;
                  unique0x100002d8 = uVar20;
                  auStack_60 = (undefined1  [8])UVar26.fields._8_8_;
                  unique0x100002dc = uVar21;
                  _auStack_70 = auVar16;
                  il2cpp_runtime_helper_02337ed0();
                  auVar16._0_8_ = auStack_70;
                  fVar22 = (float)auStack_60._0_4_;
                  fVar19 = (float)auStack_60._4_4_;
                  fVar24 = UStack_80.x;
                  fVar25 = UStack_80.y;
                }
                __this = TypeInfo_GisketchTooltipTrigger;
                if (unaff_R14 != (UnityEngine_RectTransform_o *)0x0) {
                  auVar6._4_4_ = fStack_4c;
                  auVar6._0_4_ = fStack_50;
                  auVar6._8_4_ = uStack_48;
                  auVar6._12_4_ = uStack_44;
                  pUVar5 = TypeInfo_GisketchTooltipTrigger[1].fields._placementCanvas;
                  fVar14 = (float)auVar16._0_8_;
                  fVar24 = fVar24 + *(float *)&pUVar5->klass;
                  fVar22 = (fVar22 + fVar14) - fStack_50;
                  fVar17 = (float)((ulong)auVar16._0_8_ >> 0x20);
                  fVar23 = *(float *)((long)&pUVar5->klass + 4) + UStack_88.y;
                  if (fVar24 <= fVar22) {
                    fVar22 = fVar24;
                  }
                  fVar18 = fVar19 + fVar17;
                  if (fVar23 <= fVar19 + fVar17) {
                    fVar18 = fVar23;
                  }
                  uVar13 = -(uint)(fVar17 + fStack_4c <= fVar23);
                  auVar15._0_4_ =
                       UStack_88.x -
                       (float)(~-(uint)(fVar14 <= fVar24) & (uint)fVar14 |
                              (uint)fVar22 & -(uint)(fVar14 <= fVar24));
                  auVar15._4_4_ =
                       UStack_88.y -
                       ((float)(~uVar13 & (uint)(fVar17 + fStack_4c) | (uint)fVar18 & uVar13) - fStack_4c);
                  auVar15._8_4_ = 0.0 - (float)(~(uint)fVar25 & (uint)fVar17 | (uint)fVar19 & (uint)fVar25);
                  auVar15._12_4_ = 0.0 - fVar17;
                  auVar16 = divps(auVar15,auVar6);
                  UnityEngine_RectTransform__set_pivot
                            (unaff_R14,(UnityEngine_Vector2_o)auVar16._0_8_,(MethodInfo *)0x0);
                  UnityEngine_RectTransform__set_anchoredPosition
                            (unaff_R14,(UnityEngine_Vector2_o)UStack_88,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            auVar16._0_8_ = il2cpp_runtime_helper_022b2c90();
            register0x00000020 = (BADSPACEBASE *)auStack_90;
            goto Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip;
          }
        }
        return;
      }
    }
  }
Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip:
  *(UnityEngine_Camera_o **)((long)register0x00000020 + -8) = unaff_R15;
  *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x10) = unaff_R14;
  *(Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o **)((long)register0x00000020 + -0x18) = unaff_R12;
  *(undefined8 **)((long)register0x00000020 + -0x20) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x28) = auVar16._0_8_;
  if (g_data_057a9d30 == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c50;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d30 = '\x01';
  }
  pDVar10 = (__this->fields)._tween;
  (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c6e;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tween);
  if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c7f;
    DG_Tweening_TweenExtensions__Kill(pDVar10,0,(MethodInfo *)0x0);
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59c9c;
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._tooltip;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59cac;
  bVar8 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar3 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59cc5;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59ccf;
    UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
  }
  (__this->fields)._tooltip = (UnityEngine_GameObject_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59ce1;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  (__this->fields)._tooltipRect = (UnityEngine_RectTransform_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59cf4;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltipRect,0);
  (__this->fields)._group = (UnityEngine_CanvasGroup_o *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b59d07;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._group,0);
  (__this->fields)._placementCanvas = (UnityEngine_Canvas_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._placementCanvas,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$DestroyTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3b59c30

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__DestroyTooltip
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  DG_Tweening_Tween_o *t;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  
  if (g_data_057a9d30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d30 = '\x01';
  }
  t = (__this->fields)._tween;
  (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tween);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._tooltip;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
  }
  (__this->fields)._tooltip = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  (__this->fields)._tooltipRect = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltipRect,0);
  (__this->fields)._group = (UnityEngine_CanvasGroup_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._group,0);
  (__this->fields)._placementCanvas = (UnityEngine_Canvas_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._placementCanvas,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$PlaceTooltip
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip (UnityEngine_Canvas_o* canvas, UnityEngine_Vector2_o screenPosition, UnityEngine_Vector2_o size, UnityEngine_RectTransform_o* tooltip, const MethodInfo* method);
// 0x3b59a30

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__PlaceTooltip
               (UnityEngine_Canvas_o *canvas,UnityEngine_Vector2_o screenPosition,UnityEngine_Vector2_o size,
               UnityEngine_RectTransform_o *tooltip,MethodInfo *method)

{
  float *pfVar1;
  UnityEngine_RectTransform_c *pUVar2;
  bool_conflict bVar3;
  UnityEngine_Camera_o *cam;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_RectTransform_o *pUVar4;
  uint uVar5;
  float fVar6;
  float fVar9;
  undefined8 in_XMM0_Qb;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar10;
  float fVar11;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  UnityEngine_Rect_o UVar17;
  UnityEngine_Vector2_Fields UStack_60;
  UnityEngine_Vector2_Fields UStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  
  auStack_28._8_4_ = in_XMM1_Dc;
  auStack_28._0_8_ = size.fields;
  auStack_28._12_4_ = in_XMM1_Dd;
  pUVar4 = (UnityEngine_RectTransform_o *)canvas;
  UStack_58 = screenPosition.fields;
  uStack_50 = in_XMM0_Qb;
  if (g_data_057a9d31 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransformUtility);
    pUVar4 = (UnityEngine_RectTransform_o *)&TypeInfo_RectTransform;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d31 = '\x01';
  }
  UStack_60.x = 0.0;
  UStack_60.y = 0.0;
  if (canvas != (UnityEngine_Canvas_o *)0x0) {
    pUVar4 = (UnityEngine_RectTransform_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)canvas,(MethodInfo *)0x0);
    rect = (UnityEngine_RectTransform_o *)0x0;
    if ((pUVar4 != (UnityEngine_RectTransform_o *)0x0) &&
       (rect = (UnityEngine_RectTransform_o *)0x0, pUVar4->klass == TypeInfo_RectTransform)) {
      rect = pUVar4;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    cam = UnityEngine_Canvas__get_worldCamera(canvas,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_RectTransformUtility + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar4 = rect;
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)UStack_58,cam,(UnityEngine_Vector2_o *)&UStack_60,(MethodInfo *)0x0
              );
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      UVar17 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      auVar8._0_8_ = UVar17.fields._0_8_;
      auVar8._8_8_ = extraout_XMM0_Qb;
      fVar12 = UVar17.fields.m_Width;
      fVar11 = UVar17.fields.m_Height;
      fVar15 = UStack_60.x;
      fVar16 = 0.0;
      if (*(int *)((long)&TypeInfo_GisketchTooltipTrigger[9].monitor + 4) == 0) {
        UStack_58 = (UnityEngine_Vector2_Fields)((ulong)UStack_60 & 0xffffffff);
        uStack_50 = 0;
        auStack_38._8_4_ = in_XMM1_Dc;
        auStack_38._0_8_ = UVar17.fields._8_8_;
        auStack_38._12_4_ = in_XMM1_Dd;
        auStack_48 = auVar8;
        il2cpp_runtime_helper_02337ed0();
        auVar8._0_8_ = auStack_48._0_8_;
        fVar12 = (float)auStack_38._0_4_;
        fVar11 = (float)auStack_38._4_4_;
        fVar15 = UStack_58.x;
        fVar16 = UStack_58.y;
      }
      pUVar4 = TypeInfo_GisketchTooltipTrigger;
      if (tooltip != (UnityEngine_RectTransform_o *)0x0) {
        pfVar1 = (float *)TypeInfo_GisketchTooltipTrigger[7].fields.m_CachedPtr;
        fVar6 = (float)auVar8._0_8_;
        fVar15 = fVar15 + *pfVar1;
        fVar12 = (fVar12 + fVar6) - auStack_28._0_4_;
        fVar9 = (float)((ulong)auVar8._0_8_ >> 0x20);
        fVar14 = pfVar1[1] + UStack_60.y;
        fVar13 = fVar9 + auStack_28._4_4_;
        if (fVar15 <= fVar12) {
          fVar12 = fVar15;
        }
        fVar10 = fVar11 + fVar9;
        if (fVar14 <= fVar11 + fVar9) {
          fVar10 = fVar14;
        }
        uVar5 = -(uint)(fVar13 <= fVar14);
        auVar7._0_4_ = UStack_60.x -
                       (float)(~-(uint)(fVar6 <= fVar15) & (uint)fVar6 |
                              (uint)fVar12 & -(uint)(fVar6 <= fVar15));
        auVar7._4_4_ = UStack_60.y -
                       ((float)(~uVar5 & (uint)fVar13 | (uint)fVar10 & uVar5) - auStack_28._4_4_);
        auVar7._8_4_ = 0.0 - (float)(~(uint)fVar16 & (uint)fVar9 | (uint)fVar11 & (uint)fVar16);
        auVar7._12_4_ = 0.0 - fVar9;
        auVar8 = divps(auVar7,auStack_28);
        UnityEngine_RectTransform__set_pivot(tooltip,(UnityEngine_Vector2_o)auVar8._0_8_,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchoredPosition
                  (tooltip,(UnityEngine_Vector2_o)UStack_60,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d30 = '\x01';
  }
  pUVar2 = pUVar4[3].klass;
  pUVar4[3].klass = (UnityEngine_RectTransform_c *)0x0;
  il2cpp_runtime_helper_022b4080(pUVar4 + 3);
  if (pUVar2 != (UnityEngine_RectTransform_c *)0x0) {
    DG_Tweening_TweenExtensions__Kill((DG_Tweening_Tween_o *)pUVar2,0,(MethodInfo *)0x0);
  }
  pUVar2 = pUVar4[2].klass;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar2 = pUVar4[2].klass;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
  }
  pUVar4[2].klass = (UnityEngine_RectTransform_c *)0x0;
  il2cpp_runtime_helper_022b4080(pUVar4 + 2,0);
  pUVar4[2].monitor = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&pUVar4[2].monitor,0);
  pUVar4[2].fields.m_CachedPtr = 0;
  il2cpp_runtime_helper_022b4080(&pUVar4[2].fields,0);
  pUVar4[3].fields.m_CachedPtr = 0;
  il2cpp_runtime_helper_022b4080(&pUVar4[3].fields,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDisable
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDisable (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3b59d30

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDisable
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  DG_Tweening_Tween_o *t;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  
  if (g_data_057a9d30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d30 = '\x01';
  }
  t = (__this->fields)._tween;
  (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tween);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._tooltip;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
  }
  (__this->fields)._tooltip = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  (__this->fields)._tooltipRect = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltipRect,0);
  (__this->fields)._group = (UnityEngine_CanvasGroup_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._group,0);
  (__this->fields)._placementCanvas = (UnityEngine_Canvas_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._placementCanvas,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDestroy (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3b59d40

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__OnDestroy
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  DG_Tweening_Tween_o *t;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  
  if (g_data_057a9d30 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9d30 = '\x01';
  }
  t = (__this->fields)._tween;
  (__this->fields)._tween = (DG_Tweening_Tween_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tween);
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  pUVar2 = (UnityEngine_Object_o *)(__this->fields)._tooltip;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ppUVar1 = &(__this->fields)._tooltip;
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    pUVar2 = (UnityEngine_Object_o *)*ppUVar1;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar2,(MethodInfo *)0x0);
  }
  (__this->fields)._tooltip = (UnityEngine_GameObject_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  (__this->fields)._tooltipRect = (UnityEngine_RectTransform_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._tooltipRect,0);
  (__this->fields)._group = (UnityEngine_CanvasGroup_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._group,0);
  (__this->fields)._placementCanvas = (UnityEngine_Canvas_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._placementCanvas,0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___ctor (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, const MethodInfo* method);
// 0x3b59d50

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___ctor
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___cctor (const MethodInfo* method);
// 0x3b59d60

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___cctor(MethodInfo *method)

{
  if (g_data_057a9d32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTooltipTrigger);
    g_data_057a9d32 = '\x01';
  }
  **(undefined8 **)(TypeInfo_GisketchTooltipTrigger + 0xb8) = 0x41c0000041c00000;
  return;
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$<PlayEnter>b__25_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayEnter_b__25_0 (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, float value, const MethodInfo* method);
// 0x3b59da0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayEnter_b__25_0
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Reflection_MethodBase_o *__this_00;
  Il2CppObject *pIVar4;
  char cVar5;
  bool_conflict bVar6;
  System_String_array *value_00;
  System_String_o *pSVar7;
  System_Object_array *parameters;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar12;
  UnityEngine_CanvasGroup_o *pUVar13;
  float value_01;
  undefined1 auVar14 [12];
  
  pUVar13 = (__this->fields)._group;
  if (pUVar13 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(pUVar13,value,(MethodInfo *)0x0);
    return;
  }
  value_01 = (float)il2cpp_runtime_helper_022b2c90();
  pUVar13 = (UnityEngine_CanvasGroup_o *)pUVar13[2].fields.m_CachedPtr;
  if (pUVar13 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(pUVar13,value_01,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057a9d33 = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)method,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = System_Reflection_MethodInfo__op_Equality
                    (*(System_Reflection_MethodInfo_o **)(*(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) + 8),
                     (System_Reflection_MethodInfo_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if ((method == (MethodInfo *)0x0) ||
     (value_00 = System_String__Split((System_String_o *)method,0x2e,0,(MethodInfo *)0x0),
     value_00 == (System_String_array *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
label_03b5a0bd:
    il2cpp_runtime_helper_022b2c90();
label_03b5a0c2:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0c7:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0cc:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0d1:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0d6:
    uVar9 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar9,0);
label_03b5a0e5:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0ea:
    il2cpp_runtime_helper_022b2c90();
label_03b5a0ef:
    uVar9 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar9,0);
label_03b5a0fe:
    uVar9 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar9,0);
  }
  else {
    iVar1 = (int)value_00->max_length;
    if (iVar1 < 2) {
      return;
    }
    pSVar2 = value_00->m_Items[0];
    pSVar3 = value_00->m_Items[1];
    if (iVar1 == 2) {
      pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      iVar1 = *(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4);
    }
    else {
      pSVar7 = System_String__Join_3af7dc0(".",value_00,2,iVar1 + -2,(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Reflection_MethodBase_o **)(*(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) + 8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
    if (parameters == (System_Object_array *)0x0) goto label_03b5a0bd;
    if ((pSVar2 != (System_String_o *)0x0) &&
       (lVar8 = il2cpp_runtime_helper_023051f0(pSVar2,(((parameters->obj).klass)->_1).element_class), lVar8 == 0))
    goto label_03b5a0ef;
    if ((int)parameters->max_length == 0) goto label_03b5a0c2;
    parameters->m_Items[0] = (Il2CppObject *)pSVar2;
    il2cpp_runtime_helper_022b4080(parameters->m_Items,pSVar2);
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar8 = il2cpp_runtime_helper_023051f0(pSVar3,(((parameters->obj).klass)->_1).element_class), lVar8 == 0))
    goto label_03b5a0fe;
    if ((uint)parameters->max_length < 2) goto label_03b5a0c7;
    parameters->m_Items[1] = (Il2CppObject *)pSVar3;
    il2cpp_runtime_helper_022b4080(parameters->m_Items + 1,pSVar3);
    if ((pSVar7 == (System_String_o *)0x0) ||
       (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7,(((parameters->obj).klass)->_1).element_class), lVar8 != 0)) {
      if ((uint)parameters->max_length < 3) goto label_03b5a0cc;
      parameters->m_Items[2] = (Il2CppObject *)pSVar7;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 2,pSVar7);
      pIVar4 = (Il2CppObject *)**(long **)(g_data_057b9c00 + 0xb8);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar8 = il2cpp_runtime_helper_023051f0(pIVar4,(((parameters->obj).klass)->_1).element_class), lVar8 == 0))
      goto label_03b5a11c;
      if ((uint)parameters->max_length < 4) goto label_03b5a0d1;
      parameters->m_Items[3] = pIVar4;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 3,pIVar4);
      pMVar12 = extraout_RDX;
      if (extraout_RDX == (MethodInfo *)0x0) {
        pMVar12 = method;
      }
      lVar8 = il2cpp_runtime_helper_023051f0(pMVar12,(((parameters->obj).klass)->_1).element_class);
      if (lVar8 == 0) goto label_03b5a0d6;
      if ((uint)parameters->max_length < 5) goto label_03b5a0e5;
      parameters->m_Items[4] = (Il2CppObject *)pMVar12;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 4);
      if (__this_00 != (System_Reflection_MethodBase_o *)0x0) {
        System_Reflection_MethodBase__Invoke(__this_00,(Il2CppObject *)0x0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_03b5a0ea;
    }
  }
  uVar9 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar9,0);
label_03b5a11c:
  uVar9 = il2cpp_runtime_helper_0231b270();
  auVar14 = il2cpp_runtime_helper_022b2b10(uVar9,0);
  if (auVar14._8_4_ != 1) {
    _Unwind_Resume(auVar14._0_8_);
  }
  puVar10 = (undefined8 *)__cxa_begin_catch(auVar14._0_8_);
  cVar5 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar10);
  if (cVar5 != '\0') {
    __cxa_end_catch();
    return;
  }
  puVar11 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar11 = *puVar10;
  __cxa_throw(puVar11,&PTR_PTR_05215060,0);
}


// Gisketch.Aottg2UI.Overlays.GisketchTooltipTrigger$$<PlayExit>b__26_0
// il2cpp: void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayExit_b__26_0 (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o* __this, float value, const MethodInfo* method);
// 0x3b59dc0

void Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger___PlayExit_b__26_0
               (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this,float value,MethodInfo *method)

{
  int iVar1;
  UnityEngine_CanvasGroup_o *__this_00;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_Reflection_MethodBase_o *__this_01;
  Il2CppObject *pIVar4;
  char cVar5;
  bool_conflict bVar6;
  System_String_array *value_00;
  System_String_o *pSVar7;
  System_Object_array *parameters;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar12;
  undefined1 auVar13 [12];
  
  __this_00 = (__this->fields)._group;
  if (__this_00 != (UnityEngine_CanvasGroup_o *)0x0) {
    UnityEngine_CanvasGroup__set_alpha(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&".");
    g_data_057a9d33 = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)method,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = System_Reflection_MethodInfo__op_Equality
                    (*(System_Reflection_MethodInfo_o **)(*(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) + 8),
                     (System_Reflection_MethodInfo_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return;
  }
  if ((method == (MethodInfo *)0x0) ||
     (value_00 = System_String__Split((System_String_o *)method,0x2e,0,(MethodInfo *)0x0),
     value_00 == (System_String_array *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
label_03b5a0bd:
    il2cpp_runtime_helper_022b2c90();
label_03b5a0c2:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0c7:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0cc:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0d1:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0d6:
    uVar9 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar9,0);
label_03b5a0e5:
    il2cpp_runtime_helper_022b2ca0();
label_03b5a0ea:
    il2cpp_runtime_helper_022b2c90();
label_03b5a0ef:
    uVar9 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar9,0);
label_03b5a0fe:
    uVar9 = il2cpp_runtime_helper_0231b270();
    il2cpp_runtime_helper_022b2b10(uVar9,0);
  }
  else {
    iVar1 = (int)value_00->max_length;
    if (iVar1 < 2) {
      return;
    }
    pSVar2 = value_00->m_Items[0];
    pSVar3 = value_00->m_Items[1];
    if (iVar1 == 2) {
      pSVar7 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      iVar1 = *(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4);
    }
    else {
      pSVar7 = System_String__Join_3af7dc0(".",value_00,2,iVar1 + -2,(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_Aottg2GisketchLocalizer + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = *(System_Reflection_MethodBase_o **)(*(long *)(TypeInfo_Aottg2GisketchLocalizer + 0xb8) + 8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,5);
    if (parameters == (System_Object_array *)0x0) goto label_03b5a0bd;
    if ((pSVar2 != (System_String_o *)0x0) &&
       (lVar8 = il2cpp_runtime_helper_023051f0(pSVar2,(((parameters->obj).klass)->_1).element_class), lVar8 == 0))
    goto label_03b5a0ef;
    if ((int)parameters->max_length == 0) goto label_03b5a0c2;
    parameters->m_Items[0] = (Il2CppObject *)pSVar2;
    il2cpp_runtime_helper_022b4080(parameters->m_Items,pSVar2);
    if ((pSVar3 != (System_String_o *)0x0) &&
       (lVar8 = il2cpp_runtime_helper_023051f0(pSVar3,(((parameters->obj).klass)->_1).element_class), lVar8 == 0))
    goto label_03b5a0fe;
    if ((uint)parameters->max_length < 2) goto label_03b5a0c7;
    parameters->m_Items[1] = (Il2CppObject *)pSVar3;
    il2cpp_runtime_helper_022b4080(parameters->m_Items + 1,pSVar3);
    if ((pSVar7 == (System_String_o *)0x0) ||
       (lVar8 = il2cpp_runtime_helper_023051f0(pSVar7,(((parameters->obj).klass)->_1).element_class), lVar8 != 0)) {
      if ((uint)parameters->max_length < 3) goto label_03b5a0cc;
      parameters->m_Items[2] = (Il2CppObject *)pSVar7;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 2,pSVar7);
      pIVar4 = (Il2CppObject *)**(long **)(g_data_057b9c00 + 0xb8);
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar8 = il2cpp_runtime_helper_023051f0(pIVar4,(((parameters->obj).klass)->_1).element_class), lVar8 == 0))
      goto label_03b5a11c;
      if ((uint)parameters->max_length < 4) goto label_03b5a0d1;
      parameters->m_Items[3] = pIVar4;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 3,pIVar4);
      pMVar12 = extraout_RDX;
      if (extraout_RDX == (MethodInfo *)0x0) {
        pMVar12 = method;
      }
      lVar8 = il2cpp_runtime_helper_023051f0(pMVar12,(((parameters->obj).klass)->_1).element_class);
      if (lVar8 == 0) goto label_03b5a0d6;
      if ((uint)parameters->max_length < 5) goto label_03b5a0e5;
      parameters->m_Items[4] = (Il2CppObject *)pMVar12;
      il2cpp_runtime_helper_022b4080(parameters->m_Items + 4);
      if (__this_01 != (System_Reflection_MethodBase_o *)0x0) {
        System_Reflection_MethodBase__Invoke(__this_01,(Il2CppObject *)0x0,parameters,(MethodInfo *)0x0);
        return;
      }
      goto label_03b5a0ea;
    }
  }
  uVar9 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar9,0);
label_03b5a11c:
  uVar9 = il2cpp_runtime_helper_0231b270();
  auVar13 = il2cpp_runtime_helper_022b2b10(uVar9,0);
  if (auVar13._8_4_ != 1) {
    _Unwind_Resume(auVar13._0_8_);
  }
  puVar10 = (undefined8 *)__cxa_begin_catch(auVar13._0_8_);
  cVar5 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar10);
  if (cVar5 != '\0') {
    __cxa_end_catch();
    return;
  }
  puVar11 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar11 = *puVar10;
  __cxa_throw(puVar11,&PTR_PTR_05215060,0);
}


