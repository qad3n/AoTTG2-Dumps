// Type: UI.QuestPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/QuestPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestPopup.cs
// --------------------------------

// UI.QuestPopup.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_QuestPopup___c__DisplayClass18_0___ctor (UI_QuestPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x5d5b6a0

void UI_QuestPopup___c__DisplayClass18_0___ctor
               (UI_QuestPopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup.<>c__DisplayClass18_0$$<SetupTopButtons>b__0
// il2cpp: void UI_QuestPopup___c__DisplayClass18_0___SetupTopButtons_b__0 (UI_QuestPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x5d5b970

void UI_QuestPopup___c__DisplayClass18_0___SetupTopButtons_b__0
               (UI_QuestPopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  UI_QuestPopup_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_QuestPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr)
            (pUVar1,(__this->fields).buttonName,(pUVar1->klass->vtable)._28_SetCategoryPanel.method);
  return;
}


// UI.QuestPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_QuestPopup___c__DisplayClass21_0___ctor (UI_QuestPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5d5b800

void UI_QuestPopup___c__DisplayClass21_0___ctor
               (UI_QuestPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup.<>c__DisplayClass21_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_QuestPopup___c__DisplayClass21_0___SetupBottomButtons_b__0 (UI_QuestPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x5d5b9a0

void UI_QuestPopup___c__DisplayClass21_0___SetupBottomButtons_b__0
               (UI_QuestPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_QuestPopup_o *pUVar1;
  System_String_o *a;
  bool bVar2;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (UI_QuestPopup_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = (__this->fields).buttonName;
  if (Il2CppMethodInitialized_07547f52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547f52 = '\x01';
  }
  bVar2 = System_String__op_Equality(a,"Back",(MethodInfo *)0x0);
  if (bVar2) {
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.QuestPopup$$get_Title
// il2cpp: System_String_o* UI_QuestPopup__get_Title (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b020

System_String_o * UI_QuestPopup__get_Title(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.QuestPopup$$get_Width
// il2cpp: float UI_QuestPopup__get_Width (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b040

float UI_QuestPopup__get_Width(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return 990.0;
}


// UI.QuestPopup$$get_Height
// il2cpp: float UI_QuestPopup__get_Height (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b050

float UI_QuestPopup__get_Height(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return 740.0;
}


// UI.QuestPopup$$get_CategoryPanel
// il2cpp: bool UI_QuestPopup__get_CategoryPanel (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b060

bool UI_QuestPopup__get_CategoryPanel(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.QuestPopup$$get_CategoryButtons
// il2cpp: bool UI_QuestPopup__get_CategoryButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b070

bool UI_QuestPopup__get_CategoryButtons(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.QuestPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_QuestPopup__get_DefaultCategoryPanel (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b080

System_String_o * UI_QuestPopup__get_DefaultCategoryPanel(UI_QuestPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547f4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Daily");
    Il2CppMethodInitialized_07547f4d = '\x01';
  }
  return "Daily";
}


// UI.QuestPopup$$get_UseSound
// il2cpp: bool UI_QuestPopup__get_UseSound (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b0b0

bool UI_QuestPopup__get_UseSound(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return true;
}


// UI.QuestPopup$$Setup
// il2cpp: void UI_QuestPopup__Setup (UI_QuestPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d5b0c0

void UI_QuestPopup__Setup(UI_QuestPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_QuestPopup__SetupBottomButtons(__this,(MethodInfo *)parent);
  return;
}


// UI.QuestPopup$$CreateAchievementDropdowns
// il2cpp: void UI_QuestPopup__CreateAchievementDropdowns (UI_QuestPopup_o* __this, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x5d59110

void UI_QuestPopup__CreateAchievementDropdowns
               (UI_QuestPopup_o *__this,UnityEngine_Transform_o *panel,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *themePanel;
  UI_ElementStyle_o *__this_00;
  System_String_array *pSVar2;
  UnityEngine_Events_UnityAction_o *pUVar3;
  
  if (Il2CppMethodInitialized_07547f4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_QuestPopup_CreateAchievementDropdowns_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_QuestPopup_CreateAchievementDropdowns_b__17_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Silver");
    il2cpp_codegen_initialize_runtime_metadata(&"Bronze");
    il2cpp_codegen_initialize_runtime_metadata(&"Gold");
    il2cpp_codegen_initialize_runtime_metadata(&"Completed");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"In Progress");
    Il2CppMethodInitialized_07547f4e = '\x01';
  }
  themePanel = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                         (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,0.0,20.0,themePanel,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).TierSelection;
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if (pSVar2 == (System_String_array *)0x0) {
label_05d5940e:
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "Bronze";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "Silver";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = "Gold";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (pUVar3,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_QuestPopup_CreateAchievementDropdowns_b__17_0,(MethodInfo *)0x0);
        UI_ElementFactory__CreateDropdownSetting
                  (panel,__this_00,(Settings_BaseSetting_o *)pSVar1,"",pSVar2,
                   "",180.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar3,
                   (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
        pSVar1 = (__this->fields).CompletedSelection;
        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        if (pSVar2 == (System_String_array *)0x0) goto label_05d5940e;
        if ((int)pSVar2->max_length != 0) {
          pSVar2->m_Items[0] = "In Progress";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
          if ((pSVar2->max_length & 0xfffffffe) != 0) {
            pSVar2->m_Items[1] = "Completed";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
            pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (pUVar3,(Il2CppObject *)__this,
                       (intptr_t)MethodInfo_UI_QuestPopup_CreateAchievementDropdowns_b__17_1,(MethodInfo *)0x0
                      );
            UI_ElementFactory__CreateDropdownSetting
                      (panel,__this_00,(Settings_BaseSetting_o *)pSVar1,"",pSVar2,
                       "",180.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar3,
                       (System_Int32_array *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.QuestPopup$$SetupTopButtons
// il2cpp: void UI_QuestPopup__SetupTopButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b320

void UI_QuestPopup__SetupTopButtons(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_01;
  Il2CppObject *pIVar3;
  UI_QuestPopup___c__DisplayClass18_0_o *__this_02;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_GameObject_o *__this_04;
  UnityEngine_UI_Button_o *value;
  UI_QuestPopup___c__DisplayClass18_0_Fields *targetAddress;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_07547f4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_QuestPopup_c__DisplayClass18_0_SetupTopButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_QuestPopup_c__DisplayClass18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"Achievements");
    il2cpp_codegen_initialize_runtime_metadata(&"QuestsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Daily");
    il2cpp_codegen_initialize_runtime_metadata(&"Weekly");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547f4f = '\x01';
  }
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pIVar3 = SZArrayNew(TypeInfo_string_array,3);
  if (pIVar3 == (Il2CppObject *)0x0) {
label_05d5b694:
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar3[1].monitor != 0) {
    pIVar3[2].klass = (Il2CppClass *)"Daily";
    Il2CppCodeGenWriteBarrier(&pIVar3[2].klass);
    if (((ulong)pIVar3[1].monitor & 0xfffffffe) != 0) {
      pIVar3[2].monitor = "Weekly";
      Il2CppCodeGenWriteBarrier(&pIVar3[2].monitor);
      if (2 < *(uint *)&pIVar3[1].monitor) {
        pIVar3[3].klass = (Il2CppClass *)"Achievements";
        Il2CppCodeGenWriteBarrier(&pIVar3[3].klass);
        if (0 < *(int *)&pIVar3[1].monitor) {
          uVar4 = 0;
          do {
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_QuestPopup_c__DisplayClass18_0);
            System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
            if (__this_02 == (UI_QuestPopup___c__DisplayClass18_0_o *)0x0) goto label_05d5b694;
            (__this_02->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
            if (*(uint *)&pIVar3[1].monitor <= uVar4) goto label_05d5b699;
            targetAddress = &__this_02->fields;
            (__this_02->fields).buttonName = (System_String_o *)(&pIVar3[2].klass)[uVar4];
            Il2CppCodeGenWriteBarrier(&targetAddress->buttonName);
            bVar1 = System_String__op_Equality
                              ((__this_02->fields).buttonName,"Daily",(MethodInfo *)0x0);
            if (bVar1) {
label_05d5b56a:
              pSVar2 = targetAddress->buttonName;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar2 = UI_UIManager__GetLocale
                                 ("MainMenu","QuestsPopup",pSVar2,"",
                                  "",(MethodInfo *)0x0);
            }
            else {
              bVar1 = System_String__op_Equality
                                (targetAddress->buttonName,"Weekly",(MethodInfo *)0x0);
              if (bVar1) goto label_05d5b56a;
              pSVar2 = targetAddress->buttonName;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar2 = UI_UIManager__GetLocaleCommon(pSVar2,(MethodInfo *)0x0);
            }
            parent = (__this->fields).TopBar;
            __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      (__this_03,(Il2CppObject *)__this_02,
                       (intptr_t)MethodInfo_UI_QuestPopup_c__DisplayClass18_0_SetupTopButtons_b__0,
                       (MethodInfo *)0x0);
            __this_04 = UI_ElementFactory__CreateCategoryButton
                                  (parent,__this_01,pSVar2,__this_03,(MethodInfo *)0x0);
            if (__this_04 == (UnityEngine_GameObject_o *)0x0) goto label_05d5b694;
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._topButtons;
            pSVar2 = (__this_02->fields).buttonName;
            value = UnityEngine_GameObject__GetComponent_object_
                              (__this_04,
                               (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto label_05d5b694;
            System_Collections_Generic_Dictionary_object__object___Add
                      (__this_00,(Il2CppObject *)pSVar2,(Il2CppObject *)value,
                       (MethodInfo_4AAD4E0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)*(int *)&pIVar3[1].monitor);
        }
        UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
label_05d5b699:
  ThrowIndexOutOfRangeException();
}


// UI.QuestPopup$$RegisterCategoryPanels
// il2cpp: void UI_QuestPopup__RegisterCategoryPanels (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b6b0

void UI_QuestPopup__RegisterCategoryPanels(UI_QuestPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547f50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_QuestAchievementsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_QuestDailyPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_QuestWeeklyPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Achievements");
    il2cpp_codegen_initialize_runtime_metadata(&"Daily");
    il2cpp_codegen_initialize_runtime_metadata(&"Weekly");
    Il2CppMethodInitialized_07547f50 = '\x01';
  }
  handle = TypeRef_UI_QuestDailyPanel;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"Daily",(Il2CppObject *)pSVar2,
               (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_QuestWeeklyPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"Weekly",(Il2CppObject *)pSVar2,
                 (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UI_QuestAchievementsPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)"Achievements",(Il2CppObject *)pSVar2,
                   (MethodInfo_4AAD4E0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.QuestPopup$$SetupPopups
// il2cpp: void UI_QuestPopup__SetupPopups (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b7f0

void UI_QuestPopup__SetupPopups(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__SetupPopups((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$SetupBottomButtons
// il2cpp: void UI_QuestPopup__SetupBottomButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b0e0

void UI_QuestPopup__SetupBottomButtons(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  Il2CppObject *pIVar2;
  UnityEngine_Events_UnityAction_o *__this_01;
  UI_QuestPopup___c__DisplayClass21_0_o *__this_02;
  ulong uVar3;
  
  if (Il2CppMethodInitialized_07547f51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_QuestPopup_c__DisplayClass21_0_SetupBottomButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_QuestPopup_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547f51 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,1);
  if (pIVar2 == (Il2CppObject *)0x0) {
label_05d5b309:
    ThrowNullReferenceException();
  }
  if (*(int *)&pIVar2[1].monitor == 0) {
label_05d5b30e:
    ThrowIndexOutOfRangeException();
  }
  pIVar2[2].klass = (Il2CppClass *)"Back";
  Il2CppCodeGenWriteBarrier(&pIVar2[2].klass);
  if (0 < *(int *)&pIVar2[1].monitor) {
    uVar3 = 0;
    do {
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_QuestPopup_c__DisplayClass21_0);
      System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
      if (__this_02 == (UI_QuestPopup___c__DisplayClass21_0_o *)0x0) goto label_05d5b309;
      (__this_02->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).__4__this);
      if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_05d5b30e;
      (__this_02->fields).buttonName = (System_String_o *)(&pIVar2[2].klass)[uVar3];
      Il2CppCodeGenWriteBarrier(&(__this_02->fields).buttonName);
      parent = (__this->fields).BottomBar;
      pSVar1 = (__this_02->fields).buttonName;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                (__this_01,(Il2CppObject *)__this_02,
                 (intptr_t)MethodInfo_UI_QuestPopup_c__DisplayClass21_0_SetupBottomButtons_b__0,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)*(int *)&pIVar2[1].monitor);
  }
  return;
}


// UI.QuestPopup$$OnBottomBarButtonClick
// il2cpp: void UI_QuestPopup__OnBottomBarButtonClick (UI_QuestPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5d5b810

void UI_QuestPopup__OnBottomBarButtonClick(UI_QuestPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547f52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_07547f52 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar1) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    return;
  }
  return;
}


// UI.QuestPopup$$.ctor
// il2cpp: void UI_QuestPopup___ctor (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b880

void UI_QuestPopup___ctor(UI_QuestPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547f53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Bronze");
    il2cpp_codegen_initialize_runtime_metadata(&"In Progress");
    Il2CppMethodInitialized_07547f53 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,"Bronze",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TierSelection = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TierSelection);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(pSVar1,"In Progress",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CompletedSelection = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CompletedSelection);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$<CreateAchievementDropdowns>b__17_0
// il2cpp: void UI_QuestPopup___CreateAchievementDropdowns_b__17_0 (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b950

void UI_QuestPopup___CreateAchievementDropdowns_b__17_0(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$<CreateAchievementDropdowns>b__17_1
// il2cpp: void UI_QuestPopup___CreateAchievementDropdowns_b__17_1 (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x5d5b960

void UI_QuestPopup___CreateAchievementDropdowns_b__17_1(UI_QuestPopup_o *__this,MethodInfo *method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


