// Type: UI.IntroButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/IntroButton.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/IntroButton.cs  [CHANGED since prior version]
// --------------------------------

// UI.IntroButton$$Awake
// il2cpp: void UI_IntroButton__Awake (UI_IntroButton_o* __this, const MethodInfo* method);
// 0x40ed940

void UI_IntroButton__Awake(UI_IntroButton_o *__this,MethodInfo *method)

{
  UnityEngine_UI_ColorBlock_o value;
  undefined1 auVar1 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool_conflict bVar6;
  UnityEngine_Transform_o *pUVar7;
  Il2CppObject *pIVar8;
  UnityEngine_CanvasRenderer_o *__this_00;
  UnityEngine_UI_Graphic_o *pUVar9;
  UnityEngine_Object_o *pUVar10;
  System_String_o *pSVar11;
  undefined1 auVar2 [64];
  
  if (DAT_057047ef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ColorBlock);
    il2cpp_init_method_metadata(&MethodInfo_Graphic_GetComponent_Graphic);
    il2cpp_init_method_metadata(&MethodInfo_Image_GetComponent_Image);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"Settings");
    il2cpp_init_method_metadata(&"HoverImage");
    il2cpp_init_method_metadata(&"Label");
    il2cpp_init_method_metadata(&"Quit");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"Profile");
    il2cpp_init_method_metadata(&"Intro");
    il2cpp_init_method_metadata(&"");
    DAT_057047ef = '\x01';
  }
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar7 = UnityEngine_Transform__Find(pUVar7,"HoverImage",(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_040ede35;
  pIVar8 = UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar7,MethodInfo_Image_GetComponent_Image);
  *(Il2CppObject **)&(__this->fields)._fadeTime = pIVar8;
  il2cpp_runtime_glue(&(__this->fields)._fadeTime);
  pUVar9 = *(UnityEngine_UI_Graphic_o **)&(__this->fields)._fadeTime;
  if ((pUVar9 == (UnityEngine_UI_Graphic_o *)0x0) ||
     (__this_00 = UnityEngine_UI_Graphic__get_canvasRenderer(pUVar9,(MethodInfo *)0x0),
     __this_00 == (UnityEngine_CanvasRenderer_o *)0x0)) goto LAB_040ede35;
  UnityEngine_CanvasRenderer__SetAlpha(__this_00,0.0,(MethodInfo *)0x0);
  UnityEngine_UI_Selectable__set_transition
            ((UnityEngine_UI_Selectable_o *)__this,1,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar7 = UnityEngine_Transform__Find(pUVar7,"Label",(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto LAB_040ede35;
  pUVar9 = (UnityEngine_UI_Graphic_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)pUVar7,MethodInfo_Graphic_GetComponent_Graphic);
  UnityEngine_UI_Selectable__set_targetGraphic
            ((UnityEngine_UI_Selectable_o *)__this,pUVar9,(MethodInfo *)0x0);
  pUVar10 = (UnityEngine_Object_o *)
            UnityEngine_Component__get_gameObject
                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar10 == (UnityEngine_Object_o *)0x0) ||
     (pSVar11 = UnityEngine_Object__get_name(pUVar10,(MethodInfo *)0x0),
     pSVar11 == (System_String_o *)0x0)) goto LAB_040ede35;
  bVar6 = System_String__StartsWith(pSVar11,"Settings",(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    pUVar10 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar10 == (UnityEngine_Object_o *)0x0) ||
       (pSVar11 = UnityEngine_Object__get_name(pUVar10,(MethodInfo *)0x0),
       pSVar11 == (System_String_o *)0x0)) goto LAB_040ede35;
    bVar6 = System_String__StartsWith(pSVar11,"Quit",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') goto LAB_040edbb8;
    pUVar10 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar10 == (UnityEngine_Object_o *)0x0) ||
       (pSVar11 = UnityEngine_Object__get_name(pUVar10,(MethodInfo *)0x0),
       pSVar11 == (System_String_o *)0x0)) goto LAB_040ede35;
    bVar6 = System_String__StartsWith(pSVar11,"Profile",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') goto LAB_040edbb8;
    pUVar9 = (__this->fields).m_TargetGraphic;
    if (pUVar9 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_040ede35;
    pIVar8 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar9,MethodInfo_Text_GetComponent_Text);
    pUVar10 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Object_o *)0x0) goto LAB_040ede35;
    pSVar11 = UnityEngine_Object__get_name(pUVar10,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar11 = UI_UIManager__GetLocale
                        ("MainMenu","Intro",pSVar11,"","",
                         (MethodInfo *)0x0);
  }
  else {
LAB_040edbb8:
    pUVar9 = (__this->fields).m_TargetGraphic;
    if (pUVar9 == (UnityEngine_UI_Graphic_o *)0x0) goto LAB_040ede35;
    pIVar8 = UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)pUVar9,MethodInfo_Text_GetComponent_Text);
    pUVar10 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar10 == (UnityEngine_Object_o *)0x0) ||
       (pSVar11 = UnityEngine_Object__get_name(pUVar10,(MethodInfo *)0x0),
       pSVar11 == (System_String_o *)0x0)) goto LAB_040ede35;
    pSVar11 = System_String__Replace
                        (pSVar11,"Button",
                         (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0
                        );
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar11 = UI_UIManager__GetLocaleCommon(pSVar11,(MethodInfo *)0x0);
  }
  if ((pSVar11 != (System_String_o *)0x0) &&
     (pSVar11 = System_String__ToUpper(pSVar11,(MethodInfo *)0x0), pIVar8 != (Il2CppObject *)0x0)) {
    (*pIVar8->klass->vtable[0x4b].methodPtr)(pIVar8,pSVar11,pIVar8->klass->vtable[0x4b].method);
    if (*(int *)(TypeInfo_ColorBlock + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value.fields.m_FadeDuration = (float)*(undefined4 *)&(__this->fields).m_OnClick;
    value.fields.m_ColorMultiplier = 1.0;
    auVar2 = ZEXT4864(CONCAT840(0x3f8000003f000000,
                                CONCAT832(0x3f0000003f000000,
                                          CONCAT824(0x3f8000003f800000,
                                                    CONCAT816(0x3f8000003f800000,
                                                              CONCAT88(0x3f8000003e4ccccd,
                                                                       0x3e4ccccd3e4ccccd))))));
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
LAB_040ede35:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.IntroButton$$DoStateTransition
// il2cpp: void UI_IntroButton__DoStateTransition (UI_IntroButton_o* __this, int32_t state, bool instant, const MethodInfo* method);
// 0x40ede40

void UI_IntroButton__DoStateTransition
               (UI_IntroButton_o *__this,int32_t state,bool_conflict instant,MethodInfo *method)

{
  code *vtable_dispatch;
  undefined8 uVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_057047f0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MainMenu);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_057047f0 = '\x01';
  }
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this,state,instant & 0xff,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (state != 1) goto LAB_040eded5;
LAB_040ede9c:
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UI_UIManager__PlaySound(2,(MethodInfo *)0x0);
    plVar2 = *(long **)&(__this->fields)._fadeTime;
  }
  else {
    if (state == 1) goto LAB_040ede9c;
LAB_040eded5:
    if (1 < state - 1U) {
      if (state != 0) {
        return;
      }
      plVar2 = *(long **)&(__this->fields)._fadeTime;
      if (plVar2 == (long *)0x0) goto LAB_040edf4a;
      uVar4 = *(undefined4 *)&(__this->fields).m_OnClick;
      vtable_dispatch = *(code **)(*plVar2 + 0x448);
      uVar1 = *(undefined8 *)(*plVar2 + 0x450);
      uVar3 = 0;
      goto LAB_040edf0b;
    }
    plVar2 = *(long **)&(__this->fields)._fadeTime;
  }
  if (plVar2 == (long *)0x0) {
LAB_040edf4a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar4 = *(undefined4 *)&(__this->fields).m_OnClick;
  vtable_dispatch = *(code **)(*plVar2 + 0x448);
  uVar1 = *(undefined8 *)(*plVar2 + 0x450);
  uVar3 = 0x3f800000;
LAB_040edf0b:
  (*vtable_dispatch)(uVar3,uVar4,plVar2,1,uVar1,vtable_dispatch);
  return;
}


// UI.IntroButton$$.ctor
// il2cpp: void UI_IntroButton___ctor (UI_IntroButton_o* __this, const MethodInfo* method);
// 0x40edf50

void UI_IntroButton___ctor(UI_IntroButton_o *__this,MethodInfo *method)

{
  *(undefined4 *)&(__this->fields).m_OnClick = 0x3dcccccd;
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


