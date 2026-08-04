// Type: Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchSpriteButtonFeedback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x3b9c250

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$<OnSubmit>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__0 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, float value, const MethodInfo* method);
// 0x3b9c2b0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__0
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o *__this,
               float value,MethodInfo *method)

{
  intptr_t iVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_c *pGVar2;
  byte bVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Events_UnityEvent_bool__o *__this_00;
  UnityEngine_Object_o *pUVar6;
  System_String_o *token;
  DG_Tweening_Tween_o *pDVar7;
  code *pcVar8;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  bool_conflict bVar9;
  UnityEngine_Vector2_Fields UVar10;
  undefined8 *puVar11;
  char *pcVar12;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar13;
  undefined4 uVar14;
  MethodInfo *method_00;
  UnityEngine_Vector2_Fields unaff_RBX;
  UnityEngine_Vector2_Fields **ppUVar15;
  UnityEngine_Vector2_Fields unaff_RBP;
  UnityEngine_Vector2_Fields UVar16;
  UnityEngine_Vector2_Fields UVar17;
  UnityEngine_Vector2_Fields UVar18;
  UnityEngine_Vector2_Fields UVar19;
  undefined8 in_R8;
  UnityEngine_Vector2_Fields in_R9;
  UnityEngine_Vector2_Fields unaff_R12;
  UnityEngine_Vector2_Fields unaff_R14;
  UnityEngine_Vector2_Fields UVar20;
  UnityEngine_Vector2_Fields unaff_R15;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  UnityEngine_Object_c *pUVar21;
  float fVar22;
  float fVar24;
  undefined1 auVar25 [16];
  UnityEngine_Color_o fallback;
  UnityEngine_Vector2_Fields *pUStack_50;
  undefined8 uStack_18;
  undefined8 uStack_10;
  undefined8 uVar23;
  UnityEngine_Color_Fields UVar26;
  
  pGVar4 = (__this->fields).__4__this;
  UVar10 = (UnityEngine_Vector2_Fields)__this;
  if (pGVar4 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
    pUVar5 = (pGVar4->fields)._rect;
    UVar10.x = 0.0;
    UVar10.y = 0.0;
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      UVar10 = (__this->fields).start.fields;
      UVar17 = (__this->fields).press.fields;
      fVar22 = UVar10.x;
      fVar24 = UVar10.y;
      value_02.fields.y = value * (UVar17.y - fVar24) + fVar24;
      value_02.fields.x = value * (UVar17.x - fVar22) + fVar22;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar5,value_02,(MethodInfo *)0x0);
      return;
    }
  }
  uStack_10 = 0x3b9c2ea;
  uStack_10 = il2cpp_runtime_helper_022b2c90();
  pGVar4 = ((Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_Fields *)
           ((long)UVar10 + 0x10))->__4__this;
  UVar17 = UVar10;
  if (pGVar4 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
    pUVar5 = (pGVar4->fields)._rect;
    UVar17.x = 0.0;
    UVar17.y = 0.0;
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      fVar22 = (float)*(undefined8 *)((long)UVar10 + 0x20);
      fVar24 = (float)((ulong)*(undefined8 *)((long)UVar10 + 0x20) >> 0x20);
      value_01.fields.y =
           extraout_XMM0_Da * ((float)((ulong)*(undefined8 *)((long)UVar10 + 0x28) >> 0x20) - fVar24) + fVar24
      ;
      value_01.fields.x = extraout_XMM0_Da * ((float)*(undefined8 *)((long)UVar10 + 0x28) - fVar22) + fVar22;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar5,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  uStack_18 = 0x3b9c32a;
  uStack_18 = il2cpp_runtime_helper_022b2c90();
  UVar10 = *(UnityEngine_Vector2_Fields *)((long)UVar17 + 0x10);
  UVar18 = UVar17;
  if (UVar10 != (UnityEngine_Vector2_Fields)0x0) {
    UVar18.x = 0.0;
    UVar18.y = 0.0;
    if (*(System_Collections_Generic_Dictionary_string__GisketchMotionToken__o **)((long)UVar10 + 0x20) !=
        (System_Collections_Generic_Dictionary_string__GisketchMotionToken__o *)0x0) {
      fVar22 = (float)*(undefined8 *)((long)UVar17 + 0x18);
      fVar24 = (float)((ulong)*(undefined8 *)((long)UVar17 + 0x18) >> 0x20);
      value_00.fields.y =
           extraout_XMM0_Da_00 * ((float)((ulong)*(undefined8 *)((long)UVar17 + 0x20) >> 0x20) - fVar24) +
           fVar24;
      value_00.fields.x =
           extraout_XMM0_Da_00 * ((float)*(undefined8 *)((long)UVar17 + 0x20) - fVar22) + fVar22;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)
                 *(System_Collections_Generic_Dictionary_string__GisketchMotionToken__o **)
                  ((long)UVar10 + 0x20),value_00,(MethodInfo *)0x0);
      return;
    }
  }
  auVar25 = il2cpp_runtime_helper_022b2c90();
  UVar17 = auVar25._8_8_;
  pUStack_50 = auVar25._0_8_;
  ppUVar15 = &pUStack_50;
  if (g_data_057a9f26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057a9f26 = '\x01';
  }
  pUStack_50 = (UnityEngine_Vector2_Fields *)((long)UVar18 + 0x20);
  *(MethodInfo **)((long)UVar18 + 0x20) = method;
  il2cpp_runtime_helper_022b4080(pUStack_50,method);
  *(UnityEngine_Vector2_Fields *)((long)UVar18 + 0x28) = UVar17;
  il2cpp_runtime_helper_022b4080((UnityEngine_Vector2_o *)((long)UVar18 + 0x28),UVar17);
  *(UnityEngine_Vector2_Fields *)((long)UVar18 + 0x30) = UVar10;
  il2cpp_runtime_helper_022b4080((undefined8 *)((long)UVar18 + 0x30),UVar10);
  *(undefined8 *)((long)UVar18 + 0x38) = in_R8;
  il2cpp_runtime_helper_022b4080((undefined8 *)((long)UVar18 + 0x38),in_R8);
  *(UnityEngine_Vector2_Fields *)((long)UVar18 + 0x40) = in_R9;
  il2cpp_runtime_helper_022b4080((undefined8 *)((long)UVar18 + 0x40));
  UVar20 = (UnityEngine_Vector2_Fields)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar16.x = 0.0;
  UVar16.y = 0.0;
  UVar19 = UVar17;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)UVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar14 = 400;
  if ((char)bVar9 == '\0') {
label_03b9c45e:
    *(undefined4 *)((long)UVar18 + 0x50) = uVar14;
    UVar10 = *(UnityEngine_Vector2_Fields *)((long)UVar18 + 0x20);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar16.x = 0.0;
    UVar16.y = 0.0;
    UVar19 = UVar10;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)UVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
