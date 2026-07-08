// Type: Settings.TitanCustomSkinSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/TitanCustomSkinSet.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/CustomSkins/TitanCustomSkinSet.cs  [CHANGED since prior version]
// --------------------------------

// Settings.TitanCustomSkinSet$$Validate
// il2cpp: bool Settings_TitanCustomSkinSet__Validate (Settings_TitanCustomSkinSet_o* __this, const MethodInfo* method);
// 0x3d90570

bool_conflict
Settings_TitanCustomSkinSet__Validate(Settings_TitanCustomSkinSet_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  Settings_ListSetting_IntSetting__o *pSVar3;
  
  if (DAT_05702726 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_IntSetting__get_Value);
    DAT_05702726 = '\x01';
  }
  pSVar1 = (__this->fields).Hairs;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    if ((pSVar2->fields)._size != 8) {
      return 0;
    }
    pSVar3 = (__this->fields).HairModels;
    if ((pSVar3 != (Settings_ListSetting_IntSetting__o *)0x0) &&
       (pSVar2 = (pSVar3->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
      if ((pSVar2->fields)._size != 8) {
        return 0;
      }
      pSVar1 = (__this->fields).Bodies;
      if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
         (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0))
      {
        if ((pSVar2->fields)._size != 8) {
          return 0;
        }
        pSVar1 = (__this->fields).Eyes;
        if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
           (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)
           ) {
          if ((pSVar2->fields)._size != 8) {
            return 0;
          }
          pSVar1 = (__this->fields).BodyModels;
          if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
             (pSVar2 = (pSVar1->fields)._value,
             pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
            if ((pSVar2->fields)._size != 8) {
              return 0;
            }
            pSVar1 = (__this->fields).Heads;
            if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
               (pSVar2 = (pSVar1->fields)._value,
               pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
              if ((pSVar2->fields)._size != 8) {
                return 0;
              }
              pSVar3 = (__this->fields).HeadModels;
              if ((pSVar3 != (Settings_ListSetting_IntSetting__o *)0x0) &&
                 (pSVar2 = (pSVar3->fields)._value,
                 pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
                return (bool_conflict)
                       CONCAT71((int7)((ulong)pSVar2 >> 8),(pSVar2->fields)._size == 8);
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.TitanCustomSkinSet$$.ctor
// il2cpp: void Settings_TitanCustomSkinSet___ctor (Settings_TitanCustomSkinSet_o* __this, const MethodInfo* method);
// 0x3d90680

void Settings_TitanCustomSkinSet___ctor(Settings_TitanCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_ListSetting_IntSetting__o *pSVar5;
  
  if (DAT_05702727 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_IntSetting);
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_IntSetting);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    DAT_05702727 = '\x01';
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
  (__this->fields).Hairs = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Hairs,pSVar3);
  pSVar4 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar4,-1,-1,0x7fffffff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ListSetting_IntSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_IntSetting);
  Settings_ListSetting<object>___ctor
            ((Settings_ListSetting_T__o *)pSVar5,(Il2CppObject *)pSVar4,8,MethodInfo_ListSetting_1_IntSetting);
  (__this->fields).HairModels = pSVar5;
  il2cpp_runtime_glue(&(__this->fields).HairModels,pSVar5);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting<object>___ctor
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Bodies = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Bodies,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting<object>___ctor
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).BodyModels = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).BodyModels,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting<object>___ctor
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Heads = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Heads,pSVar3);
  pSVar4 = (Settings_IntSetting_o *)il2cpp_runtime_glue(TypeInfo_IntSetting);
  Settings_IntSetting___ctor(pSVar4,-1,-1,0x7fffffff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ListSetting_IntSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_IntSetting);
  Settings_ListSetting<object>___ctor
            ((Settings_ListSetting_T__o *)pSVar5,(Il2CppObject *)pSVar4,8,MethodInfo_ListSetting_1_IntSetting);
  (__this->fields).HeadModels = pSVar5;
  il2cpp_runtime_glue(&(__this->fields).HeadModels,pSVar5);
  pSVar1 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting<object>___ctor
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Eyes = pSVar3;
  il2cpp_runtime_glue(&(__this->fields).Eyes);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


