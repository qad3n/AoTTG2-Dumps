// Type: Gilzoide.FlexUi.FlexLayoutConfig
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi/FlexLayoutConfig.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.FlexLayoutConfig$$get_PointScaleFactor
// il2cpp: float Gilzoide_FlexUi_FlexLayoutConfig__get_PointScaleFactor (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x5316050

float Gilzoide_FlexUi_FlexLayoutConfig__get_PointScaleFactor
                (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._pointScaleFactor;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$set_PointScaleFactor
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig__set_PointScaleFactor (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, float value, const MethodInfo* method);
// 0x5316060

void Gilzoide_FlexUi_FlexLayoutConfig__set_PointScaleFactor
               (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,float value,MethodInfo *method)

{
  long lVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  (__this->fields)._pointScaleFactor = value;
  lVar1 = (__this->fields)._config.fields._configPtr;
  if (lVar1 != 0) {
    if (g_data_075425d8 == (code *)0x0) {
      local_38 = "flex-ui";
      local_30 = 7;
      local_28 = "FlexUi_ConfigSetPointScaleFactor";
      local_20 = 0x20;
      local_18 = 0x200000000;
      local_10 = 0xc;
      local_c = 0;
      g_data_075425d8 = (code *)il2cpp_runtime_helper_03123230(&local_38);
    }
    (*g_data_075425d8)(value,lVar1);
  }
  return;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$get_Errata
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayoutConfig__get_Errata (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x5316180

int32_t Gilzoide_FlexUi_FlexLayoutConfig__get_Errata
                  (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._errata;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$set_Errata
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig__set_Errata (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, int32_t value, const MethodInfo* method);
// 0x5316190

void Gilzoide_FlexUi_FlexLayoutConfig__set_Errata
               (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,int32_t value,MethodInfo *method)

{
  long lVar1;
  undefined1 auVar2 [16];
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  (__this->fields)._errata = value;
  lVar1 = (__this->fields)._config.fields._configPtr;
  if (lVar1 != 0) {
    if (g_data_075425e0 == (code *)0x0) {
      pcStack_40 = "flex-ui";
      uStack_38 = 7;
      pcStack_30 = "FlexUi_ConfigSetErrata";
      uStack_28 = 0x16;
      uStack_20 = 0x200000000;
      uStack_18 = 0xc;
      uStack_14 = 0;
      auVar2 = il2cpp_runtime_helper_03123230(&pcStack_40);
      method = auVar2._8_8_;
      g_data_075425e0 = auVar2._0_8_;
    }
    (*g_data_075425e0)(lVar1,value,method);
  }
  return;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$get_ExperimentalFeatures
// il2cpp: int32_t Gilzoide_FlexUi_FlexLayoutConfig__get_ExperimentalFeatures (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x53162b0

int32_t Gilzoide_FlexUi_FlexLayoutConfig__get_ExperimentalFeatures
                  (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._experimentalFeatures;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$set_ExperimentalFeatures
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig__set_ExperimentalFeatures (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, int32_t value, const MethodInfo* method);
// 0x53162c0

void Gilzoide_FlexUi_FlexLayoutConfig__set_ExperimentalFeatures
               (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,int32_t value,MethodInfo *method)

{
  long lVar1;
  char *pcStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  (__this->fields)._experimentalFeatures = value;
  lVar1 = (__this->fields)._config.fields._configPtr;
  if (lVar1 != 0) {
    if (g_data_075425e8 == (code *)0x0) {
      pcStack_48 = "flex-ui";
      uStack_40 = 7;
      pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
      uStack_30 = 0x2a;
      uStack_28 = 0x200000000;
      uStack_20 = 0x10;
      uStack_1c = 0;
      g_data_075425e8 = (code *)il2cpp_runtime_helper_03123230(&pcStack_48);
    }
    (*g_data_075425e8)(lVar1,0,value & 1);
    lVar1 = (__this->fields)._config.fields._configPtr;
    if (lVar1 != 0) {
      if (g_data_075425e8 == (code *)0x0) {
        pcStack_48 = "flex-ui";
        uStack_40 = 7;
        pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
        uStack_30 = 0x2a;
        uStack_28 = 0x200000000;
        uStack_20 = 0x10;
        uStack_1c = 0;
        g_data_075425e8 = (code *)il2cpp_runtime_helper_03123230(&pcStack_48);
      }
      (*g_data_075425e8)(lVar1,1,(byte)value >> 1 & 1);
    }
  }
  return;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$get_Config
// il2cpp: Gilzoide_FlexUi_Yoga_YGConfig_o Gilzoide_FlexUi_FlexLayoutConfig__get_Config (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x530f070

Gilzoide_FlexUi_Yoga_YGConfig_o
Gilzoide_FlexUi_FlexLayoutConfig__get_Config(Gilzoide_FlexUi_FlexLayoutConfig_o *__this,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGConfig_Fields GVar1;
  code *pcVar2;
  intptr_t iVar3;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  GVar1._configPtr = (__this->fields)._config.fields._configPtr;
  if (GVar1._configPtr != 0) {
    return (Gilzoide_FlexUi_Yoga_YGConfig_o)(Gilzoide_FlexUi_Yoga_YGConfig_Fields)GVar1._configPtr;
  }
  if ((__this->fields)._isDefaultConfig == false) {
    pcVar2 = g_data_075425c0;
    if (g_data_075425c0 == (code *)0x0) {
      local_38 = "flex-ui";
      local_30 = 7;
      local_28 = "FlexUi_ConfigNew";
      local_20 = 0x10;
      local_18 = 0x200000000;
      local_10 = 0;
      local_c = 0;
      pcVar2 = (code *)il2cpp_runtime_helper_03123230(&local_38);
      g_data_075425c0 = pcVar2;
    }
  }
  else {
    pcVar2 = g_data_075425d0;
    if (g_data_075425d0 == (code *)0x0) {
      local_38 = "flex-ui";
      local_30 = 7;
      local_28 = "FlexUi_ConfigGetDefault";
      local_20 = 0x17;
      local_18 = 0x200000000;
      local_10 = 0;
      local_c = 0;
      pcVar2 = (code *)il2cpp_runtime_helper_03123230(&local_38);
      g_data_075425d0 = pcVar2;
    }
  }
  iVar3 = (*pcVar2)();
  (__this->fields)._config.fields._configPtr = iVar3;
  Gilzoide_FlexUi_FlexLayoutConfig__RefreshConfig(__this,method);
  return (Gilzoide_FlexUi_Yoga_YGConfig_o)
         (Gilzoide_FlexUi_Yoga_YGConfig_Fields)(__this->fields)._config.fields._configPtr;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$OnDisable
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig__OnDisable (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x5316780

void Gilzoide_FlexUi_FlexLayoutConfig__OnDisable
               (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,MethodInfo *method)

{
  long lVar1;
  long lVar2;
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  if (g_data_075425d0 == (code *)0x0) {
    pcStack_40 = "flex-ui";
    uStack_38 = 7;
    pcStack_30 = "FlexUi_ConfigGetDefault";
    uStack_28 = 0x17;
    uStack_20 = 0x200000000;
    uStack_18 = 0;
    uStack_14 = 0;
    g_data_075425d0 = (code *)il2cpp_runtime_helper_03123230(&pcStack_40);
  }
  lVar2 = (*g_data_075425d0)();
  lVar1 = (__this->fields)._config.fields._configPtr;
  if ((lVar1 != lVar2) && (lVar1 != 0)) {
    if (g_data_075425c8 == (code *)0x0) {
      pcStack_40 = "flex-ui";
      uStack_38 = 7;
      pcStack_30 = "FlexUi_ConfigFree";
      uStack_28 = 0x11;
      uStack_20 = 0x200000000;
      uStack_18 = 8;
      uStack_14 = 0;
      g_data_075425c8 = (code *)il2cpp_runtime_helper_03123230(&pcStack_40);
    }
    (*g_data_075425c8)(lVar1);
    (__this->fields)._config.fields._configPtr = 0;
  }
  return;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$RefreshConfig
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig__RefreshConfig (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x5316570

void Gilzoide_FlexUi_FlexLayoutConfig__RefreshConfig
               (Gilzoide_FlexUi_FlexLayoutConfig_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  char *local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  float local_24;
  
  lVar3 = (__this->fields)._config.fields._configPtr;
  if (lVar3 != 0) {
    fVar4 = (__this->fields)._pointScaleFactor;
    if (g_data_075425d8 == (code *)0x0) {
      local_58 = "flex-ui";
      local_50 = 7;
      local_48 = "FlexUi_ConfigSetPointScaleFactor";
      local_40 = 0x20;
      local_38 = 0x200000000;
      local_30 = 0xc;
      local_2c = 0;
      local_24 = fVar4;
      g_data_075425d8 = (code *)il2cpp_runtime_helper_03123230(&local_58);
      fVar4 = local_24;
    }
    (*g_data_075425d8)(fVar4,lVar3);
    lVar3 = (__this->fields)._config.fields._configPtr;
    if (lVar3 != 0) {
      iVar1 = (__this->fields)._errata;
      if (g_data_075425e0 == (code *)0x0) {
        local_58 = "flex-ui";
        local_50 = 7;
        local_48 = "FlexUi_ConfigSetErrata";
        local_40 = 0x16;
        local_38 = 0x200000000;
        local_30 = 0xc;
        local_2c = 0;
        g_data_075425e0 = (code *)il2cpp_runtime_helper_03123230(&local_58);
      }
      (*g_data_075425e0)(lVar3,iVar1);
      lVar3 = (__this->fields)._config.fields._configPtr;
      if (lVar3 != 0) {
        uVar2 = (__this->fields)._experimentalFeatures;
        if (g_data_075425e8 == (code *)0x0) {
          local_58 = "flex-ui";
          local_50 = 7;
          local_48 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
          local_40 = 0x2a;
          local_38 = 0x200000000;
          local_30 = 0x10;
          local_2c = 0;
          g_data_075425e8 = (code *)il2cpp_runtime_helper_03123230(&local_58);
        }
        (*g_data_075425e8)(lVar3,0,uVar2 & 1);
        lVar3 = (__this->fields)._config.fields._configPtr;
        if (lVar3 != 0) {
          if (g_data_075425e8 == (code *)0x0) {
            local_58 = "flex-ui";
            local_50 = 7;
            local_48 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
            local_40 = 0x2a;
            local_38 = 0x200000000;
            local_30 = 0x10;
            local_2c = 0;
            g_data_075425e8 = (code *)il2cpp_runtime_helper_03123230(&local_58);
          }
          (*g_data_075425e8)(lVar3,1,(byte)uVar2 >> 1 & 1);
        }
      }
    }
  }
  return;
}


// Gilzoide.FlexUi.FlexLayoutConfig$$.ctor
// il2cpp: void Gilzoide_FlexUi_FlexLayoutConfig___ctor (Gilzoide_FlexUi_FlexLayoutConfig_o* __this, const MethodInfo* method);
// 0x5316920

void Gilzoide_FlexUi_FlexLayoutConfig___ctor(Gilzoide_FlexUi_FlexLayoutConfig_o *__this,MethodInfo *method)

{
  (__this->fields)._pointScaleFactor = 1.0;
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)__this,(MethodInfo *)0x0);
  return;
}