label_03b9c4dc:
      UVar16.x = 0.0;
      UVar16.y = 0.0;
      ppUVar15 = (UnityEngine_Vector2_Fields **)&uStack_18;
      UVar10 = unaff_RBP;
      in_R9 = unaff_R12;
      UVar20 = unaff_R14;
      UVar17 = unaff_R15;
      goto Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch;
    }
    if (*pUStack_50 != (UnityEngine_Vector2_Fields)0x0) {
      __this_00 = *(UnityEngine_Events_UnityEvent_bool__o **)((long)*pUStack_50 + 0x118);
      UVar10 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
      UVar16 = UVar18;
      UVar19 = UVar10;
      UnityEngine_Events_UnityAction_bool____ctor();
      UVar20.x = 0.0;
      UVar20.y = 0.0;
      if (__this_00 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
        UnityEngine_Events_UnityEvent_bool___AddListener
                  (__this_00,(UnityEngine_Events_UnityAction_T0__o *)UVar10,MethodInfo_Void_AddListener);
        goto label_03b9c4dc;
      }
    }
  }
  else if (UVar17 != (UnityEngine_Vector2_Fields)0x0) {
    uVar14 = *(undefined4 *)&((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)((long)UVar17 + 0x210))->klass;
    goto label_03b9c45e;
  }
  il2cpp_runtime_helper_022b2c90();
  unaff_RBX = UVar18;
  UVar18 = UVar19;
Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch:
  do {
    UVar19 = UVar18;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -8) = UVar10;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x10) = UVar17;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x18) = UVar20;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x20) = in_R9;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x28) = unaff_RBX;
    UVar17 = (UnityEngine_Vector2_Fields)((ulong)UVar16 & 0xffffffff);
    if (g_data_057a9f28 == '\0') {
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c52b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c537;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c543;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c54f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c55b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c567;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c573;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c57f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshSwitch_b__0);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c58b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c597;
      il2cpp_runtime_helper_023445d0(&"primary");
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c5a3;
      il2cpp_runtime_helper_023445d0(&"engravedBg");
      g_data_057a9f28 = '\x01';
    }
    *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c5b9;
    in_R9 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
    *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c5c6;
    UVar18 = in_R9;
    System_Object___ctor((Il2CppObject *)in_R9,(MethodInfo *)0x0);
    if (in_R9 != (UnityEngine_Vector2_Fields)0x0) {
      *(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x10) = UVar19;
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c5e3;
      il2cpp_runtime_helper_022b4080((UnityEngine_Events_UnityAction_T0__Fields *)((long)in_R9 + 0x10));
      pUVar6 = *(UnityEngine_Object_o **)((long)UVar19 + 0x30);
      unaff_RBX = (UnityEngine_Vector2_Fields)&TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c5ff;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c60b;
      bVar9 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      pUVar6 = *(UnityEngine_Object_o **)((long)UVar19 + 0x38);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c624;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c630;
      bVar9 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      if (*(long *)((long)UVar19 + 0x40) == 0) {
        return;
      }
      UVar10 = *(UnityEngine_Vector2_Fields *)((long)UVar19 + 0x20);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c650;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c65c;
      UVar18 = UVar10;
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)UVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      if ((*(long *)((long)UVar19 + 0x20) != 0) &&
         (UVar18 = *(UnityEngine_Vector2_Fields *)((long)UVar19 + 0x40),
         UVar18 != (UnityEngine_Vector2_Fields)0x0)) {
        if (*(char *)(*(long *)((long)UVar19 + 0x20) + 0x120) == '\0') {
          puVar11 = &"engravedBg";
        }
        else {
          puVar11 = &"primary";
        }
        token = (System_String_o *)*puVar11;
        *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c6b4;
        fallback.fields.b = 1.0;
        fallback.fields.a = 1.0;
        fallback.fields.r = 1.0;
        fallback.fields.g = 1.0;
        UVar26 = (UnityEngine_Color_Fields)
                 Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)UVar18,token,fallback,
                            (MethodInfo *)0x0);
        uVar23 = UVar26._8_8_;
        *(UnityEngine_Color_Fields *)((long)in_R9 + 0x28) = UVar26;
        if (*(long *)((long)UVar19 + 0x20) != 0) {
          bVar3 = *(byte *)(*(long *)((long)UVar19 + 0x20) + 0x120);
          *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c6d9;
          UVar18 = (UnityEngine_Vector2_Fields)
                   Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
                             ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)UVar19,(uint)bVar3,
                              method_00);
          *(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x40) = UVar18;
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c6f7;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c6fe;
          bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          pDVar7 = *(DG_Tweening_Tween_o **)((long)UVar19 + 0x48);
          if (((char)bVar9 == '\0') || (UVar17.x._0_1_ == '\0')) {
            if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c7d7;
              DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
            }
            UVar18.x = 0.0;
            UVar18.y = 0.0;
            if (*(long **)((long)UVar19 + 0x30) != (long *)0x0) {
              iVar1 = ((UnityEngine_Object_Fields *)((long)in_R9 + 0x28))->m_CachedPtr;
              pGVar2 = ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)((long)in_R9 + 0x30))->klass;
              pcVar8 = *(code **)(**(long **)((long)UVar19 + 0x30) + 0x2a8);
              *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c802;
              (*pcVar8)((int)iVar1,pGVar2);
              UVar18.x = 0.0;
              UVar18.y = 0.0;
              if (*(UnityEngine_RectTransform_o **)((long)UVar19 + 0x38) != (UnityEngine_RectTransform_o *)0x0
                 ) {
                UnityEngine_RectTransform__set_anchoredPosition
                          (*(UnityEngine_RectTransform_o **)((long)UVar19 + 0x38),
                           (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x40),
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c721;
              DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
            }
            UVar18.x = 0.0;
            UVar18.y = 0.0;
            if (*(long **)((long)UVar19 + 0x30) != (long *)0x0) {
              pcVar8 = *(code **)(**(long **)((long)UVar19 + 0x30) + 0x298);
              *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c73e;
              pUVar21 = (UnityEngine_Object_c *)(*pcVar8)();
              ((UnityEngine_Object_o *)((long)in_R9 + 0x18))->klass = pUVar21;
              *(int *)((long)in_R9 + 0x20) = (int)uVar23;
              *(int *)((long)in_R9 + 0x24) = (int)((ulong)uVar23 >> 0x20);
              pUVar5 = *(UnityEngine_RectTransform_o **)((long)UVar19 + 0x38);
              UVar18.x = 0.0;
              UVar18.y = 0.0;
              if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c75b;
                UVar10 = (UnityEngine_Vector2_Fields)
                         UnityEngine_RectTransform__get_anchoredPosition(pUVar5,(MethodInfo *)0x0);
                *(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x38) = UVar10;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c779;
                  il2cpp_runtime_helper_02337ed0();
                }
                puVar11 = (undefined8 *)((long)UVar19 + 0x48);
                pcVar12 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                if (*pcVar12 == '\0') {
                  *(undefined4 *)((long)ppUVar15 + -0x2c) = 0x3c23d70a;
                }
                else {
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c79e;
                    il2cpp_runtime_helper_02337ed0();
                    pcVar12 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                  }
                  fVar22 = 0.01;
                  if (0.01 <= *(float *)(pcVar12 + 4) * 0.12) {
                    fVar22 = *(float *)(pcVar12 + 4) * 0.12;
                  }
                  *(float *)((long)ppUVar15 + -0x2c) = fVar22;
                }
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c846;
                onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c860;
                DG_Tweening_TweenCallback_float____ctor();
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c87b;
                t = DG_Tweening_DOVirtual__Float
                              (0.0,1.0,*(float *)((long)ppUVar15 + -0x2c),onVirtualUpdate,(MethodInfo *)0x0);
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c892;
                pIVar13 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                    ((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c8a9;
                pIVar13 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar13,1,MethodInfo_Tweener_SetUpdate_Tweener);
                *puVar11 = pIVar13;
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c8b7;
                il2cpp_runtime_helper_022b4080(puVar11);
                pDVar7 = (DG_Tweening_Tween_o *)*puVar11;
                if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                  *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c8d2;
                  il2cpp_runtime_helper_02337ed0();
                }
                Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar7,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c8ef;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x40) = unaff_RBX;
    *(undefined8 *)((long)ppUVar15 + -0x48) = 0x3b9c8fd;
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
    UVar16.x = 1.4013e-45;
    UVar16.y = 0.0;
    unaff_RBX = *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x40);
    ppUVar15 = (UnityEngine_Vector2_Fields **)((long)ppUVar15 + -0x38);
    UVar20 = UVar19;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass15_0$$<OnSubmit>b__1
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__1 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o* __this, float value, const MethodInfo* method);
// 0x3b9c2f0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0___OnSubmit_b__1
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass15_0_o *__this,
               float value,MethodInfo *method)

