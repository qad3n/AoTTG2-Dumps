// Type: UI.MapEditorSettingsPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MapEditorSettingsPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsPopup.cs
// --------------------------------

// UI.MapEditorSettingsPopup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass15_0___ctor (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorSettingsPopup___c__DisplayClass15_0___ctor(UI_MapEditorSettingsPopup___c__DisplayClass15_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup.<>c__DisplayClass15_0$$<SetupTopButtons>b__0
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass15_0___SetupTopButtons_b__0 (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x182283300

void
UI_MapEditorSettingsPopup___c__DisplayClass15_0___SetupTopButtons_b__0(UI_MapEditorSettingsPopup___c__DisplayClass15_0_o* __this, MethodInfo* method)

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


// UI.MapEditorSettingsPopup.<>c__DisplayClass17_0$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass17_0___ctor (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_MapEditorSettingsPopup___c__DisplayClass17_0___ctor(UI_MapEditorSettingsPopup___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup.<>c__DisplayClass17_0$$<SetupBottomButtons>b__0
// il2cpp: void UI_MapEditorSettingsPopup___c__DisplayClass17_0___SetupBottomButtons_b__0 (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x1822ea380

void UI_MapEditorSettingsPopup___c__DisplayClass17_0___SetupBottomButtons_b__0
               (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  UI_MapEditorSettingsPopup_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (UI_MapEditorSettingsPopup_o *)0x0) {
    UI_MapEditorSettingsPopup__OnBottomBarButtonClick(__this_00,(__this->fields).buttonName,(MethodInfo *)0x0)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsPopup$$get_Title
// il2cpp: System_String_o* UI_MapEditorSettingsPopup__get_Title (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1818c6010

System_String_o*
UI_MapEditorSettingsPopup__get_Title(UI_MapEditorSettingsPopup_o* __this, MethodInfo* method)

{
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// UI.MapEditorSettingsPopup$$get_Width
// il2cpp: float UI_MapEditorSettingsPopup__get_Width (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1822d3970

float
UI_MapEditorSettingsPopup__get_Width(UI_MapEditorSettingsPopup_o* __this, MethodInfo* method)

{
  return 1010.0;
}


// UI.MapEditorSettingsPopup$$get_Height
// il2cpp: float UI_MapEditorSettingsPopup__get_Height (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x18228d430

float
UI_MapEditorSettingsPopup__get_Height(UI_MapEditorSettingsPopup_o* __this, MethodInfo* method)

{
  return 630.0;
}


// UI.MapEditorSettingsPopup$$get_CategoryPanel
// il2cpp: bool UI_MapEditorSettingsPopup__get_CategoryPanel (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorSettingsPopup__get_CategoryPanel(UI_MapEditorSettingsPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorSettingsPopup$$get_CategoryButtons
// il2cpp: bool UI_MapEditorSettingsPopup__get_CategoryButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
UI_MapEditorSettingsPopup__get_CategoryButtons(UI_MapEditorSettingsPopup_o* __this, MethodInfo* method)

{
  return true;
}


// UI.MapEditorSettingsPopup$$get_DefaultCategoryPanel
// il2cpp: System_String_o* UI_MapEditorSettingsPopup__get_DefaultCategoryPanel (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1822d3940

System_String_o *
UI_MapEditorSettingsPopup__get_DefaultCategoryPanel(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843475c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    Il2CppMethodInitialized_1843475c8 = '\x01';
  }
  return "General";
}


// UI.MapEditorSettingsPopup$$Setup
// il2cpp: void UI_MapEditorSettingsPopup__Setup (UI_MapEditorSettingsPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1822d3710

void UI_MapEditorSettingsPopup__Setup
               (UI_MapEditorSettingsPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_SaveableSettingsContainer__o *pSVar3;
  Settings_SaveableSettingsContainer_array *pSVar4;
  Settings_MapEditorSettings_o *item;
  Settings_InputSettings_o *item_00;
  MethodInfo *pMVar5;
  
  if (Il2CppMethodInitialized_1843475c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_1843475c9 = '\x01';
  }
  UI_HeadedPanel__Setup((UI_HeadedPanel_o *)__this,parent,(MethodInfo *)0x0);
  UI_MapEditorSettingsPopup__SetupBottomButtons(__this,(MethodInfo *)0x0);
  pMVar5 = MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add;
  pSVar3 = (__this->fields)._saveableSettings;
  if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    pSVar4 = (pSVar3->fields)._items;
    item = TypeInfo_Settings_SettingsManager->static_fields->MapEditorSettings;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    if (pSVar4 == (Settings_SaveableSettingsContainer_array *)0x0) goto label_1822d3866;
    uVar2 = (pSVar3->fields)._size;
    if (uVar2 < (uint)pSVar4->max_length) {
      (pSVar3->fields)._size = uVar2 + 1;
      if ((uint)pSVar4->max_length <= uVar2) goto label_1822d386c;
      pSVar4->m_Items[(int)uVar2] = (Settings_SaveableSettingsContainer_o *)item;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                 (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    }
    pMVar5 = MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_Add;
    pSVar3 = (__this->fields)._saveableSettings;
    if (pSVar3 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
      pSVar4 = (pSVar3->fields)._items;
      item_00 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      if (pSVar4 != (Settings_SaveableSettingsContainer_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pSVar4->max_length <= uVar2) {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item_00,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          return;
        }
        (pSVar3->fields)._size = uVar2 + 1;
        if (uVar2 < (uint)pSVar4->max_length) {
          pSVar4->m_Items[(int)uVar2] = (Settings_SaveableSettingsContainer_o *)item_00;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,item_00);
          return;
        }
label_1822d386c:
        ThrowIndexOutOfRangeException();
      }
    }
  }
label_1822d3866:
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsPopup$$SetupTopButtons
// il2cpp: void UI_MapEditorSettingsPopup__SetupTopButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1822d3420

void UI_MapEditorSettingsPopup__SetupTopButtons(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *value;
  UnityEngine_Transform_o *parent;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_01;
  Il2CppObject *pIVar2;
  UI_MapEditorSettingsPopup___c__DisplayClass15_0_o *object;
  System_String_o *item;
  UnityEngine_Events_UnityAction_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  UnityEngine_UI_Button_o *value_00;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843475ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorSettingsPopup_c__DisplayClass15_0_SetupTopButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorSettingsPopup_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Top");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843475ca = '\x01';
  }
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x1c,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,2);
  pSVar1 = "General";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      pIVar2[2].klass = (Il2CppClass *)"General";
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar1);
      pSVar1 = "Keybinds";
      if (1 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[2].monitor = "Keybinds";
        Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,pSVar1);
        uVar3 = 0;
        while( true ) {
          if (*(int *)&pIVar2[1].monitor <= (int)uVar3) {
            UI_HeadedPanel__SetupTopButtons((UI_HeadedPanel_o *)__this,(MethodInfo *)0x0);
            return;
          }
          object = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_UI_MapEditorSettingsPopup_c__DisplayClass15_0);
          System_Object___ctor
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
          if (object == (UI_MapEditorSettingsPopup___c__DisplayClass15_0_o *)0x0) break;
          (object->fields).__4__this = __this;
          Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
          if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_1822d3707;
          value = (&pIVar2[2].klass)[(int)uVar3];
          (object->fields).buttonName = (System_String_o *)value;
          Il2CppCodeGenWriteBarrier(&(object->fields).buttonName,value);
          parent = (__this->fields).TopBar;
          pSVar1 = (__this->fields).LocaleCategory;
          item = System_String__Concat_1969e50
                           ((object->fields).buttonName,"Button",(MethodInfo *)0x0);
          if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
          }
          pSVar1 = UI_UIManager__GetLocale
                             (pSVar1,"Top",item,"","",
                              (MethodInfo *)0x0);
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
          UnityEngine_Events_UnityAction___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_UI_MapEditorSettingsPopup_c__DisplayClass15_0_SetupTopButtons_b__0,
                     (MethodInfo *)0x0);
          __this_03 = UI_ElementFactory__CreateCategoryButton
                                (parent,__this_01,pSVar1,__this_02,(MethodInfo *)0x0);
          if (__this_03 == (UnityEngine_GameObject_o *)0x0) break;
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._topButtons;
          pSVar1 = (object->fields).buttonName;
          value_00 = UnityEngine_GameObject__GetComponent_object_
                               (__this_03,
                                (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
          if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
          System_Collections_Generic_Dictionary_object__object___Add
                    (__this_00,(Il2CppObject *)pSVar1,(Il2CppObject *)value_00,
                     (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Button_Add)
          ;
          uVar3 = uVar3 + 1;
        }
        goto label_1822d3701;
      }
    }
