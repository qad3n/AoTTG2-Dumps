// Type: UI.KeybindPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/UI/KeybindPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/BaseMenu/KeybindPopup.cs
// --------------------------------

// UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$.ctor
// il2cpp: void UI_KeybindPopup__WaitAndUpdateSetting_d__21___ctor (UI_KeybindPopup__WaitAndUpdateSetting_d__21_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
UI_KeybindPopup__WaitAndUpdateSetting_d__21___ctor(UI_KeybindPopup__WaitAndUpdateSetting_d__21_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$System.IDisposable.Dispose
// il2cpp: void UI_KeybindPopup__WaitAndUpdateSetting_d__21__System_IDisposable_Dispose (UI_KeybindPopup__WaitAndUpdateSetting_d__21_o* __this, const MethodInfo* method);
// 0x180547020

void
UI_KeybindPopup__WaitAndUpdateSetting_d__21__System_IDisposable_Dispose(UI_KeybindPopup__WaitAndUpdateSetting_d__21_o* __this, MethodInfo* method)

{
  return;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$MoveNext
// il2cpp: bool UI_KeybindPopup__WaitAndUpdateSetting_d__21__MoveNext (UI_KeybindPopup__WaitAndUpdateSetting_d__21_o* __this, const MethodInfo* method);
// 0x1821d14e0

bool UI_KeybindPopup__WaitAndUpdateSetting_d__21__MoveNext
               (UI_KeybindPopup__WaitAndUpdateSetting_d__21_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_KeybindPopup_o *__this_00;
  Il2CppObject *__this_01;
  
  if (Il2CppMethodInitialized_184346f2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForEndOfFrame);
    Il2CppMethodInitialized_184346f2b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return true;
  }
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_KeybindPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    UI_KeybindPopup__UpdateSetting(__this_00,(MethodInfo *)0x0);
  }
  return false;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_KeybindPopup__WaitAndUpdateSetting_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_KeybindPopup__WaitAndUpdateSetting_d__21_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_KeybindPopup__WaitAndUpdateSetting_d__21__System_Collections_Generic_IEnumerator_System_Object__get_Current(UI_KeybindPopup__WaitAndUpdateSetting_d__21_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_KeybindPopup__WaitAndUpdateSetting_d__21__System_Collections_IEnumerator_Reset (UI_KeybindPopup__WaitAndUpdateSetting_d__21_o* __this, const MethodInfo* method);
// 0x1821d1580

void UI_KeybindPopup__WaitAndUpdateSetting_d__21__System_Collections_IEnumerator_Reset
               (UI_KeybindPopup__WaitAndUpdateSetting_d__21_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_UI_KeybindPopup_WaitAndUpdateSetting_d__21_System_Collections_IEnumerator_Reset)
  ;
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__21$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_KeybindPopup__WaitAndUpdateSetting_d__21__System_Collections_IEnumerator_get_Current (UI_KeybindPopup__WaitAndUpdateSetting_d__21_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
UI_KeybindPopup__WaitAndUpdateSetting_d__21__System_Collections_IEnumerator_get_Current(UI_KeybindPopup__WaitAndUpdateSetting_d__21_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// UI.KeybindPopup$$get_EscapeBehavior
// il2cpp: int32_t UI_KeybindPopup__get_EscapeBehavior (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
UI_KeybindPopup__get_EscapeBehavior(UI_KeybindPopup_o* __this, MethodInfo* method)

{
  return 1;
}


// UI.KeybindPopup$$get_Title
// il2cpp: System_String_o* UI_KeybindPopup__get_Title (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x1821c57b0

System_String_o * UI_KeybindPopup__get_Title(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346f24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"KeybindPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Title");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346f24 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","KeybindPopup","Title","",
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.KeybindPopup$$get_Width
// il2cpp: float UI_KeybindPopup__get_Width (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x1821c1230

float
UI_KeybindPopup__get_Width(UI_KeybindPopup_o* __this, MethodInfo* method)

{
  return 300.0;
}


// UI.KeybindPopup$$get_Height
// il2cpp: float UI_KeybindPopup__get_Height (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x182182bd0

float
UI_KeybindPopup__get_Height(UI_KeybindPopup_o* __this, MethodInfo* method)

{
  return 250.0;
}


// UI.KeybindPopup$$get_VerticalSpacing
// il2cpp: float UI_KeybindPopup__get_VerticalSpacing (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x182182ab0

float
UI_KeybindPopup__get_VerticalSpacing(UI_KeybindPopup_o* __this, MethodInfo* method)

{
  return 15.0;
}


// UI.KeybindPopup$$get_VerticalPadding
// il2cpp: int32_t UI_KeybindPopup__get_VerticalPadding (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x1821bb430

int32_t
UI_KeybindPopup__get_VerticalPadding(UI_KeybindPopup_o* __this, MethodInfo* method)

{
  return 0x1e;
}


// UI.KeybindPopup$$get_PanelAlignment
// il2cpp: int32_t UI_KeybindPopup__get_PanelAlignment (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
UI_KeybindPopup__get_PanelAlignment(UI_KeybindPopup_o* __this, MethodInfo* method)

{
  return 4;
}


// UI.KeybindPopup$$Setup
// il2cpp: void UI_KeybindPopup__Setup (UI_KeybindPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x1821c50e0

void UI_KeybindPopup__Setup(UI_KeybindPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *value;
  Settings_InputKey_o *__this_01;
  
  if (Il2CppMethodInitialized_184346f25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_InputKey);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_KeybindPopup_Setup_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_KeybindPopup_Setup_b__19_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"KeybindPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Unbind");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentKey");
    il2cpp_codegen_initialize_runtime_metadata(&":");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184346f25 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("SettingsPopup","KeybindPopup","Unbind","",
                      "",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_KeybindPopup_Setup_b__19_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_KeybindPopup_Setup_b__19_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     ("SettingsPopup","KeybindPopup","CurrentKey","",
                      "",(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_1969e50(pSVar2,":",(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateDefaultLabel(pUVar1,__this_00,pSVar2,0,4,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent_object_
              (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    pUVar4 = UI_ElementFactory__CreateDefaultLabel
                       ((__this->fields).SinglePanel,__this_00,
                        (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),0,4,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      value = UnityEngine_GameObject__GetComponent_object_
                        (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
      (__this->fields)._displayLabel = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._displayLabel,value);
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_InputKey);
      Settings_InputKey___ctor(__this_01,(MethodInfo *)0x0);
      (__this->fields)._buffer = __this_01;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._buffer,__this_01);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.KeybindPopup$$Update
// il2cpp: void UI_KeybindPopup__Update (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x1821c5620

void UI_KeybindPopup__Update(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  Settings_InputKey_o *pSVar1;
  bool bVar2;
  System_String_o *a;
  UI_KeybindPopup__WaitAndUpdateSetting_d__21_o *routine;
  
  if (Il2CppMethodInitialized_184346f26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse0");
    Il2CppMethodInitialized_184346f26 = '\x01';
  }
  if (((__this->fields)._setting == (Settings_InputKey_o *)0x0) || ((__this->fields)._isDone != false)) {
    return;
  }
  pSVar1 = (__this->fields)._buffer;
  if (pSVar1 != (Settings_InputKey_o *)0x0) {
    bVar2 = Settings_InputKey__ReadNextInput(pSVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pSVar1 = (__this->fields)._buffer;
    (__this->fields)._isDone = true;
    if (pSVar1 != (Settings_InputKey_o *)0x0) {
      a = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)(pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
      bVar2 = System_String__op_Equality(a,"Mouse0",(MethodInfo *)0x0);
      if (bVar2) {
        if (Il2CppMethodInitialized_184346f27 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_KeybindPopup_WaitAndUpdateSetting_d__21);
          Il2CppMethodInitialized_184346f27 = '\x01';
        }
        routine = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_UI_KeybindPopup_WaitAndUpdateSetting_d__21);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)routine,(MethodInfo *)0x0);
        (routine->fields).__1__state = 0;
        (routine->fields).__4__this = __this;
        Il2CppCodeGenWriteBarrier(&(routine->fields).__4__this,__this);
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)routine,
                   (MethodInfo *)0x0);
        return;
      }
      UI_KeybindPopup__UpdateSetting(__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.KeybindPopup$$WaitAndUpdateSetting
// il2cpp: System_Collections_IEnumerator_o* UI_KeybindPopup__WaitAndUpdateSetting (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x1821c5740

System_Collections_IEnumerator_o *
UI_KeybindPopup__WaitAndUpdateSetting(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  UI_KeybindPopup__WaitAndUpdateSetting_d__21_o *__this_00;
  
  if (Il2CppMethodInitialized_184346f27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_KeybindPopup_WaitAndUpdateSetting_d__21);
    Il2CppMethodInitialized_184346f27 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_KeybindPopup_WaitAndUpdateSetting_d__21);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// UI.KeybindPopup$$UpdateSetting
// il2cpp: void UI_KeybindPopup__UpdateSetting (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x1821c5560

void UI_KeybindPopup__UpdateSetting(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  Settings_InputKey_o *pSVar1;
  Settings_InputKey_o *__this_00;
  UnityEngine_UI_Text_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *__this_01;
  
  pSVar1 = (__this->fields)._buffer;
  if (pSVar1 != (Settings_InputKey_o *)0x0) {
    __this_00 = (__this->fields)._setting;
    pSVar3 = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
    if (__this_00 != (Settings_InputKey_o *)0x0) {
      Settings_InputKey__LoadFromString(__this_00,pSVar3,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._setting;
      if (pSVar1 != (Settings_InputKey_o *)0x0) {
        pUVar2 = (__this->fields)._settingLabel;
        pSVar3 = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                           (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                    (pUVar2,pSVar3,(pUVar2->klass->vtable)._75_set_text.method);
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_01,false,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.KeybindPopup$$Show
// il2cpp: void UI_KeybindPopup__Show (UI_KeybindPopup_o* __this, Settings_InputKey_o* setting, UnityEngine_UI_Text_o* label, const MethodInfo* method);
// 0x1821c5410

void UI_KeybindPopup__Show
               (UI_KeybindPopup_o *__this,Settings_InputKey_o *setting,UnityEngine_UI_Text_o *label,
               MethodInfo *method)

{
  Settings_InputKey_o *pSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  bool bVar3;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *pSVar4;
  
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    bVar3 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._setting = setting;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._setting,setting);
    (__this->fields)._settingLabel = label;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._settingLabel,label);
    pSVar1 = (__this->fields)._setting;
    if (pSVar1 != (Settings_InputKey_o *)0x0) {
      pUVar2 = (__this->fields)._displayLabel;
      pSVar4 = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                         (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,pSVar4,(pUVar2->klass->vtable)._75_set_text.method);
        (__this->fields)._isDone = false;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.KeybindPopup$$OnButtonClick
// il2cpp: void UI_KeybindPopup__OnButtonClick (UI_KeybindPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x1821c4fd0

void UI_KeybindPopup__OnButtonClick(UI_KeybindPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_InputKey_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  UI_KeybindPopup_c *pUVar2;
  bool bVar3;
  System_String_o *pSVar4;
  System_Enum_o local_38;
  undefined4 local_28;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (Il2CppMethodInitialized_184346f28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SpecialKey);
    il2cpp_codegen_initialize_runtime_metadata(&"Unbind");
    Il2CppMethodInitialized_184346f28 = '\x01';
  }
  bVar3 = System_String__op_Equality(name,"Unbind",(MethodInfo *)0x0);
  if (bVar3) {
    __this_00 = (__this->fields)._setting;
    local_38.klass = (System_Enum_c *)TypeInfo_Settings_SpecialKey;
    local_38.monitor = &g_data_ffffffffffffffff;
    local_28 = 0;
    pSVar4 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
    if (__this_00 != (Settings_InputKey_o *)0x0) {
      Settings_InputKey__LoadFromString(__this_00,pSVar4,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._settingLabel;
      local_20.klass = (System_Enum_c *)TypeInfo_Settings_SpecialKey;
      local_20.monitor = &g_data_ffffffffffffffff;
      local_10 = 0;
      pSVar4 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                  (pUVar1,pSVar4,(pUVar1->klass->vtable)._75_set_text.method);
        goto label_1821c50b1;
      }
    }
    ThrowNullReferenceException();
  }
label_1821c50b1:
  pUVar2 = __this->klass;
  (__this->fields)._isDone = true;
  (*(pUVar2->vtable)._22_Hide.methodPtr)(__this,(pUVar2->vtable)._22_Hide.method);
  return;
}


// UI.KeybindPopup$$.ctor
// il2cpp: void UI_KeybindPopup___ctor (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_KeybindPopup___ctor(UI_KeybindPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.KeybindPopup$$<Setup>b__19_0
// il2cpp: void UI_KeybindPopup___Setup_b__19_0 (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x1821c54e0

void UI_KeybindPopup___Setup_b__19_0(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Unbind");
    Il2CppMethodInitialized_184346f29 = '\x01';
  }
  UI_KeybindPopup__OnButtonClick(__this,"Unbind",(MethodInfo *)0x0);
  return;
}


// UI.KeybindPopup$$<Setup>b__19_1
// il2cpp: void UI_KeybindPopup___Setup_b__19_1 (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x1821c5520

void UI_KeybindPopup___Setup_b__19_1(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346f2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    Il2CppMethodInitialized_184346f2a = '\x01';
  }
  UI_KeybindPopup__OnButtonClick(__this,"Cancel",(MethodInfo *)0x0);
  return;
}


