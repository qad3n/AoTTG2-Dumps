// Type: UI.ActionHandler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/ActionHandler.cs
// Prior real C# source: none
// --------------------------------

// UI.ActionHandler.<>c$$.cctor
// il2cpp: void UI_ActionHandler___c___cctor (const MethodInfo* method);
// 0x18223a390

void UI_ActionHandler___c___cctor(MethodInfo *method)

{
  UI_ActionHandler___c_o *__this;
  
  if (Il2CppMethodInitialized_184347176 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler_c);
    Il2CppMethodInitialized_184347176 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ActionHandler_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_UI_ActionHandler_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ActionHandler_c->static_fields->__9,__this);
  return;
}


// UI.ActionHandler.<>c$$.ctor
// il2cpp: void UI_ActionHandler___c___ctor (UI_ActionHandler___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ActionHandler___c___ctor(UI_ActionHandler___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler.<>c$$<.cctor>b__22_0
// il2cpp: void UI_ActionHandler___c____cctor_b__22_0 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x182239b50

void UI_ActionHandler___c____cctor_b__22_0
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  if (human != (Characters_Human_o *)0x0) {
    Characters_Human__ToggleSheathe(human,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler.<>c$$<.cctor>b__22_1
// il2cpp: void UI_ActionHandler___c____cctor_b__22_1 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x182239b70

void UI_ActionHandler___c____cctor_b__22_1
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  if (human != (Characters_Human_o *)0x0) {
    Characters_Human__ToggleCarry(human,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler.<>c$$<.cctor>b__22_2
// il2cpp: void UI_ActionHandler___c____cctor_b__22_2 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x182239b90

void UI_ActionHandler___c____cctor_b__22_2
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  if (human != (Characters_Human_o *)0x0) {
    Characters_Human__ShareSupplies(human,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler.<>c$$<.cctor>b__22_3
// il2cpp: void UI_ActionHandler___c____cctor_b__22_3 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x182239bb0

void UI_ActionHandler___c____cctor_b__22_3
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *sound;
  System_Func_Horse__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_184347177 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Horse_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c_cctor_b__22_7);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler_c);
    Il2CppMethodInitialized_184347177 = '\x01';
  }
  if ((TypeInfo_UI_ActionHandler_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler_c);
  }
  __this_00 = TypeInfo_UI_ActionHandler_c->static_fields->__9__22_7;
  if (__this_00 == (System_Func_Horse__bool__o *)0x0) {
    if ((TypeInfo_UI_ActionHandler_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler_c);
    }
    object = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Horse_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_00,object,
               (intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_7,(MethodInfo_B61EB0 *)0x0);
    TypeInfo_UI_ActionHandler_c->static_fields->__9__22_7 = __this_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ActionHandler_c->static_fields->__9__22_7,__this_00);
  }
  if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
  }
  sound = TypeInfo_Characters_HorseSounds->static_fields->Idle3;
  if ((TypeInfo_UI_ActionHandler->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler);
  }
  UI_ActionHandler__ExecuteHorseCommand(human,__this_00,sound,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler.<>c$$<.cctor>b__22_7
// il2cpp: bool UI_ActionHandler___c____cctor_b__22_7 (UI_ActionHandler___c_o* __this, Characters_Horse_o* horse, const MethodInfo* method);
// 0x182239f70

bool UI_ActionHandler___c____cctor_b__22_7
               (UI_ActionHandler___c_o *__this,Characters_Horse_o *horse,MethodInfo *method)

{
  bool bVar1;
  
  if (horse != (Characters_Horse_o *)0x0) {
    bVar1 = Characters_Horse__Stay(horse,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler.<>c$$<.cctor>b__22_4
// il2cpp: void UI_ActionHandler___c____cctor_b__22_4 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x182239d10

void UI_ActionHandler___c____cctor_b__22_4
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  Characters_Human_o *human_00;
  System_String_o *sound;
  UI_ActionHandler___c__DisplayClass22_0_o *object;
  System_Func_Horse__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_184347178 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Horse_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c__DisplayClass22_0_cctor_b__8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler_c__DisplayClass22_0);
    Il2CppMethodInitialized_184347178 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ActionHandler_c__DisplayClass22_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_ActionHandler___c__DisplayClass22_0_o *)0x0) {
    (object->fields).human = human;
    Il2CppCodeGenWriteBarrier(&(object->fields).human,human);
    human_00 = (object->fields).human;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Horse_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_ActionHandler_c__DisplayClass22_0_cctor_b__8,(MethodInfo_B61EB0 *)0x0);
    if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
    }
    sound = TypeInfo_Characters_HorseSounds->static_fields->Idle1;
    if ((TypeInfo_UI_ActionHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler);
    }
    UI_ActionHandler__ExecuteHorseCommand(human_00,__this_00,sound,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler.<>c$$<.cctor>b__22_5
// il2cpp: void UI_ActionHandler___c____cctor_b__22_5 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x182239e30

void UI_ActionHandler___c____cctor_b__22_5
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  Characters_Human_o *human_00;
  System_String_o *sound;
  UI_ActionHandler___c__DisplayClass22_1_o *object;
  System_Func_Horse__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_184347179 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_Horse_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseSounds);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_c__DisplayClass22_1_cctor_b__9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler_c__DisplayClass22_1);
    Il2CppMethodInitialized_184347179 = '\x01';
  }
  object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_ActionHandler_c__DisplayClass22_1);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (UI_ActionHandler___c__DisplayClass22_1_o *)0x0) {
    (object->fields).human = human;
    Il2CppCodeGenWriteBarrier(&(object->fields).human,human);
    human_00 = (object->fields).human;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_Horse_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_UI_ActionHandler_c__DisplayClass22_1_cctor_b__9,(MethodInfo_B61EB0 *)0x0);
    if ((TypeInfo_Characters_HorseSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HorseSounds);
    }
    sound = TypeInfo_Characters_HorseSounds->static_fields->Idle1;
    if ((TypeInfo_UI_ActionHandler->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler);
    }
    UI_ActionHandler__ExecuteHorseCommand(human_00,__this_00,sound,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler.<>c$$<.cctor>b__22_6
// il2cpp: void UI_ActionHandler___c____cctor_b__22_6 (UI_ActionHandler___c_o* __this, Characters_Human_o* human, const MethodInfo* method);
// 0x182239f50

void UI_ActionHandler___c____cctor_b__22_6
               (UI_ActionHandler___c_o *__this,Characters_Human_o *human,MethodInfo *method)

{
  if (human != (Characters_Human_o *)0x0) {
    Characters_Human__ToggleHood(human,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler.<>c__DisplayClass22_0$$.ctor
// il2cpp: void UI_ActionHandler___c__DisplayClass22_0___ctor (UI_ActionHandler___c__DisplayClass22_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ActionHandler___c__DisplayClass22_0___ctor(UI_ActionHandler___c__DisplayClass22_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler.<>c__DisplayClass22_0$$<.cctor>b__8
// il2cpp: bool UI_ActionHandler___c__DisplayClass22_0____cctor_b__8 (UI_ActionHandler___c__DisplayClass22_0_o* __this, Characters_Horse_o* horse, const MethodInfo* method);
// 0x18223a210

bool UI_ActionHandler___c__DisplayClass22_0____cctor_b__8
               (UI_ActionHandler___c__DisplayClass22_0_o *__this,Characters_Horse_o *horse,MethodInfo *method)

{
  bool bVar1;
  
  if (horse != (Characters_Horse_o *)0x0) {
    bVar1 = Characters_Horse__ComeTo
                      (horse,(Characters_BaseCharacter_o *)(__this->fields).human,5.0,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler.<>c__DisplayClass22_1$$.ctor
// il2cpp: void UI_ActionHandler___c__DisplayClass22_1___ctor (UI_ActionHandler___c__DisplayClass22_1_o* __this, const MethodInfo* method);
// 0x18054c890

void
UI_ActionHandler___c__DisplayClass22_1___ctor(UI_ActionHandler___c__DisplayClass22_1_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler.<>c__DisplayClass22_1$$<.cctor>b__9
// il2cpp: bool UI_ActionHandler___c__DisplayClass22_1____cctor_b__9 (UI_ActionHandler___c__DisplayClass22_1_o* __this, Characters_Horse_o* horse, const MethodInfo* method);
// 0x18223a240

bool UI_ActionHandler___c__DisplayClass22_1____cctor_b__9
               (UI_ActionHandler___c__DisplayClass22_1_o *__this,Characters_Horse_o *horse,MethodInfo *method)

{
  bool bVar1;
  
  if (horse != (Characters_Horse_o *)0x0) {
    bVar1 = Characters_Horse__Follow
                      (horse,(Characters_BaseCharacter_o *)(__this->fields).human,5.0,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler$$get_IsActive
// il2cpp: bool UI_ActionHandler__get_IsActive (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x18221cf90

bool UI_ActionHandler__get_IsActive(UI_ActionHandler_o *__this,MethodInfo *method)

{
  UI_WheelPopup_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434716c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434716c = '\x01';
  }
  pUVar1 = (__this->fields)._wheel;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  pUVar1 = (__this->fields)._wheel;
  if (pUVar1 != (UI_WheelPopup_o *)0x0) {
    return (pUVar1->fields).IsActive;
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler$$get_BlocksInput
// il2cpp: bool UI_ActionHandler__get_BlocksInput (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x18221cf50

bool UI_ActionHandler__get_BlocksInput(UI_ActionHandler_o *__this,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  int32_t iVar3;
  
  bVar2 = UI_ActionHandler__get_IsActive(__this,(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  iVar1 = (__this->fields)._lastCloseFrame;
  iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
  return iVar1 == iVar3;
}


// UI.ActionHandler$$ExecuteHorseCommand
// il2cpp: void UI_ActionHandler__ExecuteHorseCommand (Characters_Human_o* human, System_Func_Horse__bool__o* command, System_String_o* sound, const MethodInfo* method);
// 0x18221be00

void UI_ActionHandler__ExecuteHorseCommand
               (Characters_Human_o *human,System_Func_Horse__bool__o *command,System_String_o *sound,
               MethodInfo *method)

{
  Characters_Horse_o *__this;
  Settings_SoundSettings_o *pSVar1;
  Settings_BoolSetting_o *pSVar2;
  bool bVar3;
  char cVar4;
  
  if (Il2CppMethodInitialized_18434716d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_18434716d = '\x01';
  }
  if (human != (Characters_Human_o *)0x0) {
    __this = (human->fields).Horse;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if (command == (System_Func_Horse__bool__o *)0x0) goto label_18221bee8;
      cVar4 = (*(code *)(command->fields).invoke_impl)((command->fields).method_code,__this);
      if (cVar4 != '\0') {
        pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->SoundSettings;
        if ((pSVar1 == (Settings_SoundSettings_o *)0x0) ||
           (pSVar2 = (pSVar1->fields).HorseSoundEffect, pSVar2 == (Settings_BoolSetting_o *)0x0))
        goto label_18221bee8;
        if ((pSVar2->fields)._value != false) {
          if (__this == (Characters_Horse_o *)0x0) goto label_18221bee8;
          Characters_BaseCharacter__PlaySound((Characters_BaseCharacter_o *)__this,sound,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
label_18221bee8:
  ThrowNullReferenceException();
}


// UI.ActionHandler$$Awake
// il2cpp: void UI_ActionHandler__Awake (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x18221ba70

void UI_ActionHandler__Awake(UI_ActionHandler_o *__this,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *value;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  UI_WheelPopup_o *pUVar2;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_18434716e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_Awake_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_WheelPopup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_InGameManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefabs/InGame/WheelMenu");
    Il2CppMethodInitialized_18434716e = '\x01';
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  __this_00 = UI_ElementFactory__InstantiateAndSetupPanel_object_
                        (parent,"Prefabs/InGame/WheelMenu",false,
                         (MethodInfo_6ABD60 *)MethodInfo_UI_ElementFactory_InstantiateAndSetupPanel_WheelPopup
                        );
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (__this_00,
                        (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_WheelPopup);
    (__this->fields)._wheel = pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._wheel,pUVar2);
    pUVar2 = (__this->fields)._wheel;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
    UnityEngine_Events_UnityAction___ctor
              ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_ActionHandler_Awake_b__13_0,(MethodInfo *)0x0);
    if (pUVar2 != (UI_WheelPopup_o *)0x0) {
      (pUVar2->fields).OnCancel = __this_01;
      Il2CppCodeGenWriteBarrier(&(pUVar2->fields).OnCancel,__this_01);
      value = (GameManagers_InGameManager_o *)
              TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentGameManager;
      if (value == (GameManagers_InGameManager_o *)0x0) {
        (__this->fields)._gameManager = (GameManagers_InGameManager_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
        (__this->fields)._gameManager = value;
        bVar1 = (TypeInfo_GameManagers_InGameManager->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_GameManagers_InGameManager)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this->fields)._gameManager,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.ActionHandler$$ToggleActionWheel
// il2cpp: void UI_ActionHandler__ToggleActionWheel (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x18221c970

void UI_ActionHandler__ToggleActionWheel(UI_ActionHandler_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = UI_ActionHandler__get_IsActive(__this,(MethodInfo *)0x0);
  UI_ActionHandler__SetActionWheel(__this,!bVar1,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler$$SetActionWheel
// il2cpp: void UI_ActionHandler__SetActionWheel (UI_ActionHandler_o* __this, bool enable, const MethodInfo* method);
// 0x18221c400

void UI_ActionHandler__SetActionWheel(UI_ActionHandler_o *__this,bool enable,MethodInfo *method)

{
  UI_WheelPopup_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  Characters_Human_o *local_res20;
  
  local_res20 = (Characters_Human_o *)0x0;
  if (enable) {
    bVar2 = UI_InGameMenu__InMenu((MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = UI_ActionHandler__CanUseActions(__this,&local_res20,(MethodInfo *)0x0);
      if (bVar2) {
        (__this->fields)._human = local_res20;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._human,local_res20);
        UI_ActionHandler__ShowActions(__this,(MethodInfo *)0x0);
      }
    }
  }
  else {
    bVar2 = UI_ActionHandler__get_IsActive(__this,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar1 = (__this->fields)._wheel;
      if (pUVar1 != (UI_WheelPopup_o *)0x0) {
        (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
        (__this->fields)._human = (Characters_Human_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._human,(void *)0x0);
        iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
        (__this->fields)._lastCloseFrame = iVar3;
        return;
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ActionHandler$$ShowActions
// il2cpp: void UI_ActionHandler__ShowActions (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x18221c4b0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18221c748: mov ebp, r15d
// asm:   0x18221c74b: mov eax, r15d
// asm:   0x18221c74e: nop 

void UI_ActionHandler__ShowActions(UI_ActionHandler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  Characters_Human_o *pCVar2;
  Characters_HumanSetup_o *pCVar3;
  Characters_Horse_o *pCVar4;
  System_Collections_Generic_List_ValueTuple_string__Action_Human____o *pSVar5;
  System_ValueTuple_string__Action_Human___array *pSVar6;
  System_Action_Human__o *pSVar7;
  Settings_InputSettings_o *pSVar8;
  Settings_InteractionInputSettings_o *pSVar9;
  Settings_KeybindSetting_o *pSVar10;
  UI_WheelPopup_o *__this_00;
  bool bVar11;
  System_Collections_Generic_List_string__o *options;
  System_String_o *pSVar12;
  UnityEngine_Events_UnityAction_o *__this_01;
  System_String_o *title;
  uint uVar13;
  System_String_o *local_28;
  System_Action_Human__o *local_20;
  
  if (Il2CppMethodInitialized_18434716f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_ActionHandler_OnSelect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_ActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
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
    Il2CppMethodInitialized_18434716f = '\x01';
  }
  pCVar2 = (__this->fields)._human;
  if (pCVar2 != (Characters_Human_o *)0x0) {
    pCVar3 = (pCVar2->fields).Setup;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar11) {
      pCVar2 = (__this->fields)._human;
      if ((pCVar2 == (Characters_Human_o *)0x0) ||
         (pCVar3 = (pCVar2->fields).Setup, pCVar3 == (Characters_HumanSetup_o *)0x0)) goto label_18221c956;
      bVar11 = Characters_HumanSetup__get_HasCloak(pCVar3,(MethodInfo *)0x0);
    }
    else {
      bVar11 = false;
    }
    (__this->fields)._hasCloak = bVar11;
    pCVar2 = (__this->fields)._human;
    if (pCVar2 != (Characters_Human_o *)0x0) {
      pCVar4 = (pCVar2->fields).Horse;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar11) {
        pCVar2 = (__this->fields)._human;
        if ((pCVar2 == (Characters_Human_o *)0x0) ||
           (pCVar4 = (pCVar2->fields).Horse, pCVar4 == (Characters_Horse_o *)0x0)) goto label_18221c956;
        bVar11 = (pCVar4->fields).Dead == false;
      }
      else {
        bVar11 = false;
      }
      uVar13 = 0;
      (__this->fields)._hasHorse = bVar11;
      pSVar5 = (__this->fields)._visibleActions;
      if (pSVar5 != (System_Collections_Generic_List_ValueTuple_string__Action_Human____o *)0x0) {
        length = (pSVar5->fields)._size;
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        (pSVar5->fields)._size = 0;
        if (0 < length) {
          System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
        }
        if ((TypeInfo_UI_ActionHandler->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler);
        }
        pSVar6 = TypeInfo_UI_ActionHandler->static_fields->Actions;
        if (pSVar6 != (System_ValueTuple_string__Action_Human___array *)0x0) {
          options = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_List_T__o *)options,(int32_t)pSVar6->max_length,
                     (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dc058);
          pSVar6 = TypeInfo_UI_ActionHandler->static_fields->Actions;
          if (pSVar6 != (System_ValueTuple_string__Action_Human___array *)0x0) {
            for (; (int)uVar13 < (int)pSVar6->max_length; uVar13 = uVar13 + 1) {
              if ((uint)pSVar6->max_length <= uVar13) {
                ThrowIndexOutOfRangeException();
              }
              pSVar12 = pSVar6->m_Items[(int)uVar13].fields.Item1;
              pSVar7 = pSVar6->m_Items[(int)uVar13].fields.Item2;
              bVar11 = System_String__op_Equality(pSVar12,"CloakHood",(MethodInfo *)0x0);
              if (((!bVar11) || ((__this->fields)._hasCloak != false)) &&
                 (((__this->fields)._hasHorse != false ||
                  (((bVar11 = System_String__op_Equality(pSVar12,"HorseStay",(MethodInfo *)0x0),
                    !bVar11 &&
                    (bVar11 = System_String__op_Equality(pSVar12,"HorseCall",(MethodInfo *)0x0),
                    !bVar11)) &&
                   (bVar11 = System_String__op_Equality(pSVar12,"HorseFollow",(MethodInfo *)0x0),
                   !bVar11)))))) {
                pSVar5 = (__this->fields)._visibleActions;
                if (pSVar5 == (System_Collections_Generic_List_ValueTuple_string__Action_Human____o *)0x0)
                goto label_18221c956;
                local_28 = pSVar12;
                local_20 = pSVar7;
                il2cpp_runtime_helper_180039eb0(pSVar5,&local_28,
                              MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_Add);
                if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
                }
                pSVar12 = UI_UIManager__GetLocale
                                    ("InGame","Actions",pSVar12,""
                                     ,"",(MethodInfo *)0x0);
                if (options == (System_Collections_Generic_List_string__o *)0x0) goto label_18221c956;
                il2cpp_runtime_helper_180012890(options,pSVar12);
              }
            }
            pSVar8 = TypeInfo_Settings_SettingsManager->static_fields->InputSettings;
            if (((pSVar8 != (Settings_InputSettings_o *)0x0) &&
                (pSVar9 = (pSVar8->fields).Interaction, pSVar9 != (Settings_InteractionInputSettings_o *)0x0))
               && (pSVar10 = (pSVar9->fields).ActionMenu, pSVar10 != (Settings_KeybindSetting_o *)0x0)) {
              __this_00 = (__this->fields)._wheel;
              pSVar12 = (*(pSVar10->klass->vtable)._3_ToString.methodPtr)
                                  (pSVar10,(pSVar10->klass->vtable)._3_ToString.method);
              __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)__this,
                         (intptr_t)MethodInfo_UI_ActionHandler_OnSelect,(MethodInfo *)0x0);
              if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
              }
              title = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                                ("InGameMenu.Wheel.Actions","Actions",(MethodInfo *)0x0);
              if (__this_00 != (UI_WheelPopup_o *)0x0) {
                UI_WheelPopup__Show(__this_00,pSVar12,options,__this_01,title,false,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
label_18221c956:
  ThrowNullReferenceException();
}


// UI.ActionHandler$$CanUseActions
// il2cpp: bool UI_ActionHandler__CanUseActions (UI_ActionHandler_o* __this, Characters_Human_o** human, const MethodInfo* method);
// 0x18221bc30

bool UI_ActionHandler__CanUseActions(UI_ActionHandler_o *__this,Characters_Human_o **human,MethodInfo *method)

{
  byte bVar1;
  GameManagers_InGameManager_o *pGVar2;
  Characters_Human_o *pCVar3;
  bool bVar4;
  Characters_Human_o *pCVar5;
  Characters_Human_o *value;
  
  if (Il2CppMethodInitialized_184347170 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347170 = '\x01';
  }
  pGVar2 = (__this->fields)._gameManager;
  if (pGVar2 != (GameManagers_InGameManager_o *)0x0) {
    pCVar3 = (Characters_Human_o *)(pGVar2->fields).CurrentCharacter;
    value = (Characters_Human_o *)0x0;
    if (pCVar3 == (Characters_Human_o *)0x0) {
      *human = (Characters_Human_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         (bVar4 = true,
         (pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
      {
        bVar4 = false;
      }
      pCVar5 = value;
      if (bVar4) {
        pCVar5 = pCVar3;
      }
      *human = pCVar5;
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         (bVar4 = true,
         (pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Human))
      {
        bVar4 = false;
      }
      if (bVar4) {
        value = pCVar3;
      }
    }
    Il2CppCodeGenWriteBarrier(human,value);
    pCVar3 = *human;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      pCVar3 = *human;
      if (pCVar3 == (Characters_Human_o *)0x0) goto label_18221bdfa;
      bVar4 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
      if (bVar4) {
        if (*human == (Characters_Human_o *)0x0) goto label_18221bdfa;
        if (((*human)->fields).Dead == false) {
          pGVar2 = (__this->fields)._gameManager;
          if (pGVar2 == (GameManagers_InGameManager_o *)0x0) goto label_18221bdfa;
          if ((pGVar2->fields).GlobalPause == false) {
            if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
            }
            bVar4 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
            if (!bVar4) {
              if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              }
              return TypeInfo_CustomLogic_CustomLogicManager->static_fields->Cutscene == false;
            }
          }
        }
      }
    }
    return false;
  }
label_18221bdfa:
  ThrowNullReferenceException();
}


// UI.ActionHandler$$LateUpdate
// il2cpp: void UI_ActionHandler__LateUpdate (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x18221bef0

void UI_ActionHandler__LateUpdate(UI_ActionHandler_o *__this,MethodInfo *method)

{
  Characters_Human_o *y;
  Characters_Human_o *pCVar1;
  Characters_HumanSetup_o *pCVar2;
  Characters_Horse_o *pCVar3;
  UI_WheelPopup_o *pUVar4;
  bool bVar5;
  bool bVar6;
  int32_t iVar7;
  Characters_Human_o *local_res18 [2];
  
  if (Il2CppMethodInitialized_184347171 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347171 = '\x01';
  }
  local_res18[0] = (Characters_Human_o *)0x0;
  bVar5 = UI_ActionHandler__get_IsActive(__this,(MethodInfo *)0x0);
  if (bVar5) {
    bVar5 = UI_ActionHandler__CanUseActions(__this,local_res18,(MethodInfo *)0x0);
    pCVar1 = local_res18[0];
    if (bVar5) {
      y = (__this->fields)._human;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      if (!bVar5) {
        pCVar1 = (__this->fields)._human;
        if (pCVar1 != (Characters_Human_o *)0x0) {
          bVar5 = (__this->fields)._hasCloak;
          pCVar2 = (pCVar1->fields).Setup;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            pCVar1 = (__this->fields)._human;
            if ((pCVar1 == (Characters_Human_o *)0x0) ||
               (pCVar2 = (pCVar1->fields).Setup, pCVar2 == (Characters_HumanSetup_o *)0x0))
            goto label_18221c0d2;
            bVar6 = Characters_HumanSetup__get_HasCloak(pCVar2,(MethodInfo *)0x0);
          }
          else {
            bVar6 = false;
          }
          if (bVar5 == bVar6) {
            pCVar1 = (__this->fields)._human;
            if (pCVar1 == (Characters_Human_o *)0x0) goto label_18221c0d2;
            bVar5 = (__this->fields)._hasHorse;
            pCVar3 = (pCVar1->fields).Horse;
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pCVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar6) {
              pCVar1 = (__this->fields)._human;
              if ((pCVar1 == (Characters_Human_o *)0x0) ||
                 (pCVar3 = (pCVar1->fields).Horse, pCVar3 == (Characters_Horse_o *)0x0)) goto label_18221c0d2;
              bVar6 = (pCVar3->fields).Dead == false;
            }
            else {
              bVar6 = false;
            }
            if (bVar5 == bVar6) {
              return;
            }
          }
          UI_ActionHandler__ShowActions(__this,(MethodInfo *)0x0);
          return;
        }
label_18221c0d2:
        ThrowNullReferenceException();
      }
    }
    bVar5 = UI_ActionHandler__get_IsActive(__this,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar4 = (__this->fields)._wheel;
      if (pUVar4 != (UI_WheelPopup_o *)0x0) {
        (*(pUVar4->klass->vtable)._22_Hide.methodPtr)(pUVar4,(pUVar4->klass->vtable)._22_Hide.method);
        (__this->fields)._human = (Characters_Human_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._human,(void *)0x0);
        iVar7 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
        (__this->fields)._lastCloseFrame = iVar7;
        return;
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// UI.ActionHandler$$OnSelect
// il2cpp: void UI_ActionHandler__OnSelect (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x18221c170
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18221c3d7: mov rsi, qword ptr [rsp + 0x48]
// asm:   0x18221c3dc: mov rdi, qword ptr [rsp + 0x58]

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
  int32_t iVar7;
  Characters_Human_o *local_res18;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_o
  local_18;
  
  if (Il2CppMethodInitialized_184347172 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_InGameMenu);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"CloakHood");
    Il2CppMethodInitialized_184347172 = '\x01';
  }
  local_res18 = (Characters_Human_o *)0x0;
  bVar5 = UI_ActionHandler__get_IsActive(__this,(MethodInfo *)0x0);
  if (!bVar5) {
    return;
  }
  pUVar2 = (__this->fields)._wheel;
  if (pUVar2 != (UI_WheelPopup_o *)0x0) {
    index = (pUVar2->fields).SelectedItem;
    bVar5 = UI_ActionHandler__CanUseActions(__this,&local_res18,(MethodInfo *)0x0);
    x = local_res18;
    if (bVar5) {
      y = (__this->fields)._human;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    }
    else {
      bVar5 = false;
    }
    bVar6 = UI_ActionHandler__get_IsActive(__this,(MethodInfo *)0x0);
    if (bVar6) {
      pUVar2 = (__this->fields)._wheel;
      if (pUVar2 == (UI_WheelPopup_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(pUVar2->klass->vtable)._22_Hide.methodPtr)(pUVar2,(pUVar2->klass->vtable)._22_Hide.method);
      (__this->fields)._human = (Characters_Human_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._human,(void *)0x0);
      iVar7 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
      (__this->fields)._lastCloseFrame = iVar7;
    }
    if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
    }
    pUVar3 = TypeInfo_UI_UIManager->static_fields->CurrentMenu;
    if (pUVar3 != (UI_BaseMenu_o *)0x0) {
      bVar1 = (TypeInfo_UI_InGameMenu->_2).typeHierarchyDepth;
      if (((pUVar3->klass->_2).typeHierarchyDepth < bVar1) ||
         ((pUVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UI_InGameMenu)) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar3);
      }
      *(undefined1 *)&(*(uint64_t *)((char *)pUVar3 + 0x168)) = 1;
      if ((bVar5 != false) && (-1 < index)) {
        __this_00 = (__this->fields)._visibleActions;
        if (__this_00 == (System_Collections_Generic_List_ValueTuple_string__Action_Human____o *)0x0)
        goto label_18221c3e7;
        if ((__this_00->fields)._size <= index) {
          return;
        }
        System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___get_Item
                  (&local_18,(System_Collections_Generic_List_T__o *)__this_00,index,
                   (MethodInfo_92B880 *)
                   MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_get_Item);
        bVar5 = System_String__op_Inequality(local_18.fields.message,"CloakHood",(MethodInfo *)0x0);
        if (!bVar5) {
          if (local_res18 == (Characters_Human_o *)0x0) goto label_18221c3e7;
          pCVar4 = (local_res18->fields).Setup;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pCVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar5) {
            return;
          }
          if ((local_res18 == (Characters_Human_o *)0x0) ||
             (pCVar4 = (local_res18->fields).Setup, pCVar4 == (Characters_HumanSetup_o *)0x0))
          goto label_18221c3e7;
          bVar5 = Characters_HumanSetup__get_HasCloak(pCVar4,(MethodInfo *)0x0);
          if (!bVar5) {
            return;
          }
        }
        if (local_18.fields._8_8_ != 0) {
          (**(code **)(local_18.fields._8_8_ + 0x18))
                    (*(undefined8 *)(local_18.fields._8_8_ + 0x40),local_res18,
                     *(undefined8 *)(local_18.fields._8_8_ + 0x28));
        }
      }
      return;
    }
  }
label_18221c3e7:
  ThrowNullReferenceException();
}


// UI.ActionHandler$$OnDisable
// il2cpp: void UI_ActionHandler__OnDisable (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x18221c0e0

void UI_ActionHandler__OnDisable(UI_ActionHandler_o *__this,MethodInfo *method)

{
  UI_WheelPopup_o *pUVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184347173 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347173 = '\x01';
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
  Il2CppCodeGenWriteBarrier(&(__this->fields)._human,(void *)0x0);
  return;
}


// UI.ActionHandler$$.ctor
// il2cpp: void UI_ActionHandler___ctor (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x18221ced0

void UI_ActionHandler___ctor(UI_ActionHandler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_ValueTuple_string__Action_Human____o *__this_00;
  
  if (Il2CppMethodInitialized_184347174 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human);
    Il2CppMethodInitialized_184347174 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human);
  System_Collections_Generic_List_ValueTuple_object__object_____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_ValueTuple_string_Action_Human_ctor);
  (__this->fields)._visibleActions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._visibleActions,__this_00);
  (__this->fields)._lastCloseFrame = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// UI.ActionHandler$$.cctor
// il2cpp: void UI_ActionHandler___cctor (const MethodInfo* method);
// 0x18221ca00

void UI_ActionHandler___cctor(MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_ValueTuple_string__Action_Human___array *value;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar2;
  Unity_Properties_ConverterKey_o local_78;
  Unity_Properties_ConverterKey_o local_68;
  Unity_Properties_ConverterKey_o local_58;
  Unity_Properties_ConverterKey_o local_48;
  Unity_Properties_ConverterKey_o local_38;
  Unity_Properties_ConverterKey_o local_28;
  Unity_Properties_ConverterKey_o local_18;
  
  if (Il2CppMethodInitialized_184347175 == '\0') {
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
    Il2CppMethodInitialized_184347175 = '\x01';
  }
  value = (System_ValueTuple_string__Action_Human___array *)
          SZArrayNew(TypeInfo_System_ValueTuple_string_Action_Human__array,7);
  if ((TypeInfo_UI_ActionHandler_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_ActionHandler_c);
  }
  pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
  pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
  System_Action_object____ctor
            (pUVar2,pIVar1,(intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_0,(MethodInfo *)0x0);
  local_78.fields.SourceType = (System_Type_o *)0x0;
  local_78.fields.DestinationType = (System_Type_o *)0x0;
  System_ValueTuple_object__object____ctor
            (&local_78,(System_Type_o *)"BladeSheathe",(System_Type_o *)pUVar2,
             MethodInfo_System_ValueTuple_string_Action_Human_ctor);
  if (value != (System_ValueTuple_string__Action_Human___array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0].fields.Item1 = (System_String_o *)local_78.fields.SourceType;
      value->m_Items[0].fields.Item2 = (System_Action_Human__o *)local_78.fields.DestinationType;
      Il2CppCodeGenWriteBarrier((void **)value->m_Items,(void *)0x0);
      pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
      pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
      System_Action_object____ctor
                (pUVar2,pIVar1,(intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_1,(MethodInfo *)0x0);
      local_68.fields.SourceType = (System_Type_o *)0x0;
      local_68.fields.DestinationType = (System_Type_o *)0x0;
      System_ValueTuple_object__object____ctor
                (&local_68,(System_Type_o *)"Carry",(System_Type_o *)pUVar2,
                 MethodInfo_System_ValueTuple_string_Action_Human_ctor);
      if (1 < (uint)value->max_length) {
        value->m_Items[1].fields.Item1 = (System_String_o *)local_68.fields.SourceType;
        value->m_Items[1].fields.Item2 = (System_Action_Human__o *)local_68.fields.DestinationType;
        Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 1),(void *)0x0);
        pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
        pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
        System_Action_object____ctor
                  (pUVar2,pIVar1,(intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_2,(MethodInfo *)0x0);
        local_58.fields.SourceType = (System_Type_o *)0x0;
        local_58.fields.DestinationType = (System_Type_o *)0x0;
        System_ValueTuple_object__object____ctor
                  (&local_58,(System_Type_o *)"ShareSupplies",(System_Type_o *)pUVar2,
                   MethodInfo_System_ValueTuple_string_Action_Human_ctor);
        if (2 < (uint)value->max_length) {
          value->m_Items[2].fields.Item1 = (System_String_o *)local_58.fields.SourceType;
          value->m_Items[2].fields.Item2 = (System_Action_Human__o *)local_58.fields.DestinationType;
          Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 2),(void *)0x0);
          pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
          pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
          System_Action_object____ctor
                    (pUVar2,pIVar1,(intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_3,(MethodInfo *)0x0);
          local_48.fields.SourceType = (System_Type_o *)0x0;
          local_48.fields.DestinationType = (System_Type_o *)0x0;
          System_ValueTuple_object__object____ctor
                    (&local_48,(System_Type_o *)"HorseStay",(System_Type_o *)pUVar2,
                     MethodInfo_System_ValueTuple_string_Action_Human_ctor);
          if (3 < (uint)value->max_length) {
            value->m_Items[3].fields.Item1 = (System_String_o *)local_48.fields.SourceType;
            value->m_Items[3].fields.Item2 = (System_Action_Human__o *)local_48.fields.DestinationType;
            Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 3),(void *)0x0);
            pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
            pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                     il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
            System_Action_object____ctor
                      (pUVar2,pIVar1,(intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_4,(MethodInfo *)0x0);
            local_38.fields.SourceType = (System_Type_o *)0x0;
            local_38.fields.DestinationType = (System_Type_o *)0x0;
            System_ValueTuple_object__object____ctor
                      (&local_38,(System_Type_o *)"HorseCall",(System_Type_o *)pUVar2,
                       MethodInfo_System_ValueTuple_string_Action_Human_ctor);
            if (4 < (uint)value->max_length) {
              value->m_Items[4].fields.Item1 = (System_String_o *)local_38.fields.SourceType;
              value->m_Items[4].fields.Item2 = (System_Action_Human__o *)local_38.fields.DestinationType;
              Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 4),(void *)0x0);
              pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
              pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                       il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
              System_Action_object____ctor
                        (pUVar2,pIVar1,(intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_5,(MethodInfo *)0x0
                        );
              local_28.fields.SourceType = (System_Type_o *)0x0;
              local_28.fields.DestinationType = (System_Type_o *)0x0;
              System_ValueTuple_object__object____ctor
                        (&local_28,(System_Type_o *)"HorseFollow",(System_Type_o *)pUVar2,
                         MethodInfo_System_ValueTuple_string_Action_Human_ctor);
              if (5 < (uint)value->max_length) {
                value->m_Items[5].fields.Item1 = (System_String_o *)local_28.fields.SourceType;
                value->m_Items[5].fields.Item2 = (System_Action_Human__o *)local_28.fields.DestinationType;
                Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 5),(void *)0x0);
                pIVar1 = (Il2CppObject *)TypeInfo_UI_ActionHandler_c->static_fields->__9;
                pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_Human);
                System_Action_object____ctor
                          (pUVar2,pIVar1,(intptr_t)MethodInfo_UI_ActionHandler_c_cctor_b__22_6,
                           (MethodInfo *)0x0);
                local_18.fields.SourceType = (System_Type_o *)0x0;
                local_18.fields.DestinationType = (System_Type_o *)0x0;
                System_ValueTuple_object__object____ctor
                          (&local_18,(System_Type_o *)"CloakHood",(System_Type_o *)pUVar2,
                           MethodInfo_System_ValueTuple_string_Action_Human_ctor);
                if (6 < (uint)value->max_length) {
                  value->m_Items[6].fields.Item1 = (System_String_o *)local_18.fields.SourceType;
                  value->m_Items[6].fields.Item2 = (System_Action_Human__o *)local_18.fields.DestinationType;
                  Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 6),(void *)0x0);
                  TypeInfo_UI_ActionHandler->static_fields->Actions = value;
                  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_ActionHandler->static_fields->Actions,value);
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
  ThrowNullReferenceException();
}


// UI.ActionHandler$$<Awake>b__13_0
// il2cpp: void UI_ActionHandler___Awake_b__13_0 (UI_ActionHandler_o* __this, const MethodInfo* method);
// 0x18221c9a0

void UI_ActionHandler___Awake_b__13_0(UI_ActionHandler_o *__this,MethodInfo *method)

{
  UI_WheelPopup_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  
  bVar2 = UI_ActionHandler__get_IsActive(__this,(MethodInfo *)0x0);
  if (bVar2) {
    pUVar1 = (__this->fields)._wheel;
    if (pUVar1 == (UI_WheelPopup_o *)0x0) {
      ThrowNullReferenceException();
    }
    (*(pUVar1->klass->vtable)._22_Hide.methodPtr)(pUVar1,(pUVar1->klass->vtable)._22_Hide.method);
    (__this->fields)._human = (Characters_Human_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._human,(void *)0x0);
    iVar3 = UnityEngine_Time__get_frameCount((MethodInfo *)0x0);
    (__this->fields)._lastCloseFrame = iVar3;
  }
  return;
}