label_1822d3707:
    ThrowIndexOutOfRangeException();
  }
label_1822d3701:
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsPopup$$RegisterCategoryPanels
// il2cpp: void UI_MapEditorSettingsPopup__RegisterCategoryPanels (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1822d30b0

void UI_MapEditorSettingsPopup__RegisterCategoryPanels(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  Il2CppType *handle;
  System_Type_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843475cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MapEditorSettingsGeneralPanel);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UI_MapEditorSettingsKeybindsPanel);
    il2cpp_codegen_initialize_runtime_metadata(&"General");
    il2cpp_codegen_initialize_runtime_metadata(&"Keybinds");
    Il2CppMethodInitialized_1843475cb = '\x01';
  }
  handle = TypeRef_UI_MapEditorSettingsGeneralPanel;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              (pSVar1,(Il2CppObject *)"General",(Il2CppObject *)pSVar2,
               (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._categoryPanelTypes;
    pSVar2 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UI_MapEditorSettingsKeybindsPanel,
                        (MethodInfo *)0x0);
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Add
                (pSVar1,(Il2CppObject *)"Keybinds",(Il2CppObject *)pSVar2,
                 (MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Type_Add);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsPopup$$SetupBottomButtons
// il2cpp: void UI_MapEditorSettingsPopup__SetupBottomButtons (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1822d31a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d3319: nop dword ptr [rax]

void UI_MapEditorSettingsPopup__SetupBottomButtons(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  Il2CppClass *value;
  UnityEngine_Transform_o *parent;
  int32_t fontSize;
  System_String_o *pSVar1;
  UI_ElementStyle_o *__this_00;
  Il2CppObject *pIVar2;
  UI_MapEditorSettingsPopup___c__DisplayClass17_0_o *object;
  UnityEngine_Events_UnityAction_o *__this_01;
  uint uVar3;
  
  if (Il2CppMethodInitialized_1843475cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorSettingsPopup_c__DisplayClass17_0_SetupBottomButtons_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MapEditorSettingsPopup_c__DisplayClass17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_1843475cc = '\x01';
  }
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)(__this);
  pSVar1 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar1,(MethodInfo *)0x0);
  pIVar2 = SZArrayNew(TypeInfo_string_array,3);
  pSVar1 = "Default";
  if (pIVar2 != (Il2CppObject *)0x0) {
    if (*(int *)&pIVar2[1].monitor != 0) {
      pIVar2[2].klass = (Il2CppClass *)"Default";
      Il2CppCodeGenWriteBarrier(&pIVar2[2].klass,pSVar1);
      pSVar1 = "Save";
      if (1 < *(uint *)&pIVar2[1].monitor) {
        pIVar2[2].monitor = "Save";
        Il2CppCodeGenWriteBarrier(&pIVar2[2].monitor,pSVar1);
        pSVar1 = "Back";
        if (2 < *(uint *)&pIVar2[1].monitor) {
          pIVar2[3].klass = (Il2CppClass *)"Back";
          Il2CppCodeGenWriteBarrier(&pIVar2[3].klass,pSVar1);
          uVar3 = 0;
          while( true ) {
            if (*(int *)&pIVar2[1].monitor <= (int)uVar3) {
              return;
            }
            object = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_UI_MapEditorSettingsPopup_c__DisplayClass17_0);
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0)
            ;
            if (object == (UI_MapEditorSettingsPopup___c__DisplayClass17_0_o *)0x0) break;
            (object->fields).__4__this = __this;
            Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
            if (*(uint *)&pIVar2[1].monitor <= uVar3) goto label_1822d340d;
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
                       (intptr_t)
                       MethodInfo_UI_MapEditorSettingsPopup_c__DisplayClass17_0_SetupBottomButtons_b__0,
                       (MethodInfo *)0x0);
            UI_ElementFactory__CreateTextButton(parent,__this_00,pSVar1,0.0,__this_01,(MethodInfo *)0x0);
            uVar3 = uVar3 + 1;
          }
          goto label_1822d3413;
        }
      }
    }
