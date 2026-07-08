// Type: Settings.ForestCustomSkinSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/ForestCustomSkinSet.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/CustomSkins/ForestCustomSkinSet.cs  [CHANGED since prior version]
// --------------------------------

// Settings.ForestCustomSkinSet$$Validate
// il2cpp: bool Settings_ForestCustomSkinSet__Validate (Settings_ForestCustomSkinSet_o* __this, const MethodInfo* method);
// 0x3d8fa20

bool_conflict
Settings_ForestCustomSkinSet__Validate(Settings_ForestCustomSkinSet_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  
  if (DAT_05702720 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    DAT_05702720 = '\x01';
  }
  pSVar1 = (__this->fields).TreeTrunks;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    if ((pSVar2->fields)._size != 8) {
      return 0;
    }
    pSVar1 = (__this->fields).TreeLeafs;
    if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
      return (bool_conflict)CONCAT71((int7)((ulong)pSVar2 >> 8),(pSVar2->fields)._size == 8);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.ForestCustomSkinSet$$.ctor
// il2cpp: void Settings_ForestCustomSkinSet___ctor (Settings_ForestCustomSkinSet_o* __this, const MethodInfo* method);
// 0x3d8fa90

void Settings_ForestCustomSkinSet___ctor(Settings_ForestCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  
  if (DAT_05702721 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_05702721 = '\x01';
  }
  __this_00 = (Settings_BoolSetting_o *)il2cpp_runtime_glue(TypeInfo_BoolSetting);
  Settings_BoolSetting___ctor(__this_00,0,(MethodInfo *)0x0);
  (__this->fields).RandomizedPairs = __this_00;
  il2cpp_runtime_glue(&(__this->fields).RandomizedPairs,__this_00);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting<object>___ctor
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).TreeTrunks = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).TreeTrunks,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting<object>___ctor
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).TreeLeafs = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).TreeLeafs,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Ground = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Ground);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


