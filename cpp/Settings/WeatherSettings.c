// Type: Settings.WeatherSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Settings/WeatherSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSettings.cs
// --------------------------------

// Settings.WeatherSettings.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Settings_WeatherSettings___c__DisplayClass4_0___ctor (Settings_WeatherSettings___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x5b4aed0

void Settings_WeatherSettings___c__DisplayClass4_0___ctor
               (Settings_WeatherSettings___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Settings.WeatherSettings.<>c__DisplayClass4_0$$<FindWeatherIndex>b__0
// il2cpp: bool Settings_WeatherSettings___c__DisplayClass4_0___FindWeatherIndex_b__0 (Settings_WeatherSettings___c__DisplayClass4_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b4af60

bool Settings_WeatherSettings___c__DisplayClass4_0___FindWeatherIndex_b__0
               (Settings_WeatherSettings___c__DisplayClass4_0_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_52ffe30(value,(__this->fields).name,5,(MethodInfo *)0x0);
  return bVar1;
}


// Settings.WeatherSettings.<>c__DisplayClass4_0$$<FindWeatherIndex>b__1
// il2cpp: bool Settings_WeatherSettings___c__DisplayClass4_0___FindWeatherIndex_b__1 (Settings_WeatherSettings___c__DisplayClass4_0_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b4af80

bool Settings_WeatherSettings___c__DisplayClass4_0___FindWeatherIndex_b__1
               (Settings_WeatherSettings___c__DisplayClass4_0_o *__this,System_String_o *value,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  
  if (value == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  a = System_String__TrimEnd_53071b0(value,0x2a,(MethodInfo *)0x0);
  bVar1 = System_String__Equals_52ffe30(a,(__this->fields).name,5,(MethodInfo *)0x0);
  return bVar1;
}


// Settings.WeatherSettings$$get_FileName
// il2cpp: System_String_o* Settings_WeatherSettings__get_FileName (Settings_WeatherSettings_o* __this, const MethodInfo* method);
// 0x5b4ad50

System_String_o *
Settings_WeatherSettings__get_FileName(Settings_WeatherSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Weather.json");
    Il2CppMethodInitialized_075472a0 = '\x01';
  }
  return "Weather.json";
}


// Settings.WeatherSettings$$IsWeatherSetting
// il2cpp: bool Settings_WeatherSettings__IsWeatherSetting (System_String_o* id, const MethodInfo* method);
// 0x5b3c510

bool Settings_WeatherSettings__IsWeatherSetting(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075472a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"general.WeatherIndex");
    il2cpp_codegen_initialize_runtime_metadata(&"general.Weather");
    Il2CppMethodInitialized_075472a1 = '\x01';
  }
  bVar1 = System_String__Equals_52ffe30(id,"general.Weather",5,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  bVar1 = System_String__Equals_52ffe30(id,"general.WeatherIndex",5,(MethodInfo *)0x0);
  return bVar1;
}


// Settings.WeatherSettings$$FindWeatherIndex
// il2cpp: int32_t Settings_WeatherSettings__FindWeatherIndex (Settings_WeatherSettings_o* __this, System_String_o* name, const MethodInfo* method);
// 0x5b4ad80

int32_t Settings_WeatherSettings__FindWeatherIndex
                  (Settings_WeatherSettings_o *__this,System_String_o *name,MethodInfo *method)

{
  Settings_SetSettingsContainer_WeatherSet__o *__this_00;
  int32_t iVar1;
  Settings_WeatherSettings___c__DisplayClass4_0_o *__this_01;
  System_String_array *array;
  System_Predicate_T__o *pSVar2;
  
  if (Il2CppMethodInitialized_075472a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_FindIndex_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Predicate_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_WeatherSettings_c__DisplayClass4_0_FindWeatherIndex_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Settings_WeatherSettings_c__DisplayClass4_0_FindWeatherIndex_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_WeatherSettings_c__DisplayClass4_0);
    Il2CppMethodInitialized_075472a2 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_WeatherSettings_c__DisplayClass4_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Settings_WeatherSettings___c__DisplayClass4_0_o *)0x0) {
    (__this_01->fields).name = name;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).name);
    __this_00 = (__this->fields).WeatherSets;
    if (__this_00 != (Settings_SetSettingsContainer_WeatherSet__o *)0x0) {
      array = Settings_SetSettingsContainer_object___GetSetNames
                        ((Settings_SetSettingsContainer_T__o *)__this_00,
                         (MethodInfo_40482D0 *)MethodInfo_Settings_SetSettingsContainer_WeatherSet_GetSetNames
                        );
      pSVar2 = (System_Predicate_T__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
      System_Predicate_object____ctor
                ((System_Predicate_object__o *)pSVar2,(Il2CppObject *)__this_01,
                 (intptr_t)MethodInfo_Settings_WeatherSettings_c__DisplayClass4_0_FindWeatherIndex_b__0,
                 (MethodInfo_3DC95B0 *)0x0);
      iVar1 = System_Array__FindIndex_object_
                        ((System_Object_array *)array,pSVar2,
                         (MethodInfo_3601B50 *)MethodInfo_System_Array_FindIndex_string);
      if (iVar1 < 0) {
        pSVar2 = (System_Predicate_T__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Predicate_string);
        System_Predicate_object____ctor
                  ((System_Predicate_object__o *)pSVar2,(Il2CppObject *)__this_01,
                   (intptr_t)MethodInfo_Settings_WeatherSettings_c__DisplayClass4_0_FindWeatherIndex_b__1,
                   (MethodInfo_3DC95B0 *)0x0);
        iVar1 = System_Array__FindIndex_object_
                          ((System_Object_array *)array,pSVar2,
                           (MethodInfo_3601B50 *)MethodInfo_System_Array_FindIndex_string);
        return iVar1;
      }
      return iVar1;
    }
  }
  ThrowNullReferenceException();
}


// Settings.WeatherSettings$$.ctor
// il2cpp: void Settings_WeatherSettings___ctor (Settings_WeatherSettings_o* __this, const MethodInfo* method);
// 0x5b4aee0

void Settings_WeatherSettings___ctor(Settings_WeatherSettings_o *__this,MethodInfo *method)

{
  Settings_SetSettingsContainer_WeatherSet__o *__this_00;
  
  if (Il2CppMethodInitialized_075472a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_SetSettingsContainer_WeatherSet_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SetSettingsContainer_WeatherSet);
    Il2CppMethodInitialized_075472a3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_SetSettingsContainer_WeatherSet);
  Settings_SetSettingsContainer_object____ctor
            ((Settings_SetSettingsContainer_T__o *)__this_00,
             (MethodInfo_40485F0 *)MethodInfo_Settings_SetSettingsContainer_WeatherSet_ctor);
  (__this->fields).WeatherSets = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeatherSets);
  Settings_PresetSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


