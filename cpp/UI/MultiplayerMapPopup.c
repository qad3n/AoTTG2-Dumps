// Type: UI.MultiplayerMapPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerMapPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerMapPopup.cs
// --------------------------------

// UI.MultiplayerMapPopup.<>c__DisplayClass20_0$$.ctor
// il2cpp: void UI_MultiplayerMapPopup___c__DisplayClass20_0___ctor (UI_MultiplayerMapPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x440ae90

void UI_MultiplayerMapPopup___c__DisplayClass20_0___ctor
               (UI_MultiplayerMapPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerMapPopup.<>c__DisplayClass20_0$$<Setup>b__3
// il2cpp: void UI_MultiplayerMapPopup___c__DisplayClass20_0___Setup_b__3 (UI_MultiplayerMapPopup___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x440b460

void UI_MultiplayerMapPopup___c__DisplayClass20_0___Setup_b__3
               (UI_MultiplayerMapPopup___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  UnityEngine_UI_Button_o *__this_00;
  UI_MultiplayerMapPopup_o *__this_01;
  System_String_o *name;
  MethodInfo *method_00;
  
  __this_00 = (__this->fields).button;
  if (__this_00 != (UnityEngine_UI_Button_o *)0x0) {
    __this_01 = (__this->fields).__4__this;
    name = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UI_MultiplayerMapPopup_o *)0x0) {
      UI_MultiplayerMapPopup__OnButtonClick(__this_01,name,method_00);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Password");
    g_data_057ae5c7 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_UIManager__GetLocaleCommon("Password",(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerMapPopup$$get_ThemePanel
// il2cpp: System_String_o* UI_MultiplayerMapPopup__get_ThemePanel (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440a6b0

System_String_o * UI_MultiplayerMapPopup__get_ThemePanel(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  if (g_data_057ae5bf == '\0') {
    il2cpp_runtime_helper_023445d0(&"MultiplayerMapPopup");
    g_data_057ae5bf = '\x01';
  }
  return "MultiplayerMapPopup";
}


// UI.MultiplayerMapPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerMapPopup__get_HorizontalPadding (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440a6e0

int32_t UI_MultiplayerMapPopup__get_HorizontalPadding(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MultiplayerMapPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerMapPopup__get_VerticalPadding (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440a6f0

int32_t UI_MultiplayerMapPopup__get_VerticalPadding(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  return 0;
}


// UI.MultiplayerMapPopup$$get_VerticalSpacing
// il2cpp: float UI_MultiplayerMapPopup__get_VerticalSpacing (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440a700

float UI_MultiplayerMapPopup__get_VerticalSpacing(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  return 0.0;
}


// UI.MultiplayerMapPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerMapPopup__get_Title (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440a710

System_String_o * UI_MultiplayerMapPopup__get_Title(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae5c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"MultiplayerMapPopup");
    g_data_057ae5c0 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("MainMenu","MultiplayerMapPopup","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerMapPopup$$get_HasPremadeContent
// il2cpp: bool UI_MultiplayerMapPopup__get_HasPremadeContent (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440a7b0

bool_conflict
UI_MultiplayerMapPopup__get_HasPremadeContent(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MultiplayerMapPopup$$get_Width
// il2cpp: float UI_MultiplayerMapPopup__get_Width (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440a7c0

float UI_MultiplayerMapPopup__get_Width(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  return 900.0;
}


// UI.MultiplayerMapPopup$$get_Height
// il2cpp: float UI_MultiplayerMapPopup__get_Height (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440a7d0

float UI_MultiplayerMapPopup__get_Height(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  return 560.0;
}


// UI.MultiplayerMapPopup$$get_UseSound
// il2cpp: bool UI_MultiplayerMapPopup__get_UseSound (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440a7e0

bool_conflict UI_MultiplayerMapPopup__get_UseSound(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MultiplayerMapPopup$$Setup
// il2cpp: void UI_MultiplayerMapPopup__Setup (UI_MultiplayerMapPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x440a7f0

void UI_MultiplayerMapPopup__Setup(UI_MultiplayerMapPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  long lVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  UnityEngine_UI_ColorBlock_o value;
  System_String_o *subCategory;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_Events_UnityAction_o *__this_02;
  System_Object_array *pSVar4;
  UnityEngine_UI_Selectable_o *__this_03;
  UnityEngine_Transform_o *pUVar5;
  Il2CppObject *pIVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  ulong uVar8;
  UnityEngine_Events_UnityAction_Fields *pUVar9;
  UnityEngine_Color_o UVar10;
  UnityEngine_Events_UnityAction_c *pUStack_88;
  void *pvStack_80;
  intptr_t iStack_78;
  intptr_t iStack_70;
  Il2CppObject *pIStack_68;
  intptr_t iStack_60;
  intptr_t iStack_58;
  intptr_t iStack_50;
  intptr_t iStack_48;
  intptr_t iStack_40;
  intptr_t iStack_38;
  
  if (g_data_057ae5c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponent_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Button_GetComponentsInChildren_Button);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__20_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__3);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass20_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"MainMenu");
    il2cpp_runtime_helper_023445d0(&"TextColor");
    il2cpp_runtime_helper_023445d0(&"DefaultPanel");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"DefaultButton");
    il2cpp_runtime_helper_023445d0(&"MultiplayerMap");
    il2cpp_runtime_helper_023445d0(&"MapColor");
    il2cpp_runtime_helper_023445d0(&"ServerButton");
    il2cpp_runtime_helper_023445d0(&"LAN");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"MultiplayerMapPopup");
    il2cpp_runtime_helper_023445d0(&"MainBody");
    g_data_057ae5c1 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar7 = (UnityEngine_Events_UnityAction_o *)(__this->fields).SinglePanel;
  if (pUVar7 != (UnityEngine_Events_UnityAction_o *)0x0) {
    pUVar3 = (UnityEngine_Events_UnityAction_o *)
             UnityEngine_Transform__Find((UnityEngine_Transform_o *)pUVar7,"MultiplayerMap",(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Events_UnityAction_o *)0x0) {
      __this_02 = (UnityEngine_Events_UnityAction_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
      pUVar7 = pUVar3;
      if (__this_02 != (UnityEngine_Events_UnityAction_o *)0x0) {
        pUVar7 = __this_02;
        pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                           ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Button_GetComponentsInChildren_Button);
        if (pSVar4 != (System_Object_array *)0x0) {
          if (0 < (int)pSVar4->max_length) {
            uVar8 = 0;
            do {
              pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass20_0);
              pUVar7 = pUVar3;
              System_Object___ctor((Il2CppObject *)pUVar3,(MethodInfo *)0x0);
              if (pUVar3 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_0440ae7b;
              pUVar7 = (UnityEngine_Events_UnityAction_o *)&(pUVar3->fields).invoke_impl;
              (pUVar3->fields).invoke_impl = (intptr_t)__this;
              il2cpp_runtime_helper_022b4080();
              if ((uint)pSVar4->max_length <= uVar8) goto label_0440ae80;
              pUVar9 = &pUVar3->fields;
              (pUVar3->fields).method_ptr = (intptr_t)pSVar4->m_Items[uVar8];
              pUVar7 = (UnityEngine_Events_UnityAction_o *)pUVar9;
              il2cpp_runtime_helper_022b4080();
              lVar1 = (pUVar3->fields).method_ptr;
              if (lVar1 == 0) goto label_0440ae7b;
              __this_00 = *(UnityEngine_Events_UnityEvent_o **)(lVar1 + 0x100);
              pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
              pUVar7 = pUVar3;
              UnityEngine_Events_UnityAction___ctor();
              if (__this_00 == (UnityEngine_Events_UnityEvent_o *)0x0) goto label_0440ae7b;
              UnityEngine_Events_UnityEvent__AddListener(__this_00,pUVar3,(MethodInfo *)0x0);
              pUVar7 = (UnityEngine_Events_UnityAction_o *)pUVar9->method_ptr;
              if (pUVar7 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_0440ae7b;
              __this_03 = (UnityEngine_UI_Selectable_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pUVar7,MethodInfo_Button_GetComponent_Button);
              if (__this_01 == (UI_ElementStyle_o *)0x0) goto label_0440ae7b;
              pSVar2 = (__this_01->fields).ThemePanel;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pUVar7 = (UnityEngine_Events_UnityAction_o *)&pUStack_88;
              UI_UIManager__GetThemeColorBlock
                        ((UnityEngine_UI_ColorBlock_o *)pUVar7,pSVar2,"DefaultButton","","DefaultPanel",
                         (MethodInfo *)0x0);
              if (__this_03 == (UnityEngine_UI_Selectable_o *)0x0) goto label_0440ae7b;
              value.fields.m_NormalColor.fields._8_8_ = pvStack_80;
              value.fields.m_NormalColor.fields._0_8_ = pUStack_88;
              value.fields.m_HighlightedColor.fields.r = (float)(undefined4)iStack_78;
              value.fields.m_HighlightedColor.fields.g = (float)iStack_78._4_4_;
              value.fields.m_HighlightedColor.fields.b = (float)(undefined4)iStack_70;
              value.fields.m_HighlightedColor.fields.a = (float)iStack_70._4_4_;
              value.fields.m_PressedColor.fields._0_8_ = pIStack_68;
              value.fields.m_PressedColor.fields.b = (float)(undefined4)iStack_60;
              value.fields.m_PressedColor.fields.a = (float)iStack_60._4_4_;
              value.fields.m_SelectedColor.fields.r = (float)(undefined4)iStack_58;
              value.fields.m_SelectedColor.fields.g = (float)iStack_58._4_4_;
              value.fields.m_SelectedColor.fields.b = (float)(undefined4)iStack_50;
              value.fields.m_SelectedColor.fields.a = (float)iStack_50._4_4_;
              value.fields.m_DisabledColor.fields.r = (float)(undefined4)iStack_48;
              value.fields.m_DisabledColor.fields.g = (float)iStack_48._4_4_;
              value.fields.m_DisabledColor.fields.b = (float)(undefined4)iStack_40;
              value.fields.m_DisabledColor.fields.a = (float)iStack_40._4_4_;
              value.fields.m_ColorMultiplier = (float)(undefined4)iStack_38;
              value.fields.m_FadeDuration = (float)iStack_38._4_4_;
              UnityEngine_UI_Selectable__set_colors(__this_03,value,(MethodInfo *)0x0);
              pUVar7 = (UnityEngine_Events_UnityAction_o *)pUVar9->method_ptr;
              if (pUVar7 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_0440ae7b;
              pUVar3 = (UnityEngine_Events_UnityAction_o *)
                       UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
              if (pUVar3 == (UnityEngine_Events_UnityAction_o *)0x0) goto label_0440ae7b;
              pUVar5 = UnityEngine_Transform__Find
                                 ((UnityEngine_Transform_o *)pUVar3,"Text",(MethodInfo *)0x0);
              pUVar7 = pUVar3;
              if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_0440ae7b;
              pIVar6 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar5,MethodInfo_Text_GetComponent_Text);
              pUVar7 = (UnityEngine_Events_UnityAction_o *)(__this_01->fields).ThemePanel;
              UVar10 = UI_UIManager__GetThemeColor
                                 ((System_String_o *)pUVar7,"DefaultButton","TextColor","DefaultPanel",
                                  (MethodInfo *)0x0);
              if (pIVar6 == (Il2CppObject *)0x0) goto label_0440ae7b;
              (*pIVar6->klass->vtable[0x17].methodPtr)(UVar10.fields.r,UVar10.fields.b,pIVar6);
              uVar8 = uVar8 + 1;
            } while ((long)uVar8 < (long)(int)pSVar4->max_length);
          }
          subCategory = "MultiplayerMapPopup";
          pSVar2 = "MainMenu";
          pUVar5 = (__this->fields).BottomBar;
          pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateTextButton(pUVar5,__this_01,"LAN",0.0,pUVar7,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).BottomBar;
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar2 = UI_UIManager__GetLocale
                             (pSVar2,subCategory,"ServerButton","","",(MethodInfo *)0x0);
          pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateTextButton(pUVar5,__this_01,pSVar2,0.0,pUVar7,(MethodInfo *)0x0);
          pUVar5 = (__this->fields).BottomBar;
          pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
          pUVar7 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateTextButton(pUVar5,__this_01,pSVar2,0.0,pUVar7,(MethodInfo *)0x0);
          pIVar6 = UnityEngine_GameObject__GetComponent_object_
                             ((UnityEngine_GameObject_o *)__this_02,MethodInfo_Image_GetComponent_Image);
          pUVar7 = __this_02;
          if (__this_01 != (UI_ElementStyle_o *)0x0) {
            pUVar7 = (UnityEngine_Events_UnityAction_o *)(__this_01->fields).ThemePanel;
            UVar10 = UI_UIManager__GetThemeColor
                               ((System_String_o *)pUVar7,"MainBody","MapColor","DefaultPanel",
                                (MethodInfo *)0x0);
            if (pIVar6 != (Il2CppObject *)0x0) {
              (*pIVar6->klass->vtable[0x17].methodPtr)
                        (UVar10.fields.r,UVar10.fields.b,pIVar6,pIVar6->klass->vtable[0x17].method);
              return;
            }
          }
        }
      }
    }
  }
label_0440ae7b:
  il2cpp_runtime_helper_022b2c90();
label_0440ae80:
  il2cpp_runtime_helper_022b2ca0();
  System_Object___ctor((Il2CppObject *)pUVar7,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerMapPopup$$SetupPopups
// il2cpp: void UI_MultiplayerMapPopup__SetupPopups (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440aea0

void UI_MultiplayerMapPopup__SetupPopups(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Settings_MultiplayerSettings_o *__this_00;
  Il2CppClass *pIVar3;
  long lVar4;
  uint32_t uVar5;
  bool_conflict bVar6;
  System_Collections_Generic_List_BasePopup__o *__this_01;
  UnityEngine_Component_o *pUVar7;
  UI_MultiplayerSettingsPopup_o *pUVar8;
  UI_TooltipPopup_o *__this_02;
  int32_t region;
  UI_BasePopup_array *pUVar9;
  
  if (g_data_057ae5c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_MultiplayerLanPopup_GetComponent_MultiplayerLanPopup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MultiplayerSettingsPopup_GetComponent_MultiplayerSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MultiplayerLanPopup_CreateHeadedPanel_MultiplayerLanPopu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_MultiplayerSettingsPopup_CreateHeadedPanel_MultiplayerSe);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    g_data_057ae5c2 = '\x01';
  }
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  __this_01 = (System_Collections_Generic_List_BasePopup__o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_02 = (UI_TooltipPopup_o *)0x0;
  pUVar7 = (UnityEngine_Component_o *)
           UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_01,0,MethodInfo_MultiplayerSettingsPopup_CreateHeadedPanel_MultiplayerSe);
  if (pUVar7 != (UnityEngine_Component_o *)0x0) {
    pUVar8 = (UI_MultiplayerSettingsPopup_o *)UnityEngine_Component__GetComponent_object_(pUVar7,MethodInfo_MultiplayerSettingsPopup_GetComponent_MultiplayerSetting)
    ;
    (__this->fields)._multiplayerSettingsPopup = pUVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._multiplayerSettingsPopup);
    __this_01 = (System_Collections_Generic_List_BasePopup__o *)
                UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    __this_02 = (UI_TooltipPopup_o *)0x0;
    pUVar7 = (UnityEngine_Component_o *)
             UI_ElementFactory__CreateHeadedPanel_object_((UnityEngine_Transform_o *)__this_01,0,MethodInfo_MultiplayerLanPopup_CreateHeadedPanel_MultiplayerLanPopu)
    ;
    if (pUVar7 != (UnityEngine_Component_o *)0x0) {
      __this_02 = (UI_TooltipPopup_o *)UnityEngine_Component__GetComponent_object_(pUVar7,MethodInfo_MultiplayerLanPopup_GetComponent_MultiplayerLanPopup);
      (__this->fields)._lanPopup = (UI_MultiplayerLanPopup_o *)__this_02;
      il2cpp_runtime_helper_022b4080(&(__this->fields)._lanPopup);
      lVar4 = MethodInfo_Void_Add;
      __this_01 = (__this->fields)._popups;
      if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
        __this_02 = (UI_TooltipPopup_o *)(__this->fields)._multiplayerSettingsPopup;
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar9 = (__this_01->fields)._items;
        if (pUVar9 != (UI_BasePopup_array *)0x0) {
          uVar2 = (__this_01->fields)._size;
          if (uVar2 < (uint)pUVar9->max_length) {
            (__this_01->fields)._size = uVar2 + 1;
            pUVar9->m_Items[(int)uVar2] = (UI_BasePopup_o *)__this_02;
            il2cpp_runtime_helper_022b4080(pUVar9->m_Items + (int)uVar2);
            __this_01 = (__this->fields)._popups;
            lVar4 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_02,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            __this_01 = (__this->fields)._popups;
            lVar4 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar4;
          if (__this_01 != (System_Collections_Generic_List_BasePopup__o *)0x0) {
            __this_02 = (UI_TooltipPopup_o *)(__this->fields)._lanPopup;
            piVar1 = &(__this_01->fields)._version;
            *piVar1 = *piVar1 + 1;
            pUVar9 = (__this_01->fields)._items;
            if (pUVar9 != (UI_BasePopup_array *)0x0) {
              uVar2 = (__this_01->fields)._size;
              if ((uint)pUVar9->max_length <= uVar2) {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_02,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                return;
              }
              (__this_01->fields)._size = uVar2 + 1;
              pUVar9->m_Items[(int)uVar2] = (UI_BasePopup_o *)__this_02;
              il2cpp_runtime_helper_022b4080(pUVar9->m_Items + (int)uVar2);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae5c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"Server");
    il2cpp_runtime_helper_023445d0(&"ButtonEU");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Offline");
    il2cpp_runtime_helper_023445d0(&"ButtonUS");
    il2cpp_runtime_helper_023445d0(&"ButtonASIA");
    il2cpp_runtime_helper_023445d0(&"LAN");
    il2cpp_runtime_helper_023445d0(&"ButtonCN");
    il2cpp_runtime_helper_023445d0(&"ButtonSA");
    g_data_057ae5c3 = '\x01';
  }
  (*(((System_Collections_Generic_List_object__VTable *)&__this_01->klass->vtable)->
    _26_System_Collections_IList_Insert).methodPtr)(__this_01);
  __this_00 = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
  uVar5 = _PrivateImplementationDetails___ComputeStringHash((System_String_o *)__this_02,(MethodInfo *)0x0);
  if (0xa01ce50d < uVar5) {
    if (uVar5 < 0xc2170a66) {
      if (uVar5 == 0xa33f7c08) {
        bVar6 = System_String__op_Equality((System_String_o *)__this_02,"ButtonCN",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
          region = 4;
          goto label_0440b379;
        }
      }
      else {
        if (uVar5 != 0xc2170a65) {
          return;
        }
        bVar6 = System_String__op_Equality((System_String_o *)__this_02,"ButtonSA",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
          region = 2;
label_0440b379:
          Settings_MultiplayerSettings__ConnectServer(__this_00,region,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if (uVar5 == 0xda444fcb) {
      bVar6 = System_String__op_Equality((System_String_o *)__this_02,"ButtonEU",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
        region = 0;
        goto label_0440b379;
      }
    }
    else {
      if (uVar5 != 0xc47c37c8) {
        if (uVar5 != 0xc2954bc2) {
          return;
        }
        bVar6 = System_String__op_Equality((System_String_o *)__this_02,"Back",(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          return;
        }
        (*(((System_Collections_Generic_List_object__VTable *)&__this_01->klass->vtable)->_22_Clear).methodPtr
        )(__this_01,
          (((System_Collections_Generic_List_object__VTable *)&__this_01->klass->vtable)->_22_Clear).method);
        return;
      }
      bVar6 = System_String__op_Equality((System_String_o *)__this_02,"Offline",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        return;
      }
      if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
        Settings_MultiplayerSettings__ConnectOffline(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
    goto label_0440b38b;
  }
  if (uVar5 < 0x8686f3a4) {
    if (uVar5 == 0x8686f3a3) {
      bVar6 = System_String__op_Equality((System_String_o *)__this_02,"ButtonASIA",(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
          region = 3;
          goto label_0440b379;
        }
        goto label_0440b38b;
      }
    }
    else if ((uVar5 == 0x6d7302f2) &&
            (bVar6 = System_String__op_Equality((System_String_o *)__this_02,"Server",(MethodInfo *)0x0),
            (char)bVar6 != '\0')) {
      pUVar9 = __this_01[4].monitor;
      if (pUVar9 != (UI_BasePopup_array *)0x0) {
label_0440b313:
        pIVar3 = (pUVar9->obj).klass;
        (*pIVar3->vtable[0x15].methodPtr)(pUVar9,pIVar3->vtable[0x15].method);
        return;
      }
      __this_02 = (UI_TooltipPopup_o *)0x0;
label_0440b38b:
      il2cpp_runtime_helper_022b2c90();
      UI_BasePopup___ctor(__this_02,(MethodInfo *)0x0);
      return;
    }
  }
  else if (uVar5 == 0x993a9730) {
    bVar6 = System_String__op_Equality((System_String_o *)__this_02,"LAN",(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      pUVar9 = __this_01[4].fields._items;
      __this_02 = (UI_TooltipPopup_o *)0x0;
      if (pUVar9 != (UI_BasePopup_array *)0x0) goto label_0440b313;
      goto label_0440b38b;
    }
  }
  else if ((uVar5 == 0xa01ce50d) &&
          (bVar6 = System_String__op_Equality((System_String_o *)__this_02,"ButtonUS",(MethodInfo *)0x0),
          (char)bVar6 != '\0')) {
    if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
      region = 1;
      goto label_0440b379;
    }
    goto label_0440b38b;
  }
  return;
}


// UI.MultiplayerMapPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerMapPopup__OnButtonClick (UI_MultiplayerMapPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x440b080

void UI_MultiplayerMapPopup__OnButtonClick
               (UI_MultiplayerMapPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_MultiplayerSettings_o *__this_00;
  uint32_t uVar1;
  bool_conflict bVar2;
  MethodInfo *extraout_RDX;
  int32_t region;
  UI_MultiplayerSettingsPopup_o *pUVar3;
  
  if (g_data_057ae5c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&"Server");
    il2cpp_runtime_helper_023445d0(&"ButtonEU");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Offline");
    il2cpp_runtime_helper_023445d0(&"ButtonUS");
    il2cpp_runtime_helper_023445d0(&"ButtonASIA");
    il2cpp_runtime_helper_023445d0(&"LAN");
    il2cpp_runtime_helper_023445d0(&"ButtonCN");
    il2cpp_runtime_helper_023445d0(&"ButtonSA");
    g_data_057ae5c3 = '\x01';
    method = extraout_RDX;
  }
  (*(__this->klass->vtable)._26_HideAllPopups.methodPtr)
            (__this,(__this->klass->vtable)._26_HideAllPopups.method,method);
  __this_00 = (Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8);
  uVar1 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar1 < 0xa01ce50e) {
    if (uVar1 < 0x8686f3a4) {
      if (uVar1 == 0x8686f3a3) {
        bVar2 = System_String__op_Equality(name,"ButtonASIA",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
            region = 3;
            goto label_0440b379;
          }
label_0440b38b:
          il2cpp_runtime_helper_022b2c90();
          UI_BasePopup___ctor((UI_TooltipPopup_o *)name,(MethodInfo *)0x0);
          return;
        }
      }
      else if (uVar1 == 0x6d7302f2) {
        bVar2 = System_String__op_Equality(name,"Server",(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          pUVar3 = (__this->fields)._multiplayerSettingsPopup;
          if (pUVar3 != (UI_MultiplayerSettingsPopup_o *)0x0) goto label_0440b313;
          name = (System_String_o *)0x0;
          goto label_0440b38b;
        }
      }
    }
    else if (uVar1 == 0x993a9730) {
      bVar2 = System_String__op_Equality(name,"LAN",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pUVar3 = (UI_MultiplayerSettingsPopup_o *)(__this->fields)._lanPopup;
        name = (System_String_o *)0x0;
        if (pUVar3 != (UI_MultiplayerSettingsPopup_o *)0x0) {
label_0440b313:
          (*(pUVar3->klass->vtable)._21_Show.methodPtr)(pUVar3,(pUVar3->klass->vtable)._21_Show.method);
          return;
        }
        goto label_0440b38b;
      }
    }
    else if (uVar1 == 0xa01ce50d) {
      bVar2 = System_String__op_Equality(name,"ButtonUS",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
          region = 1;
          goto label_0440b379;
        }
        goto label_0440b38b;
      }
    }
  }
  else if (uVar1 < 0xc2170a66) {
    if (uVar1 == 0xa33f7c08) {
      bVar2 = System_String__op_Equality(name,"ButtonCN",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
          region = 4;
label_0440b379:
          Settings_MultiplayerSettings__ConnectServer(__this_00,region,(MethodInfo *)0x0);
          return;
        }
        goto label_0440b38b;
      }
    }
    else if (uVar1 == 0xc2170a65) {
      bVar2 = System_String__op_Equality(name,"ButtonSA",(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
          region = 2;
          goto label_0440b379;
        }
        goto label_0440b38b;
      }
    }
  }
  else if (uVar1 == 0xda444fcb) {
    bVar2 = System_String__op_Equality(name,"ButtonEU",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
        region = 0;
        goto label_0440b379;
      }
      goto label_0440b38b;
    }
  }
  else if (uVar1 == 0xc47c37c8) {
    bVar2 = System_String__op_Equality(name,"Offline",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (__this_00 != (Settings_MultiplayerSettings_o *)0x0) {
        Settings_MultiplayerSettings__ConnectOffline(__this_00,(MethodInfo *)0x0);
        return;
      }
      goto label_0440b38b;
    }
  }
  else if (uVar1 == 0xc2954bc2) {
    bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  return;
}


// UI.MultiplayerMapPopup$$.ctor
// il2cpp: void UI_MultiplayerMapPopup___ctor (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440b390

void UI_MultiplayerMapPopup___ctor(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerMapPopup$$<Setup>b__20_0
// il2cpp: void UI_MultiplayerMapPopup___Setup_b__20_0 (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440b3a0

void UI_MultiplayerMapPopup___Setup_b__20_0(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae5c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"LAN");
    g_data_057ae5c4 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerMapPopup__OnButtonClick(__this,"LAN",in_RDX);
  return;
}


// UI.MultiplayerMapPopup$$<Setup>b__20_1
// il2cpp: void UI_MultiplayerMapPopup___Setup_b__20_1 (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440b3e0

void UI_MultiplayerMapPopup___Setup_b__20_1(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae5c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Server");
    g_data_057ae5c5 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerMapPopup__OnButtonClick(__this,"Server",in_RDX);
  return;
}


// UI.MultiplayerMapPopup$$<Setup>b__20_2
// il2cpp: void UI_MultiplayerMapPopup___Setup_b__20_2 (UI_MultiplayerMapPopup_o* __this, const MethodInfo* method);
// 0x440b420

void UI_MultiplayerMapPopup___Setup_b__20_2(UI_MultiplayerMapPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae5c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae5c6 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerMapPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


