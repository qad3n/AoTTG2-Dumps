// Type: Settings.CityCustomSkinSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/CityCustomSkinSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/CityCustomSkinSet.cs
// --------------------------------

// Settings.CityCustomSkinSet$$Validate
// il2cpp: bool Settings_CityCustomSkinSet__Validate (Settings_CityCustomSkinSet_o* __this, const MethodInfo* method);
// 0x40852f0

bool_conflict Settings_CityCustomSkinSet__Validate(Settings_CityCustomSkinSet_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *pSVar1;
  System_String_o *pSVar2;
  bool_conflict extraout_EAX;
  Settings_StringSetting_o *pSVar3;
  Settings_ListSetting_StringSetting__o *pSVar4;
  Settings_CityCustomSkinSet_o *__this_00;
  
  __this_00 = __this;
  if (g_data_057ac3d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_00 = (Settings_CityCustomSkinSet_o *)&MethodInfo_List_1_Settings_StringSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac3d1 = '\x01';
  }
  pSVar4 = (__this->fields).Houses;
  if ((pSVar4 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar1 = (pSVar4->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
    return (bool_conflict)CONCAT71((int7)((ulong)pSVar1 >> 8),(pSVar1->fields)._size == 8);
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ac3d2 = '\x01';
  }
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar2,200,(MethodInfo *)0x0);
  pSVar4 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar4,(Il2CppObject *)pSVar3,8,MethodInfo_ListSetting_1_StringSetting);
  (__this_00->fields).Houses = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Houses,pSVar4);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar2,200,(MethodInfo *)0x0);
  (__this_00->fields).Ground = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Ground,pSVar3);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar2,200,(MethodInfo *)0x0);
  (__this_00->fields).Wall = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Wall,pSVar3);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar2,200,(MethodInfo *)0x0);
  (__this_00->fields).Gate = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields).Gate);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this_00,(MethodInfo *)0x0);
  return extraout_EAX;
}


// Settings.CityCustomSkinSet$$.ctor
// il2cpp: void Settings_CityCustomSkinSet___ctor (Settings_CityCustomSkinSet_o* __this, const MethodInfo* method);
// 0x4085340

void Settings_CityCustomSkinSet___ctor(Settings_CityCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *__this_00;
  
  if (g_data_057ac3d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ac3d2 = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  __this_00 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)__this_00,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Houses = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Houses,__this_00);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Ground = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Ground,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Wall = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Wall,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Gate = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Gate);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


