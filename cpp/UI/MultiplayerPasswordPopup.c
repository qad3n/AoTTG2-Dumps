// Type: UI.MultiplayerPasswordPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/MultiplayerPasswordPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/MainMenu/MultiplayerPasswordPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.MultiplayerPasswordPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerPasswordPopup__get_Title (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x40f7150

System_String_o *
UI_MultiplayerPasswordPopup__get_Title(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_0570482c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Password");
    DAT_0570482c = '\x01';
  }
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Password",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerPasswordPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerPasswordPopup__get_VerticalPadding (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x40f71b0

int32_t UI_MultiplayerPasswordPopup__get_VerticalPadding
                  (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 10;
}


// UI.MultiplayerPasswordPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerPasswordPopup__get_HorizontalPadding (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x40f71c0

int32_t UI_MultiplayerPasswordPopup__get_HorizontalPadding
                  (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 0x14;
}


// UI.MultiplayerPasswordPopup$$get_VerticalSpacing
// il2cpp: float UI_MultiplayerPasswordPopup__get_VerticalSpacing (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x40f71d0

float UI_MultiplayerPasswordPopup__get_VerticalSpacing
                (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 10.0;
}


// UI.MultiplayerPasswordPopup$$get_Width
// il2cpp: float UI_MultiplayerPasswordPopup__get_Width (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x40f71e0

float UI_MultiplayerPasswordPopup__get_Width
                (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 300.0;
}


// UI.MultiplayerPasswordPopup$$get_Height
// il2cpp: float UI_MultiplayerPasswordPopup__get_Height (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x40f71f0