{
  intptr_t iVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_c *pGVar2;
  byte bVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_Events_UnityEvent_bool__o *__this_00;
  UnityEngine_Object_o *pUVar6;
  System_String_o *token;
  DG_Tweening_Tween_o *pDVar7;
  code *pcVar8;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  bool_conflict bVar9;
  UnityEngine_Vector2_Fields UVar10;
  undefined8 *puVar11;
  char *pcVar12;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar13;
  undefined4 uVar14;
  MethodInfo *method_00;
  UnityEngine_Vector2_Fields unaff_RBX;
  UnityEngine_Vector2_Fields **ppUVar15;
  UnityEngine_Vector2_Fields unaff_RBP;
  UnityEngine_Vector2_Fields UVar16;
  UnityEngine_Vector2_Fields UVar17;
  UnityEngine_Vector2_Fields UVar18;
  UnityEngine_Vector2_Fields UVar19;
  undefined8 in_R8;
  UnityEngine_Vector2_Fields in_R9;
  UnityEngine_Vector2_Fields unaff_R12;
  UnityEngine_Vector2_Fields unaff_R14;
  UnityEngine_Vector2_Fields UVar20;
  UnityEngine_Vector2_Fields unaff_R15;
  float extraout_XMM0_Da;
  UnityEngine_Object_c *pUVar21;
  float fVar22;
  float fVar24;
  undefined1 auVar25 [16];
  UnityEngine_Color_o fallback;
  UnityEngine_Vector2_Fields *pUStack_48;
  undefined8 auStack_10 [2];
  undefined8 uVar23;
  UnityEngine_Color_Fields UVar26;
  
  pGVar4 = (__this->fields).__4__this;
  UVar17 = (UnityEngine_Vector2_Fields)__this;
  if (pGVar4 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
    pUVar5 = (pGVar4->fields)._rect;
    UVar17.x = 0.0;
    UVar17.y = 0.0;
    if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
      UVar17 = (__this->fields).press.fields;
      UVar10 = (__this->fields).target.fields;
      fVar22 = UVar17.x;
      fVar24 = UVar17.y;
      value_01.fields.y = value * (UVar10.y - fVar24) + fVar24;
      value_01.fields.x = value * (UVar10.x - fVar22) + fVar22;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar5,value_01,(MethodInfo *)0x0);
      return;
    }
  }
  auStack_10[0] = 0x3b9c32a;
  auStack_10[0] = il2cpp_runtime_helper_022b2c90();
  UVar10 = *(UnityEngine_Vector2_Fields *)((long)UVar17 + 0x10);
  UVar18 = UVar17;
  if (UVar10 != (UnityEngine_Vector2_Fields)0x0) {
    UVar18.x = 0.0;
    UVar18.y = 0.0;
    if (*(System_Collections_Generic_Dictionary_string__GisketchMotionToken__o **)((long)UVar10 + 0x20) !=
        (System_Collections_Generic_Dictionary_string__GisketchMotionToken__o *)0x0) {
      fVar22 = (float)*(undefined8 *)((long)UVar17 + 0x18);
      fVar24 = (float)((ulong)*(undefined8 *)((long)UVar17 + 0x18) >> 0x20);
      value_00.fields.y =
           extraout_XMM0_Da * ((float)((ulong)*(undefined8 *)((long)UVar17 + 0x20) >> 0x20) - fVar24) + fVar24
      ;
      value_00.fields.x = extraout_XMM0_Da * ((float)*(undefined8 *)((long)UVar17 + 0x20) - fVar22) + fVar22;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)
                 *(System_Collections_Generic_Dictionary_string__GisketchMotionToken__o **)
                  ((long)UVar10 + 0x20),value_00,(MethodInfo *)0x0);
      return;
    }
  }
  auVar25 = il2cpp_runtime_helper_022b2c90();
  UVar17 = auVar25._8_8_;
  pUStack_48 = auVar25._0_8_;
  ppUVar15 = &pUStack_48;
  if (g_data_057a9f26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057a9f26 = '\x01';
  }
  pUStack_48 = (UnityEngine_Vector2_Fields *)((long)UVar18 + 0x20);
  *(MethodInfo **)((long)UVar18 + 0x20) = method;
  il2cpp_runtime_helper_022b4080(pUStack_48,method);
  *(UnityEngine_Vector2_Fields *)((long)UVar18 + 0x28) = UVar17;
  il2cpp_runtime_helper_022b4080((UnityEngine_Vector2_o *)((long)UVar18 + 0x28),UVar17);
  *(UnityEngine_Vector2_Fields *)((long)UVar18 + 0x30) = UVar10;
  il2cpp_runtime_helper_022b4080((undefined8 *)((long)UVar18 + 0x30),UVar10);
  *(undefined8 *)((long)UVar18 + 0x38) = in_R8;
  il2cpp_runtime_helper_022b4080((undefined8 *)((long)UVar18 + 0x38),in_R8);
  *(UnityEngine_Vector2_Fields *)((long)UVar18 + 0x40) = in_R9;
  il2cpp_runtime_helper_022b4080((undefined8 *)((long)UVar18 + 0x40));
  UVar20 = (UnityEngine_Vector2_Fields)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar16.x = 0.0;
  UVar16.y = 0.0;
  UVar19 = UVar17;
  bVar9 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)UVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar14 = 400;
  if ((char)bVar9 == '\0') {
label_03b9c45e:
    *(undefined4 *)((long)UVar18 + 0x50) = uVar14;
    UVar10 = *(UnityEngine_Vector2_Fields *)((long)UVar18 + 0x20);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar16.x = 0.0;
    UVar16.y = 0.0;
    UVar19 = UVar10;
    bVar9 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)UVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
