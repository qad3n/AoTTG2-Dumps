// Type: Settings.SkyboxCustomSkinSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/SkyboxCustomSkinSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/SkyboxCustomSkinSet.cs
// --------------------------------

// Settings.SkyboxCustomSkinSet$$.ctor
// il2cpp: void Settings_SkyboxCustomSkinSet___ctor (Settings_SkyboxCustomSkinSet_o* __this, const MethodInfo* method);
// 0x4086170

void Settings_SkyboxCustomSkinSet___ctor(Settings_SkyboxCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  
  if (g_data_057ac3da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ac3da = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Front = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Front,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Back = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Back,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Left = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Left,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Right = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Right,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Up = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Up,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Down = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Down);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


