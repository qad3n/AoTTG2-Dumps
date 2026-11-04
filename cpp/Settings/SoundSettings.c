// Type: Settings.SoundSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SoundSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SoundSettings.cs
// --------------------------------

// Settings.SoundSettings$$get_FileName
// il2cpp: System_String_o* Settings_SoundSettings__get_FileName (Settings_SoundSettings_o* __this, const MethodInfo* method);
// 0x181f27d90

System_String_o * Settings_SoundSettings__get_FileName(Settings_SoundSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843454cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sound.json");
    Il2CppMethodInitialized_1843454cc = '\x01';
  }
  return "Sound.json";
}


// Settings.SoundSettings$$Apply
// il2cpp: void Settings_SoundSettings__Apply (Settings_SoundSettings_o* __this, const MethodInfo* method);
// 0x181f275a0

void Settings_SoundSettings__Apply(Settings_SoundSettings_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843454cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_1843454cd = '\x01';
  }
  pSVar1 = (__this->fields).Volume;
  if (pSVar1 != (Settings_FloatSetting_o *)0x0) {
    UnityEngine_AudioListener__set_volume((pSVar1->fields)._value,(MethodInfo *)0x0);
    ApplicationManagers_MusicManager__ApplySoundSettings((MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    }
    ApplicationManagers_VoiceChatManager__ApplySoundSettings((MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Settings.SoundSettings$$.ctor
// il2cpp: void Settings_SoundSettings___ctor (Settings_SoundSettings_o* __this, const MethodInfo* method);
// 0x181f27620

void Settings_SoundSettings___ctor(Settings_SoundSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  int32_t iVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  System_String_o *pSVar6;
  Settings_IntSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_1843454ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843454ce = '\x01';
  }
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar3,0.5,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Volume = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Volume,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar3,0.5,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Music = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Music,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).MuteMinimized = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MuteMinimized,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanGrabMusic = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanGrabMusic,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).TitanVocalEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanVocalEffect,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).GasEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GasEffect,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ReelInEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ReelInEffect,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ReelOutEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ReelOutEffect,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).HookRetractEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HookRetractEffect,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).HookImpactEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HookImpactEffect,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).CrashLandEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CrashLandEffect,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,true,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).HorseSoundEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HorseSoundEffect,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).OldHookEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OldHookEffect,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).OldBladeEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OldBladeEffect,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar4,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).OldNapeEffect = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OldNapeEffect,pSVar4);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar6 = "Default";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar6,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).ForcePlaylist = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ForcePlaylist,pSVar5);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar6 = "";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar6,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).CustomPlaylist = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomPlaylist,pSVar5);
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
  }
  pSVar6 = ApplicationManagers_VoiceChatManager__get_DefaultDevice((MethodInfo *)0x0);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar5->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar5,(Il2CppObject *)pSVar6,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar5->fields).MaxLength = 0x7fffffff;
  (__this->fields).VoiceChatDevice = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChatDevice,pSVar5);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  if (Il2CppMethodInitialized_18434549c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_ctor);
    Il2CppMethodInitialized_18434549c = '\x01';
  }
  (__this_00->fields).MinValue = -0x80000000;
  (__this_00->fields).MaxValue = 0x7fffffff;
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)__this_00,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_int_ctor);
  pSVar1 = __this_00->klass;
  (__this_00->fields).MinValue = -0x80000000;
  (__this_00->fields).MaxValue = 0x7fffffff;
  iVar2 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                    (__this_00,0,(pSVar1->vtable)._11_SanitizeValue.method);
  (__this_00->fields).DefaultValue = iVar2;
  (*(__this_00->klass->vtable)._4_SetDefault.methodPtr)
            (__this_00,(__this_00->klass->vtable)._4_SetDefault.method);
  (__this->fields).VoiceChatInput = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChatInput,__this_00);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar3,1.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).VoiceChatMicVolume = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChatMicVolume,pSVar3);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar3,0.5,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).VoiceChatAudioVolume = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChatAudioVolume,pSVar3);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


