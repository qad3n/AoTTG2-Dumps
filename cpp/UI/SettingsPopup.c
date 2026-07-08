// Type: UI.SettingsPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/SettingsPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/SettingsPopup/SettingsPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.SettingsPopup.<>c__DisplayClass18_0$$.ctor
// il2cpp: void UI_SettingsPopup___c__DisplayClass18_0___ctor (UI_SettingsPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x4132ad0

void UI_SettingsPopup_<>c__DisplayClass18_0___ctor
               (UI_SettingsPopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup.<>c__DisplayClass18_0$$<SetupTopButtons>b__0
// il2cpp: void UI_SettingsPopup___c__DisplayClass18_0___SetupTopButtons_b__0 (UI_SettingsPopup___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x4133810

void UI_SettingsPopup_<>c__DisplayClass18_0__<SetupTopButtons>b__0
               (UI_SettingsPopup___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  UI_SettingsPopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_SettingsPopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).buttonName,
               (pUVar1->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsPopup.<>c__DisplayClass21_0$$.ctor
// il2cpp: void UI_SettingsPopup___c__DisplayClass21_0___ctor (UI_SettingsPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4132d60

void UI_SettingsPopup_<>c__DisplayClass21_0___ctor
               (UI_SettingsPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup.<>c__DisplayClass21_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_SettingsPopup___c__DisplayClass21_0___SetupBottomButtons_b__0 (UI_SettingsPopup___c__DisplayClass21_0_o* __this, const MethodInfo* method);
// 0x4133840

void UI_SettingsPopup_<>c__DisplayClass21_0__<SetupBottomButtons>b__0
               (UI_SettingsPopup___c__DisplayClass21_0_o *__this,MethodInfo *method)

{
  UI_SettingsPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_SettingsPopup_o *)0x0) {
    UI_SettingsPopup__OnBottomBarButtonClick(__this_00,(__this->fields).buttonName,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsPopup$$get_Title
// il2cpp: System_String_o* UI_SettingsPopup__get_Title (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4131ed0

System_String_o * UI_SettingsPopup__get_Title(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.SettingsPopup$$get_Width
// il2cpp: float UI_SettingsPopup__get_Width (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4131ef0

float UI_SettingsPopup__get_Width(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  return 1000.0;
}


// UI.SettingsPopup$$get_Height
// il2cpp: float UI_SettingsPopup__get_Height (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4131f00

float UI_SettingsPopup__get_Height(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.SettingsPopup$$get_CategoryPanel
// il2cpp: bool UI_SettingsPopup__get_CategoryPanel (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4131f10

bool_conflict UI_SettingsPopup__get_CategoryPanel(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsPopup$$get_CategoryButtons
// il2cpp: bool UI_SettingsPopup__get_CategoryButtons (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4131f20

bool_conflict UI_SettingsPopup__get_CategoryButtons(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_SettingsPopup__get_DefaultCategoryPanel (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4131f30

System_String_o *
UI_SettingsPopup__get_DefaultCategoryPanel(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  if (DAT_0570494b == '\0') {
    il2cpp_init_method_metadata(&"General");
    DAT_0570494b = '\x01';
  }
  return "General";
}


// UI.SettingsPopup$$get_UseSound
// il2cpp: bool UI_SettingsPopup__get_UseSound (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4131f60

bool_conflict UI_SettingsPopup__get_UseSound(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.SettingsPopup$$Setup
// il2cpp: void UI_SettingsPopup__Setup (UI_SettingsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4131f70

void UI_SettingsPopup__Setup(UI_SettingsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_SettingsPopup__SetupBottomButtons(__this,(MethodInfo *)parent);
  UI_SettingsPopup__SetupSettingsList(__this,(MethodInfo *)parent);
  return;
}


// UI.SettingsPopup$$SetupTopButtons
// il2cpp: void UI_SettingsPopup__SetupTopButtons (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x41326f0

void UI_SettingsPopup__SetupTopButtons(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppClass *key;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  long lVar2;
  Il2CppObject *pIVar3;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *onClick;
  UnityEngine_GameObject_o *__this_02;
  MethodInfo *in_R9;
  ulong uVar4;
  
  if (DAT_0570494c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass18_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Skins");
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Top");
    il2cpp_init_method_metadata(&"Keybinds");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"Sound");
    il2cpp_init_method_metadata(&"Ability");
    il2cpp_init_method_metadata(&"UI");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Graphics");
    DAT_0570494c = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,7);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = "General";
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = "Sound";
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = "Graphics";
          il2cpp_runtime_glue(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = "UI";
            il2cpp_runtime_glue(lVar2 + 0x38);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = "Keybinds";
              il2cpp_runtime_glue(lVar2 + 0x40);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = "Skins";
                il2cpp_runtime_glue(lVar2 + 0x48);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) = "Ability";
                  il2cpp_runtime_glue(lVar2 + 0x50);
                  if (0 < *(int *)(lVar2 + 0x18)) {
                    uVar4 = 0;
                    do {
                      pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass18_0);
                      System_Object___ctor(pIVar3,(MethodInfo *)0x0);
                      if (pIVar3 == (Il2CppObject *)0x0) goto LAB_04132ac6;
                      pIVar3[1].monitor = __this;
                      il2cpp_runtime_glue(&pIVar3[1].monitor,__this);
                      if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_04132acb;
                      pIVar3[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar4 * 8);
                      il2cpp_runtime_glue(pIVar3 + 1);
                      parent = (__this->fields).TopBar;
                      pSVar1 = (__this->fields).LocaleCategory;
                      item = System_String__Concat
                                       ((System_String_o *)pIVar3[1].klass,"Button",
                                        (MethodInfo *)0x0);
                      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      pSVar1 = UI_UIManager__GetLocale
                                         (pSVar1,"Top",item,"","",in_R9);
                      onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction)
                      ;
                      UnityEngine_Events_UnityAction___ctor();
                      __this_02 = UI_ElementFactory__CreateCategoryButton
                                            (parent,__this_01,pSVar1,onClick,(MethodInfo *)0x0);
                      if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_04132ac6;
                      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                                  (__this->fields)._topButtons;
                      key = pIVar3[1].klass;
                      pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Button_GetComponent_Button);
                      if (__this_00 ==
                          (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                      goto LAB_04132ac6;
                      System_Collections_Generic_Dictionary<object__object>__Add
                                (__this_00,(Il2CppObject *)key,pIVar3,MethodInfo_Void_Add);
                      uVar4 = uVar4 + 1;
                    } while ((long)uVar4 < (long)*(int *)(lVar2 + 0x18));
                  }
                  UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LAB_04132acb:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04132ac6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsPopup$$RegisterCategoryPanels
// il2cpp: void UI_SettingsPopup__RegisterCategoryPanels (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4132ae0

void UI_SettingsPopup__RegisterCategoryPanels(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_RuntimeTypeHandle_o handle;
  System_Type_o *pSVar2;
  
  if (DAT_0570494d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeRef_SettingsAbilityPanel);
    il2cpp_init_method_metadata(&TypeRef_SettingsGeneralPanel);
    il2cpp_init_method_metadata(&TypeRef_SettingsGraphicsPanel);
    il2cpp_init_method_metadata(&TypeRef_SettingsKeybindsPanel);
    il2cpp_init_method_metadata(&TypeRef_SettingsSkinsPanel);
    il2cpp_init_method_metadata(&TypeRef_SettingsSoundPanel);
    il2cpp_init_method_metadata(&TypeRef_SettingsUIPanel);
    il2cpp_init_method_metadata(&"Skins");
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Keybinds");
    il2cpp_init_method_metadata(&"Sound");
    il2cpp_init_method_metadata(&"Ability");
    il2cpp_init_method_metadata(&"UI");
    il2cpp_init_method_metadata(&"Graphics");
    DAT_0570494d = '\x01';
  }
  handle.fields.value = TypeRef_SettingsGeneralPanel.fields.value;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._categoryPanelTypes;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Add
              (pSVar1,"General",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             (__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_SettingsSoundPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,"Sound",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               (__this->fields)._categoryPanelTypes;
      pSVar2 = System_Type__GetTypeFromHandle(TypeRef_SettingsGraphicsPanel,(MethodInfo *)0x0);
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__Add
                  (pSVar1,"Graphics",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
        pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (__this->fields)._categoryPanelTypes;
        pSVar2 = System_Type__GetTypeFromHandle(TypeRef_SettingsUIPanel,(MethodInfo *)0x0);
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__Add
                    (pSVar1,"UI",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
          pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                   (__this->fields)._categoryPanelTypes;
          pSVar2 = System_Type__GetTypeFromHandle(TypeRef_SettingsKeybindsPanel,(MethodInfo *)0x0);
          if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
            System_Collections_Generic_Dictionary<object__object>__Add
                      (pSVar1,"Keybinds",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
            pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                     (__this->fields)._categoryPanelTypes;
            pSVar2 = System_Type__GetTypeFromHandle(TypeRef_SettingsSkinsPanel,(MethodInfo *)0x0);
            if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary<object__object>__Add
                        (pSVar1,"Skins",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
              pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (__this->fields)._categoryPanelTypes;
              pSVar2 = System_Type__GetTypeFromHandle(TypeRef_SettingsAbilityPanel,(MethodInfo *)0x0);
              if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                System_Collections_Generic_Dictionary<object__object>__Add
                          (pSVar1,"Ability",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsPopup$$SetupSettingsList
// il2cpp: void UI_SettingsPopup__SetupSettingsList (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x41322e0

void UI_SettingsPopup__SetupSettingsList(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_SaveableSettingsContainer__o *pSVar3;
  Settings_SaveableSettingsContainer_o *pSVar4;
  Settings_SaveableSettingsContainer_array *pSVar5;
  System_Collections_Generic_List_BaseSettingsContainer__o *__this_00;
  Settings_BaseSettingsContainer_o *item;
  Settings_BaseSettingsContainer_array *pSVar6;
  long lVar7;
  
  if (DAT_0570494e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_0570494e = '\x01';
  }
  lVar7 = MethodInfo_Void_Add;
  pSVar3 = (__this->fields)._saveableSettings;
  if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    pSVar4 = *(Settings_SaveableSettingsContainer_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (pSVar3->fields)._items;
    if (pSVar5 != (Settings_SaveableSettingsContainer_array *)0x0) {
      uVar2 = (pSVar3->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (pSVar3->fields)._size = uVar2 + 1;
        pSVar5->m_Items[(int)uVar2] = pSVar4;
        il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
        pSVar3 = (__this->fields)._saveableSettings;
        lVar7 = MethodInfo_Void_Add;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar4,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        pSVar3 = (__this->fields)._saveableSettings;
        lVar7 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = lVar7;
      if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
        pSVar4 = *(Settings_SaveableSettingsContainer_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar3->fields)._items;
        if (pSVar5 != (Settings_SaveableSettingsContainer_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pSVar4;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
            pSVar3 = (__this->fields)._saveableSettings;
            lVar7 = MethodInfo_Void_Add;
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar4,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            pSVar3 = (__this->fields)._saveableSettings;
            lVar7 = MethodInfo_Void_Add;
          }
          MethodInfo_Void_Add = lVar7;
          if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
            pSVar4 = *(Settings_SaveableSettingsContainer_o **)
                      (*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (pSVar3->fields)._items;
            if (pSVar5 != (Settings_SaveableSettingsContainer_array *)0x0) {
              uVar2 = (pSVar3->fields)._size;
              if (uVar2 < (uint)pSVar5->max_length) {
                (pSVar3->fields)._size = uVar2 + 1;
                pSVar5->m_Items[(int)uVar2] = pSVar4;
                il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
                pSVar3 = (__this->fields)._saveableSettings;
                lVar7 = MethodInfo_Void_Add;
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          ((System_Collections_Generic_List_object__o *)pSVar3,
                           (Il2CppObject *)pSVar4,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                pSVar3 = (__this->fields)._saveableSettings;
                lVar7 = MethodInfo_Void_Add;
              }
              MethodInfo_Void_Add = lVar7;
              if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
                pSVar4 = *(Settings_SaveableSettingsContainer_o **)
                          (*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                piVar1 = &(pSVar3->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar5 = (pSVar3->fields)._items;
                if (pSVar5 != (Settings_SaveableSettingsContainer_array *)0x0) {
                  uVar2 = (pSVar3->fields)._size;
                  if (uVar2 < (uint)pSVar5->max_length) {
                    (pSVar3->fields)._size = uVar2 + 1;
                    pSVar5->m_Items[(int)uVar2] = pSVar4;
                    il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
                    pSVar3 = (__this->fields)._saveableSettings;
                    lVar7 = MethodInfo_Void_Add;
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              ((System_Collections_Generic_List_object__o *)pSVar3,
                               (Il2CppObject *)pSVar4,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                    pSVar3 = (__this->fields)._saveableSettings;
                    lVar7 = MethodInfo_Void_Add;
                  }
                  MethodInfo_Void_Add = lVar7;
                  if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0)
                  {
                    pSVar4 = *(Settings_SaveableSettingsContainer_o **)
                              (*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
                    piVar1 = &(pSVar3->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar5 = (pSVar3->fields)._items;
                    if (pSVar5 != (Settings_SaveableSettingsContainer_array *)0x0) {
                      uVar2 = (pSVar3->fields)._size;
                      if (uVar2 < (uint)pSVar5->max_length) {
                        (pSVar3->fields)._size = uVar2 + 1;
                        pSVar5->m_Items[(int)uVar2] = pSVar4;
                        il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
                        pSVar3 = (__this->fields)._saveableSettings;
                        lVar7 = MethodInfo_Void_Add;
                      }
                      else {
                        System_Collections_Generic_List<object>__AddWithResize
                                  ((System_Collections_Generic_List_object__o *)pSVar3,
                                   (Il2CppObject *)pSVar4,
                                   *(MethodInfo_35A7350 **)
                                    (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                        pSVar3 = (__this->fields)._saveableSettings;
                        lVar7 = MethodInfo_Void_Add;
                      }
                      MethodInfo_Void_Add = lVar7;
                      if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)
                                    0x0) {
                        pSVar4 = *(Settings_SaveableSettingsContainer_o **)
                                  (*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                        piVar1 = &(pSVar3->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar5 = (pSVar3->fields)._items;
                        if (pSVar5 != (Settings_SaveableSettingsContainer_array *)0x0) {
                          uVar2 = (pSVar3->fields)._size;
                          if (uVar2 < (uint)pSVar5->max_length) {
                            (pSVar3->fields)._size = uVar2 + 1;
                            pSVar5->m_Items[(int)uVar2] = pSVar4;
                            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
                            pSVar3 = (__this->fields)._saveableSettings;
                            lVar7 = MethodInfo_Void_Add;
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      ((System_Collections_Generic_List_object__o *)pSVar3,
                                       (Il2CppObject *)pSVar4,
                                       *(MethodInfo_35A7350 **)
                                        (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                            pSVar3 = (__this->fields)._saveableSettings;
                            lVar7 = MethodInfo_Void_Add;
                          }
                          MethodInfo_Void_Add = lVar7;
                          if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o
                                         *)0x0) {
                            pSVar4 = *(Settings_SaveableSettingsContainer_o **)
                                      (*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x30);
                            piVar1 = &(pSVar3->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pSVar5 = (pSVar3->fields)._items;
                            if (pSVar5 != (Settings_SaveableSettingsContainer_array *)0x0) {
                              uVar2 = (pSVar3->fields)._size;
                              if (uVar2 < (uint)pSVar5->max_length) {
                                (pSVar3->fields)._size = uVar2 + 1;
                                pSVar5->m_Items[(int)uVar2] = pSVar4;
                                il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
                                __this_00 = (__this->fields)._ignoreDefaultButtonSettings;
                                lVar7 = MethodInfo_Void_Add;
                              }
                              else {
                                System_Collections_Generic_List<object>__AddWithResize
                                          ((System_Collections_Generic_List_object__o *)pSVar3,
                                           (Il2CppObject *)pSVar4,
                                           *(MethodInfo_35A7350 **)
                                            (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                                __this_00 = (__this->fields)._ignoreDefaultButtonSettings;
                                lVar7 = MethodInfo_Void_Add;
                              }
                              MethodInfo_Void_Add = lVar7;
                              if (__this_00 !=
                                  (System_Collections_Generic_List_BaseSettingsContainer__o *)0x0) {
                                item = *(Settings_BaseSettingsContainer_o **)
                                        (*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
                                piVar1 = &(__this_00->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pSVar6 = (__this_00->fields)._items;
                                if (pSVar6 != (Settings_BaseSettingsContainer_array *)0x0) {
                                  uVar2 = (__this_00->fields)._size;
                                  if (uVar2 < (uint)pSVar6->max_length) {
                                    (__this_00->fields)._size = uVar2 + 1;
                                    pSVar6->m_Items[(int)uVar2] = item;
                                    il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2);
                                    return;
                                  }
                                  System_Collections_Generic_List<object>__AddWithResize
                                            ((System_Collections_Generic_List_object__o *)__this_00,
                                             (Il2CppObject *)item,
                                             *(MethodInfo_35A7350 **)
                                              (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsPopup$$SetupBottomButtons
// il2cpp: void UI_SettingsPopup__SetupBottomButtons (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4131f90

void UI_SettingsPopup__SetupBottomButtons(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  UnityEngine_Transform_o *parent;
  Il2CppClass *subCategory;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  long lVar2;
  UnityEngine_Events_UnityAction_o *onClick;
  Il2CppObject *__this_01;
  MethodInfo *in_R9;
  ulong uVar3;
  
  if (DAT_0570494f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass21_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Load");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Save");
    DAT_0570494f = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,4);
  if (lVar2 == 0) {
LAB_041322d6:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = "Default";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = "Load";
      il2cpp_runtime_glue(lVar2 + 0x28);
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = "Save";
        il2cpp_runtime_glue(lVar2 + 0x30);
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = "Back";
          il2cpp_runtime_glue(lVar2 + 0x38);
          if (0 < *(int *)(lVar2 + 0x18)) {
            uVar3 = 0;
            do {
              __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass21_0);
              System_Object___ctor(__this_01,(MethodInfo *)0x0);
              if (__this_01 == (Il2CppObject *)0x0) goto LAB_041322d6;
              __this_01[1].monitor = __this;
              il2cpp_runtime_glue(&__this_01[1].monitor,__this);
              if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_041322d1;
              __this_01[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar3 * 8);
              il2cpp_runtime_glue(__this_01 + 1);
              parent = (__this->fields).BottomBar;
              subCategory = __this_01[1].klass;
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05704983 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_UIManager);
                il2cpp_init_method_metadata(&"Common");
                il2cpp_init_method_metadata(&"");
                DAT_05704983 = '\x01';
              }
              if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar1 = UI_UIManager__GetLocale
                                 ("Common",(System_String_o *)subCategory,"",
                                  "","",in_R9);
              onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
              UnityEngine_Events_UnityAction___ctor();
              UI_ElementFactory__CreateTextButton
                        (parent,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
              uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
          }
          return;
        }
      }
    }
  }
LAB_041322d1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsPopup$$OnConfirmSetDefault
// il2cpp: void UI_SettingsPopup__OnConfirmSetDefault (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4132d70

void UI_SettingsPopup__OnConfirmSetDefault(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  System_Collections_Generic_List_BaseSettingsContainer__o *__this_01;
  long lVar1;
  UI_MessagePopup_o *__this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  Il2CppType *item;
  Il2CppType *pIVar5;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (DAT_05704950 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Settings reset to default.");
    DAT_05704950 = '\x01';
  }
  __this_00 = (__this->fields)._saveableSettings;
  if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
    pSVar3 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    while( true ) {
      item = local_30;
      __this_03.fields._8_8_ = pSVar4;
      __this_03.fields._list = pSVar3;
      __this_03.fields._current = (Il2CppObject *)item;
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
      if ((char)bVar2 == '\0') break;
      __this_01 = (__this->fields)._ignoreDefaultButtonSettings;
      if (__this_01 == (System_Collections_Generic_List_BaseSettingsContainer__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar5 = item;
      bVar2 = System_Collections_Generic_List<object>__Contains
                        ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)item
                         ,MethodInfo_Boolean_Contains);
      local_30 = pIVar5;
      if ((char)bVar2 == '\0') {
        if (item == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*item->data->vtable[4].methodPtr)(item,item->data->vtable[4].method);
        (*item->data->vtable[0x10].methodPtr)(item,item->data->vtable[0x10].method);
        local_30 = pIVar5;
      }
    }
    __this_04.fields._8_8_ = pSVar4;
    __this_04.fields._list = pSVar3;
    __this_04.fields._current = (Il2CppObject *)item;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((lVar1 != 0) &&
       (__this_02 = *(UI_MessagePopup_o **)(lVar1 + 0x30), __this_02 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_02,"Settings reset to default.",1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsPopup$$OnBottomBarButtonClick
// il2cpp: void UI_SettingsPopup__OnBottomBarButtonClick (UI_SettingsPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4132fd0

void UI_SettingsPopup__OnBottomBarButtonClick
               (UI_SettingsPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *pSVar1;
  long *plVar2;
  long lVar3;
  UI_MessagePopup_o *__this_00;
  UI_ConfirmPopup_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar4;
  UnityEngine_Events_UnityAction_o *onConfirm;
  System_Collections_Generic_List_T__o *pSVar5;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  System_Collections_Generic_List_T__o *local_30;
  System_Collections_Generic_List_Enumerator_T__c *pSStack_28;
  Il2CppType *local_20;
  
  if (DAT_05704951 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnBottomBarButtonClick_b__23_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Are you sure you want to reset to default?");
    il2cpp_init_method_metadata(&"Load");
    il2cpp_init_method_metadata(&"Settings loaded from file.");
    il2cpp_init_method_metadata(&"Reset default");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704951 = '\x01';
  }
  bVar4 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(name,"Load",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      bVar4 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 2) {
          if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
          if (plVar2 == (long *)0x0) goto LAB_0413346e;
          if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
             (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8)
              != TypeInfo_InGameMenu)) goto LAB_04133473;
          *(undefined1 *)(plVar2 + 0x2e) = 1;
        }
LAB_04133338:
        (*(__this->klass->vtable)._22_Hide.methodPtr)
                  (__this,(__this->klass->vtable)._22_Hide.method);
        return;
      }
      bVar4 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar3 != 0) {
        __this_01 = *(UI_ConfirmPopup_o **)(lVar3 + 0x38);
        onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_01,"Are you sure you want to reset to default?",onConfirm,"Reset default",(MethodInfo *)0x0);
          return;
        }
      }
    }
    else {
      pSVar1 = (__this->fields)._saveableSettings;
      if (pSVar1 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd0,
                   (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
        pSVar5 = local_30;
        pSVar6 = pSStack_28;
        pIVar7 = local_20;
        while (__this_03.fields._8_8_ = pSVar6, __this_03.fields._list = pSVar5,
              __this_03.fields._current = (Il2CppObject *)pIVar7,
              bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8),
              (char)bVar4 != '\0') {
          if (pIVar7 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          (*pIVar7->data->vtable[0x11].methodPtr)(pIVar7,pIVar7->data->vtable[0x11].method);
        }
        __this_05.fields._8_8_ = pSVar6;
        __this_05.fields._list = pSVar5;
        __this_05.fields._current = (Il2CppObject *)pIVar7;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_05,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
        UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
        if ((lVar3 != 0) &&
           (__this_00 = *(UI_MessagePopup_o **)(lVar3 + 0x30), __this_00 != (UI_MessagePopup_o *)0x0
           )) {
          UI_MessagePopup__Show(__this_00,"Settings loaded from file.",1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    pSVar1 = (__this->fields)._saveableSettings;
    if (pSVar1 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffd0,
                 (System_Collections_Generic_List_object__o *)pSVar1,MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
      pSVar5 = local_30;
      pSVar6 = pSStack_28;
      pIVar7 = local_20;
      while (__this_02.fields._8_8_ = pSVar6, __this_02.fields._list = pSVar5,
            __this_02.fields._current = (Il2CppObject *)pIVar7,
            bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8),
            (char)bVar4 != '\0') {
        if (pIVar7 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*pIVar7->data->vtable[0x10].methodPtr)(pIVar7,pIVar7->data->vtable[0x10].method);
      }
      __this_04.fields._8_8_ = pSVar6;
      __this_04.fields._list = pSVar5;
      __this_04.fields._current = (Il2CppObject *)pIVar7;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
      if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) != 2) goto LAB_04133338;
      Settings_SettingsManager__NotifySettingsChanged((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar2 = *(long **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (plVar2 != (long *)0x0) {
        if ((*(byte *)(*plVar2 + 0x130) < *(byte *)(TypeInfo_InGameMenu + 0x130)) ||
           (*(long *)(*(long *)(*plVar2 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameMenu + 0x130) * 8) !=
            TypeInfo_InGameMenu)) {
LAB_04133473:
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume();
        }
        plVar2 = (long *)plVar2[0x22];
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x288))(plVar2,*(undefined8 *)(*plVar2 + 0x290));
          goto LAB_04133338;
        }
      }
    }
  }
LAB_0413346e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsPopup$$Hide
// il2cpp: void UI_SettingsPopup__Hide (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4133570

void UI_SettingsPopup__Hide(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_03;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05704952 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
    DAT_05704952 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar3 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_03 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_03,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this_00 = (__this->fields)._saveableSettings;
      if (__this_00 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0)
      goto LAB_04133678;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
      while( true ) {
        __this_01.fields._8_8_ = pIVar3;
        __this_01.fields._list = pSVar2;
        __this_01.fields._current = pIVar4;
        bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar1 == '\0') break;
        if (pIVar4 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*pIVar4->klass->vtable[0xb].methodPtr)(pIVar4,pIVar4->klass->vtable[0xb].method);
      }
      __this_02.fields._8_8_ = pIVar3;
      __this_02.fields._list = pSVar2;
      __this_02.fields._current = pIVar4;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    }
    UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
LAB_04133678:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.SettingsPopup$$.ctor
// il2cpp: void UI_SettingsPopup___ctor (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4133700

void UI_SettingsPopup___ctor(UI_SettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_BaseSettingsContainer__o *__this_00;
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_01;
  
  if (DAT_05704953 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_SaveableSettingsContainer);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_BaseSettingsContainer);
    il2cpp_init_method_metadata(&TypeInfo_List_SaveableSettingsContainer);
    il2cpp_init_method_metadata(&TypeInfo_List_BaseSettingsContainer);
    il2cpp_init_method_metadata(&"SettingsPopup");
    DAT_05704953 = '\x01';
  }
  (__this->fields).LocaleCategory = "SettingsPopup";
  il2cpp_runtime_glue(&(__this->fields).LocaleCategory);
  __this_00 = (System_Collections_Generic_List_BaseSettingsContainer__o *)
              il2cpp_runtime_glue(TypeInfo_List_BaseSettingsContainer);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Settings_BaseSettingsContainer);
  (__this->fields)._ignoreDefaultButtonSettings = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._ignoreDefaultButtonSettings,__this_00);
  __this_01 = (System_Collections_Generic_List_SaveableSettingsContainer__o *)
              il2cpp_runtime_glue(TypeInfo_List_SaveableSettingsContainer);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Settings_SaveableSettingsContainer);
  (__this->fields)._saveableSettings = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._saveableSettings);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.SettingsPopup$$<OnBottomBarButtonClick>b__23_0
// il2cpp: void UI_SettingsPopup___OnBottomBarButtonClick_b__23_0 (UI_SettingsPopup_o* __this, const MethodInfo* method);
// 0x4133800

void UI_SettingsPopup__<OnBottomBarButtonClick>b__23_0
               (UI_SettingsPopup_o *__this,MethodInfo *method)

{
  UI_SettingsPopup__OnConfirmSetDefault(__this,method);
  return;
}


