// Type: Settings.WeatherSet
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/WeatherSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSet.cs
// --------------------------------

// Settings.WeatherSet$$.ctor
// il2cpp: void Settings_WeatherSet___ctor (Settings_WeatherSet_o* __this, const MethodInfo* method);
// 0x181f2c220

void Settings_WeatherSet___ctor(Settings_WeatherSet_o *__this,MethodInfo *method)

{
  Il2CppObject *defaultValue;
  System_String_o *defaultValue_00;
  Settings_StringSetting_o *pSVar1;
  Utility_Color255_o *pUVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_Vector3Setting_o *pSVar5;
  undefined8 *puVar6;
  Settings_BoolSetting_o *pSVar7;
  UnityEngine_Vector3_Fields local_68;
  undefined1 local_58 [56];
  
  if (Il2CppMethodInitialized_184345457 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    il2cpp_codegen_initialize_runtime_metadata(&"Day1");
    Il2CppMethodInitialized_184345457 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  defaultValue_00 = "Day1";
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar1,(Il2CppObject *)defaultValue_00,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar1->fields).MaxLength = 0x7fffffff;
  (__this->fields).Skybox = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Skybox,pSVar1);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar2,0,0,0,0xff,(MethodInfo *)0x0);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).SkyboxColor = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkyboxColor,pSVar3);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar2,0xff,0xff,0xff,0xff,
             (MethodInfo *)0x0);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).Daylight = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Daylight,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).DaylightIntensity = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DaylightIntensity,pSVar4);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_Vector3Setting);
  if (Il2CppMethodInitialized_1843454c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    Il2CppMethodInitialized_1843454c2 = '\x01';
  }
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar5,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_Vector3_ctor);
  local_68.z = 0.0;
  local_68.x = 45.0;
  local_68.y = 45.0;
  puVar6 = (undefined8 *)
           (*(pSVar5->klass->vtable)._11_SanitizeValue.methodPtr)
                     (local_58,pSVar5,&local_68,(pSVar5->klass->vtable)._11_SanitizeValue.method);
  local_68.z = *(float *)(puVar6 + 1);
  local_68._0_8_ = *puVar6;
  (pSVar5->fields).DefaultValue.fields.x = local_68.x;
  (pSVar5->fields).DefaultValue.fields.y = local_68.y;
  (pSVar5->fields).DefaultValue.fields.z = local_68.z;
  Settings_TypedSetting_Vector3___set_Value
            ((Settings_TypedSetting_Vector3__o *)pSVar5,(UnityEngine_Vector3_o *)&local_68,
             (MethodInfo_E8F4F0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
  (__this->fields).DaylightDirection = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DaylightDirection,pSVar5);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar2,0x7e,0x7a,0x72,0xff,
             (MethodInfo *)0x0);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).AmbientLight = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AmbientLight,pSVar3);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar2,0xff,0xff,0xff,0,
             (MethodInfo *)0x0);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).Flashlight = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Flashlight,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).FogDensity = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FogDensity,pSVar4);
  pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor
            ((System_Linq_Expressions_Interpreter_TryFaultHandler_o *)pUVar2,0x80,0x80,0x80,0xff,
             (MethodInfo *)0x0);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  Settings_ColorSetting___ctor_1f12060(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).FogColor = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FogColor,pSVar3);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Rain = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Rain,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Thunder = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Thunder,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Snow = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Snow,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Wind = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Wind,pSVar4);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_Vector3Setting);
  if (Il2CppMethodInitialized_1843454c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Vector3_set_Value);
    Il2CppMethodInitialized_1843454c2 = '\x01';
  }
  Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
            ((Settings_TypedSetting_T__o *)pSVar5,
             (MethodInfo_E8F180 *)MethodInfo_Settings_TypedSetting_Vector3_ctor);
  local_68.z = 0.0;
  local_68.x = 1.0;
  local_68.y = 0.0;
  puVar6 = (undefined8 *)
           (*(pSVar5->klass->vtable)._11_SanitizeValue.methodPtr)
                     (local_58,pSVar5,&local_68,(pSVar5->klass->vtable)._11_SanitizeValue.method);
  local_68.z = *(float *)(puVar6 + 1);
  local_68._0_8_ = *puVar6;
  (pSVar5->fields).DefaultValue.fields.x = local_68.x;
  (pSVar5->fields).DefaultValue.fields.y = local_68.y;
  (pSVar5->fields).DefaultValue.fields.z = local_68.z;
  Settings_TypedSetting_Vector3___set_Value
            ((Settings_TypedSetting_Vector3__o *)pSVar5,(UnityEngine_Vector3_o *)&local_68,
             (MethodInfo_E8F4F0 *)MethodInfo_Settings_TypedSetting_Vector3_set_Value);
  (__this->fields).WindDirection = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WindDirection,pSVar5);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.0,0.0,100000.0,(MethodInfo *)0x0);
  (__this->fields).RainForce = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RainForce,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.0,0.0,100000.0,(MethodInfo *)0x0);
  (__this->fields).SnowForce = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnowForce,pSVar4);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  Settings_FloatSetting___ctor_1f12570(pSVar4,0.0,0.0,100000.0,(MethodInfo *)0x0);
  (__this->fields).WindForce = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WindForce,pSVar4);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar7,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).UseSchedule = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).UseSchedule,pSVar7);
  pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_18434548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_18434548a = '\x01';
  }
  Settings_TypedSetting_bool____ctor_e8f2c0
            ((Settings_TypedSetting_bool__o *)pSVar7,false,
             (MethodInfo_E8F2C0 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ScheduleLoop = pSVar7;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ScheduleLoop,pSVar7);
  defaultValue = (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  if (Il2CppMethodInitialized_1843454ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_ctor);
    Il2CppMethodInitialized_1843454ba = '\x01';
  }
  (pSVar1->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_e8f190
            ((Settings_TypedSetting_T__o *)pSVar1,defaultValue,
             (MethodInfo_E8F190 *)MethodInfo_Settings_TypedSetting_string_ctor);
  (pSVar1->fields).MaxLength = 0x7fffffff;
  (__this->fields).Schedule = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Schedule,pSVar1);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


