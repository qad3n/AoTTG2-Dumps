// Type: Settings.WeatherSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/WeatherSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSet.cs
// --------------------------------

// Settings.WeatherSet$$.ctor
// il2cpp: void Settings_WeatherSet___ctor (Settings_WeatherSet_o* __this, const MethodInfo* method);
// 0x5b4a1e0

void Settings_WeatherSet___ctor(Settings_WeatherSet_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *__this_00;
  Utility_Color255_o *pUVar1;
  Settings_ColorSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  Settings_Vector3Setting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  MethodInfo *method_00;
  float fVar6;
  
  if (Il2CppMethodInitialized_0754729f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_ColorSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_StringSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_Vector3Setting);
    il2cpp_codegen_initialize_runtime_metadata(&"Day1");
    Il2CppMethodInitialized_0754729f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730(__this_00,"Day1",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Skybox = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Skybox);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar1,0,0,0,0xff,(MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar2,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar2->fields).MinAlpha = 0;
  pUVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar2,pUVar1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = pUVar1;
  Il2CppCodeGenWriteBarrier(&(pSVar2->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)(pSVar2->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).SkyboxColor = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SkyboxColor);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar1,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar2,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar2->fields).MinAlpha = 0;
  pUVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar2,pUVar1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = pUVar1;
  Il2CppCodeGenWriteBarrier(&(pSVar2->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)(pSVar2->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).Daylight = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Daylight);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 2.0;
  fVar6 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,1.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).DaylightIntensity = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DaylightIntensity);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_Vector3Setting);
  Settings_Vector3Setting___ctor_5b7d0c0
            (pSVar4,(UnityEngine_Vector3_o)ZEXT812(0x4234000042340000),(MethodInfo *)0x0);
  (__this->fields).DaylightDirection = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DaylightDirection);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar1,0x7e,0x7a,0x72,0xff,(MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar2,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar2->fields).MinAlpha = 0;
  pUVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar2,pUVar1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = pUVar1;
  Il2CppCodeGenWriteBarrier(&(pSVar2->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)(pSVar2->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).AmbientLight = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).AmbientLight);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar1,0xff,0xff,0xff,0,(MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar2,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar2->fields).MinAlpha = 0;
  pUVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar2,pUVar1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = pUVar1;
  Il2CppCodeGenWriteBarrier(&(pSVar2->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)(pSVar2->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).Flashlight = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Flashlight);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 1.0;
  fVar6 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).FogDensity = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FogDensity);
  pUVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
  Utility_Color255___ctor(pUVar1,0x80,0x80,0x80,0xff,(MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_ColorSetting);
  if (Il2CppMethodInitialized_075472da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_set_Value);
    Il2CppMethodInitialized_075472da = '\x01';
  }
  Settings_TypedSetting_object____ctor
            ((Settings_TypedSetting_T__o *)pSVar2,
             (MethodInfo_42DA2B0 *)MethodInfo_Settings_TypedSetting_Color255_ctor);
  (pSVar2->fields).MinAlpha = 0;
  pUVar1 = (*(pSVar2->klass->vtable)._11_SanitizeValue.methodPtr)
                     (pSVar2,pUVar1,(pSVar2->klass->vtable)._11_SanitizeValue.method);
  (pSVar2->fields).DefaultValue = pUVar1;
  Il2CppCodeGenWriteBarrier(&(pSVar2->fields).DefaultValue);
  Settings_TypedSetting_object___set_Value
            ((Settings_TypedSetting_T__o *)pSVar2,(Il2CppObject *)(pSVar2->fields).DefaultValue,
             (MethodInfo_42DA280 *)MethodInfo_Settings_TypedSetting_Color255_set_Value);
  (__this->fields).FogColor = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).FogColor);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 1.0;
  fVar6 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Rain = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Rain);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 1.0;
  fVar6 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Thunder = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Thunder);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 1.0;
  fVar6 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Snow = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Snow);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 1.0;
  fVar6 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).Wind = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Wind);
  pSVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_Vector3Setting);
  Settings_Vector3Setting___ctor_5b7d0c0(pSVar4,(UnityEngine_Vector3_o)ZEXT812(0x3f800000),(MethodInfo *)0x0);
  (__this->fields).WindDirection = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WindDirection);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 100000.0;
  fVar6 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).RainForce = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).RainForce);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 100000.0;
  fVar6 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).SnowForce = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).SnowForce);
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_FloatSetting);
  if (Il2CppMethodInitialized_075472de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_ctor);
    Il2CppMethodInitialized_075472de = '\x01';
  }
  (pSVar3->fields).MinValue = -3.4028235e+38;
  (pSVar3->fields).MaxValue = 3.4028235e+38;
  Settings_TypedSetting_float____ctor
            ((Settings_TypedSetting_float__o *)pSVar3,
             (MethodInfo_42DA3D0 *)MethodInfo_Settings_TypedSetting_float_ctor);
  (pSVar3->fields).MinValue = 0.0;
  (pSVar3->fields).MaxValue = 100000.0;
  fVar6 = (*(pSVar3->klass->vtable)._11_SanitizeValue.methodPtr)
                    (pSVar3,0.0,(pSVar3->klass->vtable)._11_SanitizeValue.method);
  (pSVar3->fields).DefaultValue = fVar6;
  (*(pSVar3->klass->vtable)._4_SetDefault.methodPtr)(pSVar3,(pSVar3->klass->vtable)._4_SetDefault.method);
  (__this->fields).WindForce = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WindForce);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).UseSchedule = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).UseSchedule);
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_BoolSetting);
  if (Il2CppMethodInitialized_075472d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_ctor);
    Il2CppMethodInitialized_075472d6 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_42da050
            ((Settings_TypedSetting_bool__o *)pSVar5,false,
             (MethodInfo_42DA050 *)MethodInfo_Settings_TypedSetting_bool_ctor);
  (__this->fields).ScheduleLoop = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).ScheduleLoop);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_StringSetting);
  Settings_StringSetting___ctor_5b7b730
            ((Settings_StringSetting_o *)method_00,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Schedule = (Settings_StringSetting_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Schedule);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,method_00);
  return;
}


