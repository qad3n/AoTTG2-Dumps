// Type: UI.QuestPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/QuestPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/QuestPopup.cs
// --------------------------------

// UI.QuestPopup.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_QuestPopup___c__DisplayClass18_0___ctor (UI_QuestPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_QuestPopup___c__DisplayClass18_0___ctor(UI_QuestPopup___c__DisplayClass18_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup.<>c__DisplayClass18_0$$<SetupTopButtons>b__0
// il2cpp: void UI_QuestPopup___c__DisplayClass18_0___SetupTopButtons_b__0 (UI_QuestPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x182283300

void
UI_QuestPopup___c__DisplayClass18_0___SetupTopButtons_b__0(UI_QuestPopup___c__DisplayClass18_0_o* __this, MethodInfo* method)

{
  UI_SettingsPopup_o *pUVar1;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_SettingsPopup_o *)0x0) {
    (*(pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr)
              (pUVar1,(__this->fields).buttonName,(pUVar1->klass->vtable)._28_SetCategoryPanel.method);
    return;
  }
  ThrowNullReferenceException();
}


// UI.QuestPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_QuestPopup___c__DisplayClass21_0___ctor (UI_QuestPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_QuestPopup___c__DisplayClass21_0___ctor(UI_QuestPopup___c__DisplayClass21_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup.<>c__DisplayClass21_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_QuestPopup___c__DisplayClass21_0___SetupBottomButtons_b__0 (UI_QuestPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x18229cc30

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
  if (Il2CppMethodInitialized_184347482 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347482 = '\x01';
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
// 0x1818c6010

System_String_o*
UI_QuestPopup__get_Title(UI_QuestPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.QuestPopup$$get_Width
// il2cpp: float UI_QuestPopup__get_Width (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x18229a1f0

float
UI_QuestPopup__get_Width(UI_QuestPopup_o* __this, MethodInfo* method)

{
  return 990.0;
}


// UI.QuestPopup$$get_Height
// il2cpp: float UI_QuestPopup__get_Height (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x18229a1e0

float UI_QuestPopup__get_Height(UI_QuestPopup_o *__this,MethodInfo *method)

{
  return 740.0;
}


// UI.QuestPopup$$get_CategoryPanel
// il2cpp: bool UI_QuestPopup__get_CategoryPanel (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_QuestPopup__get_CategoryPanel(UI_QuestPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.QuestPopup$$get_CategoryButtons
// il2cpp: bool UI_QuestPopup__get_CategoryButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_QuestPopup__get_CategoryButtons(UI_QuestPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.QuestPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_QuestPopup__get_DefaultCategoryPanel (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x18229a1b0

System_String_o * UI_QuestPopup__get_DefaultCategoryPanel(UI_QuestPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434747d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Daily");
    Il2CppMethodInitialized_18434747d = '\x01';
  }
  return "Daily";
}


// UI.QuestPopup$$get_UseSound
// il2cpp: bool UI_QuestPopup__get_UseSound (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_QuestPopup__get_UseSound(UI_QuestPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.QuestPopup$$Setup
// il2cpp: void UI_QuestPopup__Setup (UI_QuestPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x18229a0b0

void UI_QuestPopup__Setup(UI_QuestPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_QuestPopup__SetupBottomButtons(__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$CreateAchievementDropdowns
// il2cpp: void UI_QuestPopup__CreateAchievementDropdowns (UI_QuestPopup_o* __this, UnityEngine_Transform_o* panel, const MethodInfo* method);
// 0x182299650

void UI_QuestPopup__CreateAchievementDropdowns
               (UI_QuestPopup_o *__this,UnityEngine_Transform_o *panel,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  System_String_array *pSVar3;
  UnityEngine_Events_UnityAction_o *pUVar4;
  
  if (Il2CppMethodInitialized_18434747e == '\0') {
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
    Il2CppMethodInitialized_18434747e = '\x01';
  }
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,0x18,0.0,20.0,pSVar2,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).TierSelection;
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  pSVar2 = "Bronze";
  if (pSVar3 != (System_String_array *)0x0) {
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = "Bronze";
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar2);
      pSVar2 = "Silver";
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = "Silver";
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar2);
        pSVar2 = "Gold";
        if (2 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[2] = "Gold";
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2,pSVar2);
          pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_UI_QuestPopup_CreateAchievementDropdowns_b__17_0,(MethodInfo *)0x0);
          UI_ElementFactory__CreateDropdownSetting
                    (panel,__this_00,(Settings_BaseSetting_o *)pSVar1,"",pSVar3,
                     "",180.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar4,
                     (System_Int32_array *)0x0,(MethodInfo *)0x0);
          pSVar1 = (__this->fields).CompletedSelection;
          pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
          pSVar2 = "In Progress";
          if (pSVar3 == (System_String_array *)0x0) goto label_182299976;
          if ((int)pSVar3->max_length != 0) {
            pSVar3->m_Items[0] = "In Progress";
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar2);
            pSVar2 = "Completed";
            if (1 < (uint)pSVar3->max_length) {
              pSVar3->m_Items[1] = "Completed";
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar2);
              pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar4,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_UI_QuestPopup_CreateAchievementDropdowns_b__17_1,
                         (MethodInfo *)0x0);
              UI_ElementFactory__CreateDropdownSetting
                        (panel,__this_00,(Settings_BaseSetting_o *)pSVar1,"",pSVar3,
                         "",180.0,40.0,300.0,(System_Nullable_float__o)0x0,pUVar4,
                         (System_Int32_array *)0x0,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_182299976:
  ThrowNullReferenceException();
}


