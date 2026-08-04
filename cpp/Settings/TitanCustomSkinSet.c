// Type: Settings.TitanCustomSkinSet
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/TitanCustomSkinSet.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/TitanCustomSkinSet.cs
// --------------------------------

// Settings.TitanCustomSkinSet$$Validate
// il2cpp: bool Settings_TitanCustomSkinSet__Validate (Settings_TitanCustomSkinSet_o* __this, const MethodInfo* method);
// 0x4086340

bool_conflict Settings_TitanCustomSkinSet__Validate(Settings_TitanCustomSkinSet_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_T__o *pSVar1;
  System_String_o *pSVar2;
  bool_conflict extraout_EAX;
  Settings_BoolSetting_o *__this_00;
  Settings_StringSetting_o *pSVar3;
  Settings_ListSetting_StringSetting__o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_ListSetting_IntSetting__o *pSVar6;
  Settings_TitanCustomSkinSet_o *__this_01;
  
  __this_01 = __this;
  if (g_data_057ac3db == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    __this_01 = (Settings_TitanCustomSkinSet_o *)&MethodInfo_List_1_Settings_IntSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac3db = '\x01';
  }
  pSVar4 = (__this->fields).Hairs;
  if ((pSVar4 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar1 = (pSVar4->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
    if ((pSVar1->fields)._size != 8) {
      return 0;
    }
    pSVar6 = (__this->fields).HairModels;
    if ((pSVar6 != (Settings_ListSetting_IntSetting__o *)0x0) &&
       (pSVar1 = (pSVar6->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
      if ((pSVar1->fields)._size != 8) {
        return 0;
      }
      pSVar4 = (__this->fields).Bodies;
      if ((pSVar4 != (Settings_ListSetting_StringSetting__o *)0x0) &&
         (pSVar1 = (pSVar4->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
        if ((pSVar1->fields)._size != 8) {
          return 0;
        }
        pSVar4 = (__this->fields).Eyes;
        if ((pSVar4 != (Settings_ListSetting_StringSetting__o *)0x0) &&
           (pSVar1 = (pSVar4->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
          if ((pSVar1->fields)._size != 8) {
            return 0;
          }
          pSVar4 = (__this->fields).BodyModels;
          if ((pSVar4 != (Settings_ListSetting_StringSetting__o *)0x0) &&
             (pSVar1 = (pSVar4->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
            if ((pSVar1->fields)._size != 8) {
              return 0;
            }
            pSVar4 = (__this->fields).Heads;
            if ((pSVar4 != (Settings_ListSetting_StringSetting__o *)0x0) &&
               (pSVar1 = (pSVar4->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
              if ((pSVar1->fields)._size != 8) {
                return 0;
              }
              pSVar6 = (__this->fields).HeadModels;
              if ((pSVar6 != (Settings_ListSetting_IntSetting__o *)0x0) &&
                 (pSVar1 = (pSVar6->fields)._value, pSVar1 != (System_Collections_Generic_List_T__o *)0x0)) {
                return (bool_conflict)CONCAT71((int7)((ulong)pSVar1 >> 8),(pSVar1->fields)._size == 8);
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ac3dc = '\x01';
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
  (__this_01->fields).Hairs = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).Hairs,pSVar4);
  pSVar5 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar5,-1,-1,0x7fffffff,(MethodInfo *)0x0);
  pSVar6 = (Settings_ListSetting_IntSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_IntSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar6,(Il2CppObject *)pSVar5,8,MethodInfo_ListSetting_1_IntSetting);
  (__this_01->fields).HairModels = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).HairModels,pSVar6);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar2,200,(MethodInfo *)0x0);
  pSVar4 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar4,(Il2CppObject *)pSVar3,8,MethodInfo_ListSetting_1_StringSetting);
  (__this_01->fields).Bodies = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).Bodies,pSVar4);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar2,200,(MethodInfo *)0x0);
  pSVar4 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar4,(Il2CppObject *)pSVar3,8,MethodInfo_ListSetting_1_StringSetting);
  (__this_01->fields).BodyModels = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).BodyModels,pSVar4);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar2,200,(MethodInfo *)0x0);
  pSVar4 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar4,(Il2CppObject *)pSVar3,8,MethodInfo_ListSetting_1_StringSetting);
  (__this_01->fields).Heads = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).Heads,pSVar4);
  pSVar5 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar5,-1,-1,0x7fffffff,(MethodInfo *)0x0);
  pSVar6 = (Settings_ListSetting_IntSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_IntSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar6,(Il2CppObject *)pSVar5,8,MethodInfo_ListSetting_1_IntSetting);
  (__this_01->fields).HeadModels = pSVar6;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).HeadModels,pSVar6);
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar3 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar3,pSVar2,200,(MethodInfo *)0x0);
  pSVar4 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar4,(Il2CppObject *)pSVar3,8,MethodInfo_ListSetting_1_StringSetting);
  (__this_01->fields).Eyes = pSVar4;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields).Eyes);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this_01,(MethodInfo *)0x0);
  return extraout_EAX;
}


// Settings.TitanCustomSkinSet$$.ctor
// il2cpp: void Settings_TitanCustomSkinSet___ctor (Settings_TitanCustomSkinSet_o* __this, const MethodInfo* method);
// 0x4086450

void Settings_TitanCustomSkinSet___ctor(Settings_TitanCustomSkinSet_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  Settings_BoolSetting_o *__this_00;
  Settings_StringSetting_o *pSVar2;
  Settings_ListSetting_StringSetting__o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_ListSetting_IntSetting__o *pSVar5;
  
  if (g_data_057ac3dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_IntSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    g_data_057ac3dc = '\x01';
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
  (__this->fields).Hairs = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Hairs,pSVar3);
  pSVar4 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar4,-1,-1,0x7fffffff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ListSetting_IntSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_IntSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar5,(Il2CppObject *)pSVar4,8,MethodInfo_ListSetting_1_IntSetting);
  (__this->fields).HairModels = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HairModels,pSVar5);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Bodies = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Bodies,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).BodyModels = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).BodyModels,pSVar3);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Heads = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Heads,pSVar3);
  pSVar4 = (Settings_IntSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_IntSetting);
  Settings_IntSetting___ctor_40f39a0(pSVar4,-1,-1,0x7fffffff,(MethodInfo *)0x0);
  pSVar5 = (Settings_ListSetting_IntSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_IntSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar5,(Il2CppObject *)pSVar4,8,MethodInfo_ListSetting_1_IntSetting);
  (__this->fields).HeadModels = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this->fields).HeadModels,pSVar5);
  pSVar1 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  pSVar2 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar2,pSVar1,200,(MethodInfo *)0x0);
  pSVar3 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
  Settings_ListSetting_object____ctor_3520f80
            ((Settings_ListSetting_T__o *)pSVar3,(Il2CppObject *)pSVar2,8,MethodInfo_ListSetting_1_StringSetting);
  (__this->fields).Eyes = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Eyes);
  Settings_BaseSetSetting___ctor((Settings_BaseSetSetting_o *)__this,(MethodInfo *)0x0);
  return;
}


