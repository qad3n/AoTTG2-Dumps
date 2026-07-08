// Type: UI.KeybindPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/KeybindPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/BaseMenu/KeybindPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$.ctor
// il2cpp: void UI_KeybindPopup__WaitAndUpdateSetting_d__19___ctor (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4025d00

void UI_KeybindPopup_<WaitAndUpdateSetting>d__19___ctor
               (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$System.IDisposable.Dispose
// il2cpp: void UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_IDisposable_Dispose (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, const MethodInfo* method);
// 0x4025f70

void UI_KeybindPopup_<WaitAndUpdateSetting>d__19__System_IDisposable_Dispose
               (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,MethodInfo *method)

{
  return;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$MoveNext
// il2cpp: bool UI_KeybindPopup__WaitAndUpdateSetting_d__19__MoveNext (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, const MethodInfo* method);
// 0x4025f80

bool_conflict
UI_KeybindPopup_<WaitAndUpdateSetting>d__19__MoveNext
          (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_KeybindPopup_o *__this_00;
  Il2CppObject *__this_01;
  undefined8 uVar2;
  
  if (DAT_05704318 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    DAT_05704318 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (__this_00 == (UI_KeybindPopup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UI_KeybindPopup__UpdateSetting(__this_00,method);
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)__this_01,(MethodInfo *)0x0);
    (__this->fields).__2__current = __this_01;
    uVar2 = il2cpp_runtime_glue(&(__this->fields).__2__current,__this_01);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  return 0;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_Collections_Generic_IEnumerator_System_Object__get_Current (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, const MethodInfo* method);
// 0x4026020

Il2CppObject *
UI_KeybindPopup_<WaitAndUpdateSetting>d__19__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$System.Collections.IEnumerator.Reset
// il2cpp: void UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_Collections_IEnumerator_Reset (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, const MethodInfo* method);
// 0x4026030

void UI_KeybindPopup_<WaitAndUpdateSetting>d__19__System_Collections_IEnumerator_Reset
               (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// UI.KeybindPopup.<WaitAndUpdateSetting>d__19$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* UI_KeybindPopup__WaitAndUpdateSetting_d__19__System_Collections_IEnumerator_get_Current (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o* __this, const MethodInfo* method);
// 0x4026070

Il2CppObject *
UI_KeybindPopup_<WaitAndUpdateSetting>d__19__System_Collections_IEnumerator_get_Current
          (UI_KeybindPopup__WaitAndUpdateSetting_d__19_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// UI.KeybindPopup$$get_Title
// il2cpp: System_String_o* UI_KeybindPopup__get_Title (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025680

System_String_o * UI_KeybindPopup__get_Title(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704311 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"SettingsPopup");
    il2cpp_init_method_metadata(&"KeybindPopup");
    il2cpp_init_method_metadata(&"Title");
    il2cpp_init_method_metadata(&"");
    DAT_05704311 = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocale
                     ("SettingsPopup","KeybindPopup","Title","","",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// UI.KeybindPopup$$get_Width
// il2cpp: float UI_KeybindPopup__get_Width (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025720

float UI_KeybindPopup__get_Width(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.KeybindPopup$$get_Height
// il2cpp: float UI_KeybindPopup__get_Height (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025730

float UI_KeybindPopup__get_Height(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.KeybindPopup$$get_VerticalSpacing
// il2cpp: float UI_KeybindPopup__get_VerticalSpacing (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025740

float UI_KeybindPopup__get_VerticalSpacing(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  return 15.0;
}


// UI.KeybindPopup$$get_VerticalPadding
// il2cpp: int32_t UI_KeybindPopup__get_VerticalPadding (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025750

int32_t UI_KeybindPopup__get_VerticalPadding(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  return 0x1e;
}


// UI.KeybindPopup$$get_PanelAlignment
// il2cpp: int32_t UI_KeybindPopup__get_PanelAlignment (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025760

int32_t UI_KeybindPopup__get_PanelAlignment(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.KeybindPopup$$Setup
// il2cpp: void UI_KeybindPopup__Setup (UI_KeybindPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x4025770

void UI_KeybindPopup__Setup(UI_KeybindPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  Settings_InputKey_o *__this_01;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704312 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&TypeInfo_InputKey);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__17_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"SettingsPopup");
    il2cpp_init_method_metadata(&"KeybindPopup");
    il2cpp_init_method_metadata(&"Unbind");
    il2cpp_init_method_metadata(&"CurrentKey");
    il2cpp_init_method_metadata(&":");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"");
    DAT_05704312 = '\x01';
    method = extraout_RDX;
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,method);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocale
                     ("SettingsPopup","KeybindPopup","Unbind","","",
                      (MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Cancel",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     ("SettingsPopup","KeybindPopup","CurrentKey","","",
                      (MethodInfo *)0x0);
  pSVar2 = System_String__Concat(pSVar2,":",(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateDefaultLabel(pUVar1,__this_00,pSVar2,0,4,(MethodInfo *)0x0);
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
    pUVar4 = UI_ElementFactory__CreateDefaultLabel
                       ((__this->fields).SinglePanel,__this_00,
                        (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,4,
                        (MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = (UnityEngine_UI_Text_o *)
               UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
      (__this->fields)._displayLabel = pUVar5;
      il2cpp_runtime_glue(&(__this->fields)._displayLabel);
      __this_01 = (Settings_InputKey_o *)il2cpp_runtime_glue(TypeInfo_InputKey);
      Settings_InputKey___ctor(__this_01,(MethodInfo *)0x0);
      (__this->fields)._buffer = __this_01;
      il2cpp_runtime_glue(&(__this->fields)._buffer,__this_01);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KeybindPopup$$Update
// il2cpp: void UI_KeybindPopup__Update (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025ab0

void UI_KeybindPopup__Update(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  Settings_InputKey_o *pSVar1;
  bool_conflict bVar2;
  System_String_o *a;
  Il2CppObject *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05704313 == '\0') {
    il2cpp_init_method_metadata(&"Mouse0");
    DAT_05704313 = '\x01';
  }
  if (((__this->fields)._setting == (Settings_InputKey_o *)0x0) ||
     ((char)(__this->fields)._isDone != '\0')) {
    return;
  }
  pSVar1 = (__this->fields)._buffer;
  if (pSVar1 != (Settings_InputKey_o *)0x0) {
    bVar2 = Settings_InputKey__ReadNextInput(pSVar1,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    *(undefined1 *)&(__this->fields)._isDone = 1;
    pSVar1 = (__this->fields)._buffer;
    if (pSVar1 != (Settings_InputKey_o *)0x0) {
      a = (System_String_o *)
          (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                    (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
      method_00 = "Mouse0";
      bVar2 = System_String__op_Equality(a,(System_String_o *)"Mouse0",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        UI_KeybindPopup__UpdateSetting(__this,method_00);
        return;
      }
      if (DAT_05704314 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_WaitAndUpdateSetting_d__19);
        DAT_05704314 = '\x01';
      }
      __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndUpdateSetting_d__19);
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      *(undefined4 *)&__this_00[1].klass = 0;
      if (__this_00 != (Il2CppObject *)0x0) {
        __this_00[2].klass = (Il2CppClass *)__this;
        il2cpp_runtime_glue(__this_00 + 2,__this);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,
                   (System_Collections_IEnumerator_o *)__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KeybindPopup$$WaitAndUpdateSetting
// il2cpp: System_Collections_IEnumerator_o* UI_KeybindPopup__WaitAndUpdateSetting (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025be0

System_Collections_IEnumerator_o *
UI_KeybindPopup__WaitAndUpdateSetting(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704314 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_WaitAndUpdateSetting_d__19);
    DAT_05704314 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitAndUpdateSetting_d__19);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KeybindPopup$$UpdateSetting
// il2cpp: void UI_KeybindPopup__UpdateSetting (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025c50

void UI_KeybindPopup__UpdateSetting(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  Settings_InputKey_o *pSVar1;
  Settings_InputKey_o *__this_00;
  UnityEngine_UI_Text_o *pUVar2;
  System_String_o *serializedKey;
  undefined8 uVar3;
  UnityEngine_GameObject_o *__this_01;
  
  pSVar1 = (__this->fields)._buffer;
  if (pSVar1 != (Settings_InputKey_o *)0x0) {
    __this_00 = (__this->fields)._setting;
    serializedKey =
         (System_String_o *)
         (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                   (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
    if (__this_00 != (Settings_InputKey_o *)0x0) {
      Settings_InputKey__LoadFromString(__this_00,serializedKey,(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._setting;
      if (pSVar1 != (Settings_InputKey_o *)0x0) {
        pUVar2 = (__this->fields)._settingLabel;
        uVar3 = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                          (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
        if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
          (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                    (pUVar2,uVar3,(pUVar2->klass->vtable)._75_set_text.method);
          __this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KeybindPopup$$Show
// il2cpp: void UI_KeybindPopup__Show (UI_KeybindPopup_o* __this, Settings_InputKey_o* setting, UnityEngine_UI_Text_o* label, const MethodInfo* method);
// 0x4025d20

void UI_KeybindPopup__Show
               (UI_KeybindPopup_o *__this,Settings_InputKey_o *setting,UnityEngine_UI_Text_o *label,
               MethodInfo *method)

{
  Settings_InputKey_o *pSVar1;
  UnityEngine_UI_Text_o *pUVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *__this_00;
  undefined8 uVar4;
  MethodInfo *method_00;
  
  __this_00 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_GameObject__get_activeSelf(__this_00,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      return;
    }
    UI_BasePopup__Show((UI_BasePopup_o *)__this,method_00);
    (__this->fields)._setting = setting;
    il2cpp_runtime_glue(&(__this->fields)._setting,setting);
    (__this->fields)._settingLabel = label;
    il2cpp_runtime_glue(&(__this->fields)._settingLabel,label);
    pSVar1 = (__this->fields)._setting;
    if (pSVar1 != (Settings_InputKey_o *)0x0) {
      pUVar2 = (__this->fields)._displayLabel;
      uVar4 = (*(pSVar1->klass->vtable)._3_ToString.methodPtr)
                        (pSVar1,(pSVar1->klass->vtable)._3_ToString.method);
      if (pUVar2 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar2->klass->vtable)._75_set_text.methodPtr)
                  (pUVar2,uVar4,(pUVar2->klass->vtable)._75_set_text.method);
        *(undefined1 *)&(__this->fields)._isDone = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.KeybindPopup$$OnButtonClick
// il2cpp: void UI_KeybindPopup__OnButtonClick (UI_KeybindPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x4025dd0

void UI_KeybindPopup__OnButtonClick
               (UI_KeybindPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_InputKey_o *__this_00;
  UnityEngine_UI_Text_o *pUVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_Enum_o local_50;
  undefined4 local_40;
  System_Enum_o local_38;
  undefined4 local_28;
  
  if (DAT_05704315 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SpecialKey);
    il2cpp_init_method_metadata(&"Unbind");
    DAT_05704315 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Unbind",(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this_00 = (__this->fields)._setting;
    local_38.klass = TypeInfo_SpecialKey;
    local_38.monitor = (void *)0xffffffffffffffff;
    local_28 = 0;
    pSVar3 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
    if (__this_00 != (Settings_InputKey_o *)0x0) {
      Settings_InputKey__LoadFromString(__this_00,pSVar3,(MethodInfo *)0x0);
      pUVar1 = (__this->fields)._settingLabel;
      local_50.klass = TypeInfo_SpecialKey;
      local_50.monitor = (void *)0xffffffffffffffff;
      local_40 = 0;
      pSVar3 = System_Enum__ToString(&local_50,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_UI_Text_o *)0x0) {
        (*(pUVar1->klass->vtable)._75_set_text.methodPtr)
                  (pUVar1,pSVar3,(pUVar1->klass->vtable)._75_set_text.method);
        goto LAB_04025eb3;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04025eb3:
  *(undefined1 *)&(__this->fields)._isDone = 1;
  (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
  return;
}


// UI.KeybindPopup$$.ctor
// il2cpp: void UI_KeybindPopup___ctor (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025ee0

void UI_KeybindPopup___ctor(UI_TooltipPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor(__this,method);
  return;
}


// UI.KeybindPopup$$<Setup>b__17_0
// il2cpp: void UI_KeybindPopup___Setup_b__17_0 (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025ef0

void UI_KeybindPopup__<Setup>b__17_0(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704316 == '\0') {
    il2cpp_init_method_metadata(&"Unbind");
    DAT_05704316 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_KeybindPopup__OnButtonClick(__this,"Unbind",in_RDX);
  return;
}


// UI.KeybindPopup$$<Setup>b__17_1
// il2cpp: void UI_KeybindPopup___Setup_b__17_1 (UI_KeybindPopup_o* __this, const MethodInfo* method);
// 0x4025f30

void UI_KeybindPopup__<Setup>b__17_1(UI_KeybindPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704317 == '\0') {
    il2cpp_init_method_metadata(&"Cancel");
    DAT_05704317 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_KeybindPopup__OnButtonClick(__this,"Cancel",in_RDX);
  return;
}