// UI.QuestPopup$$SetupTopButtons
// il2cpp: void UI_QuestPopup__SetupTopButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x182299d50

void UI_QuestPopup__SetupTopButtons(UI_QuestPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *value;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool bVar1;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_01;
  Il2CppObject *pIVar3;
  UI_QuestPopup___c__DisplayClass18_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *value_00;
  uint uVar4;
  
  if (Il2CppMethodInitialized_18434747f == '\0') {
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
    Il2CppMethodInitialized_18434747f = '\x01';
  }
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pIVar3 = SZArrayNew(TypeInfo_string_array,3);
  pSVar2 = "Daily";
  if (pIVar3 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar3[1].monitor != 0) {
      pIVar3[2].klass = (Il2CppClass *)"Daily";
      Il2CppCodeGenWriteBarrier(&pIVar3[2].klass,pSVar2);
      pSVar2 = "Weekly";
      if (1 < *(uint *)&pIVar3[1].monitor) {
        pIVar3[2].monitor = "Weekly";
        Il2CppCodeGenWriteBarrier(&pIVar3[2].monitor,pSVar2);
        pSVar2 = "Achievements";
        if (2 < *(uint *)&pIVar3[1].monitor) {
          pIVar3[3].klass = (Il2CppClass *)"Achievements";
          Il2CppCodeGenWriteBarrier(&pIVar3[3].klass,pSVar2);
          uVar4 = 0;
          while( true ) {
            if (*(int *)&pIVar3[1].monitor <= (int)uVar4) {
              UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
              return;
            }
            object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_QuestPopup_c__DisplayClass18_0);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0)
            ;
            if (object == (UI_QuestPopup___c__DisplayClass18_0_o *)0x0) break;
            (object->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
            if (*(uint *)&pIVar3[1].monitor <= uVar4) goto label_18229a0a5;
            value = (&pIVar3[2].klass)[(int)uVar4];
            (object->fields).buttonName = (System_String_o *)value;
            Il2CppCodeGenWriteBarrier(&(object->fields).buttonName,value);
            bVar1 = System_String__op_Equality
                              ((object->fields).buttonName,"Daily",(MethodInfo *)0x0);
            if (bVar1) {
label_182299fad:
              pSVar2 = (object->fields).buttonName;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar2 = UI_UIManager__GetLocale
                                 ("MainMenu","QuestsPopup",pSVar2,"",
                                  "",(MethodInfo *)0x0);
            }
            else {
              bVar1 = System_String__op_Equality
                                ((object->fields).buttonName,"Weekly",(MethodInfo *)0x0);
              if (bVar1) goto label_182299fad;
              pSVar2 = (object->fields).buttonName;
              if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
              }
              pSVar2 = UI_UIManager__GetLocaleCommon(pSVar2,(MethodInfo *)0x0);
            }
            parent = (__this->fields).TopBar;
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)object,
                       (intptr_t)MethodInfo_UI_QuestPopup_c__DisplayClass18_0_SetupTopButtons_b__0,
                       (MethodInfo *)0x0);
            __this_03 = UI_ElementFactory__CreateCategoryButton
                                  (parent,__this_01,pSVar2,__this_02,(MethodInfo *)0x0);
            if (__this_03 == (UnityEngine_GameObject_o *)0x0) break;
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._topButtons;
            pSVar2 = (object->fields).buttonName;
            value_00 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_03,
                                  (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___Add
                      (__this_00,(Il2CppObject *)pSVar2,(Il2CppObject *)value_00,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
            uVar4 = uVar4 + 1;
          }
          goto label_18229a09f;
        }
      }
    }