label_03b9c4dc:
      UVar16.x = 0.0;
      UVar16.y = 0.0;
      ppUVar15 = (UnityEngine_Vector2_Fields **)auStack_10;
      UVar10 = unaff_RBP;
      in_R9 = unaff_R12;
      UVar20 = unaff_R14;
      UVar17 = unaff_R15;
      goto Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch;
    }
    if (*pUStack_48 != (UnityEngine_Vector2_Fields)0x0) {
      __this_00 = *(UnityEngine_Events_UnityEvent_bool__o **)((long)*pUStack_48 + 0x118);
      UVar10 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
      UVar16 = UVar18;
      UVar19 = UVar10;
      UnityEngine_Events_UnityAction_bool____ctor();
      UVar20.x = 0.0;
      UVar20.y = 0.0;
      if (__this_00 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
        UnityEngine_Events_UnityEvent_bool___AddListener
                  (__this_00,(UnityEngine_Events_UnityAction_T0__o *)UVar10,MethodInfo_Void_AddListener);
        goto label_03b9c4dc;
      }
    }
  }
  else if (UVar17 != (UnityEngine_Vector2_Fields)0x0) {
    uVar14 = *(undefined4 *)&((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)((long)UVar17 + 0x210))->klass;
    goto label_03b9c45e;
  }
  il2cpp_runtime_helper_022b2c90();
  unaff_RBX = UVar18;
  UVar18 = UVar19;
Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch:
  do {
    UVar19 = UVar18;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -8) = UVar10;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x10) = UVar17;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x18) = UVar20;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x20) = in_R9;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x28) = unaff_RBX;
    UVar17 = (UnityEngine_Vector2_Fields)((ulong)UVar16 & 0xffffffff);
    if (g_data_057a9f28 == '\0') {
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c52b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c537;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c543;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c54f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c55b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c567;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c573;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c57f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshSwitch_b__0);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c58b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c597;
      il2cpp_runtime_helper_023445d0(&"primary");
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c5a3;
      il2cpp_runtime_helper_023445d0(&"engravedBg");
      g_data_057a9f28 = '\x01';
    }
    *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c5b9;
    in_R9 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
    *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c5c6;
    UVar18 = in_R9;
    System_Object___ctor((Il2CppObject *)in_R9,(MethodInfo *)0x0);
    if (in_R9 != (UnityEngine_Vector2_Fields)0x0) {
      *(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x10) = UVar19;
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c5e3;
      il2cpp_runtime_helper_022b4080((UnityEngine_Events_UnityAction_T0__Fields *)((long)in_R9 + 0x10));
      pUVar6 = *(UnityEngine_Object_o **)((long)UVar19 + 0x30);
      unaff_RBX = (UnityEngine_Vector2_Fields)&TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c5ff;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c60b;
      bVar9 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      pUVar6 = *(UnityEngine_Object_o **)((long)UVar19 + 0x38);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c624;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c630;
      bVar9 = UnityEngine_Object__op_Equality(pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      if (*(long *)((long)UVar19 + 0x40) == 0) {
        return;
      }
      UVar10 = *(UnityEngine_Vector2_Fields *)((long)UVar19 + 0x20);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c650;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c65c;
      UVar18 = UVar10;
      bVar9 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)UVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar9 != '\0') {
        return;
      }
      if ((*(long *)((long)UVar19 + 0x20) != 0) &&
         (UVar18 = *(UnityEngine_Vector2_Fields *)((long)UVar19 + 0x40),
         UVar18 != (UnityEngine_Vector2_Fields)0x0)) {
        if (*(char *)(*(long *)((long)UVar19 + 0x20) + 0x120) == '\0') {
          puVar11 = &"engravedBg";
        }
        else {
          puVar11 = &"primary";
        }
        token = (System_String_o *)*puVar11;
        *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c6b4;
        fallback.fields.b = 1.0;
        fallback.fields.a = 1.0;
        fallback.fields.r = 1.0;
        fallback.fields.g = 1.0;
        UVar26 = (UnityEngine_Color_Fields)
                 Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)UVar18,token,fallback,
                            (MethodInfo *)0x0);
        uVar23 = UVar26._8_8_;
        *(UnityEngine_Color_Fields *)((long)in_R9 + 0x28) = UVar26;
        if (*(long *)((long)UVar19 + 0x20) != 0) {
          bVar3 = *(byte *)(*(long *)((long)UVar19 + 0x20) + 0x120);
          *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c6d9;
          UVar18 = (UnityEngine_Vector2_Fields)
                   Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
                             ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)UVar19,(uint)bVar3,
                              method_00);
          *(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x40) = UVar18;
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c6f7;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c6fe;
          bVar9 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          pDVar7 = *(DG_Tweening_Tween_o **)((long)UVar19 + 0x48);
          if (((char)bVar9 == '\0') || (UVar17.x._0_1_ == '\0')) {
            if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c7d7;
              DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
            }
            UVar18.x = 0.0;
            UVar18.y = 0.0;
            if (*(long **)((long)UVar19 + 0x30) != (long *)0x0) {
              iVar1 = ((UnityEngine_Object_Fields *)((long)in_R9 + 0x28))->m_CachedPtr;
              pGVar2 = ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)((long)in_R9 + 0x30))->klass;
              pcVar8 = *(code **)(**(long **)((long)UVar19 + 0x30) + 0x2a8);
              *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c802;
              (*pcVar8)((int)iVar1,pGVar2);
              UVar18.x = 0.0;
              UVar18.y = 0.0;
              if (*(UnityEngine_RectTransform_o **)((long)UVar19 + 0x38) != (UnityEngine_RectTransform_o *)0x0
                 ) {
                UnityEngine_RectTransform__set_anchoredPosition
                          (*(UnityEngine_RectTransform_o **)((long)UVar19 + 0x38),
                           (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x40),
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            if (pDVar7 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c721;
              DG_Tweening_TweenExtensions__Kill(pDVar7,0,(MethodInfo *)0x0);
            }
            UVar18.x = 0.0;
            UVar18.y = 0.0;
            if (*(long **)((long)UVar19 + 0x30) != (long *)0x0) {
              pcVar8 = *(code **)(**(long **)((long)UVar19 + 0x30) + 0x298);
              *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c73e;
              pUVar21 = (UnityEngine_Object_c *)(*pcVar8)();
              ((UnityEngine_Object_o *)((long)in_R9 + 0x18))->klass = pUVar21;
              *(int *)((long)in_R9 + 0x20) = (int)uVar23;
              *(int *)((long)in_R9 + 0x24) = (int)((ulong)uVar23 >> 0x20);
              pUVar5 = *(UnityEngine_RectTransform_o **)((long)UVar19 + 0x38);
              UVar18.x = 0.0;
              UVar18.y = 0.0;
              if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c75b;
                UVar17 = (UnityEngine_Vector2_Fields)
                         UnityEngine_RectTransform__get_anchoredPosition(pUVar5,(MethodInfo *)0x0);
                *(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x38) = UVar17;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c779;
                  il2cpp_runtime_helper_02337ed0();
                }
                puVar11 = (undefined8 *)((long)UVar19 + 0x48);
                pcVar12 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                if (*pcVar12 == '\0') {
                  *(undefined4 *)((long)ppUVar15 + -0x2c) = 0x3c23d70a;
                }
                else {
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c79e;
                    il2cpp_runtime_helper_02337ed0();
                    pcVar12 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                  }
                  fVar22 = 0.01;
                  if (0.01 <= *(float *)(pcVar12 + 4) * 0.12) {
                    fVar22 = *(float *)(pcVar12 + 4) * 0.12;
                  }
                  *(float *)((long)ppUVar15 + -0x2c) = fVar22;
                }
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c846;
                onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c860;
                DG_Tweening_TweenCallback_float____ctor();
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c87b;
                t = DG_Tweening_DOVirtual__Float
                              (0.0,1.0,*(float *)((long)ppUVar15 + -0x2c),onVirtualUpdate,(MethodInfo *)0x0);
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c892;
                pIVar13 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                    ((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c8a9;
                pIVar13 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar13,1,MethodInfo_Tweener_SetUpdate_Tweener);
                *puVar11 = pIVar13;
                *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c8b7;
                il2cpp_runtime_helper_022b4080(puVar11);
                pDVar7 = (DG_Tweening_Tween_o *)*puVar11;
                if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                  *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c8d2;
                  il2cpp_runtime_helper_02337ed0();
                }
                Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar7,0,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)ppUVar15 + -0x40) = 0x3b9c8ef;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x40) = unaff_RBX;
    *(undefined8 *)((long)ppUVar15 + -0x48) = 0x3b9c8fd;
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
    UVar16.x = 1.4013e-45;
    UVar16.y = 0.0;
    unaff_RBX = *(UnityEngine_Vector2_Fields *)((long)ppUVar15 + -0x40);
    ppUVar15 = (UnityEngine_Vector2_Fields **)((long)ppUVar15 + -0x38);
    UVar20 = UVar19;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x3b9c260

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback.<>c__DisplayClass17_0$$<MoveTo>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___MoveTo_b__0 (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o* __this, float value, const MethodInfo* method);
// 0x3b9c330

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0___MoveTo_b__0
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o *__this,
               float value,MethodInfo *method)

