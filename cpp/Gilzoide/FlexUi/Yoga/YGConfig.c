// Type: Gilzoide.FlexUi.Yoga.YGConfig
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/YGConfig.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.YGConfig$$get_IsNull
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGConfig__get_IsNull (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x3b25b30

bool_conflict
Gilzoide_FlexUi_Yoga_YGConfig__get_IsNull(Gilzoide_FlexUi_Yoga_YGConfig_o __this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),*(long *)__this.fields._configPtr == 0);
}


// Gilzoide.FlexUi.Yoga.YGConfig$$GetDefaultConfig
// il2cpp: Gilzoide_FlexUi_Yoga_YGConfig_o Gilzoide_FlexUi_Yoga_YGConfig__GetDefaultConfig (const MethodInfo* method);
// 0x3b1e6a0

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
  
  if (g_data_057a9a18 != (code *)0x0) {
    GVar1.fields._configPtr = (Gilzoide_FlexUi_Yoga_YGConfig_Fields)(*g_data_057a9a18)();
    return (Gilzoide_FlexUi_Yoga_YGConfig_o)GVar1.fields._configPtr;
  }
  local_30 = "flex-ui";
  local_28 = 7;
  local_20 = "FlexUi_ConfigGetDefault";
  local_18 = 0x17;
  local_10 = 0x200000000;
  local_8 = 0;
  local_4 = 0;
  g_data_057a9a18 = (code *)il2cpp_runtime_helper_023055b0(&local_30);
  GVar1.fields._configPtr = (Gilzoide_FlexUi_Yoga_YGConfig_Fields)(*g_data_057a9a18)();
  return (Gilzoide_FlexUi_Yoga_YGConfig_o)GVar1.fields._configPtr;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Instantiate
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__Instantiate (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x3b25b40

void Gilzoide_FlexUi_Yoga_YGConfig__Instantiate(Gilzoide_FlexUi_Yoga_YGConfig_o __this,MethodInfo *method)

{
  undefined8 uVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  if (g_data_057a9a08 == (code *)0x0) {
    local_38 = "flex-ui";
    local_30 = 7;
    local_28 = "FlexUi_ConfigNew";
    local_20 = 0x10;
    local_18 = 0x200000000;
    local_10 = 0;
    local_c = 0;
    g_data_057a9a08 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
  }
  uVar1 = (*g_data_057a9a08)();
  *(undefined8 *)__this.fields._configPtr = uVar1;
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Dispose
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__Dispose (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x3b25ef0

void Gilzoide_FlexUi_Yoga_YGConfig__Dispose(Gilzoide_FlexUi_Yoga_YGConfig_o __this,MethodInfo *method)

{
  long lVar1;
  char *pcStack_40;
  undefined8 uStack_38;
  char *pcStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 uStack_18;
  undefined1 uStack_14;
  
  lVar1 = *(long *)__this.fields._configPtr;
  if (lVar1 != 0) {
    if (g_data_057a9a10 == (code *)0x0) {
      pcStack_40 = "flex-ui";
      uStack_38 = 7;
      pcStack_30 = "FlexUi_ConfigFree";
      uStack_28 = 0x11;
      uStack_20 = 0x200000000;
      uStack_18 = 8;
      uStack_14 = 0;
      g_data_057a9a10 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_40);
    }
    (*g_data_057a9a10)(lVar1);
    *(undefined8 *)__this.fields._configPtr = 0;
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Equals
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGConfig__Equals (Gilzoide_FlexUi_Yoga_YGConfig_o __this, Gilzoide_FlexUi_Yoga_YGConfig_o other, const MethodInfo* method);
// 0x3b25ee0

bool_conflict
Gilzoide_FlexUi_Yoga_YGConfig__Equals
          (Gilzoide_FlexUi_Yoga_YGConfig_o __this,Gilzoide_FlexUi_Yoga_YGConfig_o other,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  (Gilzoide_FlexUi_Yoga_YGConfig_Fields)*__this.fields._configPtr == other.fields._configPtr);
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetExperimentalFeatures
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatures (Gilzoide_FlexUi_Yoga_YGConfig_o __this, int32_t experimentalFeatures, const MethodInfo* method);
// 0x3b25a10

void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatures
               (Gilzoide_FlexUi_Yoga_YGConfig_o __this,int32_t experimentalFeatures,MethodInfo *method)

{
  long lVar1;
  char *pcStack_50;
  undefined8 uStack_48;
  char *pcStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined1 uStack_24;
  
  lVar1 = *(long *)__this.fields._configPtr;
  if (lVar1 != 0) {
    if (g_data_057a9a30 == (code *)0x0) {
      pcStack_50 = "flex-ui";
      uStack_48 = 7;
      pcStack_40 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
      uStack_38 = 0x2a;
      uStack_30 = 0x200000000;
      uStack_28 = 0x10;
      uStack_24 = 0;
      g_data_057a9a30 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_50);
    }
    (*g_data_057a9a30)(lVar1,0,(byte)experimentalFeatures & 1);
    lVar1 = *(long *)__this.fields._configPtr;
    if (lVar1 != 0) {
      if (g_data_057a9a30 == (code *)0x0) {
        pcStack_50 = "flex-ui";
        uStack_48 = 7;
        pcStack_40 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
        uStack_38 = 0x2a;
        uStack_30 = 0x200000000;
        uStack_28 = 0x10;
        uStack_24 = 0;
        g_data_057a9a30 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_50);
      }
      (*g_data_057a9a30)(lVar1,1,(byte)experimentalFeatures >> 1 & 1);
    }
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Free
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__Free (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x3b260f0

void Gilzoide_FlexUi_Yoga_YGConfig__Free(Gilzoide_FlexUi_Yoga_YGConfig_o __this,MethodInfo *method)

{
  long lVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  lVar1 = *(long *)__this.fields._configPtr;
  if (lVar1 != 0) {
    if (g_data_057a9a10 == (code *)0x0) {
      local_38 = "flex-ui";
      local_30 = 7;
      local_28 = "FlexUi_ConfigFree";
      local_20 = 0x11;
      local_18 = 0x200000000;
      local_10 = 8;
      local_c = 0;
      g_data_057a9a10 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
    }
    (*g_data_057a9a10)(lVar1);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetPointScaleFactor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetPointScaleFactor (Gilzoide_FlexUi_Yoga_YGConfig_o __this, float enabled, const MethodInfo* method);
// 0x3b25720

void Gilzoide_FlexUi_Yoga_YGConfig__SetPointScaleFactor
               (Gilzoide_FlexUi_Yoga_YGConfig_o __this,float enabled,MethodInfo *method)

{
  long lVar1;
  char *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  lVar1 = *(long *)__this.fields._configPtr;
  if (lVar1 != 0) {
    if (g_data_057a9a20 == (code *)0x0) {
      local_38 = "flex-ui";
      local_30 = 7;
      local_28 = "FlexUi_ConfigSetPointScaleFactor";
      local_20 = 0x20;
      local_18 = 0x200000000;
      local_10 = 0xc;
      local_c = 0;
      g_data_057a9a20 = (code *)il2cpp_runtime_helper_023055b0(&local_38);
    }
    (*g_data_057a9a20)(enabled,lVar1);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetErrata
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetErrata (Gilzoide_FlexUi_Yoga_YGConfig_o __this, int32_t errata, const MethodInfo* method);
// 0x3b25850

void Gilzoide_FlexUi_Yoga_YGConfig__SetErrata
               (Gilzoide_FlexUi_Yoga_YGConfig_o __this,int32_t errata,MethodInfo *method)

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
  auVar2._0_8_ = g_data_057a9a28;
  lVar1 = *(long *)__this.fields._configPtr;
  if (lVar1 != 0) {
    if (g_data_057a9a28 == (code *)0x0) {
      pcStack_40 = "flex-ui";
      uStack_38 = 7;
      pcStack_30 = "FlexUi_ConfigSetErrata";
      uStack_28 = 0x16;
      uStack_20 = 0x200000000;
      uStack_18 = 0xc;
      uStack_14 = 0;
      auVar2 = il2cpp_runtime_helper_023055b0(&pcStack_40);
    }
    g_data_057a9a28 = auVar2._0_8_;
    (*g_data_057a9a28)(lVar1,errata,auVar2._8_8_);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetExperimentalFeatureEnabled
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled (Gilzoide_FlexUi_Yoga_YGConfig_o __this, int32_t feature, bool enabled, const MethodInfo* method);
// 0x3b26170

void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled
               (Gilzoide_FlexUi_Yoga_YGConfig_o __this,int32_t feature,bool_conflict enabled,
               MethodInfo *method)

{
  long lVar1;
  char *pcStack_48;
  undefined8 uStack_40;
  char *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  
  lVar1 = *(long *)__this.fields._configPtr;
  if (lVar1 != 0) {
    if (g_data_057a9a30 == (code *)0x0) {
      pcStack_48 = "flex-ui";
      uStack_40 = 7;
      pcStack_38 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
      uStack_30 = 0x2a;
      uStack_28 = 0x200000000;
      uStack_20 = 0x10;
      uStack_1c = 0;
      g_data_057a9a30 = (code *)il2cpp_runtime_helper_023055b0(&pcStack_48);
    }
    (*g_data_057a9a30)(lVar1,feature,enabled & 0xff);
  }
  return;
}


