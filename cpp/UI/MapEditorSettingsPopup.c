// Type: UI.MapEditorSettingsPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MapEditorSettingsPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MapEditorSettingsPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass15_0___ctor (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x4123e60

void UI_MapEditorSettingsPopup_<>c__DisplayClass15_0___ctor
               (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x4124700

void UI_MapEditorSettingsPopup_<>c__DisplayClass15_0__<SetupTopButtons>b__0
               (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o *__this,MethodInfo *method)

{
  UI_MapEditorSettingsPopup_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (UI_MapEditorSettingsPopup_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._28_SetCategoryPanel.methodPtr;
    (*vtable_dispatch)
              (pUVar1,(__this->fields).buttonName,
               (pUVar1->klass->vtable)._28_SetCategoryPanel.method,vtable_dispatch);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorSettingsPopup.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass17_0___ctor (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4123f60

void UI_MapEditorSettingsPopup_<>c__DisplayClass17_0___ctor
               (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup.<>c__DisplayClass17_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass17_0___SetupBottomButtons_b__0 (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x4124730

void UI_MapEditorSettingsPopup_<>c__DisplayClass17_0__<SetupBottomButtons>b__0
               (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  UI_MapEditorSettingsPopup_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorSettingsPopup_o *)0x0) {
    UI_MapEditorSettingsPopup__OnBottomBarButtonClick(__this_00,(__this->fields).buttonName,in_RDX);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorSettingsPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorSettingsPopup__get_Title (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x41236e0

System_String_o *
UI_MapEditorSettingsPopup__get_Title(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// UI.MapEditorSettingsPopup$$get_Width
// il2cpp: float UI_MapEditorSettingsPopup__get_Width (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4123700

float UI_MapEditorSettingsPopup__get_Width(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  return 1010.0;
}


// UI.MapEditorSettingsPopup$$get_Height
// il2cpp: float UI_MapEditorSettingsPopup__get_Height (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4123710

float UI_MapEditorSettingsPopup__get_Height(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  return 630.0;
}


// UI.MapEditorSettingsPopup$$get_CategoryPanel
// il2cpp: bool UI_MapEditorSettingsPopup__get_CategoryPanel (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4123720

bool_conflict
UI_MapEditorSettingsPopup__get_CategoryPanel(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorSettingsPopup$$get_CategoryButtons
// il2cpp: bool UI_MapEditorSettingsPopup__get_CategoryButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4123730

bool_conflict
UI_MapEditorSettingsPopup__get_CategoryButtons
          (UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// UI.MapEditorSettingsPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorSettingsPopup__get_DefaultCategoryPanel (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4123740

System_String_o *
UI_MapEditorSettingsPopup__get_DefaultCategoryPanel
          (UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  if (DAT_05704903 == '\0') {
    il2cpp_init_method_metadata(&"General");
    DAT_05704903 = '\x01';
  }
  return "General";
}


// UI.MapEditorSettingsPopup$$Setup
// il2cpp: void UI_MapEditorSettingsPopup__Setup (UI_MapEditorSettingsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4123770

void UI_MapEditorSettingsPopup__Setup
               (UI_MapEditorSettingsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_SaveableSettingsContainer__o *pSVar3;
  Settings_SaveableSettingsContainer_o *pSVar4;
  Settings_SaveableSettingsContainer_array *pSVar5;
  long lVar6;
  
  if (DAT_05704904 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    DAT_05704904 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_MapEditorSettingsPopup__SetupBottomButtons(__this,(MethodInfo *)parent);
  lVar6 = MethodInfo_Void_Add;
  pSVar3 = (__this->fields)._saveableSettings;
  if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    pSVar4 = *(Settings_SaveableSettingsContainer_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x78);
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
        lVar6 = MethodInfo_Void_Add;
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar4,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        pSVar3 = (__this->fields)._saveableSettings;
        lVar6 = MethodInfo_Void_Add;
      }
      MethodInfo_Void_Add = lVar6;
      if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
        pSVar4 = *(Settings_SaveableSettingsContainer_o **)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (pSVar3->fields)._items;
        if (pSVar5 != (Settings_SaveableSettingsContainer_array *)0x0) {
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pSVar4;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2);
            return;
          }
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)pSVar4,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorSettingsPopup$$SetupTopButtons
// il2cpp: void UI_MapEditorSettingsPopup__SetupTopButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4123b50

void UI_MapEditorSettingsPopup__SetupTopButtons
               (UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

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
  ulong uVar4;
  
  if (DAT_05704905 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Button_GetComponent_Button);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupTopButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass15_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Top");
    il2cpp_init_method_metadata(&"Keybinds");
    il2cpp_init_method_metadata(&"Button");
    il2cpp_init_method_metadata(&"");
    DAT_05704905 = '\x01';
  }
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,2);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = "General";
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = "Keybinds";
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (0 < *(int *)(lVar2 + 0x18)) {
          uVar4 = 0;
          do {
            pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass15_0);
            System_Object___ctor(pIVar3,(MethodInfo *)0x0);
            if (pIVar3 == (Il2CppObject *)0x0) goto LAB_04123e49;
            pIVar3[1].monitor = __this;
            il2cpp_runtime_glue(&pIVar3[1].monitor,__this);
            if (*(uint *)(lVar2 + 0x18) <= uVar4) goto LAB_04123e4e;
            pIVar3[1].klass = *(Il2CppClass **)(lVar2 + 0x20 + uVar4 * 8);
            il2cpp_runtime_glue(pIVar3 + 1);
            parent = (__this->fields).TopBar;
            pSVar1 = (__this->fields).LocaleCategory;
            item = System_String__Concat
                             ((System_String_o *)pIVar3[1].klass,"Button",(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar1 = UI_UIManager__GetLocale
                               (pSVar1,"Top",item,"","",(MethodInfo *)0x0
                               );
            onClick = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
            UnityEngine_Events_UnityAction___ctor();
            __this_02 = UI_ElementFactory__CreateCategoryButton
                                  (parent,__this_01,pSVar1,onClick,(MethodInfo *)0x0);
            if (__this_02 == (UnityEngine_GameObject_o *)0x0) goto LAB_04123e49;
            __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (__this->fields)._topButtons;
            key = pIVar3[1].klass;
            pIVar3 = UnityEngine_GameObject__GetComponent<object>(__this_02,MethodInfo_Button_GetComponent_Button);
            if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
            goto LAB_04123e49;
            System_Collections_Generic_Dictionary<object__object>__Add
                      (__this_00,(Il2CppObject *)key,pIVar3,MethodInfo_Void_Add);
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)*(int *)(lVar2 + 0x18));
        }
        UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
LAB_04123e4e:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04123e49:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorSettingsPopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorSettingsPopup__RegisterCategoryPanels (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4123e70

void UI_MapEditorSettingsPopup__RegisterCategoryPanels
               (UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_RuntimeTypeHandle_o handle;
  System_Type_o *pSVar2;
  
  if (DAT_05704906 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeRef_MapEditorSettingsGeneralPanel);
    il2cpp_init_method_metadata(&TypeRef_MapEditorSettingsKeybindsPanel);
    il2cpp_init_method_metadata(&"General");
    il2cpp_init_method_metadata(&"Keybinds");
    DAT_05704906 = '\x01';
  }
  handle.fields.value = TypeRef_MapEditorSettingsGeneralPanel.fields.value;
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
    pSVar2 = System_Type__GetTypeFromHandle(TypeRef_MapEditorSettingsKeybindsPanel,(MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Add
                (pSVar1,"Keybinds",(Il2CppObject *)pSVar2,MethodInfo_Void_Add);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorSettingsPopup$$SetupBottomButtons
// il2cpp: void UI_MapEditorSettingsPopup__SetupBottomButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x41238b0

void UI_MapEditorSettingsPopup__SetupBottomButtons
               (UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

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
  
  if (DAT_05704907 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Void__SetupBottomButtons_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704907 = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar1 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,3);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = "Default";
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = "Save";
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = "Back";
          il2cpp_runtime_glue(lVar2 + 0x30);
          if (0 < *(int *)(lVar2 + 0x18)) {
            uVar3 = 0;
            do {
              __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
              System_Object___ctor(__this_01,(MethodInfo *)0x0);
              if (__this_01 == (Il2CppObject *)0x0) goto LAB_04123b3a;
              __this_01[1].monitor = __this;
              il2cpp_runtime_glue(&__this_01[1].monitor,__this);
              if (*(uint *)(lVar2 + 0x18) <= uVar3) goto LAB_04123b3f;
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
              UI_ElementFactory__CreateTextButton
                        (parent,__this_00,pSVar1,0.0,onClick,(MethodInfo *)0x0);
              uVar3 = uVar3 + 1;
            } while ((long)uVar3 < (long)*(int *)(lVar2 + 0x18));
          }
          return;
        }
      }
    }
LAB_04123b3f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04123b3a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorSettingsPopup$$OnConfirmSetDefault
// il2cpp: void UI_MapEditorSettingsPopup__OnConfirmSetDefault (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4123f70

void UI_MapEditorSettingsPopup__OnConfirmSetDefault
               (UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  Il2CppClass *pIVar2;
  void *pvVar3;
  long lVar4;
  UI_MessagePopup_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar5;
  System_Collections_Generic_List_T__o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppType *pIVar9;
  undefined1 local_40 [16];
  Il2CppType *local_30;
  
  if (DAT_05704908 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InputSettings);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Settings reset to default.");
    DAT_05704908 = '\x01';
  }
  __this_00 = (__this->fields)._saveableSettings;
  if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
    pSVar6 = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_40._8_8_;
    pIVar9 = local_30;
    while( true ) {
      __this_02.fields._8_8_ = pSVar7;
      __this_02.fields._list = pSVar6;
      __this_02.fields._current = (Il2CppObject *)pIVar9;
      bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
      if ((char)bVar5 == '\0') break;
      if (pIVar9 == (Il2CppType *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar2 = pIVar9->data;
      bVar1 = (TypeInfo_InputSettings->_2).naturalAligment;
      pIVar8 = pIVar9;
      if (((pIVar2->_2).naturalAligment < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InputSettings)) {
        (*pIVar2->vtable[4].methodPtr)(pIVar9,pIVar2->vtable[4].method);
      }
      else {
        pIVar2 = pIVar9[5].data;
        if (pIVar2 == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pvVar3 = (pIVar2->_1).image;
        (**(code **)((long)pvVar3 + 0x178))(pIVar2,*(undefined8 *)((long)pvVar3 + 0x180));
      }
      (*pIVar9->data->vtable[0x10].methodPtr)(pIVar9,pIVar9->data->vtable[0x10].method);
      pIVar9 = pIVar8;
    }
    __this_03.fields._8_8_ = pSVar7;
    __this_03.fields._list = pSVar6;
    __this_03.fields._current = (Il2CppObject *)pIVar9;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar4 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if ((lVar4 != 0) &&
       (__this_01 = *(UI_MessagePopup_o **)(lVar4 + 0x30), __this_01 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_01,"Settings reset to default.",1,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorSettingsPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorSettingsPopup__OnBottomBarButtonClick (UI_MapEditorSettingsPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x41241f0

void UI_MapEditorSettingsPopup__OnBottomBarButtonClick
               (UI_MapEditorSettingsPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  long lVar1;
  UI_ConfirmPopup_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  UnityEngine_Events_UnityAction_o *onConfirm;
  System_Collections_Generic_List_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  Il2CppObject *pIVar5;
  
  if (DAT_05704909 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
    il2cpp_init_method_metadata(&MethodInfo_Void__OnBottomBarButtonClick_b__19_0);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"Are you sure you want to reset to default?");
    il2cpp_init_method_metadata(&"Reset default");
    il2cpp_init_method_metadata(&"Default");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704909 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  pIVar5 = (Il2CppObject *)0x0;
  bVar2 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (lVar1 != 0) {
        __this_01 = *(UI_ConfirmPopup_o **)(lVar1 + 0x38);
        onConfirm = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
        UnityEngine_Events_UnityAction___ctor();
        if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show(__this_01,"Are you sure you want to reset to default?",onConfirm,"Reset default",(MethodInfo *)0x0);
          return;
        }
      }
      goto LAB_04124424;
    }
  }
  else {
    __this_00 = (__this->fields)._saveableSettings;
    if (__this_00 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
LAB_04124424:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
    while (__this_02.fields._8_8_ = pIVar4, __this_02.fields._list = pSVar3,
          __this_02.fields._current = pIVar5,
          bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8),
          (char)bVar2 != '\0') {
      if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      (*pIVar5->klass->vtable[0x10].methodPtr)(pIVar5,pIVar5->klass->vtable[0x10].method);
    }
    __this_03.fields._8_8_ = pIVar4;
    __this_03.fields._list = pSVar3;
    __this_03.fields._current = pIVar5;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.MapEditorSettingsPopup$$Hide
// il2cpp: void UI_MapEditorSettingsPopup__Hide (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x41244b0

void UI_MapEditorSettingsPopup__Hide(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_03;
  System_Collections_Generic_List_T__o *pSVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_0570490a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_SaveableSettingsContainer_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_SaveableSettingsCo);
    DAT_0570490a = '\x01';
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
      goto LAB_041245b8;
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
LAB_041245b8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MapEditorSettingsPopup$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___ctor (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x4124640

void UI_MapEditorSettingsPopup___ctor(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  
  if (DAT_0570490b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_SaveableSettingsContainer);
    il2cpp_init_method_metadata(&TypeInfo_List_SaveableSettingsContainer);
    il2cpp_init_method_metadata(&"MapEditorSettings");
    DAT_0570490b = '\x01';
  }
  (__this->fields).LocaleCategory = "MapEditorSettings";
  il2cpp_runtime_glue(&(__this->fields).LocaleCategory);
  __this_00 = (System_Collections_Generic_List_SaveableSettingsContainer__o *)
              il2cpp_runtime_glue(TypeInfo_List_SaveableSettingsContainer);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Settings_SaveableSettingsContainer);
  (__this->fields)._saveableSettings = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._saveableSettings);
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup$$<OnBottomBarButtonClick>b__19_0
// il2cpp: void UI_MapEditorSettingsPopup___OnBottomBarButtonClick_b__19_0 (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x41246f0

void UI_MapEditorSettingsPopup__<OnBottomBarButtonClick>b__19_0
               (UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  UI_MapEditorSettingsPopup__OnConfirmSetDefault(__this,method);
  return;
}