{
  intptr_t iVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_c *pGVar2;
  byte bVar3;
  System_Collections_Generic_Dictionary_string__GisketchMotionToken__o *__this_00;
  UnityEngine_Events_UnityEvent_bool__o *__this_01;
  UnityEngine_Object_o *pUVar4;
  System_String_o *token;
  DG_Tweening_Tween_o *pDVar5;
  code *pcVar6;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_Vector2_o value_00;
  bool_conflict bVar7;
  UnityEngine_Vector2_Fields UVar8;
  undefined8 *puVar9;
  char *pcVar10;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *pIVar11;
  undefined4 uVar12;
  MethodInfo *method_00;
  UnityEngine_Vector2_Fields unaff_RBX;
  UnityEngine_Vector2_Fields **ppUVar13;
  UnityEngine_Vector2_Fields unaff_RBP;
  UnityEngine_Vector2_Fields UVar14;
  UnityEngine_Vector2_Fields UVar15;
  UnityEngine_Vector2_Fields UVar16;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *in_R8;
  UnityEngine_Vector2_Fields in_R9;
  UnityEngine_Vector2_Fields unaff_R12;
  UnityEngine_Vector2_Fields unaff_R14;
  UnityEngine_Vector2_Fields UVar17;
  UnityEngine_Vector2_Fields unaff_R15;
  UnityEngine_Vector2_Fields x;
  UnityEngine_Object_c *pUVar18;
  float fVar19;
  float fVar21;
  undefined1 auVar22 [16];
  UnityEngine_Color_o fallback;
  UnityEngine_Vector2_Fields *pUStack_40;
  undefined1 auStack_8 [8];
  undefined8 uVar20;
  UnityEngine_Color_Fields UVar23;
  
  UVar8 = (UnityEngine_Vector2_Fields)(__this->fields).__4__this;
  UVar15 = (UnityEngine_Vector2_Fields)__this;
  if (UVar8 != (UnityEngine_Vector2_Fields)0x0) {
    __this_00 = ((Il2CppType *)((long)UVar8 + 0x20))->data;
    UVar15.x = 0.0;
    UVar15.y = 0.0;
    if (__this_00 != (System_Collections_Generic_Dictionary_string__GisketchMotionToken__o *)0x0) {
      UVar8 = (__this->fields).start.fields;
      UVar15 = (__this->fields).target.fields;
      fVar19 = UVar8.x;
      fVar21 = UVar8.y;
      value_00.fields.y = value * (UVar15.y - fVar21) + fVar21;
      value_00.fields.x = value * (UVar15.x - fVar19) + fVar19;
      UnityEngine_RectTransform__set_anchoredPosition
                ((UnityEngine_RectTransform_o *)__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
  auVar22 = il2cpp_runtime_helper_022b2c90();
  x = auVar22._8_8_;
  pUStack_40 = auVar22._0_8_;
  ppUVar13 = &pUStack_40;
  if (g_data_057a9f26 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnValueChanged);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AddListener);
    g_data_057a9f26 = '\x01';
  }
  pUStack_40 = (UnityEngine_Vector2_Fields *)((long)UVar15 + 0x20);
  *(MethodInfo **)((long)UVar15 + 0x20) = method;
  il2cpp_runtime_helper_022b4080(pUStack_40,method);
  ((Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o *)((long)UVar15 + 0x28))->
  klass = (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_c *)x;
  il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_o *)
                     ((long)UVar15 + 0x28),x);
  *(UnityEngine_Vector2_Fields *)((long)UVar15 + 0x30) = UVar8;
  il2cpp_runtime_helper_022b4080((void **)((long)UVar15 + 0x30),UVar8);
  ((Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_Fields *)
  ((long)UVar15 + 0x38))->__4__this = in_R8;
  il2cpp_runtime_helper_022b4080((Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___c__DisplayClass17_0_Fields *)
                     ((long)UVar15 + 0x38),in_R8);
  *(UnityEngine_Vector2_Fields *)((long)UVar15 + 0x40) = in_R9;
  il2cpp_runtime_helper_022b4080((UnityEngine_Vector2_o *)((long)UVar15 + 0x40));
  UVar17 = (UnityEngine_Vector2_Fields)&TypeInfo_Object;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar14.x = 0.0;
  UVar14.y = 0.0;
  UVar16 = x;
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar12 = 400;
  if ((char)bVar7 == '\0') {
label_03b9c45e:
    *(undefined4 *)((long)UVar15 + 0x50) = uVar12;
    UVar8 = *(UnityEngine_Vector2_Fields *)((long)UVar15 + 0x20);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar14.x = 0.0;
    UVar14.y = 0.0;
    UVar16 = UVar8;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)UVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
