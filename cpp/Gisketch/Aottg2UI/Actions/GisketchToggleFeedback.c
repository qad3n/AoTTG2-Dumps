// Type: Gisketch.Aottg2UI.Actions.GisketchToggleFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchToggleFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x3b9cbe0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback.<>c__DisplayClass16_0$$<RefreshSwitch>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0___RefreshSwitch_b__0 (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0_o* __this, float value, const MethodInfo* method);
// 0x3b9cd00

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0___RefreshSwitch_b__0
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0_o *__this,float value,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  UnityEngine_Vector2_Fields UVar5;
  UnityEngine_Vector2_Fields UVar6;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *pGVar11;
  UnityEngine_UI_Image_o *pUVar12;
  UnityEngine_RectTransform_o *__this_00;
  code *pcVar13;
  UnityEngine_Vector2_o value_00;
  float fVar14;
  float fVar15;
  
  pGVar11 = (__this->fields).__4__this;
  if ((pGVar11 != (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0) &&
     (pUVar12 = (pGVar11->fields)._switchTrack, pUVar12 != (UnityEngine_UI_Image_o *)0x0)) {
    uVar1 = (__this->fields).startColor.fields.r;
    uVar7 = (__this->fields).startColor.fields.g;
    uVar2 = (__this->fields).startColor.fields.b;
    uVar8 = (__this->fields).startColor.fields.a;
    uVar3 = (__this->fields).targetColor.fields.r;
    uVar9 = (__this->fields).targetColor.fields.g;
    uVar4 = (__this->fields).targetColor.fields.b;
    uVar10 = (__this->fields).targetColor.fields.a;
    (*(pUVar12->klass->vtable)._23_set_color.methodPtr)
              (CONCAT44(((float)uVar9 - (float)uVar7) * value + (float)uVar7,
                        ((float)uVar3 - (float)uVar1) * value + (float)uVar1),
               CONCAT44(((float)uVar10 - (float)uVar8) * value + (float)uVar8,
                        ((float)uVar4 - (float)uVar2) * value + (float)uVar2));
    pGVar11 = (__this->fields).__4__this;
    if ((pGVar11 != (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0) &&
       (__this_00 = (pGVar11->fields)._switchThumb, __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
      UVar5 = (__this->fields).startPosition.fields;
      UVar6 = (__this->fields).targetPosition.fields;
      fVar14 = UVar5.x;
      fVar15 = UVar5.y;
      value_00.fields.x = (UVar6.x - fVar14) * value + fVar14;
      value_00.fields.y = (UVar6.y - fVar15) * value + fVar15;
      UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_UI_Toggle_o* toggle, TMPro_TextMeshProUGUI_o* label, UnityEngine_UI_Image_o* switchTrack, UnityEngine_RectTransform_o* switchThumb, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b9c370

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,UnityEngine_UI_Toggle_o *toggle,
               TMPro_TextMeshProUGUI_o *label,UnityEngine_UI_Image_o *switchTrack,
               UnityEngine_RectTransform_o *switchThumb,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               MethodInfo *method)

{
  undefined4 uVar1;
  byte bVar2;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  UnityEngine_Object_o *pUVar3;
  UnityEngine_Material_o *pUVar4;
  System_String_o *token;
  DG_Tweening_Tween_o *pDVar5;
  long *plVar6;
  code *pcVar7;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_Vector2_o UVar9;
  bool_conflict bVar10;
  undefined8 *puVar11;
  char *pcVar12;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar13;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *unaff_RBX;
  UnityEngine_UI_Toggle_o ***pppUVar14;
  TMPro_TextMeshProUGUI_o *unaff_RBP;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *pGVar15;
  TMPro_TextMeshProUGUI_o *pTVar16;
  TMPro_TextMeshProUGUI_o *unaff_R12;
  TMPro_TextMeshProUGUI_o *unaff_R14;
  TMPro_TextMeshProUGUI_o *pTVar17;
  UnityEngine_Vector4_o *pUVar18;
  TMPro_TextMeshProUGUI_o *unaff_R15;
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *pSVar19;
  float fVar20;
  undefined8 uVar21;
  UnityEngine_Color_o fallback;
  UnityEngine_UI_Toggle_o **local_38;
  UnityEngine_Color_Fields UVar22;
  
  pppUVar14 = &local_38;
  if (g_data_057a9f26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057a9f26 = '\x01';
  }
  local_38 = &(__this->fields)._toggle;
  (__this->fields)._toggle = toggle;
  il2cpp_runtime_helper_022b4080(local_38,toggle);
  (__this->fields)._label = label;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._label,label);
  (__this->fields)._switchTrack = switchTrack;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._switchTrack,switchTrack);
  (__this->fields)._switchThumb = switchThumb;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._switchThumb,switchThumb);
  (__this->fields)._theme = theme;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._theme);
  pTVar17 = (TMPro_TextMeshProUGUI_o *)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
  pTVar16 = label;
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar20 = 5.60519e-43;
  if ((char)bVar10 == '\0') {
label_03b9c45e:
    (__this->fields)._normalWeight = (int32_t)fVar20;
    switchTrack = (UnityEngine_UI_Image_o *)(__this->fields)._toggle;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
    pTVar16 = (TMPro_TextMeshProUGUI_o *)switchTrack;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)switchTrack,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
label_03b9c4dc:
      pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
      pppUVar14 = (UnityEngine_UI_Toggle_o ***)register0x00000020;
      switchTrack = (UnityEngine_UI_Image_o *)unaff_RBP;
      theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)unaff_R12;
      pTVar17 = unaff_R14;
      label = unaff_R15;
      goto Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch;
    }
    if (*local_38 != (UnityEngine_UI_Toggle_o *)0x0) {
      __this_00 = ((*local_38)->fields).m_Group;
      switchTrack = (UnityEngine_UI_Image_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
      pGVar15 = __this;
      pTVar16 = (TMPro_TextMeshProUGUI_o *)switchTrack;
      UnityEngine_Events_UnityAction_bool____ctor();
      pTVar17 = (TMPro_TextMeshProUGUI_o *)0x0;
      if (__this_00 != (UnityEngine_UI_ToggleGroup_o *)0x0) {
        UnityEngine_Events_UnityEvent_bool___AddListener
                  ((UnityEngine_Events_UnityEvent_bool__o *)__this_00,
                   (UnityEngine_Events_UnityAction_T0__o *)switchTrack,MethodInfo_Void_AddListener);
        goto label_03b9c4dc;
      }
    }
  }
  else if (label != (TMPro_TextMeshProUGUI_o *)0x0) {
    fVar20 = (label->fields).m_outlineWidth;
    goto label_03b9c45e;
  }
  il2cpp_runtime_helper_022b2c90();
  unaff_RBX = __this;
  __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)pTVar16;
Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch:
  do {
    pTVar16 = (TMPro_TextMeshProUGUI_o *)__this;
    *(UnityEngine_UI_Image_o **)((long)pppUVar14 + -8) = switchTrack;
    *(TMPro_TextMeshProUGUI_o **)((long)pppUVar14 + -0x10) = label;
    *(TMPro_TextMeshProUGUI_o **)((long)pppUVar14 + -0x18) = pTVar17;
    *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)((long)pppUVar14 + -0x20) = theme;
    *(Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o **)((long)pppUVar14 + -0x28) = unaff_RBX;
    label = (TMPro_TextMeshProUGUI_o *)((ulong)pGVar15 & 0xffffffff);
    if (g_data_057a9f28 == '\0') {
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c52b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c537;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c543;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c54f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c55b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c567;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c573;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c57f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshSwitch_b__0);
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c58b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c597;
      il2cpp_runtime_helper_023445d0(&"primary");
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c5a3;
      il2cpp_runtime_helper_023445d0(&"engravedBg");
      g_data_057a9f28 = '\x01';
    }
    *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c5b9;
    theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
    *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c5c6;
    __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)theme;
    System_Object___ctor((Il2CppObject *)theme,(MethodInfo *)0x0);
    if ((TMPro_TextMeshProUGUI_o *)theme != (TMPro_TextMeshProUGUI_o *)0x0) {
      (((TMPro_TextMeshProUGUI_o *)theme)->fields).m_CachedPtr = (intptr_t)pTVar16;
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c5e3;
      il2cpp_runtime_helper_022b4080(&((TMPro_TextMeshProUGUI_o *)theme)->fields);
      pUVar3 = *(UnityEngine_Object_o **)&(pTVar16->fields).m_Color.fields.b;
      unaff_RBX = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)&TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c5ff;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c60b;
      bVar10 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return;
      }
      pUVar3 = *(UnityEngine_Object_o **)&(pTVar16->fields).m_SkipLayoutUpdate;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c624;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c630;
      bVar10 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return;
      }
      if (*(long *)&(pTVar16->fields).m_RaycastTarget == 0) {
        return;
      }
      switchTrack = (UnityEngine_UI_Image_o *)(pTVar16->fields).m_Material;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c650;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c65c;
      __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)switchTrack;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)switchTrack,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return;
      }
      pUVar4 = (pTVar16->fields).m_Material;
      if ((pUVar4 != (UnityEngine_Material_o *)0x0) &&
         (__this = *(Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o **)&(pTVar16->fields).m_RaycastTarget,
         (TMPro_TextMeshProUGUI_o *)__this != (TMPro_TextMeshProUGUI_o *)0x0)) {
        if (*(char *)&pUVar4[0xc].klass == '\0') {
          puVar11 = &"engravedBg";
        }
        else {
          puVar11 = &"primary";
        }
        token = (System_String_o *)*puVar11;
        *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c6b4;
        fallback.fields.b = 1.0;
        fallback.fields.a = 1.0;
        fallback.fields.r = 1.0;
        fallback.fields.g = 1.0;
        UVar22 = (UnityEngine_Color_Fields)
                 Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this,token,fallback,
                            (MethodInfo *)0x0);
        uVar21 = UVar22._8_8_;
        (((TMPro_TextMeshProUGUI_o *)theme)->fields).m_Color.fields = UVar22;
        pUVar4 = (pTVar16->fields).m_Material;
        if (pUVar4 != (UnityEngine_Material_o *)0x0) {
          bVar2 = *(byte *)&pUVar4[0xc].klass;
          *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c6d9;
          UVar9 = Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
                            ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)pTVar16,(uint)bVar2,
                             method_00);
          *(UnityEngine_Vector2_Fields *)&(((TMPro_TextMeshProUGUI_o *)theme)->fields).m_RaycastTarget =
               UVar9.fields;
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c6f7;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c6fe;
          bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          pDVar5 = *(DG_Tweening_Tween_o **)&(pTVar16->fields).m_RaycastPadding.fields;
          if (((char)bVar10 == '\0') || ((char)label == '\0')) {
            if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c7d7;
              DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
            }
            plVar6 = *(long **)&(pTVar16->fields).m_Color.fields.b;
            __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
            if (plVar6 != (long *)0x0) {
              uVar1 = (((TMPro_TextMeshProUGUI_o *)theme)->fields).m_Color.fields.r;
              uVar21._0_4_ = (((TMPro_TextMeshProUGUI_o *)theme)->fields).m_Color.fields.b;
              uVar21._4_4_ = (((TMPro_TextMeshProUGUI_o *)theme)->fields).m_Color.fields.a;
              pcVar7 = *(code **)(*plVar6 + 0x2a8);
              *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c802;
              (*pcVar7)(uVar1,uVar21);
              pUVar8 = *(UnityEngine_RectTransform_o **)&(pTVar16->fields).m_SkipLayoutUpdate;
              __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
              if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchoredPosition
                          (pUVar8,(UnityEngine_Vector2_o)
                                  *(UnityEngine_Vector2_Fields *)
                                   &(((TMPro_TextMeshProUGUI_o *)theme)->fields).m_RaycastTarget,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c721;
              DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
            }
            plVar6 = *(long **)&(pTVar16->fields).m_Color.fields.b;
            __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
            if (plVar6 != (long *)0x0) {
              pcVar7 = *(code **)(*plVar6 + 0x298);
              *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c73e;
              pSVar19 = (System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)
                        (*pcVar7)();
              (((TMPro_TextMeshProUGUI_o *)theme)->fields).m_CancellationTokenSource =
                   (System_Threading_CancellationTokenSource_o *)pSVar19;
              *(int *)&(((TMPro_TextMeshProUGUI_o *)theme)->fields).m_Material = (int)uVar21;
              *(int *)((long)&(((TMPro_TextMeshProUGUI_o *)theme)->fields).m_Material + 4) =
                   (int)((ulong)uVar21 >> 0x20);
              pUVar8 = *(UnityEngine_RectTransform_o **)&(pTVar16->fields).m_SkipLayoutUpdate;
              __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
              if (pUVar8 != (UnityEngine_RectTransform_o *)0x0) {
                *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c75b;
                UVar9 = UnityEngine_RectTransform__get_anchoredPosition(pUVar8,(MethodInfo *)0x0);
                *(UnityEngine_Vector2_Fields *)
                 &(((TMPro_TextMeshProUGUI_o *)theme)->fields).m_SkipLayoutUpdate = UVar9.fields;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c779;
                  il2cpp_runtime_helper_02337ed0();
                }
                pUVar18 = &(pTVar16->fields).m_RaycastPadding;
                pcVar12 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                if (*pcVar12 == '\0') {
                  *(undefined4 *)((long)pppUVar14 + -0x2c) = 0x3c23d70a;
                }
                else {
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c79e;
                    il2cpp_runtime_helper_02337ed0();
                    pcVar12 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                  }
                  fVar20 = 0.01;
                  if (0.01 <= *(float *)(pcVar12 + 4) * 0.12) {
                    fVar20 = *(float *)(pcVar12 + 4) * 0.12;
                  }
                  *(float *)((long)pppUVar14 + -0x2c) = fVar20;
                }
                *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c846;
                onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c860;
                DG_Tweening_TweenCallback_float____ctor();
                *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c87b;
                t = DG_Tweening_DOVirtual__Float
                              (0.0,1.0,*(float *)((long)pppUVar14 + -0x2c),onVirtualUpdate,(MethodInfo *)0x0);
                *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c892;
                pIVar13 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                    ((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
                *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c8a9;
                pIVar13 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar13,1,MethodInfo_Tweener_SetUpdate_Tweener);
                *(Il2CppObject **)&pUVar18->fields = pIVar13;
                *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c8b7;
                il2cpp_runtime_helper_022b4080(pUVar18);
                pDVar5 = *(DG_Tweening_Tween_o **)&pUVar18->fields;
                if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                  *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c8d2;
                  il2cpp_runtime_helper_02337ed0();
                }
                Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar5,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)pppUVar14 + -0x40) = 0x3b9c8ef;
    il2cpp_runtime_helper_022b2c90();
    *(Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o **)((long)pppUVar14 + -0x40) = unaff_RBX;
    *(undefined8 *)((long)pppUVar14 + -0x48) = 0x3b9c8fd;
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
    pGVar15 = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x1;
    unaff_RBX = *(Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o **)((long)pppUVar14 + -0x40);
    pppUVar14 = (UnityEngine_UI_Toggle_o ***)((long)pppUVar14 + -0x38);
    pTVar17 = pTVar16;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnValueChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnValueChanged (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool __, const MethodInfo* method);
