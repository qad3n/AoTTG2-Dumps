// Type: UI.EditProfilePopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EditProfilePopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/EditProfilePopup.cs
// --------------------------------

// UI.EditProfilePopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_EditProfilePopup___c__DisplayClass15_0___ctor (UI_EditProfilePopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_EditProfilePopup___c__DisplayClass15_0___ctor(UI_EditProfilePopup___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_EditProfilePopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_EditProfilePopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x182283300

void
UI_EditProfilePopup___c__DisplayClass15_0___SetupTopButtons_b__0(UI_EditProfilePopup___c__DisplayClass15_0_o* __this, MethodInfo* method)

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


// UI.EditProfilePopup.<>c__DisplayClass19_0$$.ctor
// il2cpp: void UI_EditProfilePopup___c__DisplayClass19_0___ctor (UI_EditProfilePopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_EditProfilePopup___c__DisplayClass19_0___ctor(UI_EditProfilePopup___c__DisplayClass19_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup.<>c__DisplayClass19_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_EditProfilePopup___c__DisplayClass19_0___SetupBottomButtons_b__0 (UI_EditProfilePopup___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x18229cb10

void UI_EditProfilePopup___c__DisplayClass19_0___SetupBottomButtons_b__0
               (UI_EditProfilePopup___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  UI_EditProfilePopup_o *pUVar1;
  System_String_o *a;
  Settings_ProfileSettings_o *pSVar2;
  Settings_EmoteSettings_o *pSVar3;
  bool bVar4;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_EditProfilePopup_o *)0x0) {
    a = (__this->fields).buttonName;
    if (Il2CppMethodInitialized_184347400 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
      il2cpp_codegen_initialize_runtime_metadata(&"Save");
      Il2CppMethodInitialized_184347400 = '\x01';
    }
    bVar4 = System_String__op_Equality(a,"Save",(MethodInfo *)0x0);
    if (!bVar4) {
      return;
    }
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
    if (pSVar2 != (Settings_ProfileSettings_o *)0x0) {
      (*(pSVar2->klass->vtable)._18_Save.methodPtr)(pSVar2,(pSVar2->klass->vtable)._18_Save.method);
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
      if (pSVar3 != (Settings_EmoteSettings_o *)0x0) {
        (*(pSVar3->klass->vtable)._18_Save.methodPtr)(pSVar3,(pSVar3->klass->vtable)._18_Save.method);
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfilePopup$$get_Title
// il2cpp: System_String_o* UI_EditProfilePopup__get_Title (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_EditProfilePopup__get_Title(UI_EditProfilePopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.EditProfilePopup$$get_Width
// il2cpp: float UI_EditProfilePopup__get_Width (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x1822852d0

float UI_EditProfilePopup__get_Width(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  return 730.0;
}


// UI.EditProfilePopup$$get_Height
// il2cpp: float UI_EditProfilePopup__get_Height (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x1822852c0

float UI_EditProfilePopup__get_Height(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  return 770.0;
}


// UI.EditProfilePopup$$get_CategoryPanel
// il2cpp: bool UI_EditProfilePopup__get_CategoryPanel (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_EditProfilePopup__get_CategoryPanel(UI_EditProfilePopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.EditProfilePopup$$get_CategoryButtons
// il2cpp: bool UI_EditProfilePopup__get_CategoryButtons (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_EditProfilePopup__get_CategoryButtons(UI_EditProfilePopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.EditProfilePopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_EditProfilePopup__get_DefaultCategoryPanel (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x182285290

System_String_o *
UI_EditProfilePopup__get_DefaultCategoryPanel(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843473fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Profile");
    Il2CppMethodInitialized_1843473fc = '\x01';
  }
  return "Profile";
}


// UI.EditProfilePopup$$get_UseSound
// il2cpp: bool UI_EditProfilePopup__get_UseSound (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_EditProfilePopup__get_UseSound(UI_EditProfilePopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.EditProfilePopup$$Setup
// il2cpp: void UI_EditProfilePopup__Setup (UI_EditProfilePopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182285250

void UI_EditProfilePopup__Setup(UI_EditProfilePopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_EditProfilePopup__SetupBottomButtons(__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup$$SetupTopButtons
// il2cpp: void UI_EditProfilePopup__SetupTopButtons (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x182284f90

void UI_EditProfilePopup__SetupTopButtons(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  Il2CppClass *value;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  Il2CppObject *pIVar2;
  UI_EditProfilePopup___c__DisplayClass15_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *value_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843473fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfilePopup_c__DisplayClass15_0_SetupTopButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EditProfilePopup_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"Profile");
    Il2CppMethodInitialized_1843473fd = '\x01';
  }
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,3);
  pSVar1 = "Profile";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      pIVar2[2].klass = (Il2CppClass *)"Profile";
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar1);
      pSVar1 = "Emote";
      if (1 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[2].monitor = "Emote";
        Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,pSVar1);
        pSVar1 = "Stats";
        if (2 < *(uint *)&pIVar2[1].monitor) {
          pIVar2[3].klass = (Il2CppClass *)"Stats";
          Il2CppCodeGenWriteBarrier(&pIVar2[3].klass,pSVar1);
          uVar3 = 0;
          while( true ) {
            if (*(int *)&pIVar2[1].monitor <= (int)uVar3) {
              UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
              return;
            }
            object = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_UI_EditProfilePopup_c__DisplayClass15_0);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0)
            ;
            if (object == (UI_EditProfilePopup___c__DisplayClass15_0_o *)0x0) break;
            (object->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
            if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_182285247;
            value = (&pIVar2[2].klass)[(int)uVar3];
            (object->fields).buttonName = (System_String_o *)value;
            Il2CppCodeGenWriteBarrier(&(object->fields).buttonName,value);
            parent = (__this->fields).TopBar;
            pSVar1 = (object->fields).buttonName;
            if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
            }
            pSVar1 = UI_UIManager__GetLocaleCommon(pSVar1,(MethodInfo *)0x0);
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
            UnityEngine_Events_UnityAction___ctor
                      ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)object,
                       (intptr_t)MethodInfo_UI_EditProfilePopup_c__DisplayClass15_0_SetupTopButtons_b__0,
                       (MethodInfo *)0x0);
            __this_03 = UI_ElementFactory__CreateCategoryButton
                                  (parent,__this_01,pSVar1,__this_02,(MethodInfo *)0x0);
            if (__this_03 == (UnityEngine_GameObject_o *)0x0) break;
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._topButtons;
            pSVar1 = (object->fields).buttonName;
            value_00 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_03,
                                  (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
            System_Collections_Generic_Dictionary_object__object___Add
                      (__this_00,(Il2CppObject *)pSVar1,(Il2CppObject *)value_00,
                       (MethodInfo_146B4B0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
            uVar3 = uVar3 + 1;
          }
          goto label_182285241;
        }
      }
    }