label_03b9c4dc:
      UVar14.x = 0.0;
      UVar14.y = 0.0;
      ppUVar13 = (UnityEngine_Vector2_Fields **)auStack_8;
      UVar8 = unaff_RBP;
      in_R9 = unaff_R12;
      UVar17 = unaff_R14;
      x = unaff_R15;
      goto Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch;
    }
    if (*pUStack_40 != (UnityEngine_Vector2_Fields)0x0) {
      __this_01 = *(UnityEngine_Events_UnityEvent_bool__o **)((long)*pUStack_40 + 0x118);
      UVar8 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction_bool);
      UVar14 = UVar15;
      UVar16 = UVar8;
      UnityEngine_Events_UnityAction_bool____ctor();
      UVar17.x = 0.0;
      UVar17.y = 0.0;
      if (__this_01 != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
        UnityEngine_Events_UnityEvent_bool___AddListener
                  (__this_01,(UnityEngine_Events_UnityAction_T0__o *)UVar8,MethodInfo_Void_AddListener);
        goto label_03b9c4dc;
      }
    }
  }
  else if (x != (UnityEngine_Vector2_Fields)0x0) {
    uVar12 = *(undefined4 *)&((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)((long)x + 0x210))->klass;
    goto label_03b9c45e;
  }
  il2cpp_runtime_helper_022b2c90();
  unaff_RBX = UVar15;
  UVar15 = UVar16;
Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch:
  do {
    UVar16 = UVar15;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar13 + -8) = UVar8;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar13 + -0x10) = x;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar13 + -0x18) = UVar17;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar13 + -0x20) = in_R9;
    *(UnityEngine_Vector2_Fields *)((long)ppUVar13 + -0x28) = unaff_RBX;
    x = (UnityEngine_Vector2_Fields)((ulong)UVar14 & 0xffffffff);
    if (g_data_057a9f28 == '\0') {
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c52b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c537;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c543;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c54f;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c55b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c567;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c573;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c57f;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshSwitch_b__0);
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c58b;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c597;
      il2cpp_runtime_helper_023445d0(&"primary");
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c5a3;
      il2cpp_runtime_helper_023445d0(&"engravedBg");
      g_data_057a9f28 = '\x01';
    }
    *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c5b9;
    in_R9 = (UnityEngine_Vector2_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
    *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c5c6;
    UVar15 = in_R9;
    System_Object___ctor((Il2CppObject *)in_R9,(MethodInfo *)0x0);
    if (in_R9 != (UnityEngine_Vector2_Fields)0x0) {
      *(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x10) = UVar16;
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c5e3;
      il2cpp_runtime_helper_022b4080((UnityEngine_Events_UnityAction_T0__Fields *)((long)in_R9 + 0x10));
      pUVar4 = *(UnityEngine_Object_o **)((long)UVar16 + 0x30);
      unaff_RBX = (UnityEngine_Vector2_Fields)&TypeInfo_Object;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c5ff;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c60b;
      bVar7 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return;
      }
      pUVar4 = *(UnityEngine_Object_o **)((long)UVar16 + 0x38);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c624;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c630;
      bVar7 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return;
      }
      if (*(long *)((long)UVar16 + 0x40) == 0) {
        return;
      }
      UVar8 = *(UnityEngine_Vector2_Fields *)((long)UVar16 + 0x20);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c650;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c65c;
      UVar15 = UVar8;
      bVar7 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)UVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        return;
      }
      if ((*(long *)((long)UVar16 + 0x20) != 0) &&
         (UVar15 = *(UnityEngine_Vector2_Fields *)((long)UVar16 + 0x40),
         UVar15 != (UnityEngine_Vector2_Fields)0x0)) {
        if (*(char *)(*(long *)((long)UVar16 + 0x20) + 0x120) == '\0') {
          puVar9 = &"engravedBg";
        }
        else {
          puVar9 = &"primary";
        }
        token = (System_String_o *)*puVar9;
        *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c6b4;
        fallback.fields.b = 1.0;
        fallback.fields.a = 1.0;
        fallback.fields.r = 1.0;
        fallback.fields.g = 1.0;
        UVar23 = (UnityEngine_Color_Fields)
                 Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)UVar15,token,fallback,
                            (MethodInfo *)0x0);
        uVar20 = UVar23._8_8_;
        *(UnityEngine_Color_Fields *)((long)in_R9 + 0x28) = UVar23;
        if (*(long *)((long)UVar16 + 0x20) != 0) {
          bVar3 = *(byte *)(*(long *)((long)UVar16 + 0x20) + 0x120);
          *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c6d9;
          UVar15 = (UnityEngine_Vector2_Fields)
                   Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
                             ((Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)UVar16,(uint)bVar3,
                              method_00);
          *(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x40) = UVar15;
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c6f7;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c6fe;
          bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
          pDVar5 = *(DG_Tweening_Tween_o **)((long)UVar16 + 0x48);
          if (((char)bVar7 == '\0') || (x.x._0_1_ == '\0')) {
            if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c7d7;
              DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
            }
            UVar15.x = 0.0;
            UVar15.y = 0.0;
            if (*(long **)((long)UVar16 + 0x30) != (long *)0x0) {
              iVar1 = ((UnityEngine_Object_Fields *)((long)in_R9 + 0x28))->m_CachedPtr;
              pGVar2 = ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)((long)in_R9 + 0x30))->klass;
              pcVar6 = *(code **)(**(long **)((long)UVar16 + 0x30) + 0x2a8);
              *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c802;
              (*pcVar6)((int)iVar1,pGVar2);
              UVar15.x = 0.0;
              UVar15.y = 0.0;
              if (*(UnityEngine_RectTransform_o **)((long)UVar16 + 0x38) != (UnityEngine_RectTransform_o *)0x0
                 ) {
                UnityEngine_RectTransform__set_anchoredPosition
                          (*(UnityEngine_RectTransform_o **)((long)UVar16 + 0x38),
                           (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x40),
                           (MethodInfo *)0x0);
                return;
              }
            }
          }
          else {
            if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
              *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c721;
              DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
            }
            UVar15.x = 0.0;
            UVar15.y = 0.0;
            if (*(long **)((long)UVar16 + 0x30) != (long *)0x0) {
              pcVar6 = *(code **)(**(long **)((long)UVar16 + 0x30) + 0x298);
              *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c73e;
              pUVar18 = (UnityEngine_Object_c *)(*pcVar6)();
              ((UnityEngine_Object_o *)((long)in_R9 + 0x18))->klass = pUVar18;
              *(int *)&((Il2CppType *)((long)in_R9 + 0x20))->data = (int)uVar20;
              *(int *)((long)in_R9 + 0x24) = (int)((ulong)uVar20 >> 0x20);
              __this_02 = *(UnityEngine_RectTransform_o **)((long)UVar16 + 0x38);
              UVar15.x = 0.0;
              UVar15.y = 0.0;
              if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
                *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c75b;
                UVar8 = (UnityEngine_Vector2_Fields)
                        UnityEngine_RectTransform__get_anchoredPosition(__this_02,(MethodInfo *)0x0);
                *(UnityEngine_Vector2_Fields *)((long)in_R9 + 0x38) = UVar8;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c779;
                  il2cpp_runtime_helper_02337ed0();
                }
                puVar9 = (undefined8 *)((long)UVar16 + 0x48);
                pcVar10 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                if (*pcVar10 == '\0') {
                  *(undefined4 *)((long)ppUVar13 + -0x2c) = 0x3c23d70a;
                }
                else {
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c79e;
                    il2cpp_runtime_helper_02337ed0();
                    pcVar10 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                  }
                  fVar19 = 0.01;
                  if (0.01 <= *(float *)(pcVar10 + 4) * 0.12) {
                    fVar19 = *(float *)(pcVar10 + 4) * 0.12;
                  }
                  *(float *)((long)ppUVar13 + -0x2c) = fVar19;
                }
                *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c846;
                onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
                *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c860;
                DG_Tweening_TweenCallback_float____ctor();
                *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c87b;
                t = DG_Tweening_DOVirtual__Float
                              (0.0,1.0,*(float *)((long)ppUVar13 + -0x2c),onVirtualUpdate,(MethodInfo *)0x0);
                *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c892;
                pIVar11 = DG_Tweening_TweenSettingsExtensions__SetEase_object_
                                    ((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
                *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c8a9;
                pIVar11 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(pIVar11,1,MethodInfo_Tweener_SetUpdate_Tweener);
                *puVar9 = pIVar11;
                *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c8b7;
                il2cpp_runtime_helper_022b4080(puVar9);
                pDVar5 = (DG_Tweening_Tween_o *)*puVar9;
                if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                  *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c8d2;
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
    *(undefined8 *)((long)ppUVar13 + -0x40) = 0x3b9c8ef;
    il2cpp_runtime_helper_022b2c90();
    *(UnityEngine_Vector2_Fields *)((long)ppUVar13 + -0x40) = unaff_RBX;
    *(undefined8 *)((long)ppUVar13 + -0x48) = 0x3b9c8fd;
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play(0,(MethodInfo *)0x0);
    UVar14.x = 1.4013e-45;
    UVar14.y = 0.0;
    unaff_RBX = *(UnityEngine_Vector2_Fields *)((long)ppUVar13 + -0x40);
    ppUVar13 = (UnityEngine_Vector2_Fields **)((long)ppUVar13 + -0x38);
    UVar17 = UVar16;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$Awake
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Awake (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b9b770

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Awake
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_c *extraout_RDX;
  UnityEngine_RectTransform_c *method_00;
  UnityEngine_RectTransform_o *target;
  
  if (g_data_057a9f22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9f22 = '\x01';
  }
  UnityEngine_EventSystems_UIBehaviour__Awake
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  pUVar1 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  target = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar1 != (UnityEngine_RectTransform_o *)0x0) {
    method_00 = pUVar1->klass;
    target = (UnityEngine_RectTransform_o *)0x0;
    if (method_00 == TypeInfo_RectTransform) {
      target = pUVar1;
    }
  }
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup(__this,target,(MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_RectTransform_o* target, const MethodInfo* method);
// 0x3b9b7d0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_RectTransform_o *target,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o UVar2;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this_00;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  
  if (g_data_057a9f23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9f23 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields)._rect = target;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._rect,target,method);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  __this_00 = (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)target;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)target,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    fVar5 = (float)**(undefined8 **)(TypeInfo_Vector2 + 0xb8);
    fVar4 = (float)((ulong)**(undefined8 **)(TypeInfo_Vector2 + 0xb8) >> 0x20);
label_03b9b870:
    UVar1.y = fVar4;
    UVar1.x = fVar5;
    (__this->fields)._origin.fields = UVar1;
    return;
  }
  if (target != (UnityEngine_RectTransform_o *)0x0) {
    UVar2 = UnityEngine_RectTransform__get_anchoredPosition(target,(MethodInfo *)0x0);
    fVar5 = UVar2.fields.x;
    fVar4 = UVar2.fields.y;
    goto label_03b9b870;
  }
  il2cpp_runtime_helper_022b2c90();
  *(undefined1 *)&(__this_00->fields)._hovered = 1;
  UVar1 = (__this_00->fields)._origin.fields;
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
    uVar6 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    if (((char)(__this_00->fields)._hovered == '\0') &&
       (*(char *)((long)&(__this_00->fields)._hovered + 1) == '\0')) {
      fVar5 = 0.0;
      goto label_03b9b905;
    }
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  }
  fVar5 = 10.0;
label_03b9b905:
  UVar2.fields.y = UVar1.y + fVar5 * (float)((ulong)uVar6 >> 0x20);
  UVar2.fields.x = UVar1.x + fVar5 * (float)uVar6;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this_00,UVar2,0.12,method_00);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b9b890

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o target;
  float fVar2;
  undefined8 uVar3;
  
  *(undefined1 *)&(__this->fields)._hovered = 1;
  UVar1 = (__this->fields)._origin.fields;
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
    if (((char)(__this->fields)._hovered == '\0') && (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')
       ) {
      fVar2 = 0.0;
      goto label_03b9b905;
    }
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  }
  fVar2 = 10.0;
label_03b9b905:
  target.fields.y = UVar1.y + fVar2 * (float)((ulong)uVar3 >> 0x20);
  target.fields.x = UVar1.x + fVar2 * (float)uVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.12,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b9bbd0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_o UVar3;
  undefined4 uVar4;
  bool_conflict bVar5;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar6;
  UnityEngine_RectTransform_o *unaff_RBX;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *pGVar7;
  DG_Tweening_Tween_o **ppDVar8;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *unaff_R14;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *unaff_R15;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  
  do {
    pGVar7 = __this;
    *(Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o **)((long)register0x00000020 + -8) = unaff_R14;
    *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined1 *)&(pGVar7->fields)._hovered = 0;
    UVar1 = (pGVar7->fields)._origin.fields;
    fVar9 = UVar1.x;
    fVar10 = UVar1.y;
    fVar11 = 0.0;
    fVar12 = 0.0;
    if (g_data_057a8dd2 == '\0') {
      *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x28) = UVar1;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b9bc20;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      fVar9 = *(float *)((long)register0x00000020 + -0x28);
      fVar10 = *(float *)((long)register0x00000020 + -0x24);
      fVar11 = *(float *)((long)register0x00000020 + -0x20);
      fVar12 = *(float *)((long)register0x00000020 + -0x1c);
      g_data_057a8dd2 = '\x01';
      uVar14 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
      if ((char)(pGVar7->fields)._hovered == '\0') goto label_03b9bc02;
