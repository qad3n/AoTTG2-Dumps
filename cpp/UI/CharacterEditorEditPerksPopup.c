// Type: UI.CharacterEditorEditPerksPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/CharacterEditorEditPerksPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditPerksPopup.cs
// --------------------------------

// UI.CharacterEditorEditPerksPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___ctor (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x435f8a0

void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___ctor
               (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup.<>c__DisplayClass16_0$$<CreatePerkButton>b__0
// il2cpp: void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___CreatePerkButton_b__0 (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x435fca0

void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___CreatePerkButton_b__0
               (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorEditPerksPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorEditPerksPopup_o *)0x0) {
    UI_CharacterEditorEditPerksPopup__OnPerkChanged(__this_00,(__this->fields).name,in_RDX);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae199 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Stats");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae199 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UI_UIManager__GetLocale("CharacterEditor","Stats","Title","","",(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorEditPerksPopup__get_Title (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x435e890

System_String_o *
UI_CharacterEditorEditPerksPopup__get_Title(UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae190 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Title");
    il2cpp_runtime_helper_023445d0(&"CharacterEditor");
    il2cpp_runtime_helper_023445d0(&"Perks");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ae190 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Perks","Title","","",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorEditPerksPopup$$get_Width
// il2cpp: float UI_CharacterEditorEditPerksPopup__get_Width (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x435e930

float UI_CharacterEditorEditPerksPopup__get_Width
                (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 580.0;
}


// UI.CharacterEditorEditPerksPopup$$get_Height
// il2cpp: float UI_CharacterEditorEditPerksPopup__get_Height (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x435e940

float UI_CharacterEditorEditPerksPopup__get_Height
                (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 590.0;
}


// UI.CharacterEditorEditPerksPopup$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorEditPerksPopup__get_VerticalSpacing (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x435e950

float UI_CharacterEditorEditPerksPopup__get_VerticalSpacing
                (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 25.0;
}


// UI.CharacterEditorEditPerksPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorEditPerksPopup__get_HorizontalPadding (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x435e960

int32_t UI_CharacterEditorEditPerksPopup__get_HorizontalPadding
                  (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 0x3c;
}


// UI.CharacterEditorEditPerksPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorEditPerksPopup__get_VerticalPadding (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x435e970

int32_t UI_CharacterEditorEditPerksPopup__get_VerticalPadding
                  (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.CharacterEditorEditPerksPopup$$Setup
// il2cpp: void UI_CharacterEditorEditPerksPopup__Setup (UI_CharacterEditorEditPerksPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x435e980

void UI_CharacterEditorEditPerksPopup__Setup
               (UI_CharacterEditorEditPerksPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  void *pvVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_o *pSVar4;
  Il2CppClass *pIVar5;
  UnityEngine_Events_UnityAction_o *pUVar6;
  System_String_o *pSVar7;
  Il2CppClass *onClick;
  Characters_HumanStats_o *__this_02;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_UI_Text_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  Il2CppObject *__this_03;
  MethodInfo_255A0F0 **ppMVar11;
  MethodInfo *method_00;
  Il2CppClass *style;
  UI_ElementStyle_o *style_00;
  Il2CppClass *parent_00;
  MethodInfo *method_01;
  
  if (g_data_057ae191 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Setup_b__15_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ElementStyle);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    il2cpp_runtime_helper_023445d0(&"Allow air-dash up or down depending on camera.");
    il2cpp_runtime_helper_023445d0(&"AdvancedAlloy");
    il2cpp_runtime_helper_023445d0(&"DurableBlades");
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Reduces gas refill time.");
    il2cpp_runtime_helper_023445d0(&"Blades consume no durability, but break immediately on low speed hits.");
    il2cpp_runtime_helper_023445d0(&"RefillTime");
    il2cpp_runtime_helper_023445d0(&"Allow air-dash in any direction depending on camera.");
    il2cpp_runtime_helper_023445d0(&"Have fewer but more durable blades.");
    il2cpp_runtime_helper_023445d0(&"Save");
    il2cpp_runtime_helper_023445d0(&"OmniDash");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Points Left");
    il2cpp_runtime_helper_023445d0(&"VerticalDash");
    g_data_057ae191 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor((UI_ElementStyle_o *)pIVar5,0x18,130.0,20.0,pSVar4,(MethodInfo *)0x0);
  pUVar10 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar10,(UI_ElementStyle_o *)pIVar5,pSVar4,0.0,pUVar6,(MethodInfo *)0x0)
  ;
  pUVar10 = (__this->fields).BottomBar;
  pSVar7 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  onClick = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  pSVar4 = (System_String_o *)0x0;
  ppMVar11 = (MethodInfo_255A0F0 **)onClick;
  parent_00 = pIVar5;
  UI_ElementFactory__CreateTextButton
            (pUVar10,(UI_ElementStyle_o *)pIVar5,pSVar7,0.0,(UnityEngine_Events_UnityAction_o *)onClick,
             (MethodInfo *)0x0);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    onClick = (Il2CppClass *)Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (onClick != (Il2CppClass *)0x0) {
      pvVar3 = (onClick->_1).image;
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      ppMVar11 = (MethodInfo_255A0F0 **)(ulong)bVar1;
      parent_00 = TypeInfo_HumanCustomSet;
      if ((*(byte *)((long)pvVar3 + 0x130) < bVar1) ||
         (*(Il2CppClass **)(*(long *)((long)pvVar3 + 200) + -8 + (long)ppMVar11 * 8) != TypeInfo_HumanCustomSet))
      goto label_0435eed9;
    }
    __this_02 = (Characters_HumanStats_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
    parent_00 = (Il2CppClass *)0x0;
    Characters_HumanStats___ctor(__this_02,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((onClick != (Il2CppClass *)0x0) &&
       (pvVar3 = (onClick->_2).genericContainerHandle, pvVar3 != (void *)0x0)) {
      onClick = *(Il2CppClass **)((long)pvVar3 + 0x18);
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Characters_HumanStats__Deserialize(__this_02,(System_String_o *)onClick,(MethodInfo *)0x0);
      ppMVar11 = (MethodInfo_255A0F0 **)0x0;
      pSVar4 = (System_String_o *)&g_data_00000004;
      method_01 = (MethodInfo *)0x0;
      parent_00 = pIVar5;
      pUVar8 = UI_ElementFactory__CreateDefaultLabel
                         ((__this->fields).SinglePanel,(UI_ElementStyle_o *)pIVar5,"Points Left",0,4,
                          (MethodInfo *)0x0);
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        ppMVar11 = &MethodInfo_Text_GetComponent_Text;
        pUVar9 = (UnityEngine_UI_Text_o *)UnityEngine_GameObject__GetComponent_object_(pUVar8,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._pointsLeftLabel = pUVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields)._pointsLeftLabel,pUVar9);
        parent_00 = (Il2CppClass *)0x3;
        pUVar8 = UI_ElementFactory__CreateHorizontalGroup
                           ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
          pUVar10 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
          ppMVar11 = (MethodInfo_255A0F0 **)"RefillTime";
          pSVar4 = "Reduces gas refill time.";
          UI_CharacterEditorEditPerksPopup__CreatePerkButton
                    (__this,pUVar10,(UI_ElementStyle_o *)pIVar5,(System_String_o *)"RefillTime","Reduces gas refill time.",
                     method_01);
          parent_00 = (Il2CppClass *)0x3;
          pUVar8 = UI_ElementFactory__CreateHorizontalGroup
                             ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
            onClick = (Il2CppClass *)UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
            UI_CharacterEditorEditPerksPopup__CreatePerkButton
                      (__this,(UnityEngine_Transform_o *)onClick,(UI_ElementStyle_o *)pIVar5,"DurableBlades",
                       "Have fewer but more durable blades.",method_01);
            if (g_data_057ae193 == '\0') {
              il2cpp_runtime_helper_023445d0(&"Icons/Navigation/ArrowRightIcon");
              g_data_057ae193 = '\x01';
            }
            UI_ElementFactory__CreateRawImage
                      ((UnityEngine_Transform_o *)onClick,(UI_ElementStyle_o *)pIVar5,"Icons/Navigation/ArrowRightIcon",32.0,32.0,
                       (MethodInfo *)0x0);
            ppMVar11 = (MethodInfo_255A0F0 **)"AdvancedAlloy";
            pSVar4 = "Blades consume no durability, but break immediately on low speed hits.";
            UI_CharacterEditorEditPerksPopup__CreatePerkButton
                      (__this,(UnityEngine_Transform_o *)onClick,(UI_ElementStyle_o *)pIVar5,
                       (System_String_o *)"AdvancedAlloy","Blades consume no durability, but break immediately on low speed hits.",method_01);
            parent_00 = (Il2CppClass *)0x3;
            pUVar8 = UI_ElementFactory__CreateHorizontalGroup
                               ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              pUVar10 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
              UI_CharacterEditorEditPerksPopup__CreatePerkButton
                        (__this,pUVar10,(UI_ElementStyle_o *)pIVar5,"VerticalDash","Allow air-dash up or down depending on camera.",method_01);
              if (g_data_057ae193 == '\0') {
                il2cpp_runtime_helper_023445d0(&"Icons/Navigation/ArrowRightIcon");
                g_data_057ae193 = '\x01';
              }
              UI_ElementFactory__CreateRawImage
                        (pUVar10,(UI_ElementStyle_o *)pIVar5,"Icons/Navigation/ArrowRightIcon",32.0,32.0,(MethodInfo *)0x0);
              UI_CharacterEditorEditPerksPopup__CreatePerkButton
                        (__this,pUVar10,(UI_ElementStyle_o *)pIVar5,"OmniDash","Allow air-dash in any direction depending on camera.",method_01);
              UI_CharacterEditorEditPerksPopup__OnPerkChanged(__this,"",method_00);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0435eed9:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae192 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreatePerkButton_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae192 = '\x01';
  }
  __this_03 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
  pIVar5 = (Il2CppClass *)0x0;
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  if (__this_03 != (Il2CppObject *)0x0) {
    __this_03[1].klass = onClick;
    il2cpp_runtime_helper_022b4080(__this_03 + 1,onClick);
    __this_03[1].monitor = ppMVar11;
    il2cpp_runtime_helper_022b4080(&__this_03[1].monitor);
    pIVar5 = (Il2CppClass *)ppMVar11;
    if (onClick->static_fields != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (onClick->static_fields,__this_03[1].monitor,(Il2CppObject *)pSVar4,MethodInfo_Void_Add);
      __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)(onClick->_1).interfaceOffsets;
      pSVar7 = __this_03[1].monitor;
      pUVar6 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      pIVar5 = style;
      pUVar8 = UI_ElementFactory__CreatePerkButton
                         ((UnityEngine_Transform_o *)parent_00,(UI_ElementStyle_o *)style,pSVar7,pSVar4,195.0,
                          95.0,120.0,pUVar6,(MethodInfo *)0x0);
      if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (__this_01,(Il2CppObject *)pSVar7,(Il2CppObject *)pUVar8,MethodInfo_Void_Add);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae193 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/ArrowRightIcon");
    g_data_057ae193 = '\x01';
  }
  UI_ElementFactory__CreateRawImage
            ((UnityEngine_Transform_o *)pIVar5,style_00,"Icons/Navigation/ArrowRightIcon",32.0,32.0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$CreatePerkButton
// il2cpp: void UI_CharacterEditorEditPerksPopup__CreatePerkButton (UI_CharacterEditorEditPerksPopup_o* __this, UnityEngine_Transform_o* group, UI_ElementStyle_o* style, System_String_o* name, System_String_o* desc, const MethodInfo* method);
// 0x435eef0

void UI_CharacterEditorEditPerksPopup__CreatePerkButton
               (UI_CharacterEditorEditPerksPopup_o *__this,UnityEngine_Transform_o *group,
               UI_ElementStyle_o *style,System_String_o *name,System_String_o *desc,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *title;
  Il2CppObject *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *value;
  UI_ElementStyle_o *style_00;
  UI_ElementStyle_o *parent;
  
  if (g_data_057ae192 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CreatePerkButton_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass16_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnityAction);
    g_data_057ae192 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass16_0);
  parent = (UI_ElementStyle_o *)0x0;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
    __this_00[1].monitor = name;
    il2cpp_runtime_helper_022b4080(&__this_00[1].monitor);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._perkDescriptions;
    parent = (UI_ElementStyle_o *)name;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,__this_00[1].monitor,(Il2CppObject *)desc,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._perkButtons;
      title = __this_00[1].monitor;
      onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_helper_023052d0(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      value = UI_ElementFactory__CreatePerkButton
                        (group,style,title,desc,195.0,95.0,120.0,onClick,(MethodInfo *)0x0);
      parent = style;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)title,(Il2CppObject *)value,MethodInfo_Void_Add);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae193 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/ArrowRightIcon");
    g_data_057ae193 = '\x01';
  }
  UI_ElementFactory__CreateRawImage
            ((UnityEngine_Transform_o *)parent,style_00,"Icons/Navigation/ArrowRightIcon",32.0,32.0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$CreateArrow
// il2cpp: void UI_CharacterEditorEditPerksPopup__CreateArrow (UI_CharacterEditorEditPerksPopup_o* __this, UnityEngine_Transform_o* group, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x435f060

void UI_CharacterEditorEditPerksPopup__CreateArrow
               (UI_CharacterEditorEditPerksPopup_o *__this,UnityEngine_Transform_o *group,
               UI_ElementStyle_o *style,MethodInfo *method)

{
  if (g_data_057ae193 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icons/Navigation/ArrowRightIcon");
    g_data_057ae193 = '\x01';
  }
  UI_ElementFactory__CreateRawImage(group,style,"Icons/Navigation/ArrowRightIcon",32.0,32.0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$OnButtonClick
// il2cpp: void UI_CharacterEditorEditPerksPopup__OnButtonClick (UI_CharacterEditorEditPerksPopup_o* __this, System_String_o* button, const MethodInfo* method);
// 0x435f8b0

void UI_CharacterEditorEditPerksPopup__OnButtonClick
               (UI_CharacterEditorEditPerksPopup_o *__this,System_String_o *button,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_c *str;
  Settings_TypedSetting_T__o *__this_01;
  long *plVar4;
  bool_conflict bVar5;
  Characters_HumanStats_o *pCVar6;
  System_String_o *value;
  System_Collections_Generic_Dictionary_object__object__o *pSVar7;
  long *plVar8;
  
  if (g_data_057ae194 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEditorMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Back");
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae194 = '\x01';
  }
  bVar5 = System_String__op_Equality(button,"Back",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
label_0435fb0e:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar5 = System_String__op_Equality(button,"Save",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) {
label_0435fb37:
    il2cpp_runtime_helper_022b2c90();
    plVar8 = (long *)button;
  }
  else {
    button = (System_String_o *)Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if ((UI_TooltipPopup_o *)button != (UI_TooltipPopup_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((((UI_TooltipPopup_o *)button)->klass->_2).naturalAligment < bVar1) ||
         ((((UI_TooltipPopup_o *)button)->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet))
      goto label_0435fb41;
    }
    pCVar6 = (Characters_HumanStats_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(pCVar6,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if (((UI_TooltipPopup_o *)button == (UI_TooltipPopup_o *)0x0) ||
       (pUVar3 = (((UI_TooltipPopup_o *)((long)button + 200))->fields).DoublePanelLeft,
       pUVar3 == (UnityEngine_Transform_o *)0x0)) goto label_0435fb37;
    str = pUVar3[1].klass;
    if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar6 = Characters_HumanStats__Deserialize(pCVar6,(System_String_o *)str,(MethodInfo *)0x0);
    if (pCVar6 == (Characters_HumanStats_o *)0x0) goto label_0435fb37;
    __this_01 = (Settings_TypedSetting_T__o *)
                (((UI_TooltipPopup_o *)((long)button + 200))->fields).DoublePanelLeft;
    value = Characters_HumanStats__Serialize(pCVar6,(MethodInfo *)0x0);
    button = (System_String_o *)0x0;
    if (__this_01 == (Settings_TypedSetting_T__o *)0x0) goto label_0435fb37;
    Settings_TypedSetting_object___set_Value(__this_01,(Il2CppObject *)value,MethodInfo_Void_set_Value);
    plVar8 = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    plVar4 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    button = (System_String_o *)plVar8;
    if (plVar4 == (long *)0x0) goto label_0435fb37;
    if ((*(byte *)(TypeInfo_CharacterEditorMenu + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorMenu + 0x130) * 8) == TypeInfo_CharacterEditorMenu)
       ) {
      lVar2 = *plVar4;
      if ((*(byte *)(TypeInfo_CharacterEditorMenu + 0x130) <= *(byte *)(lVar2 + 0x130)) &&
         (*(long *)(*(long *)(lVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorMenu + 0x130) * 8) == TypeInfo_CharacterEditorMenu)
         ) {
        (**(code **)(lVar2 + 0x1b8))(plVar4,0,*(undefined8 *)(lVar2 + 0x1c0));
        goto label_0435fb0e;
      }
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  button = (System_String_o *)plVar8;
label_0435fb41:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057ae196 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    g_data_057ae196 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
  (((UI_TooltipPopup_o *)button)->fields)._panel = (UnityEngine_RectTransform_o *)pSVar7;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)button)->fields)._panel,pSVar7);
  pSVar7 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar7,MethodInfo_Dictionary_2_System_String_System_String);
  (((UI_TooltipPopup_o *)button)->fields).Caller = (UnityEngine_Component_o *)pSVar7;
  il2cpp_runtime_helper_022b4080(&(((UI_TooltipPopup_o *)button)->fields).Caller);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)button,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$OnPerkChanged
// il2cpp: void UI_CharacterEditorEditPerksPopup__OnPerkChanged (UI_CharacterEditorEditPerksPopup_o* __this, System_String_o* perkName, const MethodInfo* method);
// 0x435f0b0

void UI_CharacterEditorEditPerksPopup__OnPerkChanged
               (UI_CharacterEditorEditPerksPopup_o *__this,System_String_o *perkName,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar5;
  System_Collections_Hashtable_o *str;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  UnityEngine_UI_Text_o *pUVar7;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  char cVar8;
  int32_t iVar9;
  bool_conflict bVar10;
  int iVar11;
  Characters_HumanStats_o *__this_05;
  Il2CppObject *pIVar12;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  System_String_array *values;
  UnityEngine_GameObject_o *__this_07;
  UnityEngine_Transform_o *pUVar13;
  System_String_o *pSVar14;
  long *plVar15;
  Characters_HumanStats_o *unaff_RBX;
  int iVar16;
  Settings_BaseSetSetting_o *unaff_R12;
  Settings_BaseSetSetting_o *pSVar17;
  Settings_BaseSetSetting_o *pSVar18;
  undefined1 auVar19 [12];
  undefined4 in_stack_ffffffffffffff78;
  int in_stack_ffffffffffffff7c;
  Settings_BaseSetSetting_o *in_stack_ffffffffffffff80;
  undefined4 in_stack_ffffffffffffff88;
  int32_t iVar20;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *local_68;
  Il2CppType *pIStack_60;
  Settings_BaseSetSetting_o *local_58;
  undefined1 local_48 [16];
  Settings_BaseSetSetting_o *local_38;
  
  if (g_data_057ae195 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Text_GetComponent_Text);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePerk_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanStats);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"<b>");
    il2cpp_runtime_helper_023445d0(&"Text");
    il2cpp_runtime_helper_023445d0(&"</b>\n(");
    il2cpp_runtime_helper_023445d0(&"</b>");
    il2cpp_runtime_helper_023445d0(&"<b>Points left: ");
    il2cpp_runtime_helper_023445d0(&"/");
    il2cpp_runtime_helper_023445d0(&")");
    g_data_057ae195 = '\x01';
  }
  local_68 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Settings_BaseSetSetting_o *)0x0;
  iVar20 = 0;
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar4 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto label_0435f7c3;
  unaff_R12 = Settings_SetSettingsContainer_object___GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
  if (unaff_R12 != (Settings_BaseSetSetting_o *)0x0) {
    bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    __this_05 = unaff_RBX;
    iVar16 = in_stack_ffffffffffffff7c;
    pSVar18 = in_stack_ffffffffffffff80;
    if ((unaff_R12->klass->_2).naturalAligment < bVar2) goto label_0435f7c8;
    if ((unaff_R12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_HumanCustomSet) goto label_0435f7c8;
  }
  unaff_RBX = (Characters_HumanStats_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanStats);
  Characters_HumanStats___ctor(unaff_RBX,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
  if ((unaff_R12 == (Settings_BaseSetSetting_o *)0x0) ||
     (pSVar5 = unaff_R12[4].fields.Settings,
     pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) goto label_0435f7c3;
  str = (pSVar5->fields)._objectsTable;
  if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_05 = Characters_HumanStats__Deserialize(unaff_RBX,(System_String_o *)str,(MethodInfo *)0x0);
  if (__this_05 == (Characters_HumanStats_o *)0x0) goto label_0435f7c3;
  iVar16 = **(int **)(TypeInfo_HumanStats + 0xb8);
  iVar9 = Characters_HumanStats__GetPerkPoints(__this_05,(MethodInfo *)0x0);
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_05->fields).Perks;
  unaff_RBX = __this_05;
  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0435f7c3;
  bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                     (pSVar6,(Il2CppObject *)perkName,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar10 == '\0') goto label_0435f3c4;
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_05->fields).Perks;
  if ((pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar6,(Il2CppObject *)perkName,MethodInfo_BasePerk_get_Item), pIVar12 == (Il2CppObject *)0x0))
  goto label_0435f7c3;
  iVar3 = *(int *)((long)&pIVar12[1].klass + 4);
  iVar11 = (*pIVar12->klass->vtable[5].methodPtr)(pIVar12,pIVar12->klass->vtable[5].method);
  if ((iVar9 < iVar16) && (iVar3 < iVar11)) {
    cVar8 = (*pIVar12->klass->vtable[7].methodPtr)
                      (pIVar12,(__this_05->fields).Perks,pIVar12->klass->vtable[7].method);
    if (cVar8 == '\0') goto label_0435f3c4;
    piVar1 = (int *)((long)&pIVar12[1].klass + 4);
    *piVar1 = *piVar1 + 1;
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._perkButtons;
  }
  else {
    *(undefined4 *)((long)&pIVar12[1].klass + 4) = 0;
label_0435f3c4:
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._perkButtons;
  }
  if ((pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar18 = unaff_R12,
     __this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar6,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Uni),
     in_stack_ffffffffffffff7c = iVar16, in_stack_ffffffffffffff80 = pSVar18,
     __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)local_48,
               __this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    local_58 = local_38;
    local_68 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
               local_48._0_8_;
    pIStack_60 = (Il2CppType *)local_48._8_8_;
    pSVar17 = unaff_R12;
    while( true ) {
      __this_01.fields._dictionary._4_4_ = iVar16;
      __this_01.fields._dictionary._0_4_ = in_stack_ffffffffffffff78;
      __this_01.fields._8_8_ = pSVar18;
      __this_01.fields._currentKey._0_4_ = in_stack_ffffffffffffff88;
      __this_01.fields._currentKey._4_4_ = iVar20;
      bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                         (__this_01,(MethodInfo_3251B20 *)&local_68);
      unaff_R12 = local_58;
      if ((char)bVar10 == '\0') {
        __this_02.fields._dictionary._4_4_ = iVar16;
        __this_02.fields._dictionary._0_4_ = in_stack_ffffffffffffff78;
        __this_02.fields._8_8_ = pSVar18;
        __this_02.fields._currentKey._0_4_ = in_stack_ffffffffffffff88;
        __this_02.fields._currentKey._4_4_ = iVar20;
        System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251B10 *)&local_68);
        in_stack_ffffffffffffff7c = iVar16;
        in_stack_ffffffffffffff80 = pSVar18;
        goto label_0435f6b0;
      }
      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this_05->fields).Perks;
      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
      pIVar12 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar6,(Il2CppObject *)local_58,MethodInfo_BasePerk_get_Item);
      if (pIVar12 == (Il2CppObject *)0x0) goto label_0435f78c;
      cVar8 = (*pIVar12->klass->vtable[7].methodPtr)
                        (pIVar12,(__this_05->fields).Perks,pIVar12->klass->vtable[7].method);
      if (cVar8 == '\0') {
        *(undefined4 *)((long)&pIVar12[1].klass + 4) = 0;
      }
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar14 = Utility_Util__PascalToSentence((System_String_o *)unaff_R12,(MethodInfo *)0x0);
      values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,7);
      if (values == (System_String_array *)0x0) goto label_0435f791;
      if ((int)values->max_length == 0) goto label_0435f796;
      values->m_Items[0] = "<b>";
      il2cpp_runtime_helper_022b4080(values->m_Items);
      pSVar17 = unaff_R12;
      if ((uint)values->max_length < 2) {
label_0435f782:
        il2cpp_runtime_helper_022b2ca0();
        break;
      }
      values->m_Items[1] = pSVar14;
      il2cpp_runtime_helper_022b4080(values->m_Items + 1,pSVar14);
      if ((uint)values->max_length < 3) {
label_0435f77d:
        il2cpp_runtime_helper_022b2ca0();
        goto label_0435f782;
      }
      values->m_Items[2] = "</b>\n(";
      il2cpp_runtime_helper_022b4080(values->m_Items + 2);
      pSVar14 = System_Int32__ToString((int)pIVar12 + 0x14,(MethodInfo *)0x0);
      if ((uint)values->max_length < 4) goto label_0435f7b9;
      values->m_Items[3] = pSVar14;
      il2cpp_runtime_helper_022b4080(values->m_Items + 3,pSVar14);
      if ((uint)values->max_length < 5) {
        il2cpp_runtime_helper_022b2ca0();
        goto label_0435f77d;
      }
      values->m_Items[4] = "/";
      il2cpp_runtime_helper_022b4080(values->m_Items + 4);
      iVar20 = (*pIVar12->klass->vtable[5].methodPtr)(pIVar12);
      pSVar14 = System_Int32__ToString((int32_t)&stack0xffffffffffffff8c,(MethodInfo *)0x0);
      if ((uint)values->max_length < 6) goto label_0435f79b;
      values->m_Items[5] = pSVar14;
      il2cpp_runtime_helper_022b4080(values->m_Items + 5,pSVar14);
      if ((uint)values->max_length < 7) goto label_0435f7be;
      values->m_Items[6] = ")";
      il2cpp_runtime_helper_022b4080(values->m_Items + 6);
      pSVar14 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._perkButtons;
      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0435f7a0;
      __this_07 = (UnityEngine_GameObject_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar6,(Il2CppObject *)unaff_R12,MethodInfo_GameObject_get_Item);
      if (__this_07 == (UnityEngine_GameObject_o *)0x0) goto label_0435f7a5;
      pUVar13 = UnityEngine_GameObject__get_transform(__this_07,(MethodInfo *)0x0);
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_0435f7aa;
      pUVar13 = UnityEngine_Transform__Find(pUVar13,"Text",(MethodInfo *)0x0);
      if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_0435f7af;
      pIVar12 = UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar13,MethodInfo_Text_GetComponent_Text);
      if (pIVar12 == (Il2CppObject *)0x0) goto label_0435f7b4;
      (*pIVar12->klass->vtable[0x4b].methodPtr)(pIVar12,pSVar14,pIVar12->klass->vtable[0x4b].method);
    }
    unaff_R12 = pSVar17;
    il2cpp_runtime_helper_022b2c90();
