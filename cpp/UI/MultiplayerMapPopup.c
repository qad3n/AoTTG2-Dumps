// Type: UI.MultiplayerMapPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerMapPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerMapPopup.cs
// --------------------------------

// UI.MultiplayerMapPopup.<>c__DisplayClass20_0$$.ctor
// il2cpp: void UI_MultiplayerMapPopup___c__DisplayClass20_0___ctor (UI_MultiplayerMapPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MultiplayerMapPopup___c__DisplayClass20_0___ctor(UI_MultiplayerMapPopup___c__DisplayClass20_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerMapPopup.<>c__DisplayClass20_0$$<Setup>b__3
// il2cpp: void UI_MultiplayerMapPopup___c__DisplayClass20_0___Setup_b__3 (UI_MultiplayerMapPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18229cbf0

void UI_MultiplayerMapPopup___c__DisplayClass20_0___Setup_b__3
               (UI_MultiplayerMapPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UI_MultiplayerMapPopup_o *__this_01;
  System_String_o *name;
  
  __this_00 = (__this->fields).button;
  if (__this_00 != (UnityEngine_UI_Button_o *)0x0) {
    __this_01 = (__this->fields).__4__this;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UI_MultiplayerMapPopup_o *)0x0) {
      UI_MultiplayerMapPopup__OnButtonClick(__this_01,name,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerMapPopup$$get_ThemePanel
// il2cpp: System_String_o* UI_MultiplayerMapPopup__get_ThemePanel (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x1822927a0

System_String_o * UI_MultiplayerMapPopup__get_ThemePanel(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434744d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerMapPopup");
    Il2CppMethodInitialized_18434744d = '\x01';
  }
  return "MultiplayerMapPopup";
}


// UI.MultiplayerMapPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerMapPopup__get_HorizontalPadding (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_MultiplayerMapPopup__get_HorizontalPadding(UI_MultiplayerMapPopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.MultiplayerMapPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerMapPopup__get_VerticalPadding (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x18059b2e0

int32_t
UI_MultiplayerMapPopup__get_VerticalPadding(UI_MultiplayerMapPopup_o* __this, MethodInfo* method)

{
  return (Unity_Collections_AllocatorManager_TryFunction_o *)0x0;
}


// UI.MultiplayerMapPopup$$get_VerticalSpacing
// il2cpp: float UI_MultiplayerMapPopup__get_VerticalSpacing (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x180560480

float
UI_MultiplayerMapPopup__get_VerticalSpacing(UI_MultiplayerMapPopup_o* __this, MethodInfo* method)

{
  return 0.0;
}


// UI.MultiplayerMapPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerMapPopup__get_Title (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x1822927d0

System_String_o * UI_MultiplayerMapPopup__get_Title(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434744e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerMapPopup");
    Il2CppMethodInitialized_18434744e = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","MultiplayerMapPopup","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerMapPopup$$get_HasPremadeContent
// il2cpp: bool UI_MultiplayerMapPopup__get_HasPremadeContent (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MultiplayerMapPopup__get_HasPremadeContent(UI_MultiplayerMapPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MultiplayerMapPopup$$get_Width
// il2cpp: float UI_MultiplayerMapPopup__get_Width (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x18225ac00

float UI_MultiplayerMapPopup__get_Width(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  return 900.0;
}


// UI.MultiplayerMapPopup$$get_Height
// il2cpp: float UI_MultiplayerMapPopup__get_Height (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x182278770

float
UI_MultiplayerMapPopup__get_Height(UI_MultiplayerMapPopup_o* __this, MethodInfo* method)

{
  return 560.0;
}


// UI.MultiplayerMapPopup$$get_UseSound
// il2cpp: bool UI_MultiplayerMapPopup__get_UseSound (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MultiplayerMapPopup__get_UseSound(UI_MultiplayerMapPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MultiplayerMapPopup$$Setup
// il2cpp: void UI_MultiplayerMapPopup__Setup (UI_MultiplayerMapPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822920b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822922e3: mov edi, r12d
// asm:   0x1822922e6: mov eax, r12d
// asm:   0x1822922e9: nop dword ptr [rax]

void UI_MultiplayerMapPopup__Setup(UI_MultiplayerMapPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this_00;
  System_String_o *category;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *__this_02;
  System_Object_array *pSVar3;
  UI_MultiplayerMapPopup___c__DisplayClass20_0_o *object;
  UnityEngine_Events_UnityAction_o *pUVar4;
  UnityEngine_UI_Button_o *pUVar5;
  UnityEngine_UI_ColorBlock_o *pUVar6;
  UnityEngine_UI_Text_o *pUVar7;
  UnityEngine_Color_o *pUVar8;
  UnityEngine_UI_Image_o *pUVar9;
  uint uVar10;
  UnityEngine_Color_o local_108;
  UnityEngine_Color_o local_f8;
  UnityEngine_UI_ColorBlock_o local_e8;
  UnityEngine_UI_ColorBlock_o local_88;
  
  if (Il2CppMethodInitialized_18434744f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerMapPopup_Setup_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerMapPopup_Setup_b__20_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerMapPopup_Setup_b__20_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MultiplayerMapPopup_c__DisplayClass20_0_Setup_b__3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MultiplayerMapPopup_c__DisplayClass20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"TextColor");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"DefaultButton");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerMap");
    il2cpp_codegen_initialize_runtime_metadata(&"MapColor");
    il2cpp_codegen_initialize_runtime_metadata(&"ServerButton");
    il2cpp_codegen_initialize_runtime_metadata(&"LAN");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerMapPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"MainBody");
    Il2CppMethodInitialized_18434744f = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  uVar10 = 0;
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pUVar2 = (__this->fields).SinglePanel;
  if ((((pUVar2 != (UnityEngine_Transform_o *)0x0) &&
       (pUVar2 = UnityEngine_Transform__Find(pUVar2,"MultiplayerMap",(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) &&
      (__this_02 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
      __this_02 != (UnityEngine_GameObject_o *)0x0)) &&
     (pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                         (__this_02,
                          (MethodInfo_6F5810 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Button),
     pSVar3 != (System_Object_array *)0x0)) {
    for (; category = "MainMenu", pSVar1 = "MultiplayerMapPopup",
        (int)uVar10 < (int)pSVar3->max_length; uVar10 = uVar10 + 1) {
      object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MultiplayerMapPopup_c__DisplayClass20_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_MultiplayerMapPopup___c__DisplayClass20_0_o *)0x0) goto label_1822926ce;
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      if ((uint)pSVar3->max_length <= uVar10) {
        ThrowIndexOutOfRangeException();
      }
      pUVar5 = (UnityEngine_UI_Button_o *)pSVar3->m_Items[(int)uVar10];
      (object->fields).button = pUVar5;
      Il2CppCodeGenWriteBarrier(&(object->fields).button,pUVar5);
      pUVar5 = (object->fields).button;
      if (pUVar5 == (UnityEngine_UI_Button_o *)0x0) goto label_1822926ce;
      __this_00 = (UnityEngine_Events_UnityEvent_o *)(pUVar5->fields).m_OnClick;
      pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_MultiplayerMapPopup_c__DisplayClass20_0_Setup_b__3,(MethodInfo *)0x0)
      ;
      if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_1822926ce;
      UnityEngine_Events_UnityEvent__AddListener(__this_00,pUVar4,(MethodInfo *)0x0);
      pUVar5 = (object->fields).button;
      if ((pUVar5 == (UnityEngine_UI_Button_o *)0x0) ||
         (pUVar5 = UnityEngine_Component__GetComponent_object_
                             ((UnityEngine_Component_o *)pUVar5,
                              (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Button),
         __this_01 == (UI_ElementStyle_o *)0x0)) goto label_1822926ce;
      pSVar1 = (__this_01->fields).ThemePanel;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar6 = UI_UIManager__GetThemeColorBlock
                         (&local_88,pSVar1,"DefaultButton","","DefaultPanel",
                          (MethodInfo *)0x0);
      if (pUVar5 == (UnityEngine_UI_Button_o *)0x0) goto label_1822926ce;
      local_e8.fields.m_NormalColor.fields.r = (pUVar6->fields).m_NormalColor.fields.r;
      local_e8.fields.m_NormalColor.fields.g = (pUVar6->fields).m_NormalColor.fields.g;
      local_e8.fields.m_NormalColor.fields.b = (pUVar6->fields).m_NormalColor.fields.b;
      local_e8.fields.m_NormalColor.fields.a = (pUVar6->fields).m_NormalColor.fields.a;
      local_e8.fields.m_HighlightedColor.fields.r = (pUVar6->fields).m_HighlightedColor.fields.r;
      local_e8.fields.m_HighlightedColor.fields.g = (pUVar6->fields).m_HighlightedColor.fields.g;
      local_e8.fields.m_HighlightedColor.fields.b = (pUVar6->fields).m_HighlightedColor.fields.b;
      local_e8.fields.m_HighlightedColor.fields.a = (pUVar6->fields).m_HighlightedColor.fields.a;
      local_e8.fields.m_PressedColor.fields.r = (pUVar6->fields).m_PressedColor.fields.r;
      local_e8.fields.m_PressedColor.fields.g = (pUVar6->fields).m_PressedColor.fields.g;
      local_e8.fields.m_PressedColor.fields.b = (pUVar6->fields).m_PressedColor.fields.b;
      local_e8.fields.m_PressedColor.fields.a = (pUVar6->fields).m_PressedColor.fields.a;
      local_e8.fields.m_SelectedColor.fields.r = (pUVar6->fields).m_SelectedColor.fields.r;
      local_e8.fields.m_SelectedColor.fields.g = (pUVar6->fields).m_SelectedColor.fields.g;
      local_e8.fields.m_SelectedColor.fields.b = (pUVar6->fields).m_SelectedColor.fields.b;
      local_e8.fields.m_SelectedColor.fields.a = (pUVar6->fields).m_SelectedColor.fields.a;
      local_e8.fields.m_DisabledColor.fields.r = (pUVar6->fields).m_DisabledColor.fields.r;
      local_e8.fields.m_DisabledColor.fields.g = (pUVar6->fields).m_DisabledColor.fields.g;
      local_e8.fields.m_DisabledColor.fields.b = (pUVar6->fields).m_DisabledColor.fields.b;
      local_e8.fields.m_DisabledColor.fields.a = (pUVar6->fields).m_DisabledColor.fields.a;
      local_e8.fields.m_ColorMultiplier = (pUVar6->fields).m_ColorMultiplier;
      local_e8.fields.m_FadeDuration = (pUVar6->fields).m_FadeDuration;
      UnityEngine_UI_Selectable__set_colors((UnityEngine_UI_Selectable_o *)pUVar5,&local_e8,(MethodInfo *)0x0)
      ;
      pUVar5 = (object->fields).button;
      if (((pUVar5 == (UnityEngine_UI_Button_o *)0x0) ||
          (pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
          pUVar2 == (UnityEngine_Transform_o *)0x0)) ||
         (pUVar2 = UnityEngine_Transform__Find(pUVar2,"Text",(MethodInfo *)0x0),
         pUVar2 == (UnityEngine_Transform_o *)0x0)) goto label_1822926ce;
      pUVar7 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar2,
                          (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Text);
      pUVar8 = UI_UIManager__GetThemeColor
                         (&local_f8,(__this_01->fields).ThemePanel,"DefaultButton","TextColor"
                          ,"DefaultPanel",(MethodInfo *)0x0);
      if (pUVar7 == (UnityEngine_UI_Text_o *)0x0) goto label_1822926ce;
      local_108.fields.r = (pUVar8->fields).r;
      local_108.fields.g = (pUVar8->fields).g;
      local_108.fields.b = (pUVar8->fields).b;
      local_108.fields.a = (pUVar8->fields).a;
      (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                (pUVar7,&local_108,(pUVar7->klass->vtable)._23_set_color.method);
    }
    pUVar2 = (__this->fields).BottomBar;
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MultiplayerMapPopup_Setup_b__20_0,(MethodInfo *)0x0);
    UI_ElementFactory__CreateTextButton(pUVar2,__this_01,"LAN",0.0,pUVar4,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).BottomBar;
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pSVar1 = UI_UIManager__GetLocale
                       (category,pSVar1,"ServerButton","","",
                        (MethodInfo *)0x0);
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MultiplayerMapPopup_Setup_b__20_1,(MethodInfo *)0x0);
    UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar1,0.0,pUVar4,(MethodInfo *)0x0);
    pUVar2 = (__this->fields).BottomBar;
    pSVar1 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MultiplayerMapPopup_Setup_b__20_2,(MethodInfo *)0x0);
    UI_ElementFactory__CreateTextButton(pUVar2,__this_01,pSVar1,0.0,pUVar4,(MethodInfo *)0x0);
    pUVar9 = UnityEngine_GameObject__GetComponent_object_
                       (__this_02,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    if ((__this_01 != (UI_ElementStyle_o *)0x0) &&
       (pUVar8 = UI_UIManager__GetThemeColor
                           (&local_f8,(__this_01->fields).ThemePanel,"MainBody",
                            "MapColor","DefaultPanel",(MethodInfo *)0x0),
       pUVar9 != (UnityEngine_UI_Image_o *)0x0)) {
      local_108.fields.r = (pUVar8->fields).r;
      local_108.fields.g = (pUVar8->fields).g;
      local_108.fields.b = (pUVar8->fields).b;
      local_108.fields.a = (pUVar8->fields).a;
      (*(pUVar9->klass->vtable)._23_set_color.methodPtr)
                (pUVar9,&local_108,(pUVar9->klass->vtable)._23_set_color.method);
      return;
    }
  }
label_1822926ce:
  ThrowNullReferenceException();
}