label_03b9bc40:
      fVar13 = 10.0;
    }
    else {
      uVar14 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
label_03b9bc02:
      if (*(char *)((long)&(pGVar7->fields)._hovered + 1) != '\0') goto label_03b9bc40;
      fVar13 = 0.0;
    }
    unaff_RBX = *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x10);
    uVar2 = *(undefined8 *)((long)register0x00000020 + -8);
    *(Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar2;
    *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    *(undefined4 *)((long)register0x00000020 + -0x2c) = 0x3df5c28f;
    *(float *)((long)register0x00000020 + -0x28) = fVar9 + fVar13 * (float)uVar14;
    *(float *)((long)register0x00000020 + -0x24) = fVar10 + fVar13 * (float)((ulong)uVar14 >> 0x20);
    *(float *)((long)register0x00000020 + -0x20) = fVar11 + 0.0;
    *(float *)((long)register0x00000020 + -0x1c) = fVar12 + 0.0;
    if (g_data_057a9f25 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9b9cc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9b9d8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9b9e4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9b9f0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9b9fc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba08;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba14;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MoveTo_b__0);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba20;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
      g_data_057a9f25 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba36;
    unaff_R15 = (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba43;
    __this = unaff_R15;
    System_Object___ctor((Il2CppObject *)unaff_R15,(MethodInfo *)0x0);
    if (unaff_R15 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
      (unaff_R15->fields).m_CachedPtr = (intptr_t)pGVar7;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba5f;
      il2cpp_runtime_helper_022b4080(&unaff_R15->fields);
      uVar4 = *(undefined4 *)((long)register0x00000020 + -0x24);
      *(undefined4 *)&(unaff_R15->fields)._rect = *(undefined4 *)((long)register0x00000020 + -0x28);
      *(undefined4 *)((long)&(unaff_R15->fields)._rect + 4) = uVar4;
      unaff_RBX = (pGVar7->fields)._rect;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba85;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba91;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      pDVar6 = (pGVar7->fields)._tween;
      if (pDVar6 != (DG_Tweening_Tween_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bab1;
        DG_Tweening_TweenExtensions__Kill(pDVar6,0,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bac9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bad0;
      bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      __this = (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)(pGVar7->fields)._rect;
      if ((char)bVar5 == '\0') {
        if (__this != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
          UnityEngine_RectTransform__set_anchoredPosition
                    ((UnityEngine_RectTransform_o *)__this,(UnityEngine_Vector2_o)(unaff_R15->fields)._rect,
                     (MethodInfo *)0x0);
          return;
        }
      }
      else if (__this != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
        ppDVar8 = &(pGVar7->fields)._tween;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9baf0;
        UVar3 = UnityEngine_RectTransform__get_anchoredPosition
                          ((UnityEngine_RectTransform_o *)__this,(MethodInfo *)0x0);
        (unaff_R15->fields).m_CancellationTokenSource =
             (System_Threading_CancellationTokenSource_o *)UVar3.fields;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb04;
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb1e;
        DG_Tweening_TweenCallback_float____ctor();
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb39;
        t = DG_Tweening_DOVirtual__Float
                      (0.0,1.0,*(float *)((long)register0x00000020 + -0x2c),onVirtualUpdate,(MethodInfo *)0x0)
        ;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb50;
        t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb67;
        pDVar6 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_00,1,MethodInfo_Tweener_SetUpdate_Tweener);
        *ppDVar8 = pDVar6;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb75;
        il2cpp_runtime_helper_022b4080(ppDVar8);
        pDVar6 = *ppDVar8;
        if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb90;
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar6,0,(MethodInfo *)0x0);
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bbc5;
    il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x38);
    unaff_R14 = pGVar7;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b9bc70

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 1;
  UVar1 = (__this->fields)._origin.fields;
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  if (((char)(__this->fields)._hovered == '\0') && (*(char *)((long)&(__this->fields)._hovered + 1) == '\0'))
  {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar3;
  target.fields.x = UVar1.x + (float)uVar2 * fVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.12,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b9bd00

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 0;
  UVar1 = (__this->fields)._origin.fields;
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  if (((char)(__this->fields)._hovered == '\0') && (*(char *)((long)&(__this->fields)._hovered + 1) == '\0'))
  {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar3;
  target.fields.x = UVar1.x + (float)uVar2 * fVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.12,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerDown (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b9bd90

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerDown
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_o target;
  
  UVar1 = (__this->fields)._origin.fields;
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  target.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * -5.0;
  target.fields.x = UVar1.x + (float)uVar2 * -5.0;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.06,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnPointerUp
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerUp (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b9be00

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnPointerUp
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_o target;
  float fVar3;
  
  UVar1 = (__this->fields)._origin.fields;
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  if (((char)(__this->fields)._hovered == '\0') && (*(char *)((long)&(__this->fields)._hovered + 1) == '\0'))
  {
    fVar3 = 0.0;
  }
  else {
    fVar3 = 10.0;
  }
  target.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar3;
  target.fields.x = UVar1.x + (float)uVar2 * fVar3;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo(__this,target,0.1,(MethodInfo *)eventData);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnSubmit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSubmit (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b9be80

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnSubmit
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_RectTransform_o *pUVar3;
  UnityEngine_Vector2_o UVar4;
  long lVar5;
  bool_conflict bVar6;
  Il2CppObject *__this_00;
  DG_Tweening_Sequence_o *pDVar7;
  DG_Tweening_TweenCallback_float__o *pDVar8;
  DG_Tweening_Tweener_o *pDVar9;
  DG_Tweening_Tween_o *pDVar10;
  Il2CppObject *__this_01;
  DG_Tweening_Tween_o **ppDVar11;
  float fVar12;
  
  if (g_data_057a9f24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DOTween);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Sequence_SetUpdate_Sequence);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnSubmit_b__0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnSubmit_b__1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass15_0);
    g_data_057a9f24 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass15_0);
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    pUVar3 = (__this->fields)._rect;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    pDVar10 = (__this->fields)._tween;
    if (pDVar10 != (DG_Tweening_Tween_o *)0x0) {
      DG_Tweening_TweenExtensions__Kill(pDVar10,0,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_01 = (Il2CppObject *)0x0;
    bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    pUVar3 = (__this->fields)._rect;
    if ((char)bVar6 == '\0') {
      UVar1 = (__this->fields)._origin.fields;
      if (g_data_057a8dd2 == '\0') {
        __this_01 = (Il2CppObject *)&TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a8dd2 = '\x01';
      }
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
      if (((char)(__this->fields)._hovered == '\0') &&
         (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = 10.0;
      }
      if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
        UVar4.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar12;
        UVar4.fields.x = UVar1.x + (float)uVar2 * fVar12;
        UnityEngine_RectTransform__set_anchoredPosition(pUVar3,UVar4,(MethodInfo *)0x0);
        return;
      }
    }
    else if (pUVar3 != (UnityEngine_RectTransform_o *)0x0) {
      UVar4 = UnityEngine_RectTransform__get_anchoredPosition(pUVar3,(MethodInfo *)0x0);
      __this_00[1].monitor = (void *)UVar4.fields;
      UVar1 = (__this->fields)._origin.fields;
      if (g_data_057a8dd2 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a8dd2 = '\x01';
      }
      lVar5 = TypeInfo_Vector2;
      uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
      __this_00[2].klass =
           (Il2CppClass *)
           CONCAT44(UVar1.y + (float)((ulong)uVar2 >> 0x20) * -5.0,UVar1.x + (float)uVar2 * -5.0);
      UVar1 = (__this->fields)._origin.fields;
      uVar2 = *(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x10);
      if (((char)(__this->fields)._hovered == '\0') &&
         (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = 10.0;
      }
      ppDVar11 = &(__this->fields)._tween;
      __this_00[2].monitor =
           (void *)CONCAT44(UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar12,UVar1.x + (float)uVar2 * fVar12);
      if (*(int *)(TypeInfo_DOTween + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pDVar7 = DG_Tweening_DOTween__Sequence((MethodInfo *)0x0);
      pDVar8 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor();
      pDVar9 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.05,pDVar8,(MethodInfo *)0x0);
      pDVar10 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar9,9,MethodInfo_Tweener_SetEase_Tweener);
      pDVar7 = DG_Tweening_TweenSettingsExtensions__Append(pDVar7,pDVar10,(MethodInfo *)0x0);
      pDVar8 = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
      DG_Tweening_TweenCallback_float____ctor();
      pDVar9 = DG_Tweening_DOVirtual__Float(0.0,1.0,0.1,pDVar8,(MethodInfo *)0x0);
      pDVar10 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)pDVar9,9,MethodInfo_Tweener_SetEase_Tweener);
      pDVar7 = DG_Tweening_TweenSettingsExtensions__Append(pDVar7,pDVar10,(MethodInfo *)0x0);
      pDVar10 = (DG_Tweening_Tween_o *)
                DG_Tweening_TweenSettingsExtensions__SetUpdate_object_((Il2CppObject *)pDVar7,1,MethodInfo_Sequence_SetUpdate_Sequence);
      *ppDVar11 = pDVar10;
      il2cpp_runtime_helper_022b4080(ppDVar11);
      pDVar10 = *ppDVar11;
      if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar10,0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$TargetPosition
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__TargetPosition (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b9b930

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__TargetPosition
          (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined8 uVar2;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  
  UVar1 = (__this->fields)._origin.fields;
  if (g_data_057a8dd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a8dd2 = '\x01';
  }
  uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
  if (((char)(__this->fields)._hovered == '\0') && (*(char *)((long)&(__this->fields)._hovered + 1) == '\0'))
  {
    fVar4 = 0.0;
  }
  else {
    fVar4 = 10.0;
  }
  UVar3.fields.y = UVar1.y + (float)((ulong)uVar2 >> 0x20) * fVar4;
  UVar3.fields.x = UVar1.x + (float)uVar2 * fVar4;
  return (UnityEngine_Vector2_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$MoveTo
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, UnityEngine_Vector2_o target, float duration, const MethodInfo* method);
// 0x3b9b9a0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__MoveTo
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,UnityEngine_Vector2_o target,
               float duration,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_o UVar2;
  undefined4 uVar3;
  bool_conflict bVar4;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  Il2CppObject *t_00;
  DG_Tweening_Tween_o *pDVar5;
  UnityEngine_RectTransform_o *unaff_RBX;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this_00;
  undefined8 unaff_R14;
  DG_Tweening_Tween_o **ppDVar6;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *unaff_R15;
  float fVar7;
  float fVar8;
  float in_XMM0_Dc;
  float fVar9;
  float in_XMM0_Dd;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  
  fVar7 = target.fields.x;
  fVar8 = target.fields.y;
  do {
    *(Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o **)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x18) = unaff_RBX;
    *(float *)((long)register0x00000020 + -0x2c) = duration;
    *(float *)((long)register0x00000020 + -0x28) = fVar7;
    *(float *)((long)register0x00000020 + -0x24) = fVar8;
    *(float *)((long)register0x00000020 + -0x20) = in_XMM0_Dc;
    *(float *)((long)register0x00000020 + -0x1c) = in_XMM0_Dd;
    if (g_data_057a9f25 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9b9cc;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9b9d8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotionDriver);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9b9e4;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9b9f0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback_float);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9b9fc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetEase_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba08;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Tweener_SetUpdate_Tweener);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba14;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_MoveTo_b__0);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba20;
      il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
      g_data_057a9f25 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba36;
    unaff_R15 = (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba43;
    __this_00 = unaff_R15;
    System_Object___ctor((Il2CppObject *)unaff_R15,(MethodInfo *)0x0);
    if (unaff_R15 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
      (unaff_R15->fields).m_CachedPtr = (intptr_t)__this;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba5f;
      il2cpp_runtime_helper_022b4080(&unaff_R15->fields);
      uVar3 = *(undefined4 *)((long)register0x00000020 + -0x24);
      *(undefined4 *)&(unaff_R15->fields)._rect = *(undefined4 *)((long)register0x00000020 + -0x28);
      *(undefined4 *)((long)&(unaff_R15->fields)._rect + 4) = uVar3;
      unaff_RBX = (__this->fields)._rect;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba85;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9ba91;
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        return;
      }
      pDVar5 = (__this->fields)._tween;
      if (pDVar5 != (DG_Tweening_Tween_o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bab1;
        DG_Tweening_TweenExtensions__Kill(pDVar5,0,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bac9;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bad0;
      bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
      __this_00 = (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)(__this->fields)._rect;
      if ((char)bVar4 == '\0') {
        if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
          UnityEngine_RectTransform__set_anchoredPosition
                    ((UnityEngine_RectTransform_o *)__this_00,(UnityEngine_Vector2_o)(unaff_R15->fields)._rect
                     ,(MethodInfo *)0x0);
          return;
        }
      }
      else if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
        ppDVar6 = &(__this->fields)._tween;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9baf0;
        UVar2 = UnityEngine_RectTransform__get_anchoredPosition
                          ((UnityEngine_RectTransform_o *)__this_00,(MethodInfo *)0x0);
        (unaff_R15->fields).m_CancellationTokenSource =
             (System_Threading_CancellationTokenSource_o *)UVar2.fields;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb04;
        onVirtualUpdate = (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback_float);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb1e;
        DG_Tweening_TweenCallback_float____ctor();
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb39;
        t = DG_Tweening_DOVirtual__Float
                      (0.0,1.0,*(float *)((long)register0x00000020 + -0x2c),onVirtualUpdate,(MethodInfo *)0x0)
        ;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb50;
        t_00 = DG_Tweening_TweenSettingsExtensions__SetEase_object_((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb67;
        pDVar5 = (DG_Tweening_Tween_o *)
                 DG_Tweening_TweenSettingsExtensions__SetUpdate_object_(t_00,1,MethodInfo_Tweener_SetUpdate_Tweener);
        *ppDVar6 = pDVar5;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb75;
        il2cpp_runtime_helper_022b4080(ppDVar6);
        pDVar5 = *ppDVar6;
        if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bb90;
          il2cpp_runtime_helper_02337ed0();
        }
        Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar5,0,(MethodInfo *)0x0);
        return;
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x3b9bbc5;
    il2cpp_runtime_helper_022b2c90();
    *(Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o **)((long)register0x00000020 + -0x40) = __this;
    *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x48) = unaff_RBX;
    *(undefined1 *)&(__this_00->fields)._hovered = 0;
    UVar1 = (__this_00->fields)._origin.fields;
    fVar7 = UVar1.x;
    fVar8 = UVar1.y;
    fVar9 = 0.0;
    fVar10 = 0.0;
    if (g_data_057a8dd2 == '\0') {
      *(UnityEngine_Vector2_Fields *)((long)register0x00000020 + -0x60) = UVar1;
      *(undefined8 *)((long)register0x00000020 + -0x58) = 0;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x3b9bc20;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      fVar7 = *(float *)((long)register0x00000020 + -0x60);
      fVar8 = *(float *)((long)register0x00000020 + -0x5c);
      fVar9 = *(float *)((long)register0x00000020 + -0x58);
      fVar10 = *(float *)((long)register0x00000020 + -0x54);
      g_data_057a8dd2 = '\x01';
      uVar12 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
      if ((char)(__this_00->fields)._hovered == '\0') goto label_03b9bc02;
label_03b9bc40:
      fVar11 = 10.0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 0x10);
label_03b9bc02:
      if (*(undefined1 *)((long)&(__this_00->fields)._hovered + 1) != '\0') goto label_03b9bc40;
      fVar11 = 0.0;
    }
    fVar7 = fVar7 + fVar11 * (float)uVar12;
    fVar8 = fVar8 + fVar11 * (float)((ulong)uVar12 >> 0x20);
    in_XMM0_Dc = fVar9 + 0.0;
    in_XMM0_Dd = fVar10 + 0.0;
    duration = 0.12;
    unaff_RBX = *(UnityEngine_RectTransform_o **)((long)register0x00000020 + -0x48);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x40);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x38);
    __this = __this_00;
  } while( true );
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b9c270

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__OnDestroy
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  
  t = (__this->fields)._tween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  UnityEngine_EventSystems_UIBehaviour__OnDestroy
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchSpriteButtonFeedback$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___ctor (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o* __this, const MethodInfo* method);
// 0x3b9c2a0

void Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


