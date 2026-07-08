// Type: Gisketch.Aottg2UI.Actions.GisketchToggleFeedback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchToggleFeedback.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback.<>c__DisplayClass16_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0___ctor (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x3b300b0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_<>c__DisplayClass16_0___ctor
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback.<>c__DisplayClass16_0$$<RefreshSwitch>b__0
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0___RefreshSwitch_b__0 (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0_o* __this, float value, const MethodInfo* method);
// 0x3b301d0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_<>c__DisplayClass16_0__<RefreshSwitch>b__0
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___c__DisplayClass16_0_o *__this,
               float value,MethodInfo *method)

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
  UnityEngine_Vector2_o value_00;
  float fVar13;
  float fVar14;
  
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
       (__this_00 = (pGVar11->fields)._switchThumb, __this_00 != (UnityEngine_RectTransform_o *)0x0)
       ) {
      UVar5 = (__this->fields).startPosition.fields;
      UVar6 = (__this->fields).targetPosition.fields;
      fVar13 = UVar5.x;
      fVar14 = UVar5.y;
      value_00.fields.x = (UVar6.x - fVar13) * value + fVar13;
      value_00.fields.y = (UVar6.y - fVar14) * value + fVar14;
      UnityEngine_RectTransform__set_anchoredPosition(__this_00,value_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$Setup
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_UI_Toggle_o* toggle, TMPro_TextMeshProUGUI_o* label, UnityEngine_UI_Image_o* switchTrack, UnityEngine_RectTransform_o* switchThumb, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x3b2f840

/* WARNING: Removing unreachable block (ram,0x03b2fbe3) */
/* WARNING: Removing unreachable block (ram,0x03b2fbe8) */
/* WARNING: Removing unreachable block (ram,0x03b2fbf1) */
/* WARNING: Removing unreachable block (ram,0x03b2fbfe) */
/* WARNING: Removing unreachable block (ram,0x03b2fc24) */
/* WARNING: Removing unreachable block (ram,0x03b2fc44) */
/* WARNING: Removing unreachable block (ram,0x03b2fc4c) */
/* WARNING: Removing unreachable block (ram,0x03b2fcf9) */
/* WARNING: Removing unreachable block (ram,0x03b2fc60) */
/* WARNING: Removing unreachable block (ram,0x03b2fc69) */
/* WARNING: Removing unreachable block (ram,0x03b2fc78) */
/* WARNING: Removing unreachable block (ram,0x03b2fc8d) */
/* WARNING: Removing unreachable block (ram,0x03b2fc91) */
/* WARNING: Removing unreachable block (ram,0x03b2fd07) */
/* WARNING: Removing unreachable block (ram,0x03b2fd9d) */
/* WARNING: Removing unreachable block (ram,0x03b2fda2) */

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_UI_Toggle_o *toggle,TMPro_TextMeshProUGUI_o *label,
               UnityEngine_UI_Image_o *switchTrack,UnityEngine_RectTransform_o *switchThumb,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  UnityEngine_UI_Toggle_o **ppUVar1;
  UnityEngine_UI_Toggle_o *pUVar2;
  UnityEngine_UI_ToggleGroup_o *__this_00;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_01;
  DG_Tweening_Tween_o *t;
  UnityEngine_Vector2_o UVar5;
  bool_conflict bVar6;
  UnityEngine_Events_UnityAction_T0__o *call;
  Il2CppObject *__this_02;
  undefined8 *puVar7;
  float fVar8;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar9;
  
  if (DAT_057015ee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnValueChanged);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction_bool);
    il2cpp_init_method_metadata(&MethodInfo_Void_AddListener);
    DAT_057015ee = '\x01';
  }
  ppUVar1 = &(__this->fields)._toggle;
  (__this->fields)._toggle = toggle;
  il2cpp_runtime_glue(ppUVar1,toggle);
  (__this->fields)._label = label;
  il2cpp_runtime_glue(&(__this->fields)._label,label);
  (__this->fields)._switchTrack = switchTrack;
  il2cpp_runtime_glue(&(__this->fields)._switchTrack,switchTrack);
  (__this->fields)._switchThumb = switchThumb;
  il2cpp_runtime_glue(&(__this->fields)._switchThumb,switchThumb);
  (__this->fields)._theme = theme;
  il2cpp_runtime_glue(&(__this->fields)._theme);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar8 = 5.60519e-43;
  if ((char)bVar6 != '\0') {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto LAB_03b2f9c1;
    fVar8 = (label->fields).m_outlineWidth;
  }
  (__this->fields)._normalWeight = (int32_t)fVar8;
  pUVar2 = (__this->fields)._toggle;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    pUVar2 = *ppUVar1;
    if (pUVar2 == (UnityEngine_UI_Toggle_o *)0x0) {
LAB_03b2f9c1:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (pUVar2->fields).m_Group;
    call = (UnityEngine_Events_UnityAction_T0__o *)il2cpp_runtime_glue(TypeInfo_UnityAction_bool);
    UnityEngine_Events_UnityAction<bool>___ctor();
    if (__this_00 == (UnityEngine_UI_ToggleGroup_o *)0x0) goto LAB_03b2f9c1;
    UnityEngine_Events_UnityEvent<bool>__AddListener
              ((UnityEngine_Events_UnityEvent_bool__o *)__this_00,call,MethodInfo_Void_AddListener);
  }
  if (DAT_057015f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshSwitch_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass16_0);
    il2cpp_init_method_metadata(&"primary");
    il2cpp_init_method_metadata(&"engravedBg");
    DAT_057015f0 = '\x01';
  }
  __this_02 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass16_0);
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_02 == (Il2CppObject *)0x0) {
LAB_03b2fdba:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  __this_02[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(__this_02 + 1);
  pUVar3 = (__this->fields)._switchTrack;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pUVar4 = (__this->fields)._switchThumb;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (((char)bVar6 == '\0') &&
       ((__this->fields)._theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      pUVar2 = (__this->fields)._toggle;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        pUVar2 = (__this->fields)._toggle;
        if ((pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) &&
           (__this_01 = (__this->fields)._theme,
           __this_01 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
          if (*(char *)&(pUVar2->fields).onValueChanged == '\0') {
            puVar7 = &"engravedBg";
          }
          else {
            puVar7 = &"primary";
          }
          UVar9.fields.b = 1.0;
          UVar9.fields.a = 1.0;
          UVar9.fields.r = 1.0;
          UVar9.fields.g = 1.0;
          UVar9 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                            (__this_01,(System_String_o *)*puVar7,UVar9,(MethodInfo *)0x0);
          *(UnityEngine_Color_Fields *)&__this_02[2].monitor = UVar9.fields;
          pUVar2 = (__this->fields)._toggle;
          if (pUVar2 != (UnityEngine_UI_Toggle_o *)0x0) {
            UVar5 = Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
                              (__this,(uint)*(byte *)&(pUVar2->fields).onValueChanged,method_00);
            __this_02[4].klass = (Il2CppClass *)UVar5.fields;
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              il2cpp_init_class();
            }
            UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            t = (__this->fields)._switchTween;
            if (t != (DG_Tweening_Tween_o *)0x0) {
              DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
            }
            pUVar3 = (__this->fields)._switchTrack;
            if (pUVar3 != (UnityEngine_UI_Image_o *)0x0) {
              (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                        ((int)__this_02[2].monitor,__this_02[3].klass);
              pUVar4 = (__this->fields)._switchThumb;
              if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
                UnityEngine_RectTransform__set_anchoredPosition
                          (pUVar4,(UnityEngine_Vector2_o)__this_02[4].klass,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
        goto LAB_03b2fdba;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnValueChanged
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnValueChanged (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool __, const MethodInfo* method);
// 0x3b2fdc0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnValueChanged
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool_conflict __,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Toggle_o *pUVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  UnityEngine_Vector2_o UVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  undefined8 *puVar7;
  char *pcVar8;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *pDVar9;
  MethodInfo *method_00;
  undefined4 in_register_00000034;
  DG_Tweening_Tween_o **ppDVar10;
  void *pvVar11;
  UnityEngine_Color_o UVar13;
  float fStack_2c;
  undefined8 uVar12;
  
  Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play
            (0,(MethodInfo *)CONCAT44(in_register_00000034,__));
  if (DAT_057015f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshSwitch_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass16_0);
    il2cpp_init_method_metadata(&"primary");
    il2cpp_init_method_metadata(&"engravedBg");
    DAT_057015f0 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass16_0);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  if (pIVar6 == (Il2CppObject *)0x0) {
LAB_03b2fdba:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar6[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(pIVar6 + 1);
  pUVar1 = (__this->fields)._switchTrack;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar2 = (__this->fields)._switchThumb;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (((char)bVar5 == '\0') &&
       ((__this->fields)._theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      pUVar3 = (__this->fields)._toggle;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pUVar3 = (__this->fields)._toggle;
        if ((pUVar3 != (UnityEngine_UI_Toggle_o *)0x0) &&
           (__this_00 = (__this->fields)._theme,
           __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
          if (*(char *)&(pUVar3->fields).onValueChanged == '\0') {
            puVar7 = &"engravedBg";
          }
          else {
            puVar7 = &"primary";
          }
          UVar13.fields.b = 1.0;
          UVar13.fields.a = 1.0;
          UVar13.fields.r = 1.0;
          UVar13.fields.g = 1.0;
          UVar13 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                             (__this_00,(System_String_o *)*puVar7,UVar13,(MethodInfo *)0x0);
          uVar12 = UVar13.fields._8_8_;
          *(UnityEngine_Color_Fields *)&pIVar6[2].monitor = UVar13.fields;
          pUVar3 = (__this->fields)._toggle;
          if (pUVar3 != (UnityEngine_UI_Toggle_o *)0x0) {
            UVar4 = Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
                              (__this,(uint)*(byte *)&(pUVar3->fields).onValueChanged,method_00);
            pIVar6[4].klass = (Il2CppClass *)UVar4.fields;
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            pDVar9 = (__this->fields)._switchTween;
            if ((char)bVar5 == '\0') {
              if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
                DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
              }
              pUVar1 = (__this->fields)._switchTrack;
              if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                          ((int)pIVar6[2].monitor,pIVar6[3].klass);
                pUVar2 = (__this->fields)._switchThumb;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchoredPosition
                            (pUVar2,(UnityEngine_Vector2_o)pIVar6[4].klass,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
                DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
              }
              pUVar1 = (__this->fields)._switchTrack;
              if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                pvVar11 = (void *)(*(pUVar1->klass->vtable)._22_get_color.methodPtr)();
                pIVar6[1].monitor = pvVar11;
                *(int *)&pIVar6[2].klass = (int)uVar12;
                *(int *)((long)&pIVar6[2].klass + 4) = (int)((ulong)uVar12 >> 0x20);
                pUVar2 = (__this->fields)._switchThumb;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar4 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
                  pIVar6[3].monitor = (void *)UVar4.fields;
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  ppDVar10 = &(__this->fields)._switchTween;
                  pcVar8 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                  if (*pcVar8 == '\0') {
                    fStack_2c = 0.01;
                  }
                  else {
                    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                      il2cpp_init_class();
                      pcVar8 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                    }
                    fStack_2c = 0.01;
                    if (0.01 <= *(float *)(pcVar8 + 4) * 0.12) {
                      fStack_2c = *(float *)(pcVar8 + 4) * 0.12;
                    }
                  }
                  onVirtualUpdate =
                       (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
                  DG_Tweening_TweenCallback<float>___ctor();
                  t = DG_Tweening_DOVirtual__Float
                                (0.0,1.0,fStack_2c,onVirtualUpdate,(MethodInfo *)0x0);
                  pIVar6 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                     ((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
                  pDVar9 = (DG_Tweening_Tween_o *)
                           DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                                     (pIVar6,1,MethodInfo_Tweener_SetUpdate_Tweener);
                  *ppDVar10 = pDVar9;
                  il2cpp_runtime_glue(ppDVar10);
                  pDVar9 = *ppDVar10;
                  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar9,0,(MethodInfo *)0x0)
                  ;
                  return;
                }
              }
            }
          }
        }
        goto LAB_03b2fdba;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnPointerEnter
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerEnter (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b2fde0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerEnter
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  float fVar3;
  
  *(undefined1 *)&(__this->fields)._hovered = 1;
  if (DAT_057015ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015ef = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar1 = (__this->fields)._label;
  fVar3 = 9.80909e-43;
  if (((char)(__this->fields)._hovered == '\0') &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    fVar3 = (float)(__this->fields)._normalWeight;
  }
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    if ((pTVar1->fields).m_outlineWidth == fVar3) {
      return;
    }
    (pTVar1->fields).m_outlineWidth = fVar3;
    *(undefined1 *)&(pTVar1->fields).m_verticalMapping = 1;
    (*(pTVar1->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pTVar1,(pTVar1->klass->vtable)._28_SetVerticesDirty.method,0);
    vtable_dispatch = (pTVar1->klass->vtable)._27_SetLayoutDirty.methodPtr;
    (*vtable_dispatch)
              (pTVar1,(pTVar1->klass->vtable)._27_SetLayoutDirty.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnPointerExit
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerExit (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x3b2ff00

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnPointerExit
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  float fVar3;
  
  *(undefined1 *)&(__this->fields)._hovered = 0;
  if (DAT_057015ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015ef = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar1 = (__this->fields)._label;
  fVar3 = 9.80909e-43;
  if (((char)(__this->fields)._hovered == '\0') &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    fVar3 = (float)(__this->fields)._normalWeight;
  }
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    if ((pTVar1->fields).m_outlineWidth == fVar3) {
      return;
    }
    (pTVar1->fields).m_outlineWidth = fVar3;
    *(undefined1 *)&(pTVar1->fields).m_verticalMapping = 1;
    (*(pTVar1->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pTVar1,(pTVar1->klass->vtable)._28_SetVerticesDirty.method,0);
    vtable_dispatch = (pTVar1->klass->vtable)._27_SetLayoutDirty.methodPtr;
    (*vtable_dispatch)
              (pTVar1,(pTVar1->klass->vtable)._27_SetLayoutDirty.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnSelect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnSelect (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b2ff90

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnSelect
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  float fVar3;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 1;
  if (DAT_057015ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015ef = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar1 = (__this->fields)._label;
  fVar3 = 9.80909e-43;
  if (((char)(__this->fields)._hovered == '\0') &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    fVar3 = (float)(__this->fields)._normalWeight;
  }
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    if ((pTVar1->fields).m_outlineWidth == fVar3) {
      return;
    }
    (pTVar1->fields).m_outlineWidth = fVar3;
    *(undefined1 *)&(pTVar1->fields).m_verticalMapping = 1;
    (*(pTVar1->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pTVar1,(pTVar1->klass->vtable)._28_SetVerticesDirty.method,0);
    vtable_dispatch = (pTVar1->klass->vtable)._27_SetLayoutDirty.methodPtr;
    (*vtable_dispatch)
              (pTVar1,(pTVar1->klass->vtable)._27_SetLayoutDirty.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnDeselect
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDeselect (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, UnityEngine_EventSystems_BaseEventData_o* eventData, const MethodInfo* method);
// 0x3b30020

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDeselect
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,
               UnityEngine_EventSystems_BaseEventData_o *eventData,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  float fVar3;
  
  *(undefined1 *)((long)&(__this->fields)._hovered + 1) = 0;
  if (DAT_057015ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015ef = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar1 = (__this->fields)._label;
  fVar3 = 9.80909e-43;
  if (((char)(__this->fields)._hovered == '\0') &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    fVar3 = (float)(__this->fields)._normalWeight;
  }
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    if ((pTVar1->fields).m_outlineWidth == fVar3) {
      return;
    }
    (pTVar1->fields).m_outlineWidth = fVar3;
    *(undefined1 *)&(pTVar1->fields).m_verticalMapping = 1;
    (*(pTVar1->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pTVar1,(pTVar1->klass->vtable)._28_SetVerticesDirty.method,0);
    vtable_dispatch = (pTVar1->klass->vtable)._27_SetLayoutDirty.methodPtr;
    (*vtable_dispatch)
              (pTVar1,(pTVar1->klass->vtable)._27_SetLayoutDirty.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Refresh (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, const MethodInfo* method);
// 0x3b2fe70

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Refresh
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,MethodInfo *method)

{
  TMPro_TextMeshProUGUI_o *pTVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  float fVar3;
  
  if (DAT_057015ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057015ef = '\x01';
  }
  pTVar1 = (__this->fields)._label;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    return;
  }
  pTVar1 = (__this->fields)._label;
  fVar3 = 9.80909e-43;
  if (((char)(__this->fields)._hovered == '\0') &&
     (*(char *)((long)&(__this->fields)._hovered + 1) == '\0')) {
    fVar3 = (float)(__this->fields)._normalWeight;
  }
  if (pTVar1 != (TMPro_TextMeshProUGUI_o *)0x0) {
    if ((pTVar1->fields).m_outlineWidth == fVar3) {
      return;
    }
    (pTVar1->fields).m_outlineWidth = fVar3;
    *(undefined1 *)&(pTVar1->fields).m_verticalMapping = 1;
    (*(pTVar1->klass->vtable)._28_SetVerticesDirty.methodPtr)
              (pTVar1,(pTVar1->klass->vtable)._28_SetVerticesDirty.method,0);
    vtable_dispatch = (pTVar1->klass->vtable)._27_SetLayoutDirty.methodPtr;
    (*vtable_dispatch)
              (pTVar1,(pTVar1->klass->vtable)._27_SetLayoutDirty.method,extraout_RDX,
               vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$RefreshSwitch
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool animate, const MethodInfo* method);
// 0x3b2f9d0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__RefreshSwitch
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool_conflict animate,
               MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_Toggle_o *pUVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this_00;
  UnityEngine_Vector2_o UVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  undefined8 *puVar7;
  char *pcVar8;
  DG_Tweening_TweenCallback_float__o *onVirtualUpdate;
  DG_Tweening_Tweener_o *t;
  DG_Tweening_Tween_o *pDVar9;
  MethodInfo *method_00;
  DG_Tweening_Tween_o **ppDVar10;
  void *pvVar11;
  UnityEngine_Color_o UVar13;
  float fStack_2c;
  undefined8 uVar12;
  
  if (DAT_057015f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotionDriver);
    il2cpp_init_method_metadata(&TypeInfo_GisketchMotion);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TweenCallback_float);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetEase_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Tweener_SetUpdate_Tweener);
    il2cpp_init_method_metadata(&MethodInfo_Void__RefreshSwitch_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass16_0);
    il2cpp_init_method_metadata(&"primary");
    il2cpp_init_method_metadata(&"engravedBg");
    DAT_057015f0 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass16_0);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  if (pIVar6 == (Il2CppObject *)0x0) {
LAB_03b2fdba:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar6[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_glue(pIVar6 + 1);
  pUVar1 = (__this->fields)._switchTrack;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar2 = (__this->fields)._switchThumb;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (((char)bVar5 == '\0') &&
       ((__this->fields)._theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      pUVar3 = (__this->fields)._toggle;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        pUVar3 = (__this->fields)._toggle;
        if ((pUVar3 != (UnityEngine_UI_Toggle_o *)0x0) &&
           (__this_00 = (__this->fields)._theme,
           __this_00 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
          if (*(char *)&(pUVar3->fields).onValueChanged == '\0') {
            puVar7 = &"engravedBg";
          }
          else {
            puVar7 = &"primary";
          }
          UVar13.fields.b = 1.0;
          UVar13.fields.a = 1.0;
          UVar13.fields.r = 1.0;
          UVar13.fields.g = 1.0;
          UVar13 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                             (__this_00,(System_String_o *)*puVar7,UVar13,(MethodInfo *)0x0);
          uVar12 = UVar13.fields._8_8_;
          *(UnityEngine_Color_Fields *)&pIVar6[2].monitor = UVar13.fields;
          pUVar3 = (__this->fields)._toggle;
          if (pUVar3 != (UnityEngine_UI_Toggle_o *)0x0) {
            UVar4 = Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
                              (__this,(uint)*(byte *)&(pUVar3->fields).onValueChanged,method_00);
            pIVar6[4].klass = (Il2CppClass *)UVar4.fields;
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
            pDVar9 = (__this->fields)._switchTween;
            if (((char)bVar5 == '\0') || ((char)animate == '\0')) {
              if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
                DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
              }
              pUVar1 = (__this->fields)._switchTrack;
              if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                (*(pUVar1->klass->vtable)._23_set_color.methodPtr)
                          ((int)pIVar6[2].monitor,pIVar6[3].klass);
                pUVar2 = (__this->fields)._switchThumb;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchoredPosition
                            (pUVar2,(UnityEngine_Vector2_o)pIVar6[4].klass,(MethodInfo *)0x0);
                  return;
                }
              }
            }
            else {
              if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
                DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
              }
              pUVar1 = (__this->fields)._switchTrack;
              if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
                pvVar11 = (void *)(*(pUVar1->klass->vtable)._22_get_color.methodPtr)();
                pIVar6[1].monitor = pvVar11;
                *(int *)&pIVar6[2].klass = (int)uVar12;
                *(int *)((long)&pIVar6[2].klass + 4) = (int)((ulong)uVar12 >> 0x20);
                pUVar2 = (__this->fields)._switchThumb;
                if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
                  UVar4 = UnityEngine_RectTransform__get_anchoredPosition(pUVar2,(MethodInfo *)0x0);
                  pIVar6[3].monitor = (void *)UVar4.fields;
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  ppDVar10 = &(__this->fields)._switchTween;
                  pcVar8 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                  if (*pcVar8 == '\0') {
                    fStack_2c = 0.01;
                  }
                  else {
                    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                      il2cpp_init_class();
                      pcVar8 = *(char **)(TypeInfo_GisketchMotion + 0xb8);
                    }
                    fStack_2c = 0.01;
                    if (0.01 <= *(float *)(pcVar8 + 4) * 0.12) {
                      fStack_2c = *(float *)(pcVar8 + 4) * 0.12;
                    }
                  }
                  onVirtualUpdate =
                       (DG_Tweening_TweenCallback_float__o *)il2cpp_runtime_glue(TypeInfo_TweenCallback_float);
                  DG_Tweening_TweenCallback<float>___ctor();
                  t = DG_Tweening_DOVirtual__Float
                                (0.0,1.0,fStack_2c,onVirtualUpdate,(MethodInfo *)0x0);
                  pIVar6 = DG_Tweening_TweenSettingsExtensions__SetEase<object>
                                     ((Il2CppObject *)t,9,MethodInfo_Tweener_SetEase_Tweener);
                  pDVar9 = (DG_Tweening_Tween_o *)
                           DG_Tweening_TweenSettingsExtensions__SetUpdate<object>
                                     (pIVar6,1,MethodInfo_Tweener_SetUpdate_Tweener);
                  *ppDVar10 = pDVar9;
                  il2cpp_runtime_glue(ppDVar10);
                  pDVar9 = *ppDVar10;
                  if (*(int *)(TypeInfo_GisketchMotionDriver + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__Track(pDVar9,0,(MethodInfo *)0x0)
                  ;
                  return;
                }
              }
            }
          }
        }
        goto LAB_03b2fdba;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$SwitchThumbPosition
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, bool on, const MethodInfo* method);
// 0x3b300c0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__SwitchThumbPosition
          (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,bool_conflict on,
          MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_Vector2_o UVar2;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_RectTransform_o *pUVar4;
  float fVar5;
  float fVar6;
  float local_28;
  
  pUVar1 = (__this->fields)._switchTrack;
  if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
    pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
      UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._switchThumb;
      if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
        UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
        fVar5 = (UVar2.fields.y - UVar3.fields.y) * 0.5;
        fVar6 = 0.0;
        if (0.0 <= fVar5) {
          fVar6 = fVar5;
        }
        if ((char)on == '\0') {
LAB_03b30177:
          UVar2.fields.y = 0.0;
          UVar2.fields.x = fVar6;
          return (UnityEngine_Vector2_o)UVar2.fields;
        }
        pUVar1 = (__this->fields)._switchTrack;
        if (pUVar1 != (UnityEngine_UI_Image_o *)0x0) {
          pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                             ((UnityEngine_UI_Graphic_o *)pUVar1,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
            UVar2 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
            pUVar4 = (__this->fields)._switchThumb;
            if (pUVar4 != (UnityEngine_RectTransform_o *)0x0) {
              UVar3 = UnityEngine_RectTransform__get_sizeDelta(pUVar4,(MethodInfo *)0x0);
              local_28 = UVar2.fields.x;
              fVar6 = (local_28 - UVar3.fields.x) - fVar6;
              goto LAB_03b30177;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Actions.GisketchToggleFeedback$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__OnDestroy (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o* __this, const MethodInfo* method);
// 0x3b30190

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
// 0x3b301c0

void Gisketch_Aottg2UI_Actions_GisketchToggleFeedback___ctor
               (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this,MethodInfo *method)

{
  UnityEngine_EventSystems_UIBehaviour___ctor
            ((UnityEngine_EventSystems_UIBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


