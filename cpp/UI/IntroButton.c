// Type: UI.IntroButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IntroButton.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/IntroButton.cs
// --------------------------------

// UI.IntroButton$$Awake
// il2cpp: void UI_IntroButton__Awake (UI_IntroButton_o* __this, const MethodInfo* method);
// 0x4401b70

void UI_IntroButton__Awake(UI_IntroButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ColorBlock_o value;
  undefined1 auVar1 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  UI_IntroButton_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  Il2CppObject *pIVar9;
  UnityEngine_CanvasRenderer_o *__this_00;
  UnityEngine_UI_Graphic_o *pUVar10;
  System_String_o *pSVar11;
  UI_IntroButton_o *__this_01;
  UnityEngine_Object_o *__this_02;
  code *vtableDispatch;
  uint extraout_EDX;
  undefined8 uVar12;
  int state;
  System_String_o *pSVar13;
  long *plVar14;
  UnityEngine_UI_Button_o *__this_03;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auVar2 [64];
  
  if (g_data_057ae58a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorBlock);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Graphic_GetComponent_Graphic);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Settings");
    il2cpp_runtime_helper_023445d0(&"HoverImage");
    il2cpp_runtime_helper_023445d0(&"Label");
    il2cpp_runtime_helper_023445d0(&"Quit");
    il2cpp_runtime_helper_023445d0(&"Button");
    il2cpp_runtime_helper_023445d0(&"Profile");
    il2cpp_runtime_helper_023445d0(&"Intro");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae58a = '\x01';
  }
  state = 0;
  __this_01 = __this;
  pUVar7 = (UI_IntroButton_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar7 != (UI_IntroButton_o *)0x0) {
    pSVar11 = "HoverImage";
    pUVar8 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar7,"HoverImage",(MethodInfo *)0x0);
    state = (int)pSVar11;
    __this_01 = pUVar7;
    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
      pIVar9 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar8,MethodInfo_Image_GetComponent_Image);
      *(Il2CppObject **)&(__this->fields)._fadeTime = pIVar9;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._fadeTime);
      state = (int)pIVar9;
      __this_01 = *(UI_IntroButton_o **)&(__this->fields)._fadeTime;
      if (__this_01 != (UI_IntroButton_o *)0x0) {
        state = 0;
        __this_00 = UnityEngine_UI_Graphic__get_canvasRenderer
                              ((UnityEngine_UI_Graphic_o *)__this_01,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_CanvasRenderer_o *)0x0) {
          UnityEngine_CanvasRenderer__SetAlpha(__this_00,0.0,(MethodInfo *)0x0);
          UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,1,(MethodInfo *)0x0)
          ;
          state = 0;
          __this_01 = __this;
          pUVar7 = (UI_IntroButton_o *)
                   UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar7 != (UI_IntroButton_o *)0x0) {
            pSVar11 = "Label";
            pUVar8 = UnityEngine_Transform__Find
                               ((UnityEngine_Transform_o *)pUVar7,"Label",(MethodInfo *)0x0);
            state = (int)pSVar11;
            __this_01 = pUVar7;
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              pUVar10 = (UnityEngine_UI_Graphic_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pUVar8,MethodInfo_Graphic_GetComponent_Graphic);
              UnityEngine_UI_Selectable__set_targetGraphic
                        ((UnityEngine_UI_Selectable_o *)__this,pUVar10,(MethodInfo *)0x0);
              state = 0;
              __this_01 = __this;
              pUVar7 = (UI_IntroButton_o *)
                       UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar7 != (UI_IntroButton_o *)0x0) {
                state = 0;
                pSVar11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
                __this_01 = pUVar7;
                if (pSVar11 != (System_String_o *)0x0) {
                  pSVar13 = "Settings";
                  bVar6 = System_String__StartsWith(pSVar11,"Settings",(MethodInfo *)0x0);
                  state = (int)pSVar13;
                  if ((char)bVar6 == '\0') {
                    state = 0;
                    __this_01 = __this;
                    pUVar7 = (UI_IntroButton_o *)
                             UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                    if (pUVar7 != (UI_IntroButton_o *)0x0) {
                      state = 0;
                      pSVar11 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0)
                      ;
                      __this_01 = pUVar7;
                      if (pSVar11 != (System_String_o *)0x0) {
                        pSVar13 = "Quit";
                        bVar6 = System_String__StartsWith(pSVar11,"Quit",(MethodInfo *)0x0);
                        state = (int)pSVar13;
                        if ((char)bVar6 != '\0') goto label_04401de8;
                        state = 0;
                        __this_01 = __this;
                        pUVar7 = (UI_IntroButton_o *)
                                 UnityEngine_Component__get_gameObject
                                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                        if (pUVar7 != (UI_IntroButton_o *)0x0) {
                          state = 0;
                          pSVar11 = UnityEngine_Object__get_name
                                              ((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
                          __this_01 = pUVar7;
                          if (pSVar11 != (System_String_o *)0x0) {
                            pSVar13 = "Profile";
                            bVar6 = System_String__StartsWith(pSVar11,"Profile",(MethodInfo *)0x0);
                            state = (int)pSVar13;
                            if ((char)bVar6 != '\0') goto label_04401de8;
                            pUVar10 = (__this->fields).m_TargetGraphic;
                            __this_01 = (UI_IntroButton_o *)0x0;
                            if (pUVar10 != (UnityEngine_UI_Graphic_o *)0x0) {
                              pIVar9 = UnityEngine_Component__GetComponent_object_
                                                 ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
                              state = 0;
                              __this_01 = __this;
                              __this_02 = (UnityEngine_Object_o *)
                                          UnityEngine_Component__get_gameObject
                                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                              if (__this_02 != (UnityEngine_Object_o *)0x0) {
                                pSVar11 = UnityEngine_Object__get_name(__this_02,(MethodInfo *)0x0);
                                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                                  il2cpp_runtime_helper_02337ed0();
                                }
                                pSVar13 = "Intro";
                                __this_01 = "MainMenu";
                                pUVar7 = (UI_IntroButton_o *)
                                         UI_UIManager__GetLocale
                                                   ((System_String_o *)"MainMenu","Intro",pSVar11,
                                                    "","",(MethodInfo *)0x0);
                                state = (int)pSVar13;
                                goto joined_r0x0440205f;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else {
label_04401de8:
                    pUVar10 = (__this->fields).m_TargetGraphic;
                    __this_01 = (UI_IntroButton_o *)0x0;
                    if (pUVar10 != (UnityEngine_UI_Graphic_o *)0x0) {
                      pIVar9 = UnityEngine_Component__GetComponent_object_
                                         ((UnityEngine_Component_o *)pUVar10,MethodInfo_Text_GetComponent_Text);
                      state = 0;
                      __this_01 = __this;
                      pUVar7 = (UI_IntroButton_o *)
                               UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if (pUVar7 != (UI_IntroButton_o *)0x0) {
                        state = 0;
                        pSVar11 = UnityEngine_Object__get_name
                                            ((UnityEngine_Object_o *)pUVar7,(MethodInfo *)0x0);
                        __this_01 = pUVar7;
                        if (pSVar11 != (System_String_o *)0x0) {
                          __this_01 = (UI_IntroButton_o *)
                                      System_String__Replace_3af9030
                                                (pSVar11,"Button",
                                                 (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                                                 (MethodInfo *)0x0);
                          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          state = 0;
                          pUVar7 = (UI_IntroButton_o *)
                                   UI_UIManager__GetLocaleCommon
                                             ((System_String_o *)__this_01,(MethodInfo *)0x0);
joined_r0x0440205f:
                          if (pUVar7 != (UI_IntroButton_o *)0x0) {
                            state = 0;
                            pSVar11 = System_String__ToUpper((System_String_o *)pUVar7,(MethodInfo *)0x0);
                            __this_01 = pUVar7;
                            if (pIVar9 != (Il2CppObject *)0x0) {
                              (*pIVar9->klass->vtable[0x4b].methodPtr)
                                        (pIVar9,pSVar11,pIVar9->klass->vtable[0x4b].method);
                              if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
                                il2cpp_runtime_helper_02337ed0();
                              }
                              value.fields.m_FadeDuration = (float)*(undefined4 *)&(__this->fields).m_OnClick;
                              value.fields.m_ColorMultiplier = 1.0;
                              auVar2 = ZEXT4864(CONCAT840(0x3f8000003f000000,
                                                          CONCAT832(0x3f0000003f000000,
                                                                    CONCAT824(0x3f8000003f800000,
                                                                              CONCAT816(0x3f8000003f800000,
                                                                                        CONCAT88(
                                                       0x3f8000003e4ccccd,0x3e4ccccd3e4ccccd))))));
                              value.fields.m_DisabledColor.fields.r = 0.5;
                              value.fields.m_DisabledColor.fields.g = 0.5;
                              auVar1 = auVar2._0_16_;
                              auVar3 = auVar2._16_16_;
                              auVar4 = auVar2._32_16_;
                              auVar5 = auVar2._48_16_;
                              value.fields.m_NormalColor.fields.r = (float)auVar1._0_4_;
                              value.fields.m_NormalColor.fields.g = (float)auVar1._4_4_;
                              value.fields.m_NormalColor.fields.b = (float)auVar1._8_4_;
                              value.fields.m_NormalColor.fields.a = (float)auVar1._12_4_;
                              value.fields.m_HighlightedColor.fields.r = (float)auVar3._0_4_;
                              value.fields.m_HighlightedColor.fields.g = (float)auVar3._4_4_;
                              value.fields.m_HighlightedColor.fields.b = (float)auVar3._8_4_;
                              value.fields.m_HighlightedColor.fields.a = (float)auVar3._12_4_;
                              value.fields.m_PressedColor.fields.r = (float)auVar4._0_4_;
                              value.fields.m_PressedColor.fields.g = (float)auVar4._4_4_;
                              value.fields.m_PressedColor.fields.b = (float)auVar4._8_4_;
                              value.fields.m_PressedColor.fields.a = (float)auVar4._12_4_;
                              value.fields.m_SelectedColor.fields.r = (float)auVar5._0_4_;
                              value.fields.m_SelectedColor.fields.g = (float)auVar5._4_4_;
                              value.fields.m_SelectedColor.fields.b = (float)auVar5._8_4_;
                              value.fields.m_SelectedColor.fields.a = (float)auVar5._12_4_;
                              value.fields.m_DisabledColor.fields.b = 0.5;
                              value.fields.m_DisabledColor.fields.a = 1.0;
                              UnityEngine_UI_Selectable__set_colors
                                        ((UnityEngine_UI_Selectable_o *)__this,value,(MethodInfo *)0x0);
                              UnityEngine_UI_Selectable__set_navigation
                                        ((UnityEngine_UI_Selectable_o *)__this,
                                         (UnityEngine_UI_Navigation_o)ZEXT1640(ZEXT816(0)),(MethodInfo *)0x0);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae58b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae58b = '\x01';
  }
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this_01,state,extraout_EDX & 0xff,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (state == 1) goto label_044020cc;
label_04402105:
    if (1 < state - 1U) {
      if (state != 0) {
        return;
      }
      plVar14 = *(long **)&(__this_01->fields)._fadeTime;
      if (plVar14 == (long *)0x0) goto label_0440217a;
      uVar16 = *(undefined4 *)&(__this_01->fields).m_OnClick;
      vtableDispatch = *(code **)(*plVar14 + 0x448);
      uVar12 = *(undefined8 *)(*plVar14 + 0x450);
      uVar15 = 0;
      goto label_0440213b;
    }
    plVar14 = *(long **)&(__this_01->fields)._fadeTime;
  }
  else {
    if (state != 1) goto label_04402105;
label_044020cc:
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__PlaySound(2,(MethodInfo *)0x0);
    plVar14 = *(long **)&(__this_01->fields)._fadeTime;
  }
  if (plVar14 == (long *)0x0) {
label_0440217a:
    __this_03 = (UnityEngine_UI_Button_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)&(__this_03->fields).m_OnClick = 0x3dcccccd;
    UnityEngine_UI_Button___ctor(__this_03,(MethodInfo *)0x0);
    return;
  }
  uVar16 = *(undefined4 *)&(__this_01->fields).m_OnClick;
  vtableDispatch = *(code **)(*plVar14 + 0x448);
  uVar12 = *(undefined8 *)(*plVar14 + 0x450);
  uVar15 = 0x3f800000;
label_0440213b:
  (*vtableDispatch)(uVar15,uVar16,plVar14,1,uVar12,vtableDispatch);
  return;
}


// UI.IntroButton$$DoStateTransition
// il2cpp: void UI_IntroButton__DoStateTransition (UI_IntroButton_o* __this, int32_t state, bool instant, const MethodInfo* method);
// 0x4402070

void UI_IntroButton__DoStateTransition
               (UI_IntroButton_o *__this,int32_t state,bool_conflict instant,MethodInfo *method)

{
  code *vtableDispatch;
  undefined8 uVar1;
  long *plVar2;
  UnityEngine_UI_Button_o *__this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (g_data_057ae58b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_MainMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057ae58b = '\x01';
  }
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this,state,instant & 0xff,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (state != 1) goto label_04402105;
label_044020cc:
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UI_UIManager__PlaySound(2,(MethodInfo *)0x0);
    plVar2 = *(long **)&(__this->fields)._fadeTime;
  }
  else {
    if (state == 1) goto label_044020cc;
label_04402105:
    if (1 < state - 1U) {
      if (state != 0) {
        return;
      }
      plVar2 = *(long **)&(__this->fields)._fadeTime;
      if (plVar2 == (long *)0x0) goto label_0440217a;
      uVar4 = *(undefined4 *)&(__this->fields).m_OnClick;
      vtableDispatch = *(code **)(*plVar2 + 0x448);
      uVar1 = *(undefined8 *)(*plVar2 + 0x450);
      uVar3 = 0;
      goto label_0440213b;
    }
    plVar2 = *(long **)&(__this->fields)._fadeTime;
  }
  if (plVar2 == (long *)0x0) {
label_0440217a:
    __this_00 = (UnityEngine_UI_Button_o *)0x0;
    il2cpp_runtime_helper_022b2c90();
    *(undefined4 *)&(__this_00->fields).m_OnClick = 0x3dcccccd;
    UnityEngine_UI_Button___ctor(__this_00,(MethodInfo *)0x0);
    return;
  }
  uVar4 = *(undefined4 *)&(__this->fields).m_OnClick;
  vtableDispatch = *(code **)(*plVar2 + 0x448);
  uVar1 = *(undefined8 *)(*plVar2 + 0x450);
  uVar3 = 0x3f800000;
label_0440213b:
  (*vtableDispatch)(uVar3,uVar4,plVar2,1,uVar1,vtableDispatch);
  return;
}


// UI.IntroButton$$.ctor
// il2cpp: void UI_IntroButton___ctor (UI_IntroButton_o* __this, const MethodInfo* method);
// 0x4402180

void UI_IntroButton___ctor(UI_IntroButton_o *__this,MethodInfo *method)

{
  *(undefined4 *)&(__this->fields).m_OnClick = 0x3dcccccd;
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


