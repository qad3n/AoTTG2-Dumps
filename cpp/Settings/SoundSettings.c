// Type: Settings.SoundSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SoundSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SoundSettings.cs
// --------------------------------

// Settings.SoundSettings$$get_FileName
// il2cpp: System_String_o* Settings_SoundSettings__get_FileName (Settings_SoundSettings_o* __this, const MethodInfo* method);
// 0x4204140

System_String_o * Settings_SoundSettings__get_FileName(Settings_SoundSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ad8cc == '\0') {
    il2cpp_runtime_helper_023445d0(&"Sound.json");
    g_data_057ad8cc = '\x01';
  }
  return "Sound.json";
}


// Settings.SoundSettings$$Apply
// il2cpp: void Settings_SoundSettings__Apply (Settings_SoundSettings_o* __this, const MethodInfo* method);
// 0x4204170

void Settings_SoundSettings__Apply(Settings_SoundSettings_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  
  if (g_data_057ad8cd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8cd = '\x01';
  }
  pSVar1 = (__this->fields).Volume;
  if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
    UnityEngine_AudioListener__set_volume((pSVar1->fields)._value,(MethodInfo *)0x0);
    ApplicationManagers_MusicManager__ApplySoundSettings((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) != 0) {
      ApplicationManagers_VoiceChatManager__ApplySoundSettings((MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_02337ed0();
    ApplicationManagers_VoiceChatManager__ApplySoundSettings((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8cf == '\0') {
    il2cpp_runtime_helper_023445d0(&"UI.json");
    g_data_057ad8cf = '\x01';
  }
  return;
}


// Settings.SoundSettings$$.ctor
// il2cpp: void Settings_SoundSettings___ctor (Settings_SoundSettings_o* __this, const MethodInfo* method);
// 0x41fc390

void Settings_SoundSettings___ctor(Settings_SoundSettings_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t iVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *defaultValue;
  Settings_IntSetting_o *__this_00;
  MethodInfo *method_00;
  float fVar6;
  
  if (g_data_057ad8ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    il2cpp_runtime_helper_023445d0(&"Default");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ad8ce = '\x01';
  }
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar3,MethodInfo_TypedSetting_1_System_Single);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 1.0;
  fVar6 = (float)(*(pSVar3->klass->vtable)._10_SanitizeValue.methodPtr)
                           (0x3f000000,pSVar3,(pSVar3->klass->vtable)._10_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Volume = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Volume,pSVar3);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar3,MethodInfo_TypedSetting_1_System_Single);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 1.0;
  fVar6 = (float)(*(pSVar3->klass->vtable)._10_SanitizeValue.methodPtr)
                           (0x3f000000,pSVar3,(pSVar3->klass->vtable)._10_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Music = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Music,pSVar3);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).MuteMinimized = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MuteMinimized,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).TitanGrabMusic = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanGrabMusic,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).TitanVocalEffect = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TitanVocalEffect,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).GasEffect = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).GasEffect,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ReelInEffect = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ReelInEffect,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).ReelOutEffect = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ReelOutEffect,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).HookRetractEffect = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HookRetractEffect,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).HookImpactEffect = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HookImpactEffect,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).CrashLandEffect = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CrashLandEffect,pSVar4);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).HorseSoundEffect = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HorseSoundEffect);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).OldHookEffect = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).OldHookEffect);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).OldBladeEffect = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).OldBladeEffect);
  pSVar4 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)pSVar4,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).OldNapeEffect = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).OldNapeEffect,pSVar4);
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  pIVar1 = "Default";
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar5,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).ForcePlaylist = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ForcePlaylist,pSVar5);
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  pIVar1 = "";
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0((Settings_TypedSetting_T__o *)pSVar5,pIVar1,MethodInfo_TypedSetting_1_System_String);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).CustomPlaylist = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).CustomPlaylist,pSVar5);
  if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  defaultValue = ApplicationManagers_VoiceChatManager__get_DefaultDevice((MethodInfo *)0x0);
  pSVar5 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)defaultValue,MethodInfo_TypedSetting_1_System_String);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).VoiceChatDevice = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).VoiceChatDevice,pSVar5);
  __this_00 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  if (g_data_057ad8a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
    g_data_057ad8a8 = '\x01';
  }
  (__this_00->fields).MinValue = -0x80000000;
  (__this_00->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting_int____ctor((Settings_TypedSetting_int__o *)__this_00,MethodInfo_TypedSetting_1_System_Int32);
  (__this_00->fields).MinValue = -0x80000000;
  (__this_00->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(__this_00->klass->vtable)._10_SanitizeValue.methodPtr)
                    (__this_00,0,(__this_00->klass->vtable)._10_SanitizeValue.method);
  (__this_00->fields).DefaultValue = iVar2;
  (*(__this_00->klass->vtable)._4_SetDefault.methodPtr)
            (__this_00,(__this_00->klass->vtable)._4_SetDefault.method);
  (__this->fields).VoiceChatInput = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).VoiceChatInput,__this_00);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)pSVar3,MethodInfo_TypedSetting_1_System_Single);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 1.0;
  fVar6 = (float)(*(pSVar3->klass->vtable)._10_SanitizeValue.methodPtr)
                           (0x3f800000,pSVar3,(pSVar3->klass->vtable)._10_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).VoiceChatMicVolume = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).VoiceChatMicVolume,pSVar3);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  if (g_data_057ad89e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
    g_data_057ad89e = '\x01';
  }
  method_00->name = (char *)0x7f7fffffff7fffff;
  Settings_TypedSetting_float____ctor((Settings_TypedSetting_float__o *)method_00,MethodInfo_TypedSetting_1_System_Single);
  method_00->name = (char *)0x3f80000000000000;
  fVar6 = (float)(*(((Settings_TypedSetting_float__c *)method_00->methodPointer)->vtable)._10_SanitizeValue.
                   methodPtr)(0x3f000000,method_00,
                              (((Settings_TypedSetting_float__c *)method_00->methodPointer)->vtable).
                              _10_SanitizeValue.method);
  ((Settings_TypedSetting_float__Fields *)&method_00->invoker_method)->DefaultValue = fVar6;
  (*(((Settings_TypedSetting_float__c *)method_00->methodPointer)->vtable)._4_SetDefault.methodPtr)
            (method_00,
             (((Settings_TypedSetting_float__c *)method_00->methodPointer)->vtable)._4_SetDefault.method);
  (__this->fields).VoiceChatAudioVolume = (Settings_FloatSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).VoiceChatAudioVolume);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,method_00);
  return;
}