label_0435f78c:
    il2cpp_runtime_helper_022b2c90();
label_0435f791:
    il2cpp_runtime_helper_022b2c90();
label_0435f796:
    il2cpp_runtime_helper_022b2ca0();
label_0435f79b:
    il2cpp_runtime_helper_022b2ca0();
label_0435f7a0:
    il2cpp_runtime_helper_022b2c90();
label_0435f7a5:
    il2cpp_runtime_helper_022b2c90();
label_0435f7aa:
    il2cpp_runtime_helper_022b2c90();
label_0435f7af:
    il2cpp_runtime_helper_022b2c90();
label_0435f7b4:
    il2cpp_runtime_helper_022b2c90();
label_0435f7b9:
    il2cpp_runtime_helper_022b2ca0();
label_0435f7be:
    il2cpp_runtime_helper_022b2ca0();
    in_stack_ffffffffffffff7c = iVar16;
    in_stack_ffffffffffffff80 = pSVar18;
  }
label_0435f7c3:
  while( true ) {
    il2cpp_runtime_helper_022b2c90();
    __this_05 = unaff_RBX;
    iVar16 = in_stack_ffffffffffffff7c;
    pSVar18 = in_stack_ffffffffffffff80;
label_0435f7c8:
    auVar19 = il2cpp_runtime_helper_022b2fd0(unaff_R12);
    in_stack_ffffffffffffff7c = iVar16;
    in_stack_ffffffffffffff80 = pSVar18;
    if (auVar19._8_4_ != 1) break;
    plVar15 = (long *)__cxa_begin_catch(auVar19._0_8_);
    lVar4 = *plVar15;
    __cxa_end_catch();
    __this_03.fields._dictionary._4_4_ = in_stack_ffffffffffffff7c;
    __this_03.fields._dictionary._0_4_ = in_stack_ffffffffffffff78;
    __this_03.fields._8_8_ = in_stack_ffffffffffffff80;
    __this_03.fields._currentKey._0_4_ = in_stack_ffffffffffffff88;
    __this_03.fields._currentKey._4_4_ = iVar20;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)&local_68);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      break;
    }
