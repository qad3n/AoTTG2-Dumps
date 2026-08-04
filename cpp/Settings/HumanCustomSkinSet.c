// Type: Settings.HumanCustomSkinSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/HumanCustomSkinSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/HumanCustomSkinSet.cs
// --------------------------------

// Settings.HumanCustomSkinSet$$.ctor
// il2cpp: void Settings_HumanCustomSkinSet___ctor (Settings_HumanCustomSkinSet_o* __this, const MethodInfo* method);
// 0x4085a30

void Settings_HumanCustomSkinSet___ctor(Settings_HumanCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_FloatSetting_o *pSVar3;
  
  if (g_data_057ac3d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ac3d7 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Hair = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Hair,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Eye = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Eye,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Glass = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Glass,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Face = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Face,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Skin = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Skin,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Costume = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Costume,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Logo = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Logo,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).GearL = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).GearL,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).GearR = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).GearR,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Gas = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Gas,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Hoodie = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Hoodie,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).WeaponTrail = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).WeaponTrail,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Horse = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Horse,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).ThunderspearL = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ThunderspearL,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).ThunderspearR = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).ThunderspearR,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).HookL = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HookL);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar3,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).HookLTiling = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HookLTiling,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).HookR = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HookR);
  pSVar3 = (Settings_FloatSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
  Settings_FloatSetting___ctor_40f3a30(pSVar3,1.0,-3.4028235e+38,3.4028235e+38,(MethodInfo *)0x0);
  (__this->fields).HookRTiling = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HookRTiling,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Hat = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Hat,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Head = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Head,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Back = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Back);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


