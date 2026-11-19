// Type: UI.ActionHandler
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/ActionHandler.cs
// Prior real C# source: none
// --------------------------------

// UI.ActionHandler.<>c$$.cctor
// il2cpp: void UI_ActionHandler___c___cctor (const MethodInfo* method);
// 0x5cfbd80

void UI_ActionHandler___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547cdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler_c);
    Il2CppMethodInitialized_07547cdf = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ActionHandler_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_ActionHandler_c->static_fields->__9 = (UI_ActionHandler___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ActionHandler_c->static_fields->__9);
  return;
}


// UI.ActionHandler.<>c$$.ctor
// il2cpp: void UI_ActionHandler___c___ctor (UI_ActionHandler___c_o* __this, const MethodInfo* method);
// 0x5cfbdf0

void UI_ActionHandler___c___ctor(UI_ActionHandler___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler.<>c$$<.cctor>b__22_0
// il2cpp: void UI_ActionHandler___c____cctor_b__22_0 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5cfbe00

void UI_ActionHandler___c____cctor_b__22_0
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  if (human == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__ToggleSheathe(human,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler.<>c$$<.cctor>b__22_1
// il2cpp: void UI_ActionHandler___c____cctor_b__22_1 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5cfbe20

void UI_ActionHandler___c____cctor_b__22_1
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  if (human == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__ToggleCarry(human,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler.<>c$$<.cctor>b__22_2
// il2cpp: void UI_ActionHandler___c____cctor_b__22_2 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5cfbe40

void UI_ActionHandler___c____cctor_b__22_2
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  if (human == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__ShareSupplies(human,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler.<>c$$<.cctor>b__22_3
// il2cpp: void UI_ActionHandler___c____cctor_b__22_3 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5cfbe60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cfbfea: jmp 0x5cfbeb7

void UI_ActionHandler___c____cctor_b__22_3
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *sound;
  Il2CppObject *object;
  UI_ActionHandler___c_StaticFields *pUVar2;
  System_Func_Horse__bool__o *__this_00;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07547ce0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Horse_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c_cctor_b__22_7);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler_c);
    Il2CppMethodInitialized_07547ce0 = '\x01';
    uVar1 = (TypeInfo_UI_ActionHandler_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_ActionHandler_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler_c);
    pUVar2 = TypeInfo_UI_ActionHandler_c->static_fields;
    __this_00 = pUVar2->__9__22_7;
  }
  else {
    pUVar2 = ((Il2CppClass *)TypeInfo_UI_ActionHandler_c)->static_fields;
    __this_00 = pUVar2->__9__22_7;
  }
  if (__this_00 == (System_Func_Horse__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_ActionHandler_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler_c);
      pUVar2 = TypeInfo_UI_ActionHandler_c->static_fields;
    }
    object = (Il2CppObject *)pUVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Horse_bool);
    in_RCX = (MethodInfo *)0x0;
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,object,
               (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_7,(MethodInfo_4F19300 *)0x0);
    pUVar2 = TypeInfo_UI_ActionHandler_c->static_fields;
    pUVar2->__9__22_7 = __this_00;
    Il2CppCodeGenWriteBarrier(&pUVar2->__9__22_7);
    uVar1 = (TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Characters_HorseSounds)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
  }
  sound = TypeInfo_Characters_HorseSounds->static_fields->Idle3;
  if ((TypeInfo_UI_ActionHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler);
  }
  UI_ActionHandler__ExecuteHorseCommand(human,__this_00,sound,in_RCX);
  return;
}


// UI.ActionHandler.<>c$$<.cctor>b__22_7
// il2cpp: bool UI_ActionHandler___c____cctor_b__22_7 (UI_ActionHandler___c_o* __this, Characters_Horse_o* horse, const MethodInfo* method);
// 0x5cfbff0

bool UI_ActionHandler___c____cctor_b__22_7
               (UI_ActionHandler___c_o *__this,Characters_Horse_o *horse,MethodInfo *method)

{
  bool bVar1;
  
  if (horse == (Characters_Horse_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Characters_Horse__Stay(horse,(MethodInfo *)0x0);
  return bVar1;
}


// UI.ActionHandler.<>c$$<.cctor>b__22_4
// il2cpp: void UI_ActionHandler___c____cctor_b__22_4 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5cfc010

void UI_ActionHandler___c____cctor_b__22_4
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  Characters_Human_o *human_00;
  System_String_o *sound;
  UI_ActionHandler___c__DisplayClass22_0_o *__this_00;
  System_Func_Horse__bool__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547ce1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Horse_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c__DisplayClass22_0_cctor_b__8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler_c__DisplayClass22_0);
    Il2CppMethodInitialized_07547ce1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ActionHandler_c__DisplayClass22_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (UI_ActionHandler___c__DisplayClass22_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).human = human;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).human);
  human_00 = (__this_00->fields).human;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Horse_bool);
  method_00 = (MethodInfo *)0x0;
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_ActionHandler_c__DisplayClass22_0_cctor_b__8,(MethodInfo_4F19300 *)0x0);
  if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
  }
  sound = TypeInfo_Characters_HorseSounds->static_fields->Idle1;
  if ((TypeInfo_UI_ActionHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler);
  }
  UI_ActionHandler__ExecuteHorseCommand(human_00,__this_01,sound,method_00);
  return;
}


// UI.ActionHandler.<>c$$<.cctor>b__22_5
// il2cpp: void UI_ActionHandler___c____cctor_b__22_5 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5cfc130