float UI_MultiplayerPasswordPopup__get_Height
                (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.MultiplayerPasswordPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerPasswordPopup__get_PanelAlignment (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x40f7200

int32_t UI_MultiplayerPasswordPopup__get_PanelAlignment
                  (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 4;
}


// UI.MultiplayerPasswordPopup$$Setup
// il2cpp: void UI_MultiplayerPasswordPopup__Setup (UI_MultiplayerPasswordPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40f7210

void UI_MultiplayerPasswordPopup__Setup
               (UI_MultiplayerPasswordPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  Il2CppObject *pIVar5;
  
  if (DAT_0570482d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ElementStyle);
    il2cpp_init_method_metadata(&MethodInfo_Text_GetComponent_Text);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__20_0);
    il2cpp_init_method_metadata(&MethodInfo_Void__Setup_b__20_1);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&TypeInfo_UnityAction);
    il2cpp_init_method_metadata(&"MainMenu");
    il2cpp_init_method_metadata(&"MultiplayerPasswordPopup");
    il2cpp_init_method_metadata(&"Confirm");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"IncorrectPassword");
    il2cpp_init_method_metadata(&"");
    DAT_0570482d = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pSVar2 = (System_String_o *)
           (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = (UI_ElementStyle_o *)il2cpp_runtime_glue(TypeInfo_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x14,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = (UnityEngine_Events_UnityAction_o *)il2cpp_runtime_glue(TypeInfo_UnityAction);
  UnityEngine_Events_UnityAction___ctor();
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,__this_01,
             (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),0,4,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            ((__this->fields).SinglePanel,__this_01,
             (Settings_BaseSetting_o *)(__this->fields)._enteredPassword,
             (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),"",200.0,40.0,0,
             (UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,
             (MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     ("MainMenu","MultiplayerPasswordPopup","IncorrectPassword","","",
                      (MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateDefaultLabel(pUVar1,__this_01,pSVar2,0,4,(MethodInfo *)0x0);
  (__this->fields)._incorrectPasswordLabel = pUVar4;
  il2cpp_runtime_glue(&(__this->fields)._incorrectPasswordLabel,pUVar4);
  pUVar4 = (__this->fields)._incorrectPasswordLabel;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pIVar5 = UnityEngine_GameObject__GetComponent<object>(pUVar4,MethodInfo_Text_GetComponent_Text);
    if (pIVar5 != (Il2CppObject *)0x0) {
      vtable_dispatch = pIVar5->klass->vtable[0x17].methodPtr;
      (*vtable_dispatch)
                (0x3f800000,0,pIVar5,pIVar5->klass->vtable[0x17].method,vtable_dispatch);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerPasswordPopup$$Show
// il2cpp: void UI_MultiplayerPasswordPopup__Show (UI_MultiplayerPasswordPopup_o* __this, System_String_o* actualPasswordHash, System_String_o* passwordSalt, System_String_o* roomId, System_String_o* roomName, const MethodInfo* method);
// 0x40f7580

void UI_MultiplayerPasswordPopup__Show
               (UI_MultiplayerPasswordPopup_o *__this,System_String_o *actualPasswordHash,
               System_String_o *passwordSalt,System_String_o *roomId,System_String_o *roomName,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  (__this->fields)._actualPasswordHash = actualPasswordHash;
  il2cpp_runtime_glue(&(__this->fields)._actualPasswordHash);
  (__this->fields)._passwordSalt = passwordSalt;
  il2cpp_runtime_glue(&(__this->fields)._passwordSalt,passwordSalt);
  (__this->fields)._roomName = roomName;
  il2cpp_runtime_glue(&(__this->fields)._roomName,roomName);
  (__this->fields)._roomId = roomId;
  il2cpp_runtime_glue(&(__this->fields)._roomId);
  __this_00 = (__this->fields)._incorrectPasswordLabel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.MultiplayerPasswordPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerPasswordPopup__OnButtonClick (UI_MultiplayerPasswordPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x40f7620

void UI_MultiplayerPasswordPopup__OnButtonClick
               (UI_MultiplayerPasswordPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *salt;
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_0570482e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"Confirm");
    il2cpp_init_method_metadata(&"Back");
    DAT_0570482e = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
      return;
    }
  }
  else {
    pSVar1 = (__this->fields)._enteredPassword;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar3 = (pSVar1->fields)._value;
    salt = (__this->fields)._passwordSalt;
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = Utility_Util__CreatePBKDF2(pSVar3,salt,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality
                      (pSVar3,(__this->fields)._actualPasswordHash,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_00 = (__this->fields)._incorrectPasswordLabel;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      UnityEngine_GameObject__SetActive(__this_00,1,(MethodInfo *)0x0);
    }
    else {
      pSVar1 = (__this->fields)._enteredPassword;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8) ==
          (Settings_MultiplayerSettings_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Settings_MultiplayerSettings__JoinRoom
                ((Settings_MultiplayerSettings_o *)**(undefined8 **)(TypeInfo_SettingsManager + 0xb8),
                 (__this->fields)._roomId,(__this->fields)._roomName,(pSVar1->fields)._value,
                 (MethodInfo *)0x0);
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    }
  }
  return;
}


// UI.MultiplayerPasswordPopup$$.ctor
// il2cpp: void UI_MultiplayerPasswordPopup___ctor (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x40f7890

void UI_MultiplayerPasswordPopup___ctor(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (DAT_0570482f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_0570482f = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._enteredPassword = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._enteredPassword);
  UI_PromptPopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerPasswordPopup$$<Setup>b__20_0
// il2cpp: void UI_MultiplayerPasswordPopup___Setup_b__20_0 (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x40f7920

void UI_MultiplayerPasswordPopup__<Setup>b__20_0
               (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704830 == '\0') {
    il2cpp_init_method_metadata(&"Confirm");
    DAT_05704830 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerPasswordPopup__OnButtonClick(__this,"Confirm",in_RDX);
  return;
}


// UI.MultiplayerPasswordPopup$$<Setup>b__20_1
// il2cpp: void UI_MultiplayerPasswordPopup___Setup_b__20_1 (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x40f7960

void UI_MultiplayerPasswordPopup__<Setup>b__20_1
               (UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704831 == '\0') {
    il2cpp_init_method_metadata(&"Back");
    DAT_05704831 = '\x01';
    in_RDX = extraout_RDX;
  }
  UI_MultiplayerPasswordPopup__OnButtonClick(__this,"Back",in_RDX);
  return;
}