// 0x3b9c8f0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnValueChanged
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool_conflict __,MethodInfo *method
               )

{
  undefined4 uVar1;
  UnityEngine_UI_Selectable_o *pUVar2;
  byte bVar3;
  UnityEngine_UI_Image_o *x;
  UnityEngine_RectTransform_o *x_00;
  long lVar4;
  System_String_o *token;
  DG_Tweening_Tween_o *pDVar5;
  Il2CppMethodPointer pIVar6;
  UnityEngine_Vector2_o UVar7;
  bool_conflict bVar8;
  undefined8 *puVar9;
  char *pcVar10;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *t_00;
  UnityEngine_UI_Selectable_o *pUVar11;
  MethodInfo *method_00;
  long *unaff_RBX;
  UnityEngine_UI_Toggle_o *unaff_RBP;
  UnityEngine_UI_Toggle_o *__this_00;
  UnityEngine_UI_Toggle_o *unaff_R12;
  UnityEngine_UI_Selectable_o **ppUVar12;
  UnityEngine_UI_Toggle_o *unaff_R14;
  undefined8 unaff_R15;
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *pSVar13;
  float fVar14;
  UnityEngine_Color_o UVar16;
  undefined8 uVar15;
  
  do {
    __this_00 = (UnityEngine_UI_Toggle_o *)__this;
    *(long **)((long)register0x00000020 + -8) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x3b9c8fd;
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
    unaff_RBX = *(long **)((long)register0x00000020 + -8);
    *(UnityEngine_UI_Toggle_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(UnityEngine_UI_Toggle_o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(UnityEngine_UI_Toggle_o **)((long)register0x00000020 + -0x20) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x28) = unaff_RBX;
    unaff_R15 = 1;
    if (g_data_057a9f28 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c52b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c537;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c543;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c54f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c55b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c567;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c573;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c57f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshSwitch_b__0);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c58b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c597;
      il2cpp_runtime_helper_023445d0(&"primary");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c5a3;
      il2cpp_runtime_helper_023445d0(&"engravedBg");
      g_data_057a9f28 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c5b9;
    unaff_R12 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c5c6;
    __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)unaff_R12;
    System_Object___ctor((Il2CppObject *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (UnityEngine_UI_Toggle_o *)0x0) {
      (unaff_R12->fields).m_CachedPtr = (intptr_t)__this_00;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c5e3;
      il2cpp_runtime_helper_022b4080(&unaff_R12->fields);
      x = ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_Fields *)&__this_00->fields)->_switchTrack;
      unaff_RBX = &TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c5ff;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c60b;
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return;
      }
      x_00 = ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_Fields *)&__this_00->fields)->_switchThumb;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c624;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c630;
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return;
      }
      if (((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_Fields *)&__this_00->fields)->_theme ==
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        return;
      }
      unaff_RBP = ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_Fields *)&__this_00->fields)->_toggle;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c650;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c65c;
      __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)unaff_RBP;
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return;
      }
      lVar4 = *(long *)&(__this_00->fields).m_EnableCalled;
      if ((lVar4 != 0) &&
         (__this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)
                   (__this_00->fields).m_Navigation.fields.m_SelectOnLeft,
         (UnityEngine_UI_Toggle_o *)__this != (UnityEngine_UI_Toggle_o *)0x0)) {
        if (*(char *)(lVar4 + 0x120) == '\0') {
          puVar9 = &"engravedBg";
        }
        else {
          puVar9 = &"primary";
        }
        token = (System_String_o *)*puVar9;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c6b4;
        UVar16.fields.b = 1.0;
        UVar16.fields.a = 1.0;
        UVar16.fields.r = 1.0;
        UVar16.fields.g = 1.0;
        UVar16 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this,token,UVar16,(MethodInfo *)0x0
                           );
        uVar15 = UVar16.fields._8_8_;
        *(UnityEngine_Color_Fields *)&(unaff_R12->fields).m_Navigation.fields = UVar16.fields;
        lVar4 = *(long *)&(__this_00->fields).m_EnableCalled;
        if (lVar4 != 0) {
          bVar3 = *(byte *)(lVar4 + 0x120);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c6d9;
          UVar7 = Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
                            ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)__this_00,(uint)bVar3,
                             method_00);
          (unaff_R12->fields).m_Navigation.fields.m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)UVar7.fields
          ;
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c6f7;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c6fe;
          bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          pDVar5 = (DG_Tweening_Tween_o *)(__this_00->fields).m_Navigation.fields.m_SelectOnRight;
          if ((char)bVar8 == '\0') {
            if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c7d7;
              DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
            }
            pUVar11 = (__this_00->fields).m_Navigation.fields.m_SelectOnUp;
            __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
            if (pUVar11 != (UnityEngine_UI_Selectable_o *)0x0) {
              uVar1 = (unaff_R12->fields).m_Navigation.fields.m_Mode;
              pUVar2 = (unaff_R12->fields).m_Navigation.fields.m_SelectOnUp;
              pIVar6 = (pUVar11->klass->vtable)._23_unknown.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c802;
              (*pIVar6)(uVar1,pUVar2);
              pUVar11 = (__this_00->fields).m_Navigation.fields.m_SelectOnDown;
              __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
              if (pUVar11 != (UnityEngine_UI_Selectable_o *)0x0) {
                UnityEngine_RectTransform__set_anchoredPosition
                          ((UnityEngine_RectTransform_o *)pUVar11,
                           (UnityEngine_Vector2_o)(unaff_R12->fields).m_Navigation.fields.m_SelectOnLeft,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c721;
              DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
            }
            pUVar11 = (__this_00->fields).m_Navigation.fields.m_SelectOnUp;
            __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
            if (pUVar11 != (UnityEngine_UI_Selectable_o *)0x0) {
              pIVar6 = (pUVar11->klass->vtable)._22_unknown.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c73e;
              pSVar13 = (System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)
                        (*pIVar6)();
              (unaff_R12->fields).m_CancellationTokenSource =
                   (System_Threading_CancellationTokenSource_o *)pSVar13;
              (unaff_R12->fields).m_EnableCalled = (int)uVar15;
              *(int *)&(unaff_R12->fields).field_0x14 = (int)((ulong)uVar15 >> 0x20);
              pUVar11 = (__this_00->fields).m_Navigation.fields.m_SelectOnDown;
              __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
              if (pUVar11 != (UnityEngine_UI_Selectable_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c75b;
                UVar7 = UnityEngine_RectTransform__get_anchoredPosition
                                  ((UnityEngine_RectTransform_o *)pUVar11,(MethodInfo *)0x0);
                (unaff_R12->fields).m_Navigation.fields.m_SelectOnDown =
                     (UnityEngine_UI_Selectable_o *)UVar7.fields;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c779;
                  il2cpp_runtime_helper_02337ed0();
                }
                ppUVar12 = &(__this_00->fields).m_Navigation.fields.m_SelectOnRight;
                pcVar10 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                if (*pcVar10 == '\0') {
                  *(undefined4 *)((long)register0x00000020 + -0x2c) = 0x3c23d70a;
                }
                else {
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c79e;
                    il2cpp_runtime_helper_02337ed0();
                    pcVar10 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                  }
                  fVar14 = 0.01;
                  if (0.01 <= *(float *)(pcVar10 + 4) * 0.12) {
                    fVar14 = *(float *)(pcVar10 + 4) * 0.12;
                  }
                  *(float *)((long)register0x00000020 + -0x2c) = fVar14;
                }
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c846;
                onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c860;
                DG_Tweening_TweenCallback_float____ctor();
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c87b;
                t = DG_Tweening_DOVirtual__Float
                              (0.0,1.0,*(float *)((long)register0x00000020 + -0x2c),onVirtualUpdate,
                               (MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c892;
                t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c8a9;
                pUVar11 = (UnityEngine_UI_Selectable_o *)
                          DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_00,1,MethodInfo_Tweener_SetUpdate_Tweener);
                *ppUVar12 = pUVar11;
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c8b7;
                il2cpp_runtime_helper_022b4080(ppUVar12);
                pDVar5 = (DG_Tweening_Tween_o *)*ppUVar12;
                if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c8d2;
                  il2cpp_runtime_helper_02337ed0();
                }
                Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar5,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c8ef;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x38);
    unaff_R14 = __this_00;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b9c910

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  int32_t value;
  float fVar3;
  TMPro_TextMeshProUGUI_o *pTVar4;
  TMPro_TMP_Text_o *pTVar5;
  TMPro_TMP_Text_o *pTVar6;
  
  *(undefined1 *)&(__this->fields)._hovered = 1;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pTVar4 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar4 = (__this->fields)._label;
  value = 700;
  if (((char)(__this->fields)._hovered == '\0') && (*(char *)((long)&(__this->fields)._hovered + 1) == '\0'))
  {
    value = (__this->fields)._normalWeight;
  }
  if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar4,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)&(pTVar4->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar5 = *(TMPro_TMP_Text_o **)&(pTVar4->fields).m_Color.fields;
  fVar3 = 9.80909e-43;
  if ((*(char *)&(pTVar4->fields).m_RaycastPadding.fields.w == '\0') &&
     (*(char *)((long)&(pTVar4->fields).m_RaycastPadding.fields.w + 1) == '\0')) {
    fVar3 = (pTVar4->fields).m_RaycastPadding.fields.z;
  }
  if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_fontWeight(pTVar5,(int32_t)fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&(pTVar5->fields).m_RaycastPadding.fields.w = 0;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)&(pTVar5->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar6 = *(TMPro_TMP_Text_o **)&(pTVar5->fields).m_Color.fields;
  fVar3 = 9.80909e-43;
  if ((*(char *)&(pTVar5->fields).m_RaycastPadding.fields.w == '\0') &&
     (*(char *)((long)&(pTVar5->fields).m_RaycastPadding.fields.w + 1) == '\0')) {
    fVar3 = (pTVar5->fields).m_RaycastPadding.fields.z;
  }
  if (pTVar6 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_fontWeight(pTVar6,(int32_t)fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pTVar6->fields).m_RaycastPadding.fields.w + 1) = 1;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)&(pTVar6->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar5 = *(TMPro_TMP_Text_o **)&(pTVar6->fields).m_Color.fields;
  fVar3 = 9.80909e-43;
  if ((*(char *)&(pTVar6->fields).m_RaycastPadding.fields.w == '\0') &&
     (*(char *)((long)&(pTVar6->fields).m_RaycastPadding.fields.w + 1) == '\0')) {
    fVar3 = (pTVar6->fields).m_RaycastPadding.fields.z;
  }
  if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_fontWeight(pTVar5,(int32_t)fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pTVar5->fields).m_RaycastPadding.fields.w + 1) = 0;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)&(pTVar5->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar6 = *(TMPro_TMP_Text_o **)&(pTVar5->fields).m_Color.fields;
    fVar3 = 9.80909e-43;
    if ((*(char *)&(pTVar5->fields).m_RaycastPadding.fields.w == '\0') &&
       (*(char *)((long)&(pTVar5->fields).m_RaycastPadding.fields.w + 1) == '\0')) {
      fVar3 = (pTVar5->fields).m_RaycastPadding.fields.z;
    }
    if (pTVar6 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight(pTVar6,(int32_t)fVar3,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pTVar6,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b9ca30

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  int32_t value;
  float fVar3;
  TMPro_TextMeshProUGUI_o *pTVar4;
  TMPro_TMP_Text_o *__this_00;
  TMPro_TMP_Text_o *__this_01;
  
  *(undefined1 *)&(__this->fields)._hovered = 0;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pTVar4 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar4 = (__this->fields)._label;
  value = 700;
  if (((char)(__this->fields)._hovered == '\0') && (*(char *)((long)&(__this->fields)._hovered + 1) == '\0'))
  {
    value = (__this->fields)._normalWeight;
  }
  if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar4,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pTVar4->fields).m_RaycastPadding.fields.w + 1) = 1;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)&(pTVar4->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this_00 = *(TMPro_TMP_Text_o **)&(pTVar4->fields).m_Color.fields;
    fVar3 = 9.80909e-43;
    if ((*(char *)&(pTVar4->fields).m_RaycastPadding.fields.w == '\0') &&
       (*(char *)((long)&(pTVar4->fields).m_RaycastPadding.fields.w + 1) == '\0')) {
      fVar3 = (pTVar4->fields).m_RaycastPadding.fields.z;
    }
    if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight(__this_00,(int32_t)fVar3,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    *(undefined1 *)((long)&(__this_00->fields).m_RaycastPadding.fields.w + 1) = 0;
    if (g_data_057a9f27 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057a9f27 = '\x01';
    }
    pUVar1 = *(UnityEngine_Object_o **)&(__this_00->fields).m_Color.fields;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    __this_01 = *(TMPro_TMP_Text_o **)&(__this_00->fields).m_Color.fields;
    fVar3 = 9.80909e-43;
    if ((*(char *)&(__this_00->fields).m_RaycastPadding.fields.w == '\0') &&
       (*(char *)((long)&(__this_00->fields).m_RaycastPadding.fields.w + 1) == '\0')) {
      fVar3 = (__this_00->fields).m_RaycastPadding.fields.z;
    }
    if (__this_01 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight(__this_01,(int32_t)fVar3,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b9cac0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  int32_t value;
  float value_00;
  TMPro_TextMeshProUGUI_o *pTVar2;
  TMPro_TMP_Text_o *__this_00;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 1;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pTVar2 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  pTVar2 = (__this->fields)._label;
  value = 700;
  if (((char)(__this->fields)._hovered == '\0') && (*(char *)((long)&(__this->fields)._hovered + 1) == '\0'))
  {
    value = (__this->fields)._normalWeight;
  }
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar2,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pTVar2->fields).m_RaycastPadding.fields.w + 1) = 0;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  x = *(UnityEngine_Object_o **)&(pTVar2->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  __this_00 = *(TMPro_TMP_Text_o **)&(pTVar2->fields).m_Color.fields;
  value_00 = 9.80909e-43;
  if ((*(char *)&(pTVar2->fields).m_RaycastPadding.fields.w == '\0') &&
     (*(char *)((long)&(pTVar2->fields).m_RaycastPadding.fields.w + 1) == '\0')) {
    value_00 = (pTVar2->fields).m_RaycastPadding.fields.z;
  }
  if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_fontWeight(__this_00,(int32_t)value_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b9cb50

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  bool_conflict bVar1;
  int32_t value;
  TMPro_TextMeshProUGUI_o *pTVar2;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 0;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pTVar2 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  pTVar2 = (__this->fields)._label;
  value = 700;
  if (((char)(__this->fields)._hovered == '\0') && (*(char *)((long)&(__this->fields)._hovered + 1) == '\0'))
  {
    value = (__this->fields)._normalWeight;
  }
  if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar2,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pTVar2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, const MethodInfo* method);
// 0x3b9c9a0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  int32_t value;
  float fVar3;
  TMPro_TextMeshProUGUI_o *pTVar4;
  TMPro_TMP_Text_o *pTVar5;
  TMPro_TMP_Text_o *__this_00;
  
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pTVar4 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar4 = (__this->fields)._label;
  value = 700;
  if (((char)(__this->fields)._hovered == '\0') && (*(char *)((long)&(__this->fields)._hovered + 1) == '\0'))
  {
    value = (__this->fields)._normalWeight;
  }
  if (pTVar4 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_fontWeight((TMPro_TMP_Text_o *)pTVar4,value,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&(pTVar4->fields).m_RaycastPadding.fields.w = 0;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)&(pTVar4->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar5 = *(TMPro_TMP_Text_o **)&(pTVar4->fields).m_Color.fields;
  fVar3 = 9.80909e-43;
  if ((*(char *)&(pTVar4->fields).m_RaycastPadding.fields.w == '\0') &&
     (*(char *)((long)&(pTVar4->fields).m_RaycastPadding.fields.w + 1) == '\0')) {
    fVar3 = (pTVar4->fields).m_RaycastPadding.fields.z;
  }
  if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_fontWeight(pTVar5,(int32_t)fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(pTVar5->fields).m_RaycastPadding.fields.w + 1) = 1;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)&(pTVar5->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  __this_00 = *(TMPro_TMP_Text_o **)&(pTVar5->fields).m_Color.fields;
  fVar3 = 9.80909e-43;
  if ((*(char *)&(pTVar5->fields).m_RaycastPadding.fields.w == '\0') &&
     (*(char *)((long)&(pTVar5->fields).m_RaycastPadding.fields.w + 1) == '\0')) {
    fVar3 = (pTVar5->fields).m_RaycastPadding.fields.z;
  }
  if (__this_00 != (TMPro_TMP_Text_o *)0x0) {
    TMPro_TMP_Text__set_fontWeight(__this_00,(int32_t)fVar3,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)((long)&(__this_00->fields).m_RaycastPadding.fields.w + 1) = 0;
  if (g_data_057a9f27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f27 = '\x01';
  }
  pUVar1 = *(UnityEngine_Object_o **)&(__this_00->fields).m_Color.fields;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pTVar5 = *(TMPro_TMP_Text_o **)&(__this_00->fields).m_Color.fields;
    fVar3 = 9.80909e-43;
    if ((*(char *)&(__this_00->fields).m_RaycastPadding.fields.w == '\0') &&
       (*(char *)((long)&(__this_00->fields).m_RaycastPadding.fields.w + 1) == '\0')) {
      fVar3 = (__this_00->fields).m_RaycastPadding.fields.z;
    }
    if (pTVar5 != (TMPro_TMP_Text_o *)0x0) {
      TMPro_TMP_Text__set_fontWeight(pTVar5,(int32_t)fVar3,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)pTVar5,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$RefreshSwitch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool animate, const MethodInfo* method);
// 0x3b9c500

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool_conflict animate,
               MethodInfo *method)

{
  undefined4 uVar1;
  UnityEngine_UI_Selectable_o *pUVar2;
  byte bVar3;
  UnityEngine_UI_Image_o *x;
  UnityEngine_RectTransform_o *x_00;
  long lVar4;
  System_String_o *token;
  DG_Tweening_Tween_o *pDVar5;
  Il2CppMethodPointer pIVar6;
  UnityEngine_Vector2_o UVar7;
  ulong uVar8;
  bool_conflict bVar9;
  undefined8 *puVar10;
  char *pcVar11;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *t_00;
  UnityEngine_UI_Selectable_o *pUVar12;
  MethodInfo *method_00;
  long *unaff_RBX;
  UnityEngine_UI_Toggle_o *unaff_RBP;
  ulong uVar13;
  UnityEngine_UI_Toggle_o *__this_00;
  UnityEngine_UI_Toggle_o *unaff_R12;
  UnityEngine_UI_Toggle_o *unaff_R14;
  UnityEngine_UI_Selectable_o **ppUVar14;
  ulong unaff_R15;
  System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *pSVar15;
  float fVar16;
  UnityEngine_Color_o UVar18;
  undefined8 uVar17;
  
  uVar8 = (ulong)(uint)animate;
  do {
    __this_00 = (UnityEngine_UI_Toggle_o *)__this;
    uVar13 = uVar8;
    *(UnityEngine_UI_Toggle_o **)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(UnityEngine_UI_Toggle_o **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(UnityEngine_UI_Toggle_o **)((long)register0x00000020 + -0x20) = unaff_R12;
    *(long **)((long)register0x00000020 + -0x28) = unaff_RBX;
    if (g_data_057a9f28 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c52b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c537;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c543;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c54f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c55b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c567;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c573;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c57f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshSwitch_b__0);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c58b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c597;
      il2cpp_runtime_helper_023445d0(&"primary");
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c5a3;
      il2cpp_runtime_helper_023445d0(&"engravedBg");
      g_data_057a9f28 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c5b9;
    unaff_R12 = (UnityEngine_UI_Toggle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c5c6;
    __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)unaff_R12;
    System_Object___ctor((Il2CppObject *)unaff_R12,(MethodInfo *)0x0);
    if (unaff_R12 != (UnityEngine_UI_Toggle_o *)0x0) {
      (unaff_R12->fields).m_CachedPtr = (intptr_t)__this_00;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c5e3;
      il2cpp_runtime_helper_022b4080(&unaff_R12->fields);
      x = ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_Fields *)&__this_00->fields)->_switchTrack;
      unaff_RBX = &TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c5ff;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c60b;
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      x_00 = ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_Fields *)&__this_00->fields)->_switchThumb;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c624;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c630;
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      if (((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_Fields *)&__this_00->fields)->_theme ==
          (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        return;
      }
      unaff_RBP = ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_Fields *)&__this_00->fields)->_toggle;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c650;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c65c;
      __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)unaff_RBP;
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBP,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      lVar4 = *(long *)&(__this_00->fields).m_EnableCalled;
      if ((lVar4 != 0) &&
         (__this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)
                   (__this_00->fields).m_Navigation.fields.m_SelectOnLeft,
         (UnityEngine_UI_Toggle_o *)__this != (UnityEngine_UI_Toggle_o *)0x0)) {
        if (*(char *)(lVar4 + 0x120) == '\0') {
          puVar10 = &"engravedBg";
        }
        else {
          puVar10 = &"primary";
        }
        token = (System_String_o *)*puVar10;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c6b4;
        UVar18.fields.b = 1.0;
        UVar18.fields.a = 1.0;
        UVar18.fields.r = 1.0;
        UVar18.fields.g = 1.0;
        UVar18 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)__this,token,UVar18,(MethodInfo *)0x0
                           );
        uVar17 = UVar18.fields._8_8_;
        *(UnityEngine_Color_Fields *)&(unaff_R12->fields).m_Navigation.fields = UVar18.fields;
        lVar4 = *(long *)&(__this_00->fields).m_EnableCalled;
        if (lVar4 != 0) {
          bVar3 = *(byte *)(lVar4 + 0x120);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c6d9;
          UVar7 = Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
                            ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)__this_00,(uint)bVar3,
                             method_00);
          (unaff_R12->fields).m_Navigation.fields.m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)UVar7.fields
          ;
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c6f7;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c6fe;
          bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          pDVar5 = (DG_Tweening_Tween_o *)(__this_00->fields).m_Navigation.fields.m_SelectOnRight;
          if (((char)bVar9 == '\0') || ((char)uVar13 == '\0')) {
            if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c7d7;
              DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
            }
            pUVar12 = (__this_00->fields).m_Navigation.fields.m_SelectOnUp;
            __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
            if (pUVar12 != (UnityEngine_UI_Selectable_o *)0x0) {
              uVar1 = (unaff_R12->fields).m_Navigation.fields.m_Mode;
              pUVar2 = (unaff_R12->fields).m_Navigation.fields.m_SelectOnUp;
              pIVar6 = (pUVar12->klass->vtable)._23_unknown.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c802;
              (*pIVar6)(uVar1,pUVar2);
              pUVar12 = (__this_00->fields).m_Navigation.fields.m_SelectOnDown;
              __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
              if (pUVar12 != (UnityEngine_UI_Selectable_o *)0x0) {
                UnityEngine_RectTransform__set_anchoredPosition
                          ((UnityEngine_RectTransform_o *)pUVar12,
                           (UnityEngine_Vector2_o)(unaff_R12->fields).m_Navigation.fields.m_SelectOnLeft,
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c721;
              DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
            }
            pUVar12 = (__this_00->fields).m_Navigation.fields.m_SelectOnUp;
            __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
            if (pUVar12 != (UnityEngine_UI_Selectable_o *)0x0) {
              pIVar6 = (pUVar12->klass->vtable)._22_unknown.methodPtr;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c73e;
              pSVar15 = (System_Collections_Generic_Dictionary_string__GisketchStyleDefinition__o *)
                        (*pIVar6)();
              (unaff_R12->fields).m_CancellationTokenSource =
                   (System_Threading_CancellationTokenSource_o *)pSVar15;
              (unaff_R12->fields).m_EnableCalled = (int)uVar17;
              *(int *)&(unaff_R12->fields).field_0x14 = (int)((ulong)uVar17 >> 0x20);
              pUVar12 = (__this_00->fields).m_Navigation.fields.m_SelectOnDown;
              __this = (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0;
              if (pUVar12 != (UnityEngine_UI_Selectable_o *)0x0) {
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c75b;
                UVar7 = UnityEngine_RectTransform__get_anchoredPosition
                                  ((UnityEngine_RectTransform_o *)pUVar12,(MethodInfo *)0x0);
                (unaff_R12->fields).m_Navigation.fields.m_SelectOnDown =
                     (UnityEngine_UI_Selectable_o *)UVar7.fields;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c779;
                  il2cpp_runtime_helper_02337ed0();
                }
                ppUVar14 = &(__this_00->fields).m_Navigation.fields.m_SelectOnRight;
                pcVar11 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                if (*pcVar11 == '\0') {
                  *(undefined4 *)((long)register0x00000020 + -0x2c) = 0x3c23d70a;
                }
                else {
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c79e;
                    il2cpp_runtime_helper_02337ed0();
                    pcVar11 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                  }
                  fVar16 = 0.01;
                  if (0.01 <= *(float *)(pcVar11 + 4) * 0.12) {
                    fVar16 = *(float *)(pcVar11 + 4) * 0.12;
                  }
                  *(float *)((long)register0x00000020 + -0x2c) = fVar16;
                }
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c846;
                onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c860;
                DG_Tweening_TweenCallback_float____ctor();
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c87b;
                t = DG_Tweening_DOVirtual__Float
                              (0.0,1.0,*(float *)((long)register0x00000020 + -0x2c),onVirtualUpdate,
                               (MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c892;
                t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c8a9;
                pUVar12 = (UnityEngine_UI_Selectable_o *)
                          DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_00,1,MethodInfo_Tweener_SetUpdate_Tweener);
                *ppUVar14 = pUVar12;
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c8b7;
                il2cpp_runtime_helper_022b4080(ppUVar14);
                pDVar5 = (DG_Tweening_Tween_o *)*ppUVar14;
                if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                  *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c8d2;
                  il2cpp_runtime_helper_02337ed0();
                }
                Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar5,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9c8ef;
    il2cpp_runtime_helper_022b2c90();
    *(long **)((long)register0x00000020 + -0x40) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b9c8fd;
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
    unaff_RBX = *(long **)((long)register0x00000020 + -0x40);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x38);
    uVar8 = 1;
    unaff_R14 = __this_00;
    unaff_R15 = uVar13;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$SwitchThumbPosition
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool on, const MethodInfo* method);
// 0x3b9cbf0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
          (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool_conflict on,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_UI_Image_o *__this_00;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float fVar4;
  float fVar5;
  float local_28;
  
  __this_00 = (__this->fields)._switchTrack;
  if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar1 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._switchThumb;
      __this_00 = (UnityEngine_UI_Image_o *)0x0;
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
        fVar4 = (UVar1.fields.y - UVar2.fields.y) * 0.5;
        fVar5 = 0.0;
        if (0.0 <= fVar4) {
          fVar5 = fVar4;
        }
        if ((char)on == '\0') {
label_03b9cca7:
          UVar2.fields.y = 0.0;
          UVar2.fields.x = fVar5;
          return (UnityEngine_Vector2_o)UVar2.fields;
        }
        __this_00 = (__this->fields)._switchTrack;
        if (__this_00 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar3 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
            UVar1 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
            pUVar3 = (__this->fields)._switchThumb;
            __this_00 = (UnityEngine_UI_Image_o *)0x0;
            if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
              UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar3,(MethodInfo *)0x0);
              local_28 = UVar1.fields.x;
              fVar5 = (local_28 - UVar2.fields.x) - fVar5;
              goto label_03b9cca7;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  t = *(DG_Tweening_Tween_o **)&(__this_00->fields).m_RaycastPadding.fields;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this_00,(MethodInfo *)0x0);
  UVar1.fields.y = extraout_XMM0_Db;
  UVar1.fields.x = extraout_XMM0_Da;
  return (UnityEngine_Vector2_o)UVar1.fields;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, const MethodInfo* method);
// 0x3b9ccc0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._switchTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, const MethodInfo* method);
// 0x3b9ccf0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