label_182285247:
    ThrowIndexOutOfRangeException();
  }
label_182285241:
  ThrowNullReferenceException();
}


// UI.EditProfilePopup$$RegisterCategoryPanels
// il2cpp: void UI_EditProfilePopup__RegisterCategoryPanels (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x182284c30

void UI_EditProfilePopup__RegisterCategoryPanels(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843473fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_EditProfileEmotePanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_EditProfileProfilePanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_EditProfileStatsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"Stats");
    il2cpp_codegen_initialize_runtime_metadata(&"Profile");
    Il2CppMethodInitialized_1843473fe = '\x01';
  }
  handle = TypeRef_UI_EditProfileProfilePanel;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"Profile",(Il2CppObject *)pSVar2,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_EditProfileEmotePanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"Emote",(Il2CppObject *)pSVar2,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes
      ;
      pSVar2 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UI_EditProfileStatsPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___Add
                  (pSVar1,(Il2CppObject *)"Stats",(Il2CppObject *)pSVar2,
                   (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfilePopup$$SetupPopups
// il2cpp: void UI_EditProfilePopup__SetupPopups (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_EditProfilePopup__SetupPopups(UI_EditProfilePopup_o* __this, MethodInfo* method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup$$Show
// il2cpp: void UI_EditProfilePopup__Show (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x182285270

void UI_EditProfilePopup__Show(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.EditProfilePopup$$SetupBottomButtons
// il2cpp: void UI_EditProfilePopup__SetupBottomButtons (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x182284d70

void UI_EditProfilePopup__SetupBottomButtons(UI_EditProfilePopup_o *__this,MethodInfo *method)

{
  Il2CppClass *value;
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  Il2CppObject *pIVar2;
  UI_EditProfilePopup___c__DisplayClass19_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_01;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843473ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_EditProfilePopup_c__DisplayClass19_0_SetupBottomButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_EditProfilePopup_c__DisplayClass19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_1843473ff = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,1);
  pSVar1 = "Save";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor == 0) {
label_182284f82:
      ThrowIndexOutOfRangeException();
    }
    pIVar2[2].klass = (Il2CppClass *)"Save";
    Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar1);
    uVar3 = 0;
    while( true ) {
      if (*(int *)&pIVar2[1].monitor <= (int)uVar3) {
        return;
      }
      object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_EditProfilePopup_c__DisplayClass19_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object == (UI_EditProfilePopup___c__DisplayClass19_0_o *)0x0) break;
      (object->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
      if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_182284f82;
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
                 (intptr_t)MethodInfo_UI_EditProfilePopup_c__DisplayClass19_0_SetupBottomButtons_b__0,
                 (MethodInfo *)0x0);
      UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfilePopup$$OnBottomBarButtonClick
// il2cpp: void UI_EditProfilePopup__OnBottomBarButtonClick (UI_EditProfilePopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182284b60

void UI_EditProfilePopup__OnBottomBarButtonClick
               (UI_EditProfilePopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_ProfileSettings_o *pSVar1;
  Settings_EmoteSettings_o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184347400 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_184347400 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (!bVar3) {
    return;
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->ProfileSettings;
  if (pSVar1 != (Settings_ProfileSettings_o *)0x0) {
    (*(pSVar1->klass->vtable)._18_Save.methodPtr)(pSVar1,(pSVar1->klass->vtable)._18_Save.method);
    pSVar2 = TypeInfo_Settings_SettingsManager->static_fields->EmoteSettings;
    if (pSVar2 != (Settings_EmoteSettings_o *)0x0) {
      (*(pSVar2->klass->vtable)._18_Save.methodPtr)(pSVar2,(pSVar2->klass->vtable)._18_Save.method);
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.EditProfilePopup$$.ctor
// il2cpp: void UI_EditProfilePopup___ctor (UI_EditProfilePopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_EditProfilePopup___ctor(UI_EditProfilePopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