// UI.MultiplayerMapPopup$$SetupPopups
// il2cpp: void UI_MultiplayerMapPopup__SetupPopups (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x182291ed0

void UI_MultiplayerMapPopup__SetupPopups(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_BasePopup__o *pSVar3;
  UI_BasePopup_o *pUVar4;
  UI_BasePopup_array *pUVar5;
  MethodInfo *pMVar6;
  UnityEngine_Transform_o *pUVar7;
  UI_MultiplayerSettingsPopup_o *pUVar8;
  UI_MultiplayerLanPopup_o *pUVar9;
  
  if (Il2CppMethodInitialized_184347450 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_MultiplayerLanPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_MultiplayerSettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MultiplayerLanPopup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_CreateHeadedPanel_MultiplayerSettingsPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_BasePopup_Add);
    Il2CppMethodInitialized_184347450 = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pUVar8 = UI_ElementFactory__CreateHeadedPanel_object_
                     (pUVar7,false,
                      (MethodInfo_6ABA40 *)
                      MethodInfo_UI_ElementFactory_CreateHeadedPanel_MultiplayerSettingsPopup);
  if (pUVar8 != (UI_MultiplayerSettingsPopup_o *)0x0) {
    pUVar8 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar8,
                        (MethodInfo_6651A0 *)
                        MethodInfo_UnityEngine_Component_GetComponent_MultiplayerSettingsPopup);
    (__this->fields)._multiplayerSettingsPopup = pUVar8;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._multiplayerSettingsPopup,pUVar8);
    pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pUVar9 = UI_ElementFactory__CreateHeadedPanel_object_
                       (pUVar7,false,
                        (MethodInfo_6ABA40 *)
                        MethodInfo_UI_ElementFactory_CreateHeadedPanel_MultiplayerLanPopup);
    if (pUVar9 == (UI_MultiplayerLanPopup_o *)0x0) goto label_182292099;
    pUVar9 = UnityEngine_Component__GetComponent_object_
                       ((UnityEngine_Component_o *)pUVar9,
                        (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_MultiplayerLanPopup
                       );
    (__this->fields)._lanPopup = pUVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._lanPopup,pUVar9);
    pMVar6 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 == (System_Collections_Generic_List_BasePopup__o *)0x0) goto label_182292099;
    pUVar4 = (UI_BasePopup_o *)(__this->fields)._multiplayerSettingsPopup;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pUVar5 = (pSVar3->fields)._items;
    if (pUVar5 == (UI_BasePopup_array *)0x0) goto label_182292099;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pUVar5->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pUVar5->max_length <= uVar2) goto label_18229209f;
      pUVar5->m_Items[(int)uVar2] = pUVar4;
      Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,pUVar4);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar4,
                 (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
    }
    pMVar6 = MethodInfo_System_Collections_Generic_List_BasePopup_Add;
    pSVar3 = (__this->fields)._popups;
    if (pSVar3 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
      pUVar4 = (UI_BasePopup_o *)(__this->fields)._lanPopup;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pUVar5 = (pSVar3->fields)._items;
      if (pUVar5 != (UI_BasePopup_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pUVar5->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pUVar4,
                     (MethodInfo_93DD50 *)pMVar6->klass->rgctx_data[0xe].method);
          return;
        }
        (pSVar3->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pUVar5->max_length) {
          pUVar5->m_Items[(int)uVar2] = pUVar4;
          Il2CppCodeGenWriteBarrier(pUVar5->m_Items + (int)uVar2,pUVar4);
          return;
        }
label_18229209f:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_182292099:
  ThrowNullReferenceException();
}


