// Type: Gilzoide.FlexUi.Yoga.YGConfig
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/YGConfig.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.YGConfig$$get_IsNull
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGConfig__get_IsNull (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x53164e0

bool Gilzoide_FlexUi_Yoga_YGConfig__get_IsNull(Gilzoide_FlexUi_Yoga_YGConfig_o *__this,MethodInfo *method)

{
  return (__this->fields)._configPtr == 0;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$GetDefaultConfig
// il2cpp: Gilzoide_FlexUi_Yoga_YGConfig_o Gilzoide_FlexUi_Yoga_YGConfig__GetDefaultConfig (const MethodInfo* method);
// 0x530f260

Gilzoide_FlexUi_Yoga_YGConfig_o Gilzoide_FlexUi_Yoga_YGConfig__GetDefaultConfig(MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGConfig_o GVar1;
  char *local_30;
  undefined8 local_28;
  char *local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  undefined1 local_4;
  
  if (g_data_075425d0 == (code *)0x0) {
    local_30 = "flex-ui";
    local_28 = 7;
    local_20 = "FlexUi_ConfigGetDefault";
    local_18 = 0x17;
    local_10 = 0x200000000;
    local_8 = 0;
    local_4 = 0;
    g_data_075425d0 = (code *)il2cpp_runtime_helper_03123230(&local_30);
    GVar1.fields._configPtr = (Gilzoide_FlexUi_Yoga_YGConfig_Fields)(*g_data_075425d0)();
    return (Gilzoide_FlexUi_Yoga_YGConfig_o)GVar1.fields._configPtr;
  }
  GVar1.fields._configPtr = (Gilzoide_FlexUi_Yoga_YGConfig_Fields)(*g_data_075425d0)();
  return (Gilzoide_FlexUi_Yoga_YGConfig_o)GVar1.fields._configPtr;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Instantiate
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__Instantiate (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x53164f0

void Gilzoide_FlexUi_Yoga_YGConfig__Instantiate(Gilzoide_FlexUi_Yoga_YGConfig_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_075425c0 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_ConfigNew";
    local_20 = 0x10;
    local_18 = 0x200000000;
    local_10 = 0;
    local_c = 0;
    g_data_075425c0 = (code *)il2cpp_runtime_helper_03123230(&local_38);
  }
  iVar1 = (*g_data_075425c0)();
  (__this->fields)._configPtr = iVar1;
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Dispose
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__Dispose (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x5316890

void Gilzoide_FlexUi_Yoga_YGConfig__Dispose(Gilzoide_FlexUi_Yoga_YGConfig_o *__this,MethodInfo *method)

{
  long lVar1;
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  lVar1 = (__this->fields)._configPtr;
  if (lVar1 != 0) {
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
    (__this->fields)._configPtr = 0;
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Equals
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGConfig__Equals (Gilzoide_FlexUi_Yoga_YGConfig_o __this, Gilzoide_FlexUi_Yoga_YGConfig_o other, const MethodInfo* method);
// 0x5316880

bool Gilzoide_FlexUi_Yoga_YGConfig__Equals
               (Gilzoide_FlexUi_Yoga_YGConfig_o *__this,Gilzoide_FlexUi_Yoga_YGConfig_o other,
               MethodInfo *method)

{
  return (Gilzoide_FlexUi_Yoga_YGConfig_Fields)(__this->fields)._configPtr == other.fields._configPtr;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetExperimentalFeatures
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatures (Gilzoide_FlexUi_Yoga_YGConfig_o __this, int32_t experimentalFeatures, const MethodInfo* method);
// 0x53163d0

void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatures
               (Gilzoide_FlexUi_Yoga_YGConfig_o *__this,int32_t experimentalFeatures,MethodInfo *method)

{
  long lVar1;
  char *pcStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  lVar1 = (__this->fields)._configPtr;
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
    (*g_data_075425e8)(lVar1,0,experimentalFeatures & 1);
    lVar1 = (__this->fields)._configPtr;
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
      (*g_data_075425e8)(lVar1,1,(byte)experimentalFeatures >> 1 & 1);
    }
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Free
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__Free (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x5316a90

void Gilzoide_FlexUi_Yoga_YGConfig__Free(Gilzoide_FlexUi_Yoga_YGConfig_o *__this,MethodInfo *method)

{
  long lVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  lVar1 = (__this->fields)._configPtr;
  if (lVar1 != 0) {
    if (g_data_075425c8 == (code *)0x0) {
      local_38 = "flex-ui";
      local_30 = 7;
      local_28 = "FlexUi_ConfigFree";
      local_20 = 0x11;
      local_18 = 0x200000000;
      local_10 = 8;
      local_c = 0;
      g_data_075425c8 = (code *)il2cpp_runtime_helper_03123230(&local_38);
    }
    (*g_data_075425c8)(lVar1);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetPointScaleFactor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetPointScaleFactor (Gilzoide_FlexUi_Yoga_YGConfig_o __this, float enabled, const MethodInfo* method);
// 0x53160f0

void Gilzoide_FlexUi_Yoga_YGConfig__SetPointScaleFactor
               (Gilzoide_FlexUi_Yoga_YGConfig_o *__this,float enabled,MethodInfo *method)

{
  long lVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  lVar1 = (__this->fields)._configPtr;
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
    (*g_data_075425d8)(enabled,lVar1);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetErrata
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetErrata (Gilzoide_FlexUi_Yoga_YGConfig_o __this, int32_t errata, const MethodInfo* method);
// 0x5316220

void Gilzoide_FlexUi_Yoga_YGConfig__SetErrata
               (Gilzoide_FlexUi_Yoga_YGConfig_o *__this,int32_t errata,MethodInfo *method)

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
  
  auVar2._8_8_ = method;
  auVar2._0_8_ = g_data_075425e0;
  lVar1 = (__this->fields)._configPtr;
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
    }
    g_data_075425e0 = auVar2._0_8_;
    (*g_data_075425e0)(lVar1,errata,auVar2._8_8_);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetExperimentalFeatureEnabled
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled (Gilzoide_FlexUi_Yoga_YGConfig_o __this, int32_t feature, bool enabled, const MethodInfo* method);
// 0x5316b10

void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled
               (Gilzoide_FlexUi_Yoga_YGConfig_o *__this,int32_t feature,bool enabled,MethodInfo *method)

{
  long lVar1;
  char *pcStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  lVar1 = (__this->fields)._configPtr;
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
    (*g_data_075425e8)(lVar1,feature,enabled);
  }
  return;
}


