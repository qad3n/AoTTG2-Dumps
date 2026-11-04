// Type: UI.IntroButton
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/IntroButton.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/IntroButton.cs
// --------------------------------

// UI.IntroButton$$Awake
// il2cpp: void UI_IntroButton__Awake (UI_IntroButton_o* __this, const MethodInfo* method);
// 0x18228a280

void UI_IntroButton__Awake(UI_IntroButton_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_UI_Image_o *pUVar3;
  UnityEngine_CanvasRenderer_o *__this_00;
  UnityEngine_UI_Graphic_o *pUVar4;
  UnityEngine_Object_o *pUVar5;
  System_String_o *pSVar6;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_UI_Navigation_Fields local_a8;
  UnityEngine_UI_ColorBlock_o local_78;
  
  if (Il2CppMethodInitialized_18434741b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_ColorBlock);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Graphic);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Settings");
    il2cpp_codegen_initialize_runtime_metadata(&"HoverImage");
    il2cpp_codegen_initialize_runtime_metadata(&"Label");
    il2cpp_codegen_initialize_runtime_metadata(&"Quit");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"Profile");
    il2cpp_codegen_initialize_runtime_metadata(&"Intro");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434741b = '\x01';
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_18228a700;
  pUVar2 = UnityEngine_Transform__Find(pUVar2,"HoverImage",(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_18228a700;
  pUVar3 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar2,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
  (__this->fields)._hoverImage = pUVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._hoverImage,pUVar3);
  pUVar3 = (__this->fields)._hoverImage;
  if (pUVar3 == (UnityEngine_UI_Image_o *)0x0) goto label_18228a700;
  __this_00 = UnityEngine_UI_Graphic__get_canvasRenderer((UnityEngine_UI_Graphic_o *)pUVar3,(MethodInfo *)0x0)
  ;
  if (__this_00 == (UnityEngine_CanvasRenderer_o *)0x0) goto label_18228a700;
  UnityEngine_CanvasRenderer__SetAlpha(__this_00,0.0,(MethodInfo *)0x0);
  UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,1,(MethodInfo *)0x0);
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_18228a700;
  pUVar2 = UnityEngine_Transform__Find(pUVar2,"Label",(MethodInfo *)0x0);
  if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_18228a700;
  pUVar4 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)pUVar2,
                      (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Graphic);
  UnityEngine_UI_Selectable__set_targetGraphic((UnityEngine_UI_Selectable_o *)__this,pUVar4,(MethodInfo *)0x0)
  ;
  pUVar5 = (UnityEngine_Object_o *)
           UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Object_o *)0x0) goto label_18228a700;
  pSVar6 = UnityEngine_Object__get_name(pUVar5,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_o *)0x0) goto label_18228a700;
  bVar1 = System_String__StartsWith(pSVar6,"Settings",(MethodInfo *)0x0);
  if (bVar1) {
label_18228a578:
    pUVar4 = (__this->fields).m_TargetGraphic;
    if (pUVar4 == (UnityEngine_UI_Graphic_o *)0x0) goto label_18228a700;
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar4,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    pUVar5 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Object_o *)0x0) goto label_18228a700;
    pSVar6 = UnityEngine_Object__get_name(pUVar5,(MethodInfo *)0x0);
    if (pSVar6 == (System_String_o *)0x0) goto label_18228a700;
    pSVar6 = System_String__Replace_1970e80
                       (pSVar6,"Button",
                        (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar6 = UI_UIManager__GetLocaleCommon(pSVar6,(MethodInfo *)0x0);
  }
  else {
    pUVar5 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Object_o *)0x0) goto label_18228a700;
    pSVar6 = UnityEngine_Object__get_name(pUVar5,(MethodInfo *)0x0);
    if (pSVar6 == (System_String_o *)0x0) goto label_18228a700;
    bVar1 = System_String__StartsWith(pSVar6,"Quit",(MethodInfo *)0x0);
    if (bVar1) goto label_18228a578;
    pUVar5 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Object_o *)0x0) goto label_18228a700;
    pSVar6 = UnityEngine_Object__get_name(pUVar5,(MethodInfo *)0x0);
    if (pSVar6 == (System_String_o *)0x0) goto label_18228a700;
    bVar1 = System_String__StartsWith(pSVar6,"Profile",(MethodInfo *)0x0);
    if (bVar1) goto label_18228a578;
    pUVar4 = (__this->fields).m_TargetGraphic;
    if (pUVar4 == (UnityEngine_UI_Graphic_o *)0x0) goto label_18228a700;
    pUVar7 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar4,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
    pUVar5 = (UnityEngine_Object_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pUVar5 == (UnityEngine_Object_o *)0x0) goto label_18228a700;
    pSVar6 = UnityEngine_Object__get_name(pUVar5,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar6 = UI_UIManager__GetLocale
                       ("MainMenu","Intro",pSVar6,"",
                        "",(MethodInfo *)0x0);
  }
  if (pSVar6 != (System_String_o *)0x0) {
    pSVar6 = System_String__ToUpper(pSVar6,(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar7->klass->vtable)._75_set_text.methodPtr)
                (pUVar7,pSVar6,(pUVar7->klass->vtable)._75_set_text.method);
      if ((TypeInfo_UnityEngine_UI_ColorBlock->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_ColorBlock);
      }
      local_78.fields.m_FadeDuration = (__this->fields)._fadeTime;
      local_78.fields.m_ColorMultiplier = 1.0;
      local_78.fields.m_NormalColor.fields.r = 0.2;
      local_78.fields.m_NormalColor.fields.g = 0.2;
      local_78.fields.m_NormalColor.fields.b = 0.2;
      local_78.fields.m_NormalColor.fields.a = 1.0;
      local_78.fields.m_HighlightedColor.fields.r = 1.0;
      local_78.fields.m_HighlightedColor.fields.g = 1.0;
      local_78.fields.m_HighlightedColor.fields.b = 1.0;
      local_78.fields.m_HighlightedColor.fields.a = 1.0;
      local_78.fields.m_PressedColor.fields.r = 0.5;
      local_78.fields.m_PressedColor.fields.g = 0.5;
      local_78.fields.m_PressedColor.fields.b = 0.5;
      local_78.fields.m_PressedColor.fields.a = 1.0;
      local_78.fields.m_SelectedColor.fields.r = 0.0;
      local_78.fields.m_SelectedColor.fields.g = 0.0;
      local_78.fields.m_SelectedColor.fields.b = 0.0;
      local_78.fields.m_SelectedColor.fields.a = 0.0;
      local_78.fields.m_DisabledColor.fields.r = 0.5;
      local_78.fields.m_DisabledColor.fields.g = 0.5;
      local_78.fields.m_DisabledColor.fields.b = 0.5;
      local_78.fields.m_DisabledColor.fields.a = 1.0;
      UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)__this,&local_78,(MethodInfo *)0x0)
      ;
      local_a8.m_Mode = 0;
      local_a8.m_WrapAround = false;
      local_a8._5_3_ = 0;
      local_a8.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
      local_a8.m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
      local_a8.m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
      local_a8.m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
      UnityEngine_UI_Selectable__set_navigation
                ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Navigation_o *)&local_a8,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_18228a700:
  ThrowNullReferenceException();
}