label_18229a0a5:
    ThrowIndexOutOfRangeException();
  }
label_18229a09f:
  ThrowNullReferenceException();
}


// UI.QuestPopup$$RegisterCategoryPanels
// il2cpp: void UI_QuestPopup__RegisterCategoryPanels (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x1822999f0

void UI_QuestPopup__RegisterCategoryPanels(UI_QuestPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347480 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_QuestAchievementsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_QuestDailyPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_QuestWeeklyPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Achievements");
    il2cpp_codegen_initialize_runtime_metadata(&"Daily");
    il2cpp_codegen_initialize_runtime_metadata(&"Weekly");
    Il2CppMethodInitialized_184347480 = '\x01';
  }
  handle = TypeRef_UI_QuestDailyPanel;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"Daily",(Il2CppObject *)pSVar2,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_QuestWeeklyPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"Weekly",(Il2CppObject *)pSVar2,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UI_QuestAchievementsPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)"Achievements",(Il2CppObject *)pSVar2,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.QuestPopup$$SetupPopups
// il2cpp: void UI_QuestPopup__SetupPopups (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_QuestPopup__SetupPopups(UI_QuestPopup_o* __this, MethodInfo* method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$SetupBottomButtons
// il2cpp: void UI_QuestPopup__SetupBottomButtons (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x182299b30

void UI_QuestPopup__SetupBottomButtons(UI_QuestPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *value;
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  Il2CppObject *pIVar2;
  UI_QuestPopup___c__DisplayClass21_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_01;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184347481 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_QuestPopup_c__DisplayClass21_0_SetupBottomButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_QuestPopup_c__DisplayClass21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347481 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,1);
  pSVar1 = "Back";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor == 0) {
label_182299d42:
      ThrowIndexOutOfRangeException();
    }
    pIVar2[2].klass = (Il2CppClass *)"Back";
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar1);
    uVar3 = 0;
    while( true ) {
      if (*(int *)&pIVar2[1].monitor <= (int)uVar3) {
        return;
      }
      object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_QuestPopup_c__DisplayClass21_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_QuestPopup___c__DisplayClass21_0_o *)0x0) break;
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_182299d42;
      value = (&pIVar2[2].klass)[(int)uVar3];
      (object->fields).buttonName = (System_String_o *)value;
      Il2CppCodeGenWriteBarrier(&(object->fields).buttonName,value);
      parent = (__this->fields).BottomBar;
      pSVar1 = (object->fields).buttonName;
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
      UnityEngine_Events_UnityAction___ctor
                ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_UI_QuestPopup_c__DisplayClass21_0_SetupBottomButtons_b__0,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
    }
  }
  ThrowNullReferenceException();
}


// UI.QuestPopup$$OnBottomBarButtonClick
// il2cpp: void UI_QuestPopup__OnBottomBarButtonClick (UI_QuestPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182299990

void UI_QuestPopup__OnBottomBarButtonClick(UI_QuestPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347482 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347482 = '\x01';
  }
  bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
  if (bVar1) {
    (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  }
  return;
}


// UI.QuestPopup$$.ctor
// il2cpp: void UI_QuestPopup___ctor (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x18229a0e0

void UI_QuestPopup___ctor(UI_QuestPopup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347483 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Bronze");
    il2cpp_codegen_initialize_runtime_metadata(&"In Progress");
    Il2CppMethodInitialized_184347483 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar1,"Bronze",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).TierSelection = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TierSelection,pSVar1);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(pSVar1,"In Progress",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).CompletedSelection = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CompletedSelection,pSVar1);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$<CreateAchievementDropdowns>b__17_0
// il2cpp: void UI_QuestPopup___CreateAchievementDropdowns_b__17_0 (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x18229a0d0

void
UI_QuestPopup___CreateAchievementDropdowns_b__17_0(UI_QuestPopup_o* __this, MethodInfo* method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.QuestPopup$$<CreateAchievementDropdowns>b__17_1
// il2cpp: void UI_QuestPopup___CreateAchievementDropdowns_b__17_1 (UI_QuestPopup_o* __this, const MethodInfo* method);
// 0x18229a0d0

void
UI_QuestPopup___CreateAchievementDropdowns_b__17_1(UI_QuestPopup_o* __this, MethodInfo* method)

{
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


