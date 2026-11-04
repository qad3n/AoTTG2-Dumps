// Type: Gilzoide.FlexUi.Yoga.YGConfig
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi.Yoga/YGConfig.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.Yoga.YGConfig$$get_IsNull
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGConfig__get_IsNull (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x18187e270

bool
Gilzoide_FlexUi_Yoga_YGConfig__get_IsNull(Gilzoide_FlexUi_Yoga_YGConfig_o __this, MethodInfo* method)

{
  return (__this->fields)._nodePtr == 0;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$GetDefaultConfig
// il2cpp: Gilzoide_FlexUi_Yoga_YGConfig_o Gilzoide_FlexUi_Yoga_YGConfig__GetDefaultConfig (const MethodInfo* method);
// 0x18187df70

Gilzoide_FlexUi_Yoga_YGConfig_o
Gilzoide_FlexUi_Yoga_YGConfig__GetDefaultConfig(MethodInfo* method)

{
  intptr_t iVar1;
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
  iVar1 = (*g_data_184341c90)();
  return iVar1;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Instantiate
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__Instantiate (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x18187dfe0

void Gilzoide_FlexUi_Yoga_YGConfig__Instantiate(Gilzoide_FlexUi_Yoga_YGConfig_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_14;
  undefined1 local_c;
  
  if (g_data_184341c80 == (code *)0x0) {
    local_30 = 7;
    local_38 = L"flex-ui";
    local_20 = 0x10;
    local_28 = "FlexUi_ConfigNew";
    local_18 = 0;
    local_c = 0;
    local_14 = 2;
    g_data_184341c80 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
  }
  iVar1 = (*g_data_184341c80)();
  (__this->fields)._configPtr = iVar1;
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Dispose
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__Dispose (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x18187de30

void Gilzoide_FlexUi_Yoga_YGConfig__Dispose(Gilzoide_FlexUi_Yoga_YGConfig_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if ((__this->fields)._configPtr != 0) {
    iVar1 = (__this->fields)._configPtr;
    if (g_data_184341c88 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x11;
      local_28 = "FlexUi_ConfigFree";
      local_18 = 0;
      local_14 = 2;
      local_10 = 8;
      local_c = 0;
      g_data_184341c88 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    (*g_data_184341c88)(iVar1);
    (__this->fields)._configPtr = 0;
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Equals
// il2cpp: bool Gilzoide_FlexUi_Yoga_YGConfig__Equals (Gilzoide_FlexUi_Yoga_YGConfig_o __this, Gilzoide_FlexUi_Yoga_YGConfig_o other, const MethodInfo* method);
// 0x18187ded0

bool
Gilzoide_FlexUi_Yoga_YGConfig__Equals(Gilzoide_FlexUi_Yoga_YGConfig_o __this, Gilzoide_FlexUi_Yoga_YGConfig_o other, MethodInfo* method)

{
  return (Gilzoide_FlexUi_Yoga_YGNode_Fields)(__this->fields)._nodePtr == other.fields._nodePtr;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetExperimentalFeatures
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatures (Gilzoide_FlexUi_Yoga_YGConfig_o __this, int32_t experimentalFeatures, const MethodInfo* method);
// 0x18187e180

void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatures
               (Gilzoide_FlexUi_Yoga_YGConfig_o *__this,int32_t experimentalFeatures,MethodInfo *method)

{
  Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled
            (__this,0,(bool)((byte)experimentalFeatures & 1),(MethodInfo *)0x0);
  Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled
            (__this,1,(bool)((byte)((uint)experimentalFeatures >> 1) & 1),(MethodInfo *)0x0);
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$Free
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__Free (Gilzoide_FlexUi_Yoga_YGConfig_o __this, const MethodInfo* method);
// 0x18187dee0

void Gilzoide_FlexUi_Yoga_YGConfig__Free(Gilzoide_FlexUi_Yoga_YGConfig_o *__this,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if ((__this->fields)._configPtr != 0) {
    iVar1 = (__this->fields)._configPtr;
    if (g_data_184341c88 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x11;
      local_28 = "FlexUi_ConfigFree";
      local_18 = 0;
      local_14 = 2;
      local_10 = 8;
      local_c = 0;
      g_data_184341c88 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    (*g_data_184341c88)(iVar1);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetPointScaleFactor
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetPointScaleFactor (Gilzoide_FlexUi_Yoga_YGConfig_o __this, float enabled, const MethodInfo* method);
// 0x18187e1d0

void Gilzoide_FlexUi_Yoga_YGConfig__SetPointScaleFactor
               (Gilzoide_FlexUi_Yoga_YGConfig_o *__this,float enabled,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  if ((__this->fields)._configPtr != 0) {
    iVar1 = (__this->fields)._configPtr;
    if (g_data_184341c98 == (code *)0x0) {
      local_40 = 7;
      local_48 = L"flex-ui";
      local_30 = 0x20;
      local_38 = "FlexUi_ConfigSetPointScaleFactor";
      local_28 = 0;
      local_24 = 2;
      local_20 = 0xc;
      local_1c = 0;
      g_data_184341c98 = (code *)il2cpp_runtime_helper_18046cbe0(&local_48);
    }
    (*g_data_184341c98)(iVar1,enabled);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetErrata
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetErrata (Gilzoide_FlexUi_Yoga_YGConfig_o __this, int32_t errata, const MethodInfo* method);
// 0x18187e050

void Gilzoide_FlexUi_Yoga_YGConfig__SetErrata
               (Gilzoide_FlexUi_Yoga_YGConfig_o *__this,int32_t errata,MethodInfo *method)

{
  intptr_t iVar1;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if ((__this->fields)._configPtr != 0) {
    iVar1 = (__this->fields)._configPtr;
    if (g_data_184341ca0 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x16;
      local_28 = "FlexUi_ConfigSetErrata";
      local_18 = 0;
      local_14 = 2;
      local_10 = 0xc;
      local_c = 0;
      g_data_184341ca0 = (code *)il2cpp_runtime_helper_18046cbe0(&local_38);
    }
    (*g_data_184341ca0)(iVar1,errata);
  }
  return;
}


// Gilzoide.FlexUi.Yoga.YGConfig$$SetExperimentalFeatureEnabled
// il2cpp: void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled (Gilzoide_FlexUi_Yoga_YGConfig_o __this, int32_t feature, bool enabled, const MethodInfo* method);
// 0x18187e0e0

void Gilzoide_FlexUi_Yoga_YGConfig__SetExperimentalFeatureEnabled
               (Gilzoide_FlexUi_Yoga_YGConfig_o *__this,int32_t feature,bool enabled,MethodInfo *method)

{
  intptr_t iVar1;
  undefined4 in_register_00000014;
  undefined7 in_register_00000081;
  wchar_t *local_38;
  undefined8 local_30;
  char *local_28;
  undefined8 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  
  if ((__this->fields)._configPtr != 0) {
    iVar1 = (__this->fields)._configPtr;
    if (g_data_184341ca8 == (code *)0x0) {
      local_30 = 7;
      local_38 = L"flex-ui";
      local_20 = 0x2a;
      local_28 = "FlexUi_ConfigSetExperimentalFeatureEnabled";
      local_18 = 0;
      local_14 = 2;
      local_10 = 0x10;
      local_c = 0;
      g_data_184341ca8 =
           (code *)il2cpp_runtime_helper_18046cbe0(&local_38,CONCAT44(in_register_00000014,feature),
                                       CONCAT71(in_register_00000081,enabled));
    }
    (*g_data_184341ca8)(iVar1,feature,enabled);
  }
  return;
}


