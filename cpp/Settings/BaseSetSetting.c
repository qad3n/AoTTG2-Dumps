// Type: Settings.BaseSetSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/BaseSetSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetSetting.cs
// --------------------------------

// Settings.BaseSetSetting$$.ctor
// il2cpp: void Settings_BaseSetSetting___ctor (Settings_BaseSetSetting_o* __this, const MethodInfo* method);
// 0x41fdb50

void Settings_BaseSetSetting___ctor(Settings_BaseSetSetting_o *__this,MethodInfo *method)

{
  Il2CppObject *defaultValue;
  Settings_StringSetting_o *__this_00;
  Settings_BoolSetting_o *__this_01;
  System_String_o *defaultValue_00;
  MethodInfo *method_00;
  System_Guid_o __this_02;
  System_Guid_Fields local_38;
  
  if (g_data_057ad88c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"Set 1");
    g_data_057ad88c = '\x01';
  }
  local_38 = (System_Guid_Fields)ZEXT816(0);
  __this_00 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  defaultValue = "Set 1";
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  (__this_00->fields).MaxLength = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0
            ((Settings_TypedSetting_T__o *)__this_00,defaultValue,MethodInfo_TypedSetting_1_System_String);
  (__this_00->fields).MaxLength = 0x7fffffff;
  (__this->fields).Name = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Name);
  __this_01 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  if (g_data_057ad896 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
    g_data_057ad896 = '\x01';
  }
  Settings_TypedSetting_bool____ctor_2a23ec0((Settings_TypedSetting_bool__o *)__this_01,0,MethodInfo_TypedSetting_1_System_Boolean);
  (__this->fields).Preset = __this_01;
  il2cpp_runtime_helper_022b4080();
  local_38 = (System_Guid_Fields)System_Guid__NewGuid((MethodInfo *)0x0);
  __this_02.fields._d = '\0';
  __this_02.fields._e = '\0';
  __this_02.fields._f = '\0';
  __this_02.fields._g = '\0';
  __this_02.fields._h = '\0';
  __this_02.fields._i = '\0';
  __this_02.fields._j = '\0';
  __this_02.fields._k = '\0';
  __this_02.fields._0_8_ = &local_38;
  defaultValue_00 = System_Guid__ToString(__this_02,local_38._8_8_);
  method_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  *(undefined4 *)&method_00->klass = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0
            ((Settings_TypedSetting_T__o *)method_00,(Il2CppObject *)defaultValue_00,MethodInfo_TypedSetting_1_System_String);
  *(undefined4 *)&method_00->klass = 0x7fffffff;
  (__this->fields).UniqueId = (Settings_StringSetting_o *)method_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).UniqueId);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,method_00);
  return;
}


