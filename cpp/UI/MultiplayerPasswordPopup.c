// Type: UI.MultiplayerPasswordPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/MultiplayerPasswordPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/MainMenu/MultiplayerPasswordPopup.cs
// --------------------------------

// UI.MultiplayerPasswordPopup$$get_Title
// il2cpp: System_String_o* UI_MultiplayerPasswordPopup__get_Title (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x182292fa0

System_String_o *
UI_MultiplayerPasswordPopup__get_Title(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347455 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Password");
    Il2CppMethodInitialized_184347455 = '\x01';
  }
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar1 = UI_UIManager__GetLocaleCommon("Password",(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MultiplayerPasswordPopup$$get_VerticalPadding
// il2cpp: int32_t UI_MultiplayerPasswordPopup__get_VerticalPadding (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x181b56090

int32_t
UI_MultiplayerPasswordPopup__get_VerticalPadding(UI_MultiplayerPasswordPopup_o* __this, MethodInfo* method)

{
  return 10;
}


// UI.MultiplayerPasswordPopup$$get_HorizontalPadding
// il2cpp: int32_t UI_MultiplayerPasswordPopup__get_HorizontalPadding (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x180847040

int32_t
UI_MultiplayerPasswordPopup__get_HorizontalPadding(UI_MultiplayerPasswordPopup_o* __this, MethodInfo* method)

{
  return 0x14;
}


// UI.MultiplayerPasswordPopup$$get_VerticalSpacing
// il2cpp: float UI_MultiplayerPasswordPopup__get_VerticalSpacing (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x1820b9980

float
UI_MultiplayerPasswordPopup__get_VerticalSpacing(UI_MultiplayerPasswordPopup_o* __this, MethodInfo* method)

{
  return 10.0;
}


// UI.MultiplayerPasswordPopup$$get_Width
// il2cpp: float UI_MultiplayerPasswordPopup__get_Width (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x1821c1230

float
UI_MultiplayerPasswordPopup__get_Width(UI_MultiplayerPasswordPopup_o* __this, MethodInfo* method)

{
  return 300.0;
}


// UI.MultiplayerPasswordPopup$$get_Height
// il2cpp: float UI_MultiplayerPasswordPopup__get_Height (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x182182bd0

float UI_MultiplayerPasswordPopup__get_Height(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  return 250.0;
}


// UI.MultiplayerPasswordPopup$$get_PanelAlignment
// il2cpp: int32_t UI_MultiplayerPasswordPopup__get_PanelAlignment (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x180846f40

int32_t
UI_MultiplayerPasswordPopup__get_PanelAlignment(UI_MultiplayerPasswordPopup_o* __this, MethodInfo* method)

{
  return 4;
}


// UI.MultiplayerPasswordPopup$$Setup
// il2cpp: void UI_MultiplayerPasswordPopup__Setup (UI_MultiplayerPasswordPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182292a40

void UI_MultiplayerPasswordPopup__Setup
               (UI_MultiplayerPasswordPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  int32_t fontSize;
  System_String_o *pSVar2;
  UI_ElementStyle_o *__this_00;
  UI_ElementStyle_o *__this_01;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_UI_Text_o *pUVar5;
  UnityEngine_Color_Fields local_48;
  
  if (Il2CppMethodInitialized_184347456 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ElementStyle);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerPasswordPopup_Setup_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MultiplayerPasswordPopup_Setup_b__20_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu");
    il2cpp_codegen_initialize_runtime_metadata(&"MultiplayerPasswordPopup");
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"IncorrectPassword");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184347456 = '\x01';
  }
  UI_PromptPopup__Setup((UI_PromptPopup_o *)__this,parent,(MethodInfo *)0x0);
  fontSize = (*(__this->klass->vtable)._41_get_ButtonFontSize.methodPtr)
                       (__this,(__this->klass->vtable)._41_get_ButtonFontSize.method);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_00,fontSize,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pSVar2 = (*(__this->klass->vtable)._4_get_ThemePanel.methodPtr)
                     (__this,(__this->klass->vtable)._4_get_ThemePanel.method);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ElementStyle);
  UI_ElementStyle___ctor(__this_01,0x14,120.0,20.0,pSVar2,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
  }
  pSVar2 = UI_UIManager__GetLocaleCommon("Confirm",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MultiplayerPasswordPopup_Setup_b__20_0,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).BottomBar;
  pSVar2 = UI_UIManager__GetLocaleCommon("Back",(MethodInfo *)0x0);
  pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MultiplayerPasswordPopup_Setup_b__20_1,(MethodInfo *)0x0);
  UI_ElementFactory__CreateTextButton(pUVar1,__this_00,pSVar2,0.0,pUVar3,(MethodInfo *)0x0);
  UI_ElementFactory__CreateDefaultLabel
            ((__this->fields).SinglePanel,__this_01,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8)
             ,0,4,(MethodInfo *)0x0);
  UI_ElementFactory__CreateInputSetting
            ((__this->fields).SinglePanel,__this_01,
             (Settings_BaseSetting_o *)(__this->fields)._enteredPassword,
             (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),"",200.0,40.0,false
             ,(UnityEngine_Events_UnityAction_o *)0x0,(UnityEngine_Events_UnityAction_o *)0x0,
             (System_Func_string__bool__o *)0x0,(System_Func_string__string__o *)0x0,(MethodInfo *)0x0);
  pUVar1 = (__this->fields).SinglePanel;
  pSVar2 = UI_UIManager__GetLocale
                     ("MainMenu","MultiplayerPasswordPopup","IncorrectPassword","",
                      "",(MethodInfo *)0x0);
  pUVar4 = UI_ElementFactory__CreateDefaultLabel(pUVar1,__this_01,pSVar2,0,4,(MethodInfo *)0x0);
  (__this->fields)._incorrectPasswordLabel = pUVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._incorrectPasswordLabel,pUVar4);
  pUVar4 = (__this->fields)._incorrectPasswordLabel;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar4,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Text);
    if (pUVar5 != (UnityEngine_UI_Text_o *)0x0) {
      local_48.r = 1.0;
      local_48.g = 0.0;
      local_48.b = 0.0;
      local_48.a = 1.0;
      (*(pUVar5->klass->vtable)._23_set_color.methodPtr)
                (pUVar5,(UnityEngine_Color_o *)&local_48,(pUVar5->klass->vtable)._23_set_color.method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerPasswordPopup$$Show
// il2cpp: void UI_MultiplayerPasswordPopup__Show (UI_MultiplayerPasswordPopup_o* __this, System_String_o* actualPasswordHash, System_String_o* passwordSalt, System_String_o* roomId, System_String_o* roomName, const MethodInfo* method);
// 0x182292dd0

void UI_MultiplayerPasswordPopup__Show
               (UI_MultiplayerPasswordPopup_o *__this,System_String_o *actualPasswordHash,
               System_String_o *passwordSalt,System_String_o *roomId,System_String_o *roomName,
               MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  
  (__this->fields)._actualPasswordHash = actualPasswordHash;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._actualPasswordHash,actualPasswordHash);
  (__this->fields)._passwordSalt = passwordSalt;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._passwordSalt,passwordSalt);
  (__this->fields)._roomName = roomName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._roomName,roomName);
  (__this->fields)._roomId = roomId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._roomId,roomId);
  __this_00 = (__this->fields)._incorrectPasswordLabel;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_00,false,(MethodInfo *)0x0);
    UI_BasePopup__Show((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.MultiplayerPasswordPopup$$OnButtonClick
// il2cpp: void UI_MultiplayerPasswordPopup__OnButtonClick (UI_MultiplayerPasswordPopup_o* __this, System_String_o* name, const MethodInfo* method);
// 0x182292870
// eh: try 0x182292925..0x182292a3a -> pad 0x1833318f0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1822929ee: nop 
// asm:   0x1822929ef: jmp 0x182292915
// asm:   0x1822929f4: mov rax, qword ptr [rsp + 0x50]
// asm:   0x1822929f9: mov rcx, qword ptr [rax + 0xd0]
// asm:   0x182292a00: test rcx, rcx
// asm:   0x182292a03: je 0x182292a1e
// asm:   0x182292a05: xor r8d, r8d
// asm:   0x182292a08: mov dl, 1
// asm:   0x182292a0a: mov rbx, qword ptr [rsp + 0x58]
// asm:   0x182292a0f: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x182292a14: add rsp, 0x40
// asm:   0x182292a18: pop rdi
// asm:   0x182292a19: jmp 0x182f1a770  ; UnityEngine_GameObject__SetActive()
// asm:   0x182292a1e: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833318f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833318f5: push rbx
// asm:   0x1833318f6: push rbp
// asm:   0x1833318f7: sub rsp, 0x38
// asm:   0x1833318fb: mov rbp, rdx
// asm:   0x1833318fe: mov rbx, qword ptr [rbp + 0x38]
// asm:   0x183331902: mov rdx, qword ptr [rbx]
// asm:   0x183331905: mov rdx, qword ptr [rdx]
// asm:   0x183331908: mov rcx, qword ptr [rip + 0x10234c1]
// asm:   0x18333190f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331914: test al, al
// asm:   0x183331916: je 0x183331924
// asm:   0x183331918: movabs rax, 0
// asm:   0x183331922: jmp 0x18333193c
// asm:   0x183331924: mov rax, qword ptr [rbx]
// asm:   0x183331927: mov qword ptr [rbp + 0x30], rax
// asm:   0x18333192b: lea rdx, [rip + 0xcaa656]
// asm:   0x183331932: lea rcx, [rbp + 0x30]
// asm:   0x183331936: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333193c: add rsp, 0x38
// asm:   0x183331940: pop rbp
// asm:   0x183331941: pop rbx
// asm:   0x183331942: ret 

void UI_MultiplayerPasswordPopup__OnButtonClick
               (UI_MultiplayerPasswordPopup_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *salt;
  UnityEngine_GameObject_o *__this_00;
  Settings_MultiplayerSettings_o *__this_01;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347457 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_184347457 = '\x01';
  }
  bVar2 = System_String__op_Equality(name,"Confirm",(MethodInfo *)0x0);
  if (bVar2) {
    pSVar1 = (__this->fields)._enteredPassword;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (pSVar1->fields)._value;
    salt = (__this->fields)._passwordSalt;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    pSVar3 = Utility_Util__CreatePBKDF2(pSVar3,salt,(MethodInfo *)0x0);
    bVar2 = System_String__op_Equality(pSVar3,(__this->fields)._actualPasswordHash,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar1 = (__this->fields)._enteredPassword;
      if (pSVar1 == (Settings_StringSetting_o *)0x0) {
        ThrowNullReferenceException();
      }
      __this_01 = TypeInfo_Settings_SettingsManager->static_fields->MultiplayerSettings;
      if (__this_01 == (Settings_MultiplayerSettings_o *)0x0) {
        ThrowNullReferenceException();
      }
      Settings_MultiplayerSettings__JoinRoom
                (__this_01,(__this->fields)._roomId,(__this->fields)._roomName,(pSVar1->fields)._value,
                 (MethodInfo *)0x0);
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    }
    else {
      __this_00 = (__this->fields)._incorrectPasswordLabel;
      if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_GameObject__SetActive(__this_00,true,(MethodInfo *)0x0);
    }
  }
  else {
    bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
    if (bVar2) {
      (*(__this->klass->vtable)._22_Hide.methodPtr)(__this,(__this->klass->vtable)._22_Hide.method);
    }
  }
  return;
}


// UI.MultiplayerPasswordPopup$$.ctor
// il2cpp: void UI_MultiplayerPasswordPopup___ctor (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x182292f00

void UI_MultiplayerPasswordPopup___ctor(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_184347458 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    Il2CppMethodInitialized_184347458 = '\x01';
  }
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_1f27ee0(__this_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields)._enteredPassword = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._enteredPassword,__this_00);
  UI_PromptPopup___ctor((UI_ToolsPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerPasswordPopup$$<Setup>b__20_0
// il2cpp: void UI_MultiplayerPasswordPopup___Setup_b__20_0 (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x182292e80

void UI_MultiplayerPasswordPopup___Setup_b__20_0(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347459 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Confirm");
    Il2CppMethodInitialized_184347459 = '\x01';
  }
  UI_MultiplayerPasswordPopup__OnButtonClick(__this,"Confirm",(MethodInfo *)0x0);
  return;
}


// UI.MultiplayerPasswordPopup$$<Setup>b__20_1
// il2cpp: void UI_MultiplayerPasswordPopup___Setup_b__20_1 (UI_MultiplayerPasswordPopup_o* __this, const MethodInfo* method);
// 0x182292ec0

void UI_MultiplayerPasswordPopup___Setup_b__20_1(UI_MultiplayerPasswordPopup_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434745a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    Il2CppMethodInitialized_18434745a = '\x01';
  }
  UI_MultiplayerPasswordPopup__OnButtonClick(__this,"Back",(MethodInfo *)0x0);
  return;
}


