// Type: Settings.InGameGeneralSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/InGameGeneralSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/InGameGeneralSettings.cs
// --------------------------------

// Settings.InGameGeneralSettings$$.ctor
// il2cpp: void Settings_InGameGeneralSettings___ctor (Settings_InGameGeneralSettings_o* __this, const MethodInfo* method);
// 0x408ab90

void Settings_InGameGeneralSettings___ctor(Settings_InGameGeneralSettings_o *__this,MethodInfo *method)

{
  System_String_o *defaultValue;
  Settings_StringSetting_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_Collections_Generic_List_object__o *__this_00;
  Settings_ListSetting_StringSetting__o *__this_01;
  
  if (g_data_057ac3ef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"General");
    il2cpp_runtime_helper_023445d0(&"Waves");
    il2cpp_runtime_helper_023445d0(&"FoodForTitan");
    il2cpp_runtime_helper_023445d0(&"Forest");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057ac3ef = '\x01';
  }
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar1,"General",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).MapCategory = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MapCategory,pSVar1);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar1,"Forest",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).MapName = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MapName,pSVar1);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar1,"Waves",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).GameMode = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).GameMode,pSVar1);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar1,"",0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).PrevGameMode = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).PrevGameMode,pSVar1);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,2,-0x80000000,0x7fffffff,(MethodInfo *)0x0);
  (__this->fields).Difficulty = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Difficulty,pSVar2);
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_StringSetting);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_Settings_StringSetting);
  __this_01 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor
            ((Settings_ListSetting_T__o *)__this_01,(System_Collections_Generic_List_T__o *)__this_00,
             MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Addons = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Addons,__this_01);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar1,"FoodForTitan",100,(MethodInfo *)0x0);
  (__this->fields).RoomName = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RoomName,pSVar1);
  defaultValue = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar1 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar1,defaultValue,100,(MethodInfo *)0x0);
  (__this->fields).Password = pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Password,pSVar1);
  pSVar2 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar2,10,0,0xff,(MethodInfo *)0x0);
  (__this->fields).MaxPlayers = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).MaxPlayers);
  Settings_BaseSettingsContainer___ctor((Settings_PresetSettingsContainer_o *)__this,(MethodInfo *)0x0);
  return;
}


