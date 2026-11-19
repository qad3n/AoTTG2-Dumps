// Type: Settings.SoundSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SoundSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SoundSettings.cs
// --------------------------------

// Settings.SoundSettings$$get_FileName
// il2cpp: System_String_o* Settings_SoundSettings__get_FileName (Settings_SoundSettings_o* __this, const MethodInfo* method);
// 0x5c7f5e0

System_String_o * Settings_SoundSettings__get_FileName(Settings_SoundSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07547999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Sound.json");
    Il2CppMethodInitialized_07547999 = '\x01';
  }
  return "Sound.json";
}


// Settings.SoundSettings$$Apply
// il2cpp: void Settings_SoundSettings__Apply (Settings_SoundSettings_o* __this, const MethodInfo* method);
// 0x5c7f610

void Settings_SoundSettings__Apply(Settings_SoundSettings_o *__this,MethodInfo *method)

{
  Settings_FloatSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754799a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_VoiceChatManager);
    Il2CppMethodInitialized_0754799a = '\x01';
  }
  pSVar1 = (__this->fields).Volume;
  if (pSVar1 == (Settings_FloatSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_AudioListener__set_volume((pSVar1->fields)._value,(MethodInfo *)0x0);
  ApplicationManagers_MusicManager__ApplySoundSettings((MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_VoiceChatManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_VoiceChatManager);
    ApplicationManagers_VoiceChatManager__ApplySoundSettings((MethodInfo *)0x0);
    return;
  }
  ApplicationManagers_VoiceChatManager__ApplySoundSettings((MethodInfo *)0x0);
  return;
}


// Settings.SoundSettings$$.ctor
// il2cpp: void Settings_SoundSettings___ctor (Settings_SoundSettings_o* __this, const MethodInfo* method);
// 0x5c7e610

void Settings_SoundSettings___ctor(Settings_SoundSettings_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_FloatSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Settings_IntSetting_o *__this_00;
  
  if (Il2CppMethodInitialized_0754799b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_0754799b = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar2,0.5,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Volume = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Volume);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar2,0.5,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Music = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Music);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).MuteMinimized = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MuteMinimized);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).TitanGrabMusic = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanGrabMusic);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).TitanVocalEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).TitanVocalEffect);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).GasEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GasEffect);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).ReelInEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ReelInEffect);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).ReelOutEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ReelOutEffect);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).HookRetractEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HookRetractEffect);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).HookImpactEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HookImpactEffect);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).CrashLandEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CrashLandEffect);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,true,(MethodInfo *)0x0);
  (__this->fields).HorseSoundEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).HorseSoundEffect);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).OldHookEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OldHookEffect);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).OldBladeEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OldBladeEffect);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  Settings_BoolSetting___ctor_5a412a0(pSVar3,false,(MethodInfo *)0x0);
  (__this->fields).OldNapeEffect = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).OldNapeEffect);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar1 = "Default";
  if (Il2CppMethodInitialized_07547987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_07547987 = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar1,
             (MethodInfo_42DA2C0 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).ForcePlaylist = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ForcePlaylist);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar1 = "";
  if (Il2CppMethodInitialized_07547987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_07547987 = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar1,
             (MethodInfo_42DA2C0 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).CustomPlaylist = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomPlaylist);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  pSVar1 = "";
  if (Il2CppMethodInitialized_07547987 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_07547987 = '\x01';
  }
  (pSVar4->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_42da2c0
            ((Settings_TypedSetting_T__o *)pSVar4,(Il2CppObject *)pSVar1,
             (MethodInfo_42DA2C0 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar4->fields).MaxLength = 0x7fffffff;
  (__this->fields).VoiceChatDevice = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChatDevice);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_IntSetting);
  Settings_IntSetting___ctor_5a412e0(__this_00,0,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).VoiceChatInput = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChatInput);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar2,1.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).VoiceChatMicVolume = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChatMicVolume);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_5a411f0(pSVar2,0.5,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).VoiceChatAudioVolume = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).VoiceChatAudioVolume);
  Settings_BaseSettingsContainer___ctor((Settings_BaseSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