// UI.MultiplayerMapPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerMapPopup__OnButtonClick (UI_MultiplayerMapPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182291bc0

void UI_MultiplayerMapPopup__OnButtonClick
               (UI_MultiplayerMapPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this_00;
  bool bVar1;
  uint32_t uVar2;
  UI_MultiplayerLanPopup_o *pUVar3;
  int32_t region;
  
  if (Il2CppMethodInitialized_184347451 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Server");
    il2cpp_codegen_initialize_runtime_metadata(&"ButtonEU");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Offline");
    il2cpp_codegen_initialize_runtime_metadata(&"ButtonUS");
    il2cpp_codegen_initialize_runtime_metadata(&"ButtonASIA");
    il2cpp_codegen_initialize_runtime_metadata(&"LAN");
    il2cpp_codegen_initialize_runtime_metadata(&"ButtonCN");
    il2cpp_codegen_initialize_runtime_metadata(&"ButtonSA");
    Il2CppMethodInitialized_184347451 = '\x01';
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method);
  __this_00 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0xa01ce50e) {
    if (uVar2 < 0x8686f3a4) {
      if (uVar2 != 0x6d7302f2) {
        if (uVar2 != 0x8686f3a3) {
          return;
        }
        bVar1 = System_String__op_Equality(name,"ButtonASIA",(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) goto label_182291ebe;
        region = 3;
        goto label_182291d4f;
      }
      bVar1 = System_String__op_Equality(name,"Server",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pUVar3 = (UI_MultiplayerLanPopup_o *)(__this->fields)._multiplayerSettingsPopup;
    }
    else {
      if (uVar2 != 0x993a9730) {
        if (uVar2 != 0xa01ce50d) {
          return;
        }
        bVar1 = System_String__op_Equality(name,"ButtonUS",(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) goto label_182291ebe;
        region = 1;
label_182291d4f:
        Settings_MultiplayerSettings__ConnectServer(__this_00,region,(MethodInfo *)0x0);
        return;
      }
      bVar1 = System_String__op_Equality(name,"LAN",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pUVar3 = (__this->fields)._lanPopup;
    }
    if (pUVar3 != (UI_MultiplayerLanPopup_o *)0x0) {
      (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
      return;
    }
  }
  else {
    if (uVar2 < 0xc2170a66) {
      if (uVar2 == 0xa33f7c08) {
        bVar1 = System_String__op_Equality(name,"ButtonCN",(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) goto label_182291ebe;
        region = 4;
      }
      else {
        if (uVar2 != 0xc2170a65) {
          return;
        }
        bVar1 = System_String__op_Equality(name,"ButtonSA",(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        if (__this_00 == (Settings_MultiplayerSettings_o *)0x0) goto label_182291ebe;
        region = 2;
      }
      goto label_182291d4f;
    }
    if (uVar2 == 0xc2954bc2) {
      bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
    if (uVar2 == 0xc47c37c8) {
      bVar1 = System_String__op_Equality(name,"Offline",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
        Settings_MultiplayerSettings__ConnectOffline(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      if (uVar2 != 0xda444fcb) {
        return;
      }
      bVar1 = System_String__op_Equality(name,"ButtonEU",(MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
        region = 0;
        goto label_182291d4f;
      }
    }
  }
label_182291ebe:
  ThrowNullReferenceException();
}


// UI.MultiplayerMapPopup$$.ctor
// il2cpp: void UI_MultiplayerMapPopup___ctor (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_MultiplayerMapPopup___ctor(UI_MultiplayerMapPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerMapPopup$$<Setup>b__20_0
// il2cpp: void UI_MultiplayerMapPopup___Setup_b__20_0 (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x1822926e0

void UI_MultiplayerMapPopup___Setup_b__20_0(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347452 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"LAN");
    Il2CppMethodInitialized_184347452 = '\x01';
  }
  UI_MultiplayerMapPopup__OnButtonClick(__this,"LAN",(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerMapPopup$$<Setup>b__20_1
// il2cpp: void UI_MultiplayerMapPopup___Setup_b__20_1 (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x182292720

void UI_MultiplayerMapPopup___Setup_b__20_1(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347453 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Server");
    Il2CppMethodInitialized_184347453 = '\x01';
  }
  UI_MultiplayerMapPopup__OnButtonClick(__this,"Server",(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerMapPopup$$<Setup>b__20_2
// il2cpp: void UI_MultiplayerMapPopup___Setup_b__20_2 (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x182292760

void UI_MultiplayerMapPopup___Setup_b__20_2(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347454 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347454 = '\x01';
  }
  UI_MultiplayerMapPopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


