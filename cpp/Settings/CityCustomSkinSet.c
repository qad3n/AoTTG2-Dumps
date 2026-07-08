// Type: Settings.CityCustomSkinSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/CityCustomSkinSet.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/CustomSkins/CityCustomSkinSet.cs  [CHANGED since prior version]
// --------------------------------

// Settings.CityCustomSkinSet$$Validate
// il2cpp: bool Settings_CityCustomSkinSet__Validate (Settings_CityCustomSkinSet_o* __this, const MethodInfo* method);
// 0x3d8f520

bool_conflict
Settings_CityCustomSkinSet__Validate(Settings_CityCustomSkinSet_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  
  if (DAT_0570271c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    DAT_0570271c = '\x01';
  }
  pSVar1 = (__this->fields).Houses;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    return (bool_conflict)CONCAT71((int7)((ulong)pSVar2 >> 8),(pSVar2->fields)._size == 8);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.CityCustomSkinSet$$.ctor
// il2cpp: void Settings_CityCustomSkinSet___ctor (Settings_CityCustomSkinSet_o* __this, const MethodInfo* method);
// 0x3d8f570

void Settings_CityCustomSkinSet___ctor(Settings_CityCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *__this_00;
  
  if (DAT_0570271d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_0570271d = '\x01';
  }
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  __this_00 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting<object>___ctor
            ((Settings_ListSetting_T__o *)__this_00,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Houses = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Houses,__this_00);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Ground = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Ground,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Wall = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Wall,pSVar2);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  (__this->fields).Gate = pSVar2;
  il2cpp_runtime_glue(&(__this->fields).Gate);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


