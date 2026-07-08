// Type: UI.CharacterEditorEditPerksPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/CharacterEditorEditPerksPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorEditPerksPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.CharacterEditorEditPerksPopup.<>c__DisplayClass16_0$$.ctor
// il2cpp: void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___ctor (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x4051a20

void UI_CharacterEditorEditPerksPopup_<>c__DisplayClass16_0___ctor
               (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup.<>c__DisplayClass16_0$$<CreatePerkButton>b__0
// il2cpp: void UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0___CreatePerkButton_b__0 (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x4051e20

void UI_CharacterEditorEditPerksPopup_<>c__DisplayClass16_0__<CreatePerkButton>b__0
               (UI_CharacterEditorEditPerksPopup___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  UI_CharacterEditorEditPerksPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_CharacterEditorEditPerksPopup_o *)0x0) {
    UI_CharacterEditorEditPerksPopup__OnPerkChanged(__this_00,(__this->fields).name,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorEditPerksPopup$$get_Title
// il2cpp: System_String_o* UI_CharacterEditorEditPerksPopup__get_Title (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x4050a10

System_String_o *
UI_CharacterEditorEditPerksPopup__get_Title
          (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704416 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"CharacterEditor");
    il2cpp_init_method_metadata(&"Perks");
    il2cpp_init_method_metadata(&"");
    DAT_05704416 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("CharacterEditor","Perks","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.CharacterEditorEditPerksPopup$$get_Width
// il2cpp: float UI_CharacterEditorEditPerksPopup__get_Width (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x4050ab0

float UI_CharacterEditorEditPerksPopup__get_Width
                (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 580.0;
}


// UI.CharacterEditorEditPerksPopup$$get_Height
// il2cpp: float UI_CharacterEditorEditPerksPopup__get_Height (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x4050ac0

float UI_CharacterEditorEditPerksPopup__get_Height
                (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 590.0;
}


// UI.CharacterEditorEditPerksPopup$$get_VerticalSpacing
// il2cpp: float UI_CharacterEditorEditPerksPopup__get_VerticalSpacing (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x4050ad0

float UI_CharacterEditorEditPerksPopup__get_VerticalSpacing
                (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 25.0;
}


// UI.CharacterEditorEditPerksPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_CharacterEditorEditPerksPopup__get_HorizontalPadding (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x4050ae0

int32_t UI_CharacterEditorEditPerksPopup__get_HorizontalPadding
                  (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 0x3c;
}


// UI.CharacterEditorEditPerksPopup$$get_VerticalPadding
// il2cpp: int32_t UI_CharacterEditorEditPerksPopup__get_VerticalPadding (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x4050af0

int32_t UI_CharacterEditorEditPerksPopup__get_VerticalPadding
                  (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.CharacterEditorEditPerksPopup$$Setup
// il2cpp: void UI_CharacterEditorEditPerksPopup__Setup (UI_CharacterEditorEditPerksPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4050b00

void UI_CharacterEditorEditPerksPopup__Setup
               (UI_CharacterEditorEditPerksPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method
               )

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  System_Collections_Hashtable_o *str;
  System_String_o *pSVar4;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar5;
  Settings_BaseSetSetting_o *pSVar6;
  Characters_HumanStats_o *__this_02;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_UI_Text_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_05704417 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__15_1);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanStats);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Allow air-dash up or down depending on camera.");
    il2cpp_init_method_metadata(&"AdvancedAlloy");
    il2cpp_init_method_metadata(&"DurableBlades");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Reduces gas refill time.");
    il2cpp_init_method_metadata(&"Blades consume no durability, but break immediately on low speed hits.");
    il2cpp_init_method_metadata(&"RefillTime");
    il2cpp_init_method_metadata(&"Allow air-dash in any direction depending on camera.");
    il2cpp_init_method_metadata(&"Have fewer but more durable blades.");
    il2cpp_init_method_metadata(&"Save");
    il2cpp_init_method_metadata(&"OmniDash");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Points Left");
    il2cpp_init_method_metadata(&"VerticalDash");
    DAT_05704417 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x18,130.0,20.0,pSVar4,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = UI_UIManager__GetLocaleCommon("Save",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar9,__this_01,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  pUVar9 = (__this->fields).BottomBar;
  pSVar4 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar5 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar9,__this_01,pSVar4,0.0,pUVar5,(MethodInfo *)0x0);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar6 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pSVar6 != (Settings_BaseSetSetting_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar6);
      }
    }
    __this_02 = (Characters_HumanStats_o *)il2cpp_runtime_glue(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(__this_02,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((pSVar6 != (Settings_BaseSetSetting_o *)0x0) &&
       (pSVar3 = pSVar6[4].fields.Settings,
       pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
      str = (pSVar3->fields)._objectsTable;
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Characters_HumanStats__Deserialize(__this_02,(System_String_o *)str,(MethodInfo *)0x0);
      method_01 = (MethodInfo *)0x0;
      pUVar7 = UI_ElementFactory__CreateDefaultLabel
                         ((__this->fields).SinglePanel,__this_01,"Points Left",0,4,(MethodInfo *)0x0)
      ;
      if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = (UnityEngine_UI_Text_o *)
                 UnityEngine_GameObject__GetComponent<object>(pUVar7,MethodInfo_Text_GetComponent_Text);
        (__this->fields)._pointsLeftLabel = pUVar8;
        il2cpp_runtime_glue(&(__this->fields)._pointsLeftLabel,pUVar8);
        pUVar7 = UI_ElementFactory__CreateHorizontalGroup
                           ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
        if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
          pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
          UI_CharacterEditorEditPerksPopup__CreatePerkButton
                    (__this,pUVar9,__this_01,"RefillTime","Reduces gas refill time.",method_01);
          pUVar7 = UI_ElementFactory__CreateHorizontalGroup
                             ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
            pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
            UI_CharacterEditorEditPerksPopup__CreatePerkButton
                      (__this,pUVar9,__this_01,"DurableBlades","Have fewer but more durable blades.",method_01);
            if (DAT_05704419 == '\0') {
              il2cpp_init_method_metadata(&"Icons/Navigation/ArrowRightIcon");
              DAT_05704419 = '\x01';
            }
            UI_ElementFactory__CreateRawImage
                      (pUVar9,__this_01,"Icons/Navigation/ArrowRightIcon",32.0,32.0,(MethodInfo *)0x0);
            UI_CharacterEditorEditPerksPopup__CreatePerkButton
                      (__this,pUVar9,__this_01,"AdvancedAlloy","Blades consume no durability, but break immediately on low speed hits.",method_01);
            pUVar7 = UI_ElementFactory__CreateHorizontalGroup
                               ((__this->fields).SinglePanel,20.0,3,(MethodInfo *)0x0);
            if (pUVar7 != (UnityEngine_GameObject_o *)0x0) {
              pUVar9 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
              UI_CharacterEditorEditPerksPopup__CreatePerkButton
                        (__this,pUVar9,__this_01,"VerticalDash","Allow air-dash up or down depending on camera.",method_01);
              if (DAT_05704419 == '\0') {
                il2cpp_init_method_metadata(&"Icons/Navigation/ArrowRightIcon");
                DAT_05704419 = '\x01';
              }
              UI_ElementFactory__CreateRawImage
                        (pUVar9,__this_01,"Icons/Navigation/ArrowRightIcon",32.0,32.0,(MethodInfo *)0x0);
              UI_CharacterEditorEditPerksPopup__CreatePerkButton
                        (__this,pUVar9,__this_01,"OmniDash","Allow air-dash in any direction depending on camera.",method_01);
              UI_CharacterEditorEditPerksPopup__OnPerkChanged(__this,"",method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorEditPerksPopup$$CreatePerkButton
// il2cpp: void UI_CharacterEditorEditPerksPopup__CreatePerkButton (UI_CharacterEditorEditPerksPopup_o* __this, UnityEngine_Transform_o* group, UI_ElementStyle_o* style, System_String_o* name, System_String_o* desc, const MethodInfo* method);
// 0x4051070

void UI_CharacterEditorEditPerksPopup__CreatePerkButton
               (UI_CharacterEditorEditPerksPopup_o *__this,UnityEngine_Transform_o *group,
               UI_ElementStyle_o *style,System_String_o *name,System_String_o *desc,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_String_o *title;
  Il2CppObject *__this_00;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *value;
  
  if (DAT_05704418 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreatePerkButton_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass16_0);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    DAT_05704418 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass16_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1,__this);
    __this_00[1].monitor = name;
    il2cpp_runtime_glue(&__this_00[1].monitor,name);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._perkDescriptions;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,__this_00[1].monitor,(Il2CppObject *)desc,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._perkButtons;
      title = __this_00[1].monitor;
      onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
      UnityEngine_Events_UnityAction___ctor();
      value = UI_ElementFactory__CreatePerkButton
                        (group,style,title,desc,195.0,95.0,120.0,onClick,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar1,(Il2CppObject *)title,(Il2CppObject *)value,MethodInfo_Void_Add);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorEditPerksPopup$$CreateArrow
// il2cpp: void UI_CharacterEditorEditPerksPopup__CreateArrow (UI_CharacterEditorEditPerksPopup_o* __this, UnityEngine_Transform_o* group, UI_ElementStyle_o* style, const MethodInfo* method);
// 0x40511e0

void UI_CharacterEditorEditPerksPopup__CreateArrow
               (UI_CharacterEditorEditPerksPopup_o *__this,UnityEngine_Transform_o *group,
               UI_ElementStyle_o *style,MethodInfo *method)

{
  if (DAT_05704419 == '\0') {
    il2cpp_init_method_metadata(&"Icons/Navigation/ArrowRightIcon");
    DAT_05704419 = '\x01';
  }
  UI_ElementFactory__CreateRawImage(group,style,"Icons/Navigation/ArrowRightIcon",32.0,32.0,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$OnButtonClick
// il2cpp: void UI_CharacterEditorEditPerksPopup__OnButtonClick (UI_CharacterEditorEditPerksPopup_o* __this, System_String_o* button, const MethodInfo* method);
// 0x4051a30

void UI_CharacterEditorEditPerksPopup__OnButtonClick
               (UI_CharacterEditorEditPerksPopup_o *__this,System_String_o *button,
               MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  Settings_SetSettingsContainer_T__o *__this_00;
  System_Collections_Specialized_OrderedDictionary_o *pSVar3;
  System_Collections_Hashtable_o *str;
  long *plVar4;
  bool_conflict bVar5;
  Settings_BaseSetSetting_o *pSVar6;
  Characters_HumanStats_o *pCVar7;
  System_String_o *value;
  
  if (DAT_0570441a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorMenu);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanStats);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Save");
    DAT_0570441a = '\x01';
  }
  bVar5 = System_String__op_Equality(button,"Back",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
LAB_04051c8e:
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  bVar5 = System_String__op_Equality(button,"Save",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar2 != 0) &&
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar2 + 0x20),
     __this_00 != (Settings_SetSettingsContainer_T__o *)0x0)) {
    pSVar6 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (pSVar6 != (Settings_BaseSetSetting_o *)0x0) {
      bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((pSVar6->klass->_2).naturalAligment < bVar1) ||
         ((pSVar6->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar6);
      }
    }
    pCVar7 = (Characters_HumanStats_o *)il2cpp_runtime_glue(TypeInfo_HumanStats);
    Characters_HumanStats___ctor(pCVar7,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
    if ((pSVar6 != (Settings_BaseSetSetting_o *)0x0) &&
       (pSVar3 = pSVar6[4].fields.Settings,
       pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0)) {
      str = (pSVar3->fields)._objectsTable;
      if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar7 = Characters_HumanStats__Deserialize(pCVar7,(System_String_o *)str,(MethodInfo *)0x0);
      if (pCVar7 != (Characters_HumanStats_o *)0x0) {
        pSVar3 = pSVar6[4].fields.Settings;
        value = Characters_HumanStats__Serialize(pCVar7,(MethodInfo *)0x0);
        if (pSVar3 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
          Settings_TypedSetting<object>__set_Value
                    ((Settings_TypedSetting_T__o *)pSVar3,(Il2CppObject *)value,MethodInfo_Void_set_Value);
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          plVar4 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar4 != (long *)0x0) {
            if ((*(byte *)(TypeInfo_CharacterEditorMenu + 0x130) <= *(byte *)(*plVar4 + 0x130)) &&
               (*(long *)(*(long *)(*plVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorMenu + 0x130) * 8
                         ) == TypeInfo_CharacterEditorMenu)) {
              lVar2 = *plVar4;
              if ((*(byte *)(TypeInfo_CharacterEditorMenu + 0x130) <= *(byte *)(lVar2 + 0x130)) &&
                 (*(long *)(*(long *)(lVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_CharacterEditorMenu + 0x130) * 8
                           ) == TypeInfo_CharacterEditorMenu)) {
                (**(code **)(lVar2 + 0x1b8))(plVar4,0,*(undefined8 *)(lVar2 + 0x1c0));
                goto LAB_04051c8e;
              }
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorEditPerksPopup$$OnPerkChanged
// il2cpp: void UI_CharacterEditorEditPerksPopup__OnPerkChanged (UI_CharacterEditorEditPerksPopup_o* __this, System_String_o* perkName, const MethodInfo* method);
// 0x4051230

void UI_CharacterEditorEditPerksPopup__OnPerkChanged
               (UI_CharacterEditorEditPerksPopup_o *__this,System_String_o *perkName,
               MethodInfo *method)

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
  char cVar8;
  int32_t iVar9;
  bool_conflict bVar10;
  int iVar11;
  Settings_BaseSetSetting_o *pSVar12;
  Characters_HumanStats_o *pCVar13;
  Il2CppObject *pIVar14;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  System_String_o *pSVar15;
  System_String_array *values;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_Transform_o *pUVar16;
  System_String_o *pSVar17;
  undefined4 in_stack_ffffffffffffff78;
  int iVar18;
  undefined4 in_stack_ffffffffffffff88;
  undefined4 uVar19;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *local_68;
  Il2CppType *pIStack_60;
  System_String_o *local_58;
  undefined1 local_48 [16];
  System_String_o *local_38;
  
  if (DAT_0570441b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_BasePerk_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanStats);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"<b>");
    il2cpp_init_method_metadata(&"Text");
    il2cpp_init_method_metadata(&"</b>\n(");
    il2cpp_init_method_metadata(&"</b>");
    il2cpp_init_method_metadata(&"<b>Points left: ");
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&")");
    DAT_0570441b = '\x01';
  }
  local_68 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (System_String_o *)0x0;
  uVar19 = 0;
  lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if ((lVar4 == 0) ||
     (__this_00 = *(Settings_SetSettingsContainer_T__o **)(lVar4 + 0x20),
     __this_00 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_04051943;
  pSVar12 = Settings_SetSettingsContainer<object>__GetSelectedSet(__this_00,MethodInfo_BaseSetSetting_GetSelectedSet);
  if (pSVar12 != (Settings_BaseSetSetting_o *)0x0) {
    bVar2 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    if (((pSVar12->klass->_2).naturalAligment < bVar2) ||
       ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar12);
    }
  }
  pCVar13 = (Characters_HumanStats_o *)il2cpp_runtime_glue(TypeInfo_HumanStats);
  Characters_HumanStats___ctor(pCVar13,(Characters_Human_o *)0x0,(MethodInfo *)0x0);
  if ((pSVar12 == (Settings_BaseSetSetting_o *)0x0) ||
     (pSVar5 = pSVar12[4].fields.Settings,
     pSVar5 == (System_Collections_Specialized_OrderedDictionary_o *)0x0)) goto LAB_04051943;
  str = (pSVar5->fields)._objectsTable;
  if (*(int *)(TypeInfo_HumanStats + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pCVar13 = Characters_HumanStats__Deserialize(pCVar13,(System_String_o *)str,(MethodInfo *)0x0);
  if (pCVar13 == (Characters_HumanStats_o *)0x0) goto LAB_04051943;
  iVar18 = **(int **)(TypeInfo_HumanStats + 0xb8);
  iVar9 = Characters_HumanStats__GetPerkPoints(pCVar13,(MethodInfo *)0x0);
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar13->fields).Perks;
  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_04051943;
  bVar10 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                     (pSVar6,(Il2CppObject *)perkName,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar10 == '\0') goto LAB_04051544;
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar13->fields).Perks;
  if ((pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (pIVar14 = System_Collections_Generic_Dictionary<object__object>__get_Item
                          (pSVar6,(Il2CppObject *)perkName,MethodInfo_BasePerk_get_Item),
     pIVar14 == (Il2CppObject *)0x0)) goto LAB_04051943;
  iVar3 = *(int *)((long)&pIVar14[1].klass + 4);
  iVar11 = (*pIVar14->klass->vtable[5].methodPtr)(pIVar14,pIVar14->klass->vtable[5].method);
  if ((iVar9 < iVar18) && (iVar3 < iVar11)) {
    cVar8 = (*pIVar14->klass->vtable[7].methodPtr)
                      (pIVar14,(pCVar13->fields).Perks,pIVar14->klass->vtable[7].method);
    if (cVar8 == '\0') goto LAB_04051544;
    piVar1 = (int *)((long)&pIVar14[1].klass + 4);
    *piVar1 = *piVar1 + 1;
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._perkButtons;
  }
  else {
    *(undefined4 *)((long)&pIVar14[1].klass + 4) = 0;
LAB_04051544:
    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._perkButtons;
  }
  if ((pSVar6 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_03 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                            (pSVar6,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     __this_03 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
               local_48,__this_03,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    local_58 = local_38;
    local_68 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
               local_48._0_8_;
    pIStack_60 = (Il2CppType *)local_48._8_8_;
    while (__this_01.fields._dictionary._4_4_ = iVar18,
          __this_01.fields._dictionary._0_4_ = in_stack_ffffffffffffff78,
          __this_01.fields._8_8_ = pSVar12,
          __this_01.fields._currentKey._0_4_ = in_stack_ffffffffffffff88,
          __this_01.fields._currentKey._4_4_ = uVar19,
          bVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                             (__this_01,(MethodInfo_31D0850 *)&local_68), pSVar17 = local_58,
          (char)bVar10 != '\0') {
      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar13->fields).Perks;
      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar14 = System_Collections_Generic_Dictionary<object__object>__get_Item
                          (pSVar6,(Il2CppObject *)local_58,MethodInfo_BasePerk_get_Item);
      if (pIVar14 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      cVar8 = (*pIVar14->klass->vtable[7].methodPtr)
                        (pIVar14,(pCVar13->fields).Perks,pIVar14->klass->vtable[7].method);
      if (cVar8 == '\0') {
        *(undefined4 *)((long)&pIVar14[1].klass + 4) = 0;
      }
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar15 = Utility_Util__PascalToSentence(pSVar17,(MethodInfo *)0x0);
      values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,7);
      if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((int)values->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      values->m_Items[0] = "<b>";
      il2cpp_runtime_glue(values->m_Items);
      if ((uint)values->max_length < 2) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      values->m_Items[1] = pSVar15;
      il2cpp_runtime_glue(values->m_Items + 1,pSVar15);
      if ((uint)values->max_length < 3) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      values->m_Items[2] = "</b>\n(";
      il2cpp_runtime_glue(values->m_Items + 2);
      pSVar15 = System_Int32__ToString((int)pIVar14 + 0x14,(MethodInfo *)0x0);
      if ((uint)values->max_length < 4) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      values->m_Items[3] = pSVar15;
      il2cpp_runtime_glue(values->m_Items + 3,pSVar15);
      if ((uint)values->max_length < 5) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      values->m_Items[4] = "/";
      il2cpp_runtime_glue(values->m_Items + 4);
      uVar19 = (*pIVar14->klass->vtable[5].methodPtr)(pIVar14);
      pSVar15 = System_Int32__ToString((int32_t)&stack0xffffffffffffff8c,(MethodInfo *)0x0);
      if ((uint)values->max_length < 6) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      values->m_Items[5] = pSVar15;
      il2cpp_runtime_glue(values->m_Items + 5,pSVar15);
      if ((uint)values->max_length < 7) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      values->m_Items[6] = ")";
      il2cpp_runtime_glue(values->m_Items + 6);
      pSVar15 = System_String__Concat(values,(MethodInfo *)0x0);
      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._perkButtons;
      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      __this_04 = (UnityEngine_GameObject_o *)
                  System_Collections_Generic_Dictionary<object__object>__get_Item
                            (pSVar6,(Il2CppObject *)pSVar17,MethodInfo_GameObject_get_Item);
      if (__this_04 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar16 = UnityEngine_GameObject__get_transform(__this_04,(MethodInfo *)0x0);
      if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pUVar16 = UnityEngine_Transform__Find(pUVar16,"Text",(MethodInfo *)0x0);
      if (pUVar16 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar14 = UnityEngine_Component__GetComponent<object>
                          ((UnityEngine_Component_o *)pUVar16,MethodInfo_Text_GetComponent_Text);
      if (pIVar14 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*pIVar14->klass->vtable[0x4b].methodPtr)(pIVar14,pSVar15,pIVar14->klass->vtable[0x4b].method)
      ;
    }
    __this_02.fields._dictionary._4_4_ = iVar18;
    __this_02.fields._dictionary._0_4_ = in_stack_ffffffffffffff78;
    __this_02.fields._8_8_ = pSVar12;
    __this_02.fields._currentKey._0_4_ = in_stack_ffffffffffffff88;
    __this_02.fields._currentKey._4_4_ = uVar19;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
              (__this_02,(MethodInfo_31D0840 *)&local_68);
    iVar9 = Characters_HumanStats__GetPerkPoints(pCVar13,(MethodInfo *)0x0);
    pUVar7 = (__this->fields)._pointsLeftLabel;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_Math__Max(0,iVar18 - iVar9,(MethodInfo *)0x0);
    pSVar17 = System_Int32__ToString((int32_t)&stack0xffffffffffffff8c,(MethodInfo *)0x0);
    pSVar17 = System_String__Concat("<b>Points left: ",pSVar17,"</b>",(MethodInfo *)0x0);
    if (pUVar7 != (UnityEngine_UI_Text_o *)0x0) {
      (*(pUVar7->klass->vtable)._75_set_text.methodPtr)
                (pUVar7,pSVar17,(pUVar7->klass->vtable)._75_set_text.method);
      pSVar5 = pSVar12[4].fields.Settings;
      pSVar17 = Characters_HumanStats__Serialize(pCVar13,(MethodInfo *)0x0);
      if (pSVar5 != (System_Collections_Specialized_OrderedDictionary_o *)0x0) {
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar17,MethodInfo_Void_set_Value);
        return;
      }
    }
  }
LAB_04051943:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.CharacterEditorEditPerksPopup$$.ctor
// il2cpp: void UI_CharacterEditorEditPerksPopup___ctor (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x4051cd0

void UI_CharacterEditorEditPerksPopup___ctor
               (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  
  if (DAT_0570441c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_UnityEngine_GameObjec);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__GameObject);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    DAT_0570441c = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__GameObject);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar1,MethodInfo_Dictionary_2_System_String_UnityEngine_GameObjec);
  (__this->fields)._perkButtons =
       (System_Collections_Generic_Dictionary_string__GameObject__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._perkButtons,pSVar1);
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar1,MethodInfo_Dictionary_2_System_String_System_String);
  (__this->fields)._perkDescriptions =
       (System_Collections_Generic_Dictionary_string__string__o *)pSVar1;
  il2cpp_runtime_glue(&(__this->fields)._perkDescriptions);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.CharacterEditorEditPerksPopup$$<Setup>b__15_0
// il2cpp: void UI_CharacterEditorEditPerksPopup___Setup_b__15_0 (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x4051da0

void UI_CharacterEditorEditPerksPopup__<Setup>b__15_0
               (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570441d == '\0') {
    il2cpp_init_method_metadata(&"Save");
    DAT_0570441d = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorEditPerksPopup__OnButtonClick(__this,"Save",in_RDX);
  return;
}


// UI.CharacterEditorEditPerksPopup$$<Setup>b__15_1
// il2cpp: void UI_CharacterEditorEditPerksPopup___Setup_b__15_1 (UI_CharacterEditorEditPerksPopup_o* __this, const MethodInfo* method);
// 0x4051de0

void UI_CharacterEditorEditPerksPopup__<Setup>b__15_1
               (UI_CharacterEditorEditPerksPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570441e == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_0570441e = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_CharacterEditorEditPerksPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


