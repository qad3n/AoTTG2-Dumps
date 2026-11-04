// Type: Gilzoide.FlexUi.FlexLayoutConfig
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi/FlexLayoutConfig.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.FlexLayoutConfig$$get_PointScaleFactor
// il2cpp: float Gilzoide_FlexUi_FlexLayoutConfig__get_PointScaleFactor (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x180e8f460

float Gilzoide_FlexUi_FlexLayoutConfig__get_PointScaleFactor
                (UnityEngine_AdaptivePerformance_Provider_PerformanceDataRecord_o *__this,MethodInfo *method)

{
  return (__this->fields)._CpuFrameTime_k__BackingField;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$set_PointScaleFactor
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig__set_PointScaleFactor (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, float value, const MethodInfo* method);
// 0x181878cb0

void Gilzoide_FlexUi_FlexLayoutConfig__set_PointScaleFactor
               (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._pointScaleFactor = value;
  Gilzoide_FlexUi_Yoga_YGConfig__SetPointScaleFactor(&(__this->fields)._config,value,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$get_Errata
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayoutConfig__get_Errata (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x180a4c170

int32_t Gilzoide_FlexUi_FlexLayoutConfig__get_Errata
                  (UnityEngine_XR_MeshGenerationResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Status_k__BackingField;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$set_Errata
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig__set_Errata (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, int32_t value, const MethodInfo* method);
// 0x181878c50

void Gilzoide_FlexUi_FlexLayoutConfig__set_Errata
               (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._errata = value;
  Gilzoide_FlexUi_Yoga_YGConfig__SetErrata(&(__this->fields)._config,value,(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$get_ExperimentalFeatures
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayoutConfig__get_ExperimentalFeatures (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x180bdb280

int32_t Gilzoide_FlexUi_FlexLayoutConfig__get_ExperimentalFeatures
                  (UnityEngine_XR_MeshGenerationResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Attributes_k__BackingField;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$set_ExperimentalFeatures
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig__set_ExperimentalFeatures (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, int32_t value, const MethodInfo* method);
// 0x181878c60

void Gilzoide_FlexUi_FlexLayoutConfig__set_ExperimentalFeatures
               (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,int32_t value,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGConfig_o *__this_00;
  
  (__this->fields)._experimentalFeatures = value;
  __this_00 = &(__this->fields)._config;
  Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled
            (__this_00,0,(bool)((byte)value & 1),(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled
            (__this_00,1,(bool)((byte)((uint)value >> 1) & 1),(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$get_Config
// il2cpp: Gilzoide_FlexUi_Yoga_YGConfig_o Gilzoide_FlexUi_FlexLayoutConfig__get_Config (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x181878ba0

Gilzoide_FlexUi_Yoga_YGConfig_o
Gilzoide_FlexUi_FlexLayoutConfig__get_Config(Gilzoide_FlexUi_FlexLayoutConfig_o *__this,MethodInfo *method)

{
  uint uVar1;
  intptr_t iVar2;
  
  if ((__this->fields)._config.fields._configPtr == 0) {
    if ((__this->fields)._isDefaultConfig == false) {
      Gilzoide_FlexUi_Yoga_YGConfig__Instantiate(&(__this->fields)._config,(MethodInfo *)0x0);
    }
    else {
      iVar2 = Gilzoide_FlexUi_Yoga_Yoga__YGConfigGetDefault((MethodInfo *)0x0);
      (__this->fields)._config.fields._configPtr = iVar2;
    }
    Gilzoide_FlexUi_Yoga_YGConfig__SetPointScaleFactor
              (&(__this->fields)._config,(__this->fields)._pointScaleFactor,(MethodInfo *)0x0);
    Gilzoide_FlexUi_Yoga_YGConfig__SetErrata
              (&(__this->fields)._config,(__this->fields)._errata,(MethodInfo *)0x0);
    uVar1 = (__this->fields)._experimentalFeatures;
    Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled
              (&(__this->fields)._config,0,(bool)((byte)uVar1 & 1),(MethodInfo *)0x0);
    Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled
              (&(__this->fields)._config,1,(bool)((byte)(uVar1 >> 1) & 1),(MethodInfo *)0x0);
    return (Gilzoide_FlexUi_Yoga_YGConfig_o)
           (Gilzoide_FlexUi_Yoga_YGConfig_Fields)(__this->fields)._config.fields._configPtr;
  }
  return (Gilzoide_FlexUi_Yoga_YGConfig_o)
         (Gilzoide_FlexUi_Yoga_YGConfig_Fields)(__this->fields)._config.fields._configPtr;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$OnDisable
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig__OnDisable (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x181878a90

void Gilzoide_FlexUi_FlexLayoutConfig__OnDisable
               (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,MethodInfo *method)

{
  longlong lVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined1 local_c;
  
  if (g_data_184341c90 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x17;
    local_28 = "FlexUi_ConfigGetDefault";
    local_18 = 0;
    local_c = 0;
    local_14 = 2;
    g_data_184341c90 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  lVar1 = (*g_data_184341c90)();
  if ((__this->fields)._config.fields._configPtr != lVar1) {
    Gilzoide_FlexUi_Yoga_YGConfig__Dispose(&(__this->fields)._config,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$RefreshConfig
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig__RefreshConfig (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x181878b20

void Gilzoide_FlexUi_FlexLayoutConfig__RefreshConfig
               (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGConfig_o *__this_00;
  uint uVar1;
  
  Gilzoide_FlexUi_Yoga_YGConfig__SetPointScaleFactor
            (&(__this->fields)._config,(__this->fields)._pointScaleFactor,(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGConfig__SetErrata
            (&(__this->fields)._config,(__this->fields)._errata,(MethodInfo *)0x0);
  __this_00 = &(__this->fields)._config;
  uVar1 = (__this->fields)._experimentalFeatures;
  Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled
            (__this_00,0,(bool)((byte)uVar1 & 1),(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled
            (__this_00,1,(bool)((byte)(uVar1 >> 1) & 1),(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$.ctor
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig___ctor (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x181878b90

void Gilzoide_FlexUi_FlexLayoutConfig___ctor(Gilzoide_FlexUi_FlexLayoutConfig_o *__this,MethodInfo *method)

{
  (__this->fields)._pointScaleFactor = 1.0;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)__this,(MethodInfo *)0x0);
  return;
}