label_1822d340d:
    ThrowIndexOutOfRangeException();
  }
label_1822d3413:
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsPopup$$OnConfirmSetDefault
// il2cpp: void UI_MapEditorSettingsPopup__OnConfirmSetDefault (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1822d2e50
// eh: try 0x1822d2f24..0x1822d309d -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d2ff8: mov rdx, qword ptr [rip + 0x1dc1f21]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose
// asm:   0x1822d2fff: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822d3004: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822d3009: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822d300e: test rcx, rcx
// asm:   0x1822d3011: jne 0x1822d309d
// asm:   0x1822d3017: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x1822d309d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MapEditorSettingsPopup__OnConfirmSetDefault(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  Il2CppClass *pIVar2;
  longlong *plVar3;
  UI_BaseMenu_o *pUVar4;
  UI_MessagePopup_o *__this_01;
  Il2CppObject *pIVar5;
  bool bVar6;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_1843475cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputSettings);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Settings reset to default.");
    Il2CppMethodInitialized_1843475cd = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._saveableSettings;
  if (__this_00 != (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext
                        );
      pIVar5 = local_18;
      if (!bVar6) break;
      if (local_18 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar2 = local_18->klass;
      bVar1 = (TypeInfo_Settings_InputSettings->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_InputSettings))
      {
        (*pIVar2->vtable[4].methodPtr)(local_18,pIVar2->vtable[4].method);
      }
      else {
        bVar1 = (TypeInfo_Settings_InputSettings->_2).typeHierarchyDepth;
        if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Settings_InputSettings
           )) {
          il2cpp_codegen_raise_invalid_cast_exception(local_18);
        }
        plVar3 = local_18[6].monitor;
        if (plVar3 == (longlong *)0x0) {
          ThrowNullReferenceException();
        }
        (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
      }
      pIVar2 = pIVar5->klass;
      (*pIVar2->vtable[0x12].methodPtr)(pIVar5,pIVar2->vtable[0x12].method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    UI_BasePanel__RebuildCategoryPanel((UI_BasePanel_o *)__this,(MethodInfo *)0x0);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar4 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if ((pUVar4 != (UI_BaseMenu_o *)0x0) &&
       (__this_01 = (pUVar4->fields).MessagePopup, __this_01 != (UI_MessagePopup_o *)0x0)) {
      UI_MessagePopup__Show(__this_01,"Settings reset to default.",true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsPopup$$OnBottomBarButtonClick
// il2cpp: void UI_MapEditorSettingsPopup__OnBottomBarButtonClick (UI_MapEditorSettingsPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1822d2bb0
// eh: try 0x1822d2ce1..0x1822d2e3b -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d2d27: mov rdx, qword ptr [rip + 0x1dc21f2]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose
// asm:   0x1822d2d2e: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1822d2d33: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822d2d38: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1822d2d3d: test rcx, rcx
// asm:   0x1822d2d40: jne 0x1822d2e3b
// asm:   0x1822d2d46: mov rdi, qword ptr [rsp + 0x80]
// asm:   0x1822d2e3b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void UI_MapEditorSettingsPopup__OnBottomBarButtonClick
               (UI_MapEditorSettingsPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  UI_BaseMenu_o *pUVar1;
  UI_ConfirmPopup_o *__this_01;
  bool bVar2;
  UnityEngine_Events_UnityAction_o *__this_02;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_1843475ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MapEditorSettingsPopup_OnBottomBarButtonClick_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"Are you sure you want to reset to default?");
    il2cpp_codegen_initialize_runtime_metadata(&"Reset default");
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    Il2CppMethodInitialized_1843475ce = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  bVar2 = System_String__op_Equality(name,"Save",(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = (__this->fields)._saveableSettings;
    if (__this_00 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0) {
label_1822d2e2f:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while (bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                              (MethodInfo_153A2A0 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext
                             ), bVar2) {
      if (local_18 == (Il2CppObject *)0x0) {
        ThrowNullReferenceException();
      }
      (*local_18->klass->vtable[0x12].methodPtr)(local_18,local_18->klass->vtable[0x12].method);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
  }
  else {
    bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__op_Equality(name,"Default",(MethodInfo *)0x0);
      if (!bVar2) {
        return;
      }
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pUVar1 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
      if (pUVar1 != (UI_BaseMenu_o *)0x0) {
        __this_01 = (pUVar1->fields).ConfirmPopup;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_02,(Il2CppObject *)__this,
                   (intptr_t)MethodInfo_UI_MapEditorSettingsPopup_OnBottomBarButtonClick_b__19_0,
                   (MethodInfo *)0x0);
        if (__this_01 != (UI_ConfirmPopup_o *)0x0) {
          UI_ConfirmPopup__Show
                    (__this_01,"Are you sure you want to reset to default?",__this_02,"Reset default",(MethodInfo *)0x0);
          return;
        }
      }
      goto label_1822d2e2f;
    }
  }
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.MapEditorSettingsPopup$$Hide
// il2cpp: void UI_MapEditorSettingsPopup__Hide (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1822d2a50
// eh: try 0x1822d2b20..0x1822d2ba3 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822d2b62: mov rdx, qword ptr [rip + 0x1dc23b7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose
// asm:   0x1822d2b69: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1822d2b6e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1822d2b73: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1822d2b78: test rcx, rcx
// asm:   0x1822d2b7b: jne 0x1822d2ba3
// asm:   0x1822d2b7d: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x1822d2ba3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void UI_MapEditorSettingsPopup__Hide(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  bool bVar1;
  UnityEngine_GameObject_o *__this_01;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_1843475cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
    Il2CppMethodInitialized_1843475cf = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  __this_01 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    bVar1 = UnityEngine_GameObject__get_activeSelf(__this_01,(MethodInfo *)0x0);
    if (bVar1) {
      __this_00 = (__this->fields)._saveableSettings;
      if (__this_00 == (System_Collections_Generic_List_SaveableSettingsContainer__o *)0x0)
      goto label_1822d2b97;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
                 (System_Collections_Generic_List_T__o *)__this_00,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_GetEnumerator);
      local_28 = (undefined1  [8])local_40._0_8_;
      pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
      local_18 = local_30;
      local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_MoveNext
                          );
        if (!bVar1) break;
        if (local_18 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        (*local_18->klass->vtable[0xc].methodPtr)(local_18,local_18->klass->vtable[0xc].method);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
                 MethodInfo_System_Collections_Generic_List_Enumerator_SaveableSettingsContainer_Dispose);
    }
    UI_BasePopup__Hide((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
label_1822d2b97:
  ThrowNullReferenceException();
}


// UI.MapEditorSettingsPopup$$.ctor
// il2cpp: void UI_MapEditorSettingsPopup___ctor (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1822d3890

void UI_MapEditorSettingsPopup___ctor(UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_SaveableSettingsContainer__o *__this_00;
  
  if (Il2CppMethodInitialized_1843475d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_SaveableSettingsContainer);
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorSettings");
    Il2CppMethodInitialized_1843475d0 = '\x01';
  }
  (__this->fields).LocaleCategory = "MapEditorSettings";
  Il2CppCodeGenWriteBarrier(&(__this->fields).LocaleCategory,"MapEditorSettings");
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_SaveableSettingsContainer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_SaveableSettingsContainer_ctor);
  (__this->fields)._saveableSettings = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._saveableSettings,__this_00);
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MapEditorSettingsPopup$$<OnBottomBarButtonClick>b__19_0
// il2cpp: void UI_MapEditorSettingsPopup___OnBottomBarButtonClick_b__19_0 (UI_MapEditorSettingsPopup_o* __this, const MethodInfo* method);
// 0x1822d3880

void UI_MapEditorSettingsPopup___OnBottomBarButtonClick_b__19_0
               (UI_MapEditorSettingsPopup_o *__this,MethodInfo *method)

{
  UI_MapEditorSettingsPopup__OnConfirmSetDefault(__this,(MethodInfo *)0x0);
  return;
}


