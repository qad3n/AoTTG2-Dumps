// Type: Settings.ForestCustomSkinSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/ForestCustomSkinSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/ForestCustomSkinSet.cs
// --------------------------------

// Settings.ForestCustomSkinSet$$Validate
// il2cpp: bool Settings_ForestCustomSkinSet__Validate (Settings_ForestCustomSkinSet_o* __this, const MethodInfo* method);
// 0x40857f0

bool_conflict
Settings_ForestCustomSkinSet__Validate(Settings_ForestCustomSkinSet_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *pSVar1;
  System_String_o *pSVar2;
  bool_conflict extraout_EAX;
  Settings_BoolSetting_o *__this_00;
  Settings_StringSetting_o *pSVar3;
  Settings_ListSetting_StringSetting__o *pSVar4;
  Settings_ForestCustomSkinSet_o *__this_01;
  
  __this_01 = __this;
  if (g_data_057ac3d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_01 = (Settings_ForestCustomSkinSet_o *)&MethodInfo_List_1_Settings_StringSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac3d5 = '\x01';
  }
  pSVar4 = (__this->fields).TreeTrunks;
  if ((pSVar4 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar1 = (pSVar4->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
    if ((pSVar1->fields)._size != 8) {
      return 0;
    }
    pSVar4 = (__this->fields).TreeLeafs;
    if ((pSVar4 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (pSVar1 = (pSVar4->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
      return (bool_conflict)CONCAT71((int7)((ulong)pSVar1 >> 8),(pSVar1->fields)._size == 8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ac3d6 = '\x01';
  }
  __this_00 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(__this_00,0,(MethodInfo *)0x0);
  (__this_01->fields).RandomizedPairs = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).RandomizedPairs,__this_00);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar2,200,(MethodInfo *)0x0);
  pSVar4 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar4,(Il2CppObject *)pSVar3,8,MethodInfo_ListSetting_1_StringSetting);
  (__this_01->fields).TreeTrunks = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).TreeTrunks,pSVar4);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar2,200,(MethodInfo *)0x0);
  pSVar4 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar4,(Il2CppObject *)pSVar3,8,MethodInfo_ListSetting_1_StringSetting);
  (__this_01->fields).TreeLeafs = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).TreeLeafs,pSVar4);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar2,200,(MethodInfo *)0x0);
  (__this_01->fields).Ground = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).Ground);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this_01,(MethodInfo *)0x0);
  return extraout_EAX;
}


// Settings.ForestCustomSkinSet$$.ctor
// il2cpp: void Settings_ForestCustomSkinSet___ctor (Settings_ForestCustomSkinSet_o* __this, const MethodInfo* method);
// 0x4085860

void Settings_ForestCustomSkinSet___ctor(Settings_ForestCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  
  if (g_data_057ac3d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ac3d6 = '\x01';
  }
  __this_00 = (Settings_BoolSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor_40f3960(__this_00,0,(MethodInfo *)0x0);
  (__this->fields).RandomizedPairs = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).RandomizedPairs,__this_00);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).TreeTrunks = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TreeTrunks,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).TreeLeafs = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).TreeLeafs,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Ground = pSVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Ground);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