label_0435f6b0:
    iVar20 = Characters_HumanStats__GetPerkPoints(__this_05,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._pointsLeftLabel;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R12 = (Settings_BaseSetSetting_o *)(ulong)(uint)(iVar16 - iVar20);
    iVar20 = System_Math__Max_3cb7c30(0,iVar16 - iVar20,(MethodInfo *)0x0);
    pSVar14 = System_Int32__ToString((int32_t)&stack0xffffffffffffff8c,(MethodInfo *)0x0);
    pSVar14 = System_String__Concat_3af7150("<b>Points left: ",pSVar14,"</b>",(MethodInfo *)0x0);
    unaff_RBX = __this_05;
    if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar7->klass->vtable)._75_set_text.methodPtr)
                (pUVar7,pSVar14,(pUVar7->klass->vtable)._75_set_text.method);
      pSVar5 = pSVar18[4].fields.Settings;
      pSVar14 = Characters_HumanStats__Serialize(__this_05,(MethodInfo *)0x0);
      if (pSVar5 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        Settings_TypedSetting_object___set_Value
                  ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar14,MethodInfo_Void_set_Value);
        return;
      }
    }
  }
  __this_04.fields._dictionary._4_4_ = in_stack_ffffffffffffff7c;
  __this_04.fields._dictionary._0_4_ = in_stack_ffffffffffffff78;
  __this_04.fields._8_8_ = in_stack_ffffffffffffff80;
  __this_04.fields._currentKey._0_4_ = in_stack_ffffffffffffff88;
  __this_04.fields._currentKey._4_4_ = iVar20;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251B10 *)&local_68);
  _Unwind_Resume(auVar19._0_8_);
}


// UI.CharacterEditorEditPerksPopup$$.ctor
// il2cpp: void UI_CharacterEditorEditPerksPopup___ctor (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x435fb50

void UI_CharacterEditorEditPerksPopup___ctor(UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
  if (g_data_057ae196 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    g_data_057ae196 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar1,MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
  (__this->fields)._perkButtons = (System_Collections_Generic_Dictionary_string__GameObject__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._perkButtons,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar1,MethodInfo_Dictionary_2_System_String_System_String);
  (__this->fields)._perkDescriptions = (System_Collections_Generic_Dictionary_string__string__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._perkDescriptions);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$<Setup>b__15_0
// il2cpp: void UI_CharacterEditorEditPerksPopup___Setup_b__15_0 (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x435fc20

void UI_CharacterEditorEditPerksPopup___Setup_b__15_0
               (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae197 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Save");
    g_data_057ae197 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorEditPerksPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.CharacterEditorEditPerksPopup$$<Setup>b__15_1
// il2cpp: void UI_CharacterEditorEditPerksPopup___Setup_b__15_1 (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x435fc60

void UI_CharacterEditorEditPerksPopup___Setup_b__15_1
               (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (g_data_057ae198 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Back");
    g_data_057ae198 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorEditPerksPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


