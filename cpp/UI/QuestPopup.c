// Type: UI.QuestPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/QuestPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/QuestPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.QuestPopup.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_QuestPopup___c__DisplayClass18_0___ctor (UI_QuestPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x40fe680

void UI_QuestPopup_<>c__DisplayClass18_0___ctor
               (UI_QuestPopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup.<>c__DisplayClass18_0$$<SetupTopButtons>b__0
// il2cpp: void UI_QuestPopup___c__DisplayClass18_0___SetupTopButtons_b__0 (UI_QuestPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x40fe950

void UI_QuestPopup_<>c__DisplayClass18_0__<SetupTopButtons>b__0
               (UI_QuestPopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  UI_QuestPopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_QuestPopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).buttonName,
               (pUVar1->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.QuestPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_QuestPopup___c__DisplayClass21_0___ctor (UI_QuestPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x40fe7e0

void UI_QuestPopup_<>c__DisplayClass21_0___ctor
               (UI_QuestPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup.<>c__DisplayClass21_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_QuestPopup___c__DisplayClass21_0___SetupBottomButtons_b__0 (UI_QuestPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x40fe980

void UI_QuestPopup_<>c__DisplayClass21_0__<SetupBottomButtons>b__0
               (UI_QuestPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_QuestPopup_o *pUVar1;
  System_String_o *a;
  bool_conflict bVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_QuestPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  a = (__this->fields).buttonName;
  if (DAT_05704859 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704859 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.QuestPopup$$get_Title
// il2cpp: System_String_o* UI_QuestPopup__get_Title (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe000

System_String_o * UI_QuestPopup__get_Title(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.QuestPopup$$get_Width
// il2cpp: float UI_QuestPopup__get_Width (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe020

float UI_QuestPopup__get_Width(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return 990.0;
}


// UI.QuestPopup$$get_Height
// il2cpp: float UI_QuestPopup__get_Height (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe030

float UI_QuestPopup__get_Height(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return 740.0;
}


// UI.QuestPopup$$get_CategoryPanel
// il2cpp: bool UI_QuestPopup__get_CategoryPanel (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe040

bool_conflict UI_QuestPopup__get_CategoryPanel(UI_QuestPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.QuestPopup$$get_CategoryButtons
// il2cpp: bool UI_QuestPopup__get_CategoryButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe050

bool_conflict UI_QuestPopup__get_CategoryButtons(UI_QuestPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.QuestPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_QuestPopup__get_DefaultCategoryPanel (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe060

System_String_o *
UI_QuestPopup__get_DefaultCategoryPanel(UI_QuestPopup_o *__this,MethodInfo *method)

{
  if (DAT_05704854 == '\0') {
    il2cpp_init_method_metadata(&"Daily");
    DAT_05704854 = '\x01';
  }
  return "Daily";
}


// UI.QuestPopup$$get_UseSound
// il2cpp: bool UI_QuestPopup__get_UseSound (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe090

bool_conflict UI_QuestPopup__get_UseSound(UI_QuestPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.QuestPopup$$Setup
// il2cpp: void UI_QuestPopup__Setup (UI_QuestPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40fe0a0

void UI_QuestPopup__Setup(UI_QuestPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *parent_00;
  Il2CppClass *item;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  long lVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *__this_01;
  ulong uVar3;
  
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  if (DAT_05704858 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_05704858 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_040fe2ef:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined8 *)(lVar2 + 0x20) = "Back";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar3 = 0;
      do {
        __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Il2CppObject *)0x0) goto LAB_040fe2ea;
        __this_01[1].monitor = __this;
        il2cpp_runtime_glue(&__this_01[1].monitor,__this);
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_040fe2ef;
        __this_01[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar3 * 8);
        il2cpp_runtime_glue(__this_01 + 1);
        parent_00 = (__this->fields).BottomBar;
        item = __this_01[1].klass;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon((System_String_o *)item,(MethodInfo *)0x0);
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton
                  (parent_00,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
    }
    return;
  }
LAB_040fe2ea:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.QuestPopup$$CreateAchievementDropdowns
// il2cpp: void UI_QuestPopup__CreateAchievementDropdowns (UI_QuestPopup_o* __this, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x40fba60

void UI_QuestPopup__CreateAchievementDropdowns
               (UI_QuestPopup_o *__this,UnityEngine_Transform_o *panel,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  System_String_array *pSVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704855 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateAchievementDropdowns_b__17_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreateAchievementDropdowns_b__17_1);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Silver");
    il2cpp_init_method_metadata(&"Bronze");
    il2cpp_init_method_metadata(&"Gold");
    il2cpp_init_method_metadata(&"Completed");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"In Progress");
    DAT_05704855 = '\x01';
    method = extraout_RDX;
  }
  themePanel = (System_String_o *)
               (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method,method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,0.0,20.0,themePanel,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).TierSelection;
  pSVar2 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,3);
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "Bronze";
      il2cpp_runtime_glue(pSVar2->m_Items);
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "Silver";
        il2cpp_runtime_glue(pSVar2->m_Items + 1);
        if (2 < (uint)pSVar2->max_length) {
          pSVar2->m_Items[2] = "Gold";
          il2cpp_runtime_glue(pSVar2->m_Items + 2);
          pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
          UnityEngine_Events_UnityAction___ctor();
          UI_ElementFactory__CreateDropdownSetting
                    (panel,__this_00,(Settings_BaseSetting_o *)pSVar1,"",pSVar2,
                     "",180.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar3,
                     (MethodInfo *)0x0);
          pSVar1 = (__this->fields).CompletedSelection;
          pSVar2 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
          if (pSVar2 == (System_String_array *)0x0) goto LAB_040fbd2e;
          if ((int)pSVar2->max_length != 0) {
            pSVar2->m_Items[0] = "In Progress";
            il2cpp_runtime_glue(pSVar2->m_Items);
            if (1 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[1] = "Completed";
              il2cpp_runtime_glue(pSVar2->m_Items + 1);
              pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              UI_ElementFactory__CreateDropdownSetting
                        (panel,__this_00,(Settings_BaseSetting_o *)pSVar1,"",pSVar2,
                         "",180.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar3,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040fbd2e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.QuestPopup$$SetupTopButtons
// il2cpp: void UI_QuestPopup__SetupTopButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe300

void UI_QuestPopup__SetupTopButtons(UI_QuestPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UI_ElementStyle_o *__this_01;
  long lVar4;
  Il2CppObject *pIVar5;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_02;
  Il2CppObject *pIVar6;
  ulong uVar7;
  
  if (DAT_05704856 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass18_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"Achievements");
    il2cpp_init_method_metadata(&"QuestsPopup");
    il2cpp_init_method_metadata(&"Daily");
    il2cpp_init_method_metadata(&"Weekly");
    il2cpp_init_method_metadata(&"");
    DAT_05704856 = '\x01';
  }
  pSVar3 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar3,(MethodInfo *)0x0);
  lVar4 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(System_String_o **)(lVar4 + 0x20) = "Daily";
      il2cpp_runtime_glue(lVar4 + 0x20);
      if (1 < *(uint *)(lVar4 + 0x18)) {
        *(System_String_o **)(lVar4 + 0x28) = "Weekly";
        il2cpp_runtime_glue(lVar4 + 0x28);
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = "Achievements";
          il2cpp_runtime_glue(lVar4 + 0x30);
          if (0 < *(int *)(lVar4 + 0x18)) {
            uVar7 = 0;
            do {
              pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass18_0);
              System_Object___ctor(pIVar5,(MethodInfo *)0x0);
              if (pIVar5 == (Il2CppObject *)0x0) goto LAB_040fe675;
              pIVar5[1].monitor = __this;
              il2cpp_runtime_glue(&pIVar5[1].monitor,__this);
              if (*(uint *)(lVar4 + 0x18) <= uVar7) goto LAB_040fe67a;
              pIVar6 = pIVar5 + 1;
              pIVar5[1].klass = *(Il2CppClass **)(lVar4 + 0x20 + uVar7 * 8);
              il2cpp_runtime_glue(pIVar6);
              bVar2 = System_String__op_Equality
                                ((System_String_o *)pIVar5[1].klass,"Daily",(MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                bVar2 = System_String__op_Equality
                                  ((System_String_o *)pIVar6->klass,"Weekly",(MethodInfo *)0x0);
                if ((char)bVar2 != '\0') goto LAB_040fe54a;
                pIVar1 = pIVar6->klass;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar3 = UI_UIManager__GetLocaleCommon((System_String_o *)pIVar1,(MethodInfo *)0x0);
              }
              else {
LAB_040fe54a:
                pIVar1 = pIVar6->klass;
                if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar3 = UI_UIManager__GetLocale
                                   ("MainMenu","QuestsPopup",(System_String_o *)pIVar1,""
                                    ,"",(MethodInfo *)0x0);
              }
              parent = (__this->fields).TopBar;
              onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              __this_02 = UI_ElementFactory__CreateCategoryButton
                                    (parent,__this_01,pSVar3,onClick,(MethodInfo *)0x0);
              if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_040fe675;
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (__this->fields)._topButtons;
              pIVar1 = pIVar5[1].klass;
              pIVar5 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Button_GetComponent_Button);
              if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto LAB_040fe675;
              System_Collections_Generic_Dictionary<object__object>__Add
                        (__this_00,(Il2CppObject *)pIVar1,pIVar5,MethodInfo_Void_Add);
              uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)*(int *)(lVar4 + 0x18));
          }
          UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
LAB_040fe67a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_040fe675:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.QuestPopup$$RegisterCategoryPanels
// il2cpp: void UI_QuestPopup__RegisterCategoryPanels (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe690

void UI_QuestPopup__RegisterCategoryPanels(UI_QuestPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_RuntimeTypeHandle_o handle;
  System_Type_o *pSVar2;
  
  if (DAT_05704857 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeRef_QuestAchievementsPanel);
    il2cpp_init_method_metadata(&TypeRef_QuestDailyPanel);
    il2cpp_init_method_metadata(&TypeRef_QuestWeeklyPanel);
    il2cpp_init_method_metadata(&"Achievements");
    il2cpp_init_method_metadata(&"Daily");
    il2cpp_init_method_metadata(&"Weekly");
    DAT_05704857 = '\x01';
  }
  handle.fields.value = TypeRef_QuestDailyPanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._categoryPanelTypes;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar1,"Daily",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_QuestWeeklyPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,"Weekly",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._categoryPanelTypes;
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_QuestAchievementsPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar1,"Achievements",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.QuestPopup$$SetupPopups
// il2cpp: void UI_QuestPopup__SetupPopups (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe7d0

void UI_QuestPopup__SetupPopups(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$SetupBottomButtons
// il2cpp: void UI_QuestPopup__SetupBottomButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe0c0

void UI_QuestPopup__SetupBottomButtons(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  Il2CppClass *item;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  long lVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *__this_01;
  ulong uVar3;
  
  if (DAT_05704858 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    DAT_05704858 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,1);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) == 0) {
LAB_040fe2ef:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined8 *)(lVar2 + 0x20) = "Back";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar3 = 0;
      do {
        __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
        System_Object___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 == (Il2CppObject *)0x0) goto LAB_040fe2ea;
        __this_01[1].monitor = __this;
        il2cpp_runtime_glue(&__this_01[1].monitor,__this);
        if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_040fe2ef;
        __this_01[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar3 * 8);
        il2cpp_runtime_glue(__this_01 + 1);
        parent = (__this->fields).BottomBar;
        item = __this_01[1].klass;
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar1 = UI_UIManager__GetLocaleCommon((System_String_o *)item,(MethodInfo *)0x0);
        onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
    }
    return;
  }
LAB_040fe2ea:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.QuestPopup$$OnBottomBarButtonClick
// il2cpp: void UI_QuestPopup__OnBottomBarButtonClick (UI_QuestPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40fe7f0

void UI_QuestPopup__OnBottomBarButtonClick
               (UI_QuestPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704859 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704859 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.QuestPopup$$.ctor
// il2cpp: void UI_QuestPopup___ctor (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe860

void UI_QuestPopup___ctor(UI_QuestPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (DAT_0570485a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"Bronze");
    il2cpp_init_method_metadata(&"In Progress");
    DAT_0570485a = '\x01';
  }
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar1,"Bronze",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TierSelection = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).TierSelection,pSVar1);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar1,"In Progress",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CompletedSelection = pSVar1;
  il2cpp_runtime_glue(&(__this->fields).CompletedSelection);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$<CreateAchievementDropdowns>b__17_0
// il2cpp: void UI_QuestPopup___CreateAchievementDropdowns_b__17_0 (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe930

void UI_QuestPopup__<CreateAchievementDropdowns>b__17_0(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$<CreateAchievementDropdowns>b__17_1
// il2cpp: void UI_QuestPopup___CreateAchievementDropdowns_b__17_1 (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x40fe940

void UI_QuestPopup__<CreateAchievementDropdowns>b__17_1(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


