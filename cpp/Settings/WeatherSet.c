// Type: Settings.WeatherSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/WeatherSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSet.cs
// --------------------------------

// Settings.WeatherSet$$.ctor
// il2cpp: void Settings_WeatherSet___ctor (Settings_WeatherSet_o* __this, const MethodInfo* method);
// 0x408c7a0

void Settings_WeatherSet___ctor(Settings_WeatherSet_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *pSVar1;
  Utility_Color255_o *pUVar2;
  Settings_ColorSetting_o *pSVar3;
  Settings_FloatSetting_o *pSVar4;
  Settings_Vector3Setting_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  
  if (g_data_057ac3fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Color255);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ColorSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3Setting);
    il2cpp_runtime_helper_023445d0(&"Day1");
    g_data_057ac3fc = '\x01';
  }
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar1,"Day1",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Skybox = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Skybox,pSVar1);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,0x80,0x80,0x80,0xff,(MethodInfo *)0x0);
  pSVar3 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor_40fa620(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).SkyboxColor = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SkyboxColor,pSVar3);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,0xff,0xff,0xff,0xff,(MethodInfo *)0x0);
  pSVar3 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor_40fa620(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).Daylight = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Daylight);
  pSVar4 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar4,1.0,0.0,2.0,(MethodInfo *)0x0);
  (__this->fields).DaylightIntensity = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).DaylightIntensity);
  pSVar5 = (Settings_Vector3Setting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Vector3Setting);
  Settings_Vector3Setting___ctor_4103e40
            (pSVar5,(UnityEngine_Vector3_o)ZEXT812(0x4234000042340000),(MethodInfo *)0x0);
  (__this->fields).DaylightDirection = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).DaylightDirection,pSVar5);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,0x7e,0x7a,0x72,0xff,(MethodInfo *)0x0);
  pSVar3 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor_40fa620(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).AmbientLight = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).AmbientLight,pSVar3);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,0xff,0xff,0xff,0,(MethodInfo *)0x0);
  pSVar3 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor_40fa620(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).Flashlight = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Flashlight);
  pSVar4 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar4,0.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).FogDensity = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FogDensity,pSVar4);
  pUVar2 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Color255);
  Utility_Color255___ctor(pUVar2,0x80,0x80,0x80,0xff,(MethodInfo *)0x0);
  pSVar3 = (Settings_ColorSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_ColorSetting);
  Settings_ColorSetting___ctor_40fa620(pSVar3,pUVar2,0,(MethodInfo *)0x0);
  (__this->fields).FogColor = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).FogColor);
  pSVar4 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar4,0.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Rain = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Rain);
  pSVar4 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar4,0.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Thunder = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Thunder);
  pSVar4 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar4,0.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Snow = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Snow);
  pSVar4 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar4,0.0,0.0,1.0,(MethodInfo *)0x0);
  (__this->fields).Wind = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Wind);
  pSVar5 = (Settings_Vector3Setting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Vector3Setting);
  Settings_Vector3Setting___ctor_4103e40(pSVar5,(UnityEngine_Vector3_o)ZEXT412(0x3f800000),(MethodInfo *)0x0);
  (__this->fields).WindDirection = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WindDirection);
  pSVar4 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar4,0.0,0.0,100000.0,(MethodInfo *)0x0);
  (__this->fields).RainForce = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RainForce);
  pSVar4 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar4,0.0,0.0,100000.0,(MethodInfo *)0x0);
  (__this->fields).SnowForce = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).SnowForce);
  pSVar4 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar4,0.0,0.0,100000.0,(MethodInfo *)0x0);
  (__this->fields).WindForce = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WindForce);
  pSVar6 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar6,0,(MethodInfo *)0x0);
  (__this->fields).UseSchedule = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).UseSchedule);
  pSVar6 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(pSVar6,0,(MethodInfo *)0x0);
  (__this->fields).ScheduleLoop = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ScheduleLoop,pSVar6);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar1,defaultValue,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Schedule = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Schedule);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