// UI.IntroButton$$DoStateTransition
// il2cpp: void UI_IntroButton__DoStateTransition (UI_IntroButton_o* __this, int32_t state, bool instant, const MethodInfo* method);
// 0x18228a710

void UI_IntroButton__DoStateTransition(UI_IntroButton_o *__this,int32_t state,bool instant,MethodInfo *method)

{
  UnityEngine_UI_Image_o *pUVar1;
  UnityEngine_UI_Image_c *pUVar2;
  float fVar3;
  float fVar4;
  MethodInfo *pMVar5;
  
  if (Il2CppMethodInitialized_18434741c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MainMenu);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    Il2CppMethodInitialized_18434741c = '\x01';
  }
  UnityEngine_UI_Selectable__DoStateTransition
            ((UnityEngine_UI_Selectable_o *)__this,state,instant,(MethodInfo *)0x0);
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  if (state == 1) {
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    UI_UIManager__PlaySound(2,(MethodInfo *)0x0);
  }
  else if (state != 2) {
    if (state != 0) {
      return;
    }
    pUVar1 = (__this->fields)._hoverImage;
    if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) goto label_18228a814;
    pUVar2 = pUVar1->klass;
    fVar4 = (__this->fields)._fadeTime;
    fVar3 = 0.0;
    pMVar5 = (pUVar2->vtable)._49_CrossFadeAlpha.method;
    goto label_18228a7ca;
  }
  pUVar1 = (__this->fields)._hoverImage;
  if (pUVar1 == (UnityEngine_UI_Image_o *)0x0) {
label_18228a814:
    ThrowNullReferenceException();
  }
  pUVar2 = pUVar1->klass;
  fVar4 = (__this->fields)._fadeTime;
  fVar3 = 1.0;
  pMVar5 = (pUVar2->vtable)._49_CrossFadeAlpha.method;
label_18228a7ca:
  (*(pUVar2->vtable)._49_CrossFadeAlpha.methodPtr)(pUVar1,fVar3,fVar4,true,pMVar5);
  return;
}


// UI.IntroButton$$.ctor
// il2cpp: void UI_IntroButton___ctor (UI_IntroButton_o* __this, const MethodInfo* method);
// 0x18228a820

void UI_IntroButton___ctor(UI_IntroButton_o *__this,MethodInfo *method)

{
  (__this->fields)._fadeTime = 0.1;
  UnityEngine_UI_Button___ctor((UnityEngine_UI_Button_o *)__this,(MethodInfo *)0x0);
  return;
}