void UI_ActionHandler___c____cctor_b__22_5
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  Characters_Human_o *human_00;
  System_String_o *sound;
  UI_ActionHandler___c__DisplayClass22_1_o *__this_00;
  System_Func_Horse__bool__o *__this_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547ce2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Horse_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c__DisplayClass22_1_cctor_b__9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler_c__DisplayClass22_1);
    Il2CppMethodInitialized_07547ce2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ActionHandler_c__DisplayClass22_1);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (UI_ActionHandler___c__DisplayClass22_1_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).human = human;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).human);
  human_00 = (__this_00->fields).human;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Horse_bool);
  method_00 = (MethodInfo *)0x0;
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_01,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_UI_ActionHandler_c__DisplayClass22_1_cctor_b__9,(MethodInfo_4F19300 *)0x0);
  if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
  }
  sound = TypeInfo_Characters_HorseSounds->static_fields->Idle1;
  if ((TypeInfo_UI_ActionHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler);
  }
  UI_ActionHandler__ExecuteHorseCommand(human_00,__this_01,sound,method_00);
  return;
}


// UI.ActionHandler.<>c$$<.cctor>b__22_6
// il2cpp: void UI_ActionHandler___c____cctor_b__22_6 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x5cfc250

void UI_ActionHandler___c____cctor_b__22_6
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  if (human == (Characters_Human_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_Human__ToggleHood(human,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler.<>c__DisplayClass22_0$$.ctor
// il2cpp: void UI_ActionHandler___c__DisplayClass22_0___ctor (UI_ActionHandler___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x5cfc120

void UI_ActionHandler___c__DisplayClass22_0___ctor
               (UI_ActionHandler___c__DisplayClass22_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler.<>c__DisplayClass22_0$$<.cctor>b__8
// il2cpp: bool UI_ActionHandler___c__DisplayClass22_0____cctor_b__8 (UI_ActionHandler___c__DisplayClass22_0_o* __this, Characters_Horse_o* horse, const MethodInfo* method);
// 0x5cfc270

bool UI_ActionHandler___c__DisplayClass22_0____cctor_b__8
               (UI_ActionHandler___c__DisplayClass22_0_o *__this,Characters_Horse_o *horse,MethodInfo *method)

{
  bool bVar1;
  
  if (horse == (Characters_Horse_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Characters_Horse__ComeTo
                    (horse,(Characters_BaseCharacter_o *)(__this->fields).human,5.0,(MethodInfo *)0x0);
  return bVar1;
}


// UI.ActionHandler.<>c__DisplayClass22_1$$.ctor
// il2cpp: void UI_ActionHandler___c__DisplayClass22_1___ctor (UI_ActionHandler___c__DisplayClass22_1_o* __this, const MethodInfo* method);
// 0x5cfc240

void UI_ActionHandler___c__DisplayClass22_1___ctor
               (UI_ActionHandler___c__DisplayClass22_1_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler.<>c__DisplayClass22_1$$<.cctor>b__9
// il2cpp: bool UI_ActionHandler___c__DisplayClass22_1____cctor_b__9 (UI_ActionHandler___c__DisplayClass22_1_o* __this, Characters_Horse_o* horse, const MethodInfo* method);
// 0x5cfc2a0

bool UI_ActionHandler___c__DisplayClass22_1____cctor_b__9
               (UI_ActionHandler___c__DisplayClass22_1_o *__this,Characters_Horse_o *horse,MethodInfo *method)

{
  bool bVar1;
  
  if (horse == (Characters_Horse_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Characters_Horse__Follow
                    (horse,(Characters_BaseCharacter_o *)(__this->fields).human,5.0,(MethodInfo *)0x0);
  return bVar1;
}


// UI.ActionHandler$$get_IsActive
// il2cpp: bool UI_ActionHandler__get_IsActive (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x5cfa6d0

bool UI_ActionHandler__get_IsActive(UI_ActionHandler_o *__this,MethodInfo *method)

{
  UI_WheelPopup_o *pUVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07547cd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547cd5 = '\x01';
  }
  pUVar1 = (__this->fields)._wheel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._wheel;
    if (pUVar1 == (UI_WheelPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pUVar1->fields).IsActive != false;
  }
  return bVar3;
}


// UI.ActionHandler$$get_BlocksInput
// il2cpp: bool UI_ActionHandler__get_BlocksInput (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x5cfa750

bool UI_ActionHandler__get_BlocksInput(UI_ActionHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  UI_WheelPopup_o *pUVar2;
  bool bVar3;
  int32_t iVar4;
  
  if (Il2CppMethodInitialized_07547cd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547cd5 = '\x01';
  }
  pUVar2 = (__this->fields)._wheel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._wheel;
    if (pUVar2 == (UI_WheelPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    if ((pUVar2->fields).IsActive != false) {
      return true;
    }
  }
  iVar1 = (__this->fields)._lastCloseFrame;
  iVar4 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  return iVar1 == iVar4;
}


// UI.ActionHandler$$ExecuteHorseCommand
// il2cpp: void UI_ActionHandler__ExecuteHorseCommand (Characters_Human_o* human, System_Func_Horse__bool__o* command, System_String_o* sound, const MethodInfo* method);
// 0x5cfa7e0

void UI_ActionHandler__ExecuteHorseCommand
               (Characters_Human_o *human,System_Func_Horse__bool__o *command,System_String_o *sound,
               MethodInfo *method)

{
  Characters_Horse_o *__this;
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  char cVar4;
  
  if (Il2CppMethodInitialized_07547cd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547cd6 = '\x01';
  }
  if (human != (Characters_Human_o *)0x0) {
    __this = (human->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    if (command != (System_Func_Horse__bool__o *)0x0) {
      cVar4 = (*(code *)(command->fields).invoke_impl)
                        ((command->fields).method_code,__this,(command->fields).method);
      if (cVar4 == '\0') {
        return;
      }
      pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
      if ((pSVar1 != (Settings_SoundSettings_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).HorseSoundEffect, pSVar2 != (Settings_BoolSetting_o *)0x0)) {
        if ((pSVar2->fields)._value == false) {
          return;
        }
        if (__this != (Characters_Horse_o *)0x0) {
          Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler$$Awake
// il2cpp: void UI_ActionHandler__Awake (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x5cfa8e0

void UI_ActionHandler__Awake(UI_ActionHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  GameManagers_InGameManager_c *pGVar3;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  UI_WheelPopup_o *pUVar4;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_07547cd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_Awake_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/WheelMenu");
    Il2CppMethodInitialized_07547cd7 = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                        (parent,"Prefabs/InGame/WheelMenu",false,
                         (MethodInfo_34D7620 *)
                         MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_WheelPopup);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,
                        (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_WheelPopup);
    (__this->fields)._wheel = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._wheel);
    pUVar4 = (__this->fields)._wheel;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ActionHandler_Awake_b__13_0,
               (MethodInfo *)0x0);
    if (pUVar4 != (UI_WheelPopup_o *)0x0) {
      (pUVar4->fields).OnCancel = __this_01;
      Il2CppCodeGenWriteBarrier(&(pUVar4->fields).OnCancel);
      pGVar3 = TypeInfo_GameManagers_InGameManager;
      pGVar2 = (GameManagers_InGameManager_o *)
               TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
        (__this->fields)._gameManager = (GameManagers_InGameManager_o *)0x0;
label_05cfaa62:
        Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager);
        return;
      }
      bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
      if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
         ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
        (__this->fields)._gameManager = pGVar2;
        if ((bVar1 <= (pGVar2->klass->_2).typeHierarchyDepth) &&
           ((pGVar2->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)pGVar3)) goto label_05cfaa62;
      }
      il2cpp_codegen_raise_invalid_cast_exception(pGVar2,pGVar3);
    }
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler$$ToggleActionWheel
// il2cpp: void UI_ActionHandler__ToggleActionWheel (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x5cfaa80

void UI_ActionHandler__ToggleActionWheel(UI_ActionHandler_o *__this,MethodInfo *method)

{
  UI_WheelPopup_o *pUVar1;
  bool bVar2;
  bool enable;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547cd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547cd5 = '\x01';
  }
  pUVar1 = (__this->fields)._wheel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  enable = true;
  if (bVar2) {
    pUVar1 = (__this->fields)._wheel;
    if (pUVar1 == (UI_WheelPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    enable = (pUVar1->fields).IsActive == false;
  }
  UI_ActionHandler__SetActionWheel(__this,enable,method_00);
  return;
}


// UI.ActionHandler$$SetActionWheel
// il2cpp: void UI_ActionHandler__SetActionWheel (UI_ActionHandler_o* __this, bool enable, const MethodInfo* method);
// 0x5cfab00

void UI_ActionHandler__SetActionWheel(UI_ActionHandler_o *__this,bool enable,MethodInfo *method)

{
  UI_WheelPopup_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  MethodInfo *method_00;
  undefined7 in_register_00000031;
  Characters_Human_o *method_01;
  Characters_Human_o *local_18;
  
  local_18 = (Characters_Human_o *)0x0;
  if ((int)CONCAT71(in_register_00000031,enable) == 0) {
    if (Il2CppMethodInitialized_07547cd5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07547cd5 = '\x01';
    }
    pUVar1 = (__this->fields)._wheel;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._wheel;
      if (pUVar1 == (UI_WheelPopup_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pUVar1->fields).IsActive != false) {
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
        (__this->fields)._human = (Characters_Human_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._human);
        iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
        (__this->fields)._lastCloseFrame = iVar3;
        return;
      }
    }
  }
  else {
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = UI_ActionHandler__CanUseActions(__this,&local_18,method_00);
      if (bVar2) {
        (__this->fields)._human = local_18;
        method_01 = local_18;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._human);
        UI_ActionHandler__ShowActions(__this,(MethodInfo *)method_01);
      }
    }
  }
  return;
}


// UI.ActionHandler$$ShowActions
// il2cpp: void UI_ActionHandler__ShowActions (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x5cfadb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cfb145: jmp 0x5cfb1dd
// asm:   0x5cfb1a4: jmp 0x5cfb0d2

void UI_ActionHandler__ShowActions(UI_ActionHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  uint32_t uVar3;
  Characters_Human_o *pCVar4;
  Characters_HumanSetup_o *pCVar5;
  Characters_Horse_o *pCVar6;
  System_Collections_Generic_List_ValueTuple_string__Action_Human____o *pSVar7;
  System_ValueTuple_string__Action_Human___array *pSVar8;
  System_Action_Human__o *pSVar9;
  System_ValueTuple_string__Action_Human___array *pSVar10;
  System_String_array *pSVar11;
  Settings_InputSettings_o *pSVar12;
  Settings_InteractionInputSettings_o *pSVar13;
  Settings_KeybindSetting_o *pSVar14;
  UI_WheelPopup_o *__this_00;
  MethodInfo *pMVar15;
  bool bVar16;
  bool bVar17;
  System_Collections_Generic_List_string__o *options;
  ulong uVar18;
  System_String_o *pSVar19;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_String_o *title;
  byte bVar20;
  System_Action_Human__o **ppSVar21;
  ulong uVar22;
  System_ValueTuple_object__object__o item;
  
  if (Il2CppMethodInitialized_07547cd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_OnSelect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"InGame");
    il2cpp_codegen_initialize_runtime_metadata(&"InGameMenu.Wheel.Actions");
    il2cpp_codegen_initialize_runtime_metadata(&"Actions");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseCall");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseFollow");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseStay");
    il2cpp_codegen_initialize_runtime_metadata(&"CloakHood");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_07547cd8 = '\x01';
  }
  pCVar4 = (__this->fields)._human;
  if (pCVar4 != (Characters_Human_o *)0x0) {
    pCVar5 = (pCVar4->fields).Setup;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar17 = false;
    bVar16 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar16) {
      pCVar4 = (__this->fields)._human;
      if ((pCVar4 == (Characters_Human_o *)0x0) ||
         (pCVar5 = (pCVar4->fields).Setup, pCVar5 == (Characters_HumanSetup_o *)0x0)) goto label_05cfb339;
      bVar17 = Characters_HumanSetup__get_HasCloak(pCVar5,(MethodInfo *)0x0);
    }
    (__this->fields)._hasCloak = bVar17;
    pCVar4 = (__this->fields)._human;
    if (pCVar4 != (Characters_Human_o *)0x0) {
      pCVar6 = (pCVar4->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar20 = false;
      bVar16 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar16) {
        pCVar4 = (__this->fields)._human;
        if ((pCVar4 == (Characters_Human_o *)0x0) ||
           (pCVar6 = (pCVar4->fields).Horse, pCVar6 == (Characters_Horse_o *)0x0)) goto label_05cfb339;
        bVar20 = (pCVar6->fields).Dead ^ 1;
      }
      (__this->fields)._hasHorse = (bool)bVar20;
      pSVar7 = (__this->fields)._visibleActions;
      if (pSVar7 != (System_Collections_Generic_List_ValueTuple_string__Action_Human____o *)0x0) {
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        length = (pSVar7->fields)._size;
        (pSVar7->fields)._size = 0;
        if (0 < length) {
          System_Array__Clear((System_Array_o *)(pSVar7->fields)._items,0,length,(MethodInfo *)0x0);
        }
        if ((TypeInfo_UI_ActionHandler->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler);
        }
        pSVar8 = TypeInfo_UI_ActionHandler->static_fields->Actions;
        if (pSVar8 != (System_ValueTuple_string__Action_Human___array *)0x0) {
          options = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor_395c990
                    ((System_Collections_Generic_List_object__o *)options,(int32_t)pSVar8->max_length,
                     (MethodInfo_395C990 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196950);
          pSVar8 = TypeInfo_UI_ActionHandler->static_fields->Actions;
          if (pSVar8 != (System_ValueTuple_string__Action_Human___array *)0x0) {
            if (0 < (int)pSVar8->max_length) {
              uVar18 = pSVar8->max_length & 0xffffffff;
              ppSVar21 = &pSVar8->m_Items[0].fields.Item2;
              uVar22 = 0;
              do {
                if (uVar18 <= uVar22) {
                  ThrowIndexOutOfRangeException();
                }
                pSVar19 = ((System_ValueTuple_string__Action_Human___Fields *)(ppSVar21 + -1))->Item1;
                pSVar9 = *ppSVar21;
                bVar16 = System_String__op_Equality(pSVar19,"CloakHood",(MethodInfo *)0x0);
                if (((!bVar16) || ((__this->fields)._hasCloak != false)) &&
                   (((__this->fields)._hasHorse != false ||
                    (((bVar16 = System_String__op_Equality(pSVar19,"HorseStay",(MethodInfo *)0x0),
                      !bVar16 &&
                      (bVar16 = System_String__op_Equality(pSVar19,"HorseCall",(MethodInfo *)0x0),
                      !bVar16)) &&
                     (bVar16 = System_String__op_Equality(pSVar19,"HorseFollow",(MethodInfo *)0x0),
                     !bVar16)))))) {
                  pMVar15 = MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_Add;
                  pSVar7 = (__this->fields)._visibleActions;
                  if (pSVar7 == (System_Collections_Generic_List_ValueTuple_string__Action_Human____o *)0x0)
                  goto label_05cfb339;
                  piVar1 = &(pSVar7->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar10 = (pSVar7->fields)._items;
                  if (pSVar10 == (System_ValueTuple_string__Action_Human___array *)0x0) goto label_05cfb339;
                  uVar2 = (pSVar7->fields)._size;
                  if (uVar2 < (uint)pSVar10->max_length) {
                    (pSVar7->fields)._size = uVar2 + 1;
                    pSVar10->m_Items[(int)uVar2].fields.Item1 = pSVar19;
                    pSVar10->m_Items[(int)uVar2].fields.Item2 = pSVar9;
                    Il2CppCodeGenWriteBarrier((void **)(pSVar10->m_Items + (int)uVar2));
                    uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
                  }
                  else {
                    item.fields.Item2 = (Il2CppObject *)pSVar9;
                    item.fields.Item1 = (Il2CppObject *)pSVar19;
                    System_Collections_Generic_List_ValueTuple_object__object____AddWithResize
                              ((System_Collections_Generic_List_T__o *)pSVar7,item,
                               (MethodInfo_51B05B0 *)pMVar15->klass->rgctx_data[0xe].method);
                    uVar3 = (TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor;
                  }
                  if (uVar3 == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                  }
                  pSVar19 = UI_UIManager__GetLocale
                                      ("InGame","Actions",pSVar19,
                                       "","",(MethodInfo *)0x0);
                  pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
                  if (options == (System_Collections_Generic_List_string__o *)0x0) goto label_05cfb339;
                  piVar1 = &(options->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar11 = (options->fields)._items;
                  if (pSVar11 == (System_String_array *)0x0) goto label_05cfb339;
                  uVar2 = (options->fields)._size;
                  if (uVar2 < (uint)pSVar11->max_length) {
                    (options->fields)._size = uVar2 + 1;
                    pSVar11->m_Items[(int)uVar2] = pSVar19;
                    Il2CppCodeGenWriteBarrier(pSVar11->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)options,(Il2CppObject *)pSVar19,
                               (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
                  }
                }
                uVar22 = uVar22 + 1;
                uVar2 = (uint)pSVar8->max_length;
                uVar18 = (ulong)uVar2;
                ppSVar21 = ppSVar21 + 2;
              } while ((long)uVar22 < (long)(int)uVar2);
            }
            pSVar12 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
            if (((pSVar12 != (Settings_InputSettings_o *)0x0) &&
                (pSVar13 = (pSVar12->fields).Interaction,
                pSVar13 != (Settings_InteractionInputSettings_o *)0x0)) &&
               (pSVar14 = (pSVar13->fields).ActionMenu, pSVar14 != (Settings_KeybindSetting_o *)0x0)) {
              __this_00 = (__this->fields)._wheel;
              pSVar19 = (*(pSVar14->klass->vtable)._3_ToString.methodPtr)
                                  (pSVar14,(pSVar14->klass->vtable)._3_ToString.method);
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        (__this_01,(Il2CppObject *)__this,(intptr_t)MethodInfo_UI_ActionHandler_OnSelect,
                         (MethodInfo *)0x0);
              if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
              }
              title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                                ("InGameMenu.Wheel.Actions",(MethodInfo *)0x0);
              if (__this_00 != (UI_WheelPopup_o *)0x0) {
                UI_WheelPopup__Show(__this_00,pSVar19,options,__this_01,title,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_05cfb339:
  ThrowNullReferenceException();
}


// UI.ActionHandler$$CanUseActions
// il2cpp: bool UI_ActionHandler__CanUseActions (UI_ActionHandler_o* __this, Characters_Human_o** human, const MethodInfo* method);
// 0x5cfabf0
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cfacad: xor esi, esi
// asm:   0x5cfacaf: jmp 0x5cfacc3
// asm:   0x5cfacb1: mov rdi, qword ptr [rsi + 0xc8]
// asm:   0x5cfacb8: xor esi, esi
// asm:   0x5cfacba: cmp qword ptr [rdi + rdx*8 - 8], rcx
// asm:   0x5cfacbf: cmove rsi, rax
// asm:   0x5cfad39: xor r12d, r12d
// asm:   0x5cfad8c: mov rax, qword ptr [rdi + 0xb8]
// asm:   0x5cfad93: cmp byte ptr [rax + 0x48], 0
// asm:   0x5cfad97: sete r12b
// asm:   0x5cfad9b: jmp 0x5cfad3c

bool UI_ActionHandler__CanUseActions(UI_ActionHandler_o *__this,Characters_Human_o **human,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  Characters_Human_o *pCVar3;
  bool bVar4;
  Characters_Human_o *pCVar5;
  
  if (Il2CppMethodInitialized_07547cd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547cd9 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (pGVar2 == (GameManagers_InGameManager_o *)0x0) {
label_05cfad9d:
    ThrowNullReferenceException();
  }
  pCVar3 = (Characters_Human_o *)(pGVar2->fields).CurrentCharacter;
  if (pCVar3 == (Characters_Human_o *)0x0) {
    *human = (Characters_Human_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((pCVar3->klass->_2).typeHierarchyDepth < bVar1) {
      pCVar5 = (Characters_Human_o *)0x0;
    }
    else {
      pCVar5 = (Characters_Human_o *)0x0;
      if ((pCVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human) {
        pCVar5 = pCVar3;
      }
    }
    *human = pCVar5;
  }
  Il2CppCodeGenWriteBarrier(human);
  pCVar3 = *human;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    pCVar3 = *human;
    if (pCVar3 == (Characters_Human_o *)0x0) goto label_05cfad9d;
    bVar4 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)(pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
    if (bVar4) {
      if (*human == (Characters_Human_o *)0x0) goto label_05cfad9d;
      if (((*human)->fields).Dead == false) {
        pGVar2 = (__this->fields)._gameManager;
        if (pGVar2 == (GameManagers_InGameManager_o *)0x0) goto label_05cfad9d;
        if ((pGVar2->fields).GlobalPause == false) {
          if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
          }
          bVar4 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
          if (bVar4) {
            return false;
          }
          if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
          }
          return TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false;
        }
      }
    }
  }
  return false;
}


// UI.ActionHandler$$LateUpdate
// il2cpp: void UI_ActionHandler__LateUpdate (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x5cfb350
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cfb4fa: mov rdi, r14
// asm:   0x5cfb4fd: call 0x5cfadb0  ; UI_ActionHandler__ShowActions()
// asm:   0x5cfb502: jmp 0x5cfb42a

void UI_ActionHandler__LateUpdate(UI_ActionHandler_o *__this,MethodInfo *method)

{
  UI_WheelPopup_o *pUVar1;
  Characters_Human_o *y;
  Characters_Human_o *pCVar2;
  Characters_HumanSetup_o *pCVar3;
  Characters_Horse_o *pCVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  byte bVar9;
  Characters_Human_o *pCStack_30;
  
  if (Il2CppMethodInitialized_07547cda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547cda = '\x01';
  }
  pCStack_30 = (Characters_Human_o *)0x0;
  if (Il2CppMethodInitialized_07547cd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547cd5 = '\x01';
  }
  pUVar1 = (__this->fields)._wheel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar1 = (__this->fields)._wheel;
    if (pUVar1 == (UI_WheelPopup_o *)0x0) goto label_05cfb507;
    if ((pUVar1->fields).IsActive != false) {
      bVar5 = UI_ActionHandler__CanUseActions(__this,&pCStack_30,method_00);
      pCVar2 = pCStack_30;
      pMVar8 = extraout_RDX;
      if (bVar5) {
        y = (__this->fields)._human;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
        pMVar8 = extraout_RDX_00;
        if (!bVar5) {
          pCVar2 = (__this->fields)._human;
          if (pCVar2 == (Characters_Human_o *)0x0) {
label_05cfb507:
            ThrowNullReferenceException();
          }
          bVar5 = (__this->fields)._hasCloak;
          pCVar3 = (pCVar2->fields).Setup;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = false;
          pMVar8 = (MethodInfo *)0x0;
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            pCVar2 = (__this->fields)._human;
            if ((pCVar2 == (Characters_Human_o *)0x0) ||
               (pCVar3 = (pCVar2->fields).Setup, pCVar3 == (Characters_HumanSetup_o *)0x0)) goto label_05cfb507;
            pMVar8 = (MethodInfo *)0x0;
            bVar7 = Characters_HumanSetup__get_HasCloak(pCVar3,(MethodInfo *)0x0);
          }
          if (bVar7 == bVar5) {
            pCVar2 = (__this->fields)._human;
            if (pCVar2 == (Characters_Human_o *)0x0) goto label_05cfb507;
            bVar5 = (__this->fields)._hasHorse;
            pCVar4 = (pCVar2->fields).Horse;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = 0;
            pMVar8 = (MethodInfo *)0x0;
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar6) {
              pCVar2 = (__this->fields)._human;
              if ((pCVar2 == (Characters_Human_o *)0x0) ||
                 (pCVar4 = (pCVar2->fields).Horse, pCVar4 == (Characters_Horse_o *)0x0)) goto label_05cfb507;
              bVar9 = (pCVar4->fields).Dead ^ 1;
            }
            if ((bool)bVar9 == bVar5) {
              return;
            }
          }
          UI_ActionHandler__ShowActions(__this,pMVar8);
          return;
        }
      }
      UI_ActionHandler__SetActionWheel(__this,false,pMVar8);
    }
  }
  return;
}


// UI.ActionHandler$$OnSelect
// il2cpp: void UI_ActionHandler__OnSelect (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x5cfb510

void UI_ActionHandler__OnSelect(UI_ActionHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  int32_t index;
  UI_WheelPopup_o *pUVar2;
  Characters_Human_o *y;
  UI_BaseMenu_o *pUVar3;
  System_Collections_Generic_List_ValueTuple_string__Action_Human____o *__this_00;
  Characters_HumanSetup_o *pCVar4;
  Characters_Human_o *x;
  bool bVar5;
  bool bVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  Il2CppObject *pIVar7;
  System_ValueTuple_object__object__o SVar8;
  Characters_Human_o *pCStack_30;
  
  if (Il2CppMethodInitialized_07547cdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CloakHood");
    Il2CppMethodInitialized_07547cdb = '\x01';
  }
  pCStack_30 = (Characters_Human_o *)0x0;
  if (Il2CppMethodInitialized_07547cd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547cd5 = '\x01';
  }
  pUVar2 = (__this->fields)._wheel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  pUVar2 = (__this->fields)._wheel;
  if (pUVar2 != (UI_WheelPopup_o *)0x0) {
    if ((pUVar2->fields).IsActive == false) {
      return;
    }
    index = (pUVar2->fields).SelectedItem;
    bVar5 = UI_ActionHandler__CanUseActions(__this,&pCStack_30,method_00);
    x = pCStack_30;
    bVar6 = false;
    method_01 = extraout_RDX;
    if (bVar5) {
      y = (__this->fields)._human;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      method_01 = extraout_RDX_00;
    }
    UI_ActionHandler__SetActionWheel(__this,false,method_01);
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar3 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      *(undefined1 *)&(*(uint64_t *)((char *)pUVar3 + 0x158)) = 1;
      if (bVar6 == false) {
        return;
      }
      if (index < 0) {
        return;
      }
      __this_00 = (__this->fields)._visibleActions;
      if (__this_00 != (System_Collections_Generic_List_ValueTuple_string__Action_Human____o *)0x0) {
        if ((__this_00->fields)._size <= index) {
          return;
        }
        SVar8 = System_Collections_Generic_List_ValueTuple_object__object____get_Item
                          ((System_Collections_Generic_List_T__o *)__this_00,index,
                           (MethodInfo_51B0240 *)
                           MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_get_Item)
        ;
        pIVar7 = SVar8.fields.Item2;
        bVar5 = System_String__op_Inequality
                          ((System_String_o *)SVar8.fields.Item1,"CloakHood",(MethodInfo *)0x0);
        if (bVar5) {
label_05cfb74c:
          if (pIVar7 == (Il2CppObject *)0x0) {
            return;
          }
          (*pIVar7[1].monitor)(pIVar7[4].klass,pCStack_30,pIVar7[2].monitor);
          return;
        }
        if (pCStack_30 != (Characters_Human_o *)0x0) {
          pCVar4 = (pCStack_30->fields).Setup;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar5) {
            return;
          }
          if ((pCStack_30 != (Characters_Human_o *)0x0) &&
             (pCVar4 = (pCStack_30->fields).Setup, pCVar4 != (Characters_HumanSetup_o *)0x0)) {
            bVar5 = Characters_HumanSetup__get_HasCloak(pCVar4,(MethodInfo *)0x0);
            if (!bVar5) {
              return;
            }
            goto label_05cfb74c;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler$$OnDisable
// il2cpp: void UI_ActionHandler__OnDisable (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x5cfb780

void UI_ActionHandler__OnDisable(UI_ActionHandler_o *__this,MethodInfo *method)

{
  UI_WheelPopup_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07547cdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547cdc = '\x01';
  }
  pUVar1 = (__this->fields)._wheel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._wheel;
    if (pUVar1 == (UI_WheelPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._58_HideImmediate.methodPtr)
              (pUVar1,(pUVar1->klass->vtable)._58_HideImmediate.method);
  }
  (__this->fields)._human = (Characters_Human_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human);
  return;
}


// UI.ActionHandler$$.ctor
// il2cpp: void UI_ActionHandler___ctor (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x5cfb810

void UI_ActionHandler___ctor(UI_ActionHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ValueTuple_string__Action_Human____o *__this_00;
  
  if (Il2CppMethodInitialized_07547cdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human);
    Il2CppMethodInitialized_07547cdd = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor
            ((System_Collections_Generic_List_T__o *)__this_00,
             (MethodInfo_51AFC30 *)
             MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_ctor);
  (__this->fields)._visibleActions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._visibleActions);
  (__this->fields)._lastCloseFrame = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler$$.cctor
// il2cpp: void UI_ActionHandler___cctor (const MethodInfo* method);
// 0x5cfb890
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5cfb9c0: mov rbp, rbx
// asm:   0x5cfb9c3: jmp 0x5cfb9d0

void UI_ActionHandler___cctor(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_ValueTuple_string__Action_Human___array *pSVar2;
  System_Action_Human__o *pSVar3;
  System_ValueTuple_object__object__o SStack_a8;
  System_ValueTuple_object__object__o SStack_98;
  System_ValueTuple_object__object__o SStack_88;
  System_ValueTuple_object__object__o SStack_78;
  System_ValueTuple_object__object__o SStack_68;
  System_ValueTuple_object__object__o SStack_58;
  System_ValueTuple_object__object__o SStack_48;
  
  if (Il2CppMethodInitialized_07547cde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_Human);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c_cctor_b__22_0);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c_cctor_b__22_1);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c_cctor_b__22_2);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c_cctor_b__22_3);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c_cctor_b__22_4);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c_cctor_b__22_5);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c_cctor_b__22_6);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler_c);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_ValueTuple_string_Action_Human__array);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_ValueTuple_string_Action_Human_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"ShareSupplies");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseCall");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseFollow");
    il2cpp_codegen_initialize_runtime_metadata(&"BladeSheathe");
    il2cpp_codegen_initialize_runtime_metadata(&"HorseStay");
    il2cpp_codegen_initialize_runtime_metadata(&"CloakHood");
    il2cpp_codegen_initialize_runtime_metadata(&"Carry");
    Il2CppMethodInitialized_07547cde = '\x01';
  }
  pSVar2 = (System_ValueTuple_string__Action_Human___array *)
           SZArrayNew(TypeInfo_System_ValueTuple_string_Action_Human__array,7);
  if ((TypeInfo_UI_ActionHandler_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler_c);
  }
  pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar3,pIVar1,(intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_0,
             (MethodInfo_4A81BE0 *)0x0);
  SStack_48.fields.Item1 = (Il2CppObject *)0x0;
  SStack_48.fields.Item2 = (Il2CppObject *)0x0;
  System_ValueTuple_object__object____ctor
            (&SStack_48,(Il2CppObject *)"BladeSheathe",(Il2CppObject *)pSVar3,
             (MethodInfo_453AE10 *)MethodInfo_System_ValueTuple_string_Action_Human_ctor);
  if (pSVar2 == (System_ValueTuple_string__Action_Human___array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0].fields.Item1 = (System_String_o *)SStack_48.fields.Item1;
    pSVar2->m_Items[0].fields.Item2 = (System_Action_Human__o *)SStack_48.fields.Item2;
    Il2CppCodeGenWriteBarrier((void **)pSVar2->m_Items);
    pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,(intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_1,
               (MethodInfo_4A81BE0 *)0x0);
    SStack_58.fields.Item1 = (Il2CppObject *)0x0;
    SStack_58.fields.Item2 = (Il2CppObject *)0x0;
    System_ValueTuple_object__object____ctor
              (&SStack_58,(Il2CppObject *)"Carry",(Il2CppObject *)pSVar3,
               (MethodInfo_453AE10 *)MethodInfo_System_ValueTuple_string_Action_Human_ctor);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1].fields.Item1 = (System_String_o *)SStack_58.fields.Item1;
      pSVar2->m_Items[1].fields.Item2 = (System_Action_Human__o *)SStack_58.fields.Item2;
      Il2CppCodeGenWriteBarrier((void **)(pSVar2->m_Items + 1));
      pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
      pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
      System_Action_object____ctor
                ((System_Action_object__o *)pSVar3,pIVar1,
                 (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_2,(MethodInfo_4A81BE0 *)0x0);
      SStack_68.fields.Item1 = (Il2CppObject *)0x0;
      SStack_68.fields.Item2 = (Il2CppObject *)0x0;
      System_ValueTuple_object__object____ctor
                (&SStack_68,(Il2CppObject *)"ShareSupplies",(Il2CppObject *)pSVar3,
                 (MethodInfo_453AE10 *)MethodInfo_System_ValueTuple_string_Action_Human_ctor);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2].fields.Item1 = (System_String_o *)SStack_68.fields.Item1;
        pSVar2->m_Items[2].fields.Item2 = (System_Action_Human__o *)SStack_68.fields.Item2;
        Il2CppCodeGenWriteBarrier((void **)(pSVar2->m_Items + 2));
        pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
        System_Action_object____ctor
                  ((System_Action_object__o *)pSVar3,pIVar1,
                   (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_3,(MethodInfo_4A81BE0 *)0x0);
        SStack_78.fields.Item1 = (Il2CppObject *)0x0;
        SStack_78.fields.Item2 = (Il2CppObject *)0x0;
        System_ValueTuple_object__object____ctor
                  (&SStack_78,(Il2CppObject *)"HorseStay",(Il2CppObject *)pSVar3,
                   (MethodInfo_453AE10 *)MethodInfo_System_ValueTuple_string_Action_Human_ctor);
        if ((pSVar2->max_length & 0xfffffffc) != 0) {
          pSVar2->m_Items[3].fields.Item1 = (System_String_o *)SStack_78.fields.Item1;
          pSVar2->m_Items[3].fields.Item2 = (System_Action_Human__o *)SStack_78.fields.Item2;
          Il2CppCodeGenWriteBarrier((void **)(pSVar2->m_Items + 3));
          pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
          pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
          System_Action_object____ctor
                    ((System_Action_object__o *)pSVar3,pIVar1,
                     (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_4,(MethodInfo_4A81BE0 *)0x0);
          SStack_88.fields.Item1 = (Il2CppObject *)0x0;
          SStack_88.fields.Item2 = (Il2CppObject *)0x0;
          System_ValueTuple_object__object____ctor
                    (&SStack_88,(Il2CppObject *)"HorseCall",(Il2CppObject *)pSVar3,
                     (MethodInfo_453AE10 *)MethodInfo_System_ValueTuple_string_Action_Human_ctor);
          if (4 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[4].fields.Item1 = (System_String_o *)SStack_88.fields.Item1;
            pSVar2->m_Items[4].fields.Item2 = (System_Action_Human__o *)SStack_88.fields.Item2;
            Il2CppCodeGenWriteBarrier((void **)(pSVar2->m_Items + 4));
            pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
            pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
            System_Action_object____ctor
                      ((System_Action_object__o *)pSVar3,pIVar1,
                       (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_5,(MethodInfo_4A81BE0 *)0x0);
            SStack_98.fields.Item1 = (Il2CppObject *)0x0;
            SStack_98.fields.Item2 = (Il2CppObject *)0x0;
            System_ValueTuple_object__object____ctor
                      (&SStack_98,(Il2CppObject *)"HorseFollow",(Il2CppObject *)pSVar3,
                       (MethodInfo_453AE10 *)MethodInfo_System_ValueTuple_string_Action_Human_ctor);
            if (5 < (uint)pSVar2->max_length) {
              pSVar2->m_Items[5].fields.Item1 = (System_String_o *)SStack_98.fields.Item1;
              pSVar2->m_Items[5].fields.Item2 = (System_Action_Human__o *)SStack_98.fields.Item2;
              Il2CppCodeGenWriteBarrier((void **)(pSVar2->m_Items + 5));
              pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
              pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
              System_Action_object____ctor
                        ((System_Action_object__o *)pSVar3,pIVar1,
                         (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_6,(MethodInfo_4A81BE0 *)0x0);
              SStack_a8.fields.Item1 = (Il2CppObject *)0x0;
              SStack_a8.fields.Item2 = (Il2CppObject *)0x0;
              System_ValueTuple_object__object____ctor
                        (&SStack_a8,(Il2CppObject *)"CloakHood",(Il2CppObject *)pSVar3,
                         (MethodInfo_453AE10 *)MethodInfo_System_ValueTuple_string_Action_Human_ctor);
              if (6 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[6].fields.Item1 = (System_String_o *)SStack_a8.fields.Item1;
                pSVar2->m_Items[6].fields.Item2 = (System_Action_Human__o *)SStack_a8.fields.Item2;
                Il2CppCodeGenWriteBarrier((void **)(pSVar2->m_Items + 6));
                TypeInfo_UI_ActionHandler->static_fields->Actions = pSVar2;
                Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ActionHandler->static_fields->Actions);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// UI.ActionHandler$$<Awake>b__13_0
// il2cpp: void UI_ActionHandler___Awake_b__13_0 (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x5cfbd70

void UI_ActionHandler___Awake_b__13_0(UI_ActionHandler_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  UI_ActionHandler__SetActionWheel(__this,false,in_RDX);
  return;
}


