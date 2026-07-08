// Type: Characters.BasePerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/BasePerk.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Perks/BasePerk.cs  [CHANGED since prior version]
// --------------------------------

// Characters.BasePerk$$get_Name
// il2cpp: System_String_o* Characters_BasePerk__get_Name (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x3fda2d0

System_String_o * Characters_BasePerk__get_Name(Characters_BasePerk_o *__this,MethodInfo *method)

{
  if (DAT_05704110 == '\0') {
    il2cpp_init_method_metadata(&"Default");
    DAT_05704110 = '\x01';
  }
  return "Default";
}


// Characters.BasePerk$$get_MaxPoints
// il2cpp: int32_t Characters_BasePerk__get_MaxPoints (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x3fda300

int32_t Characters_BasePerk__get_MaxPoints(Characters_BasePerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.BasePerk$$.ctor
// il2cpp: void Characters_BasePerk___ctor (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x3fda240

void Characters_BasePerk___ctor(Characters_BasePerk_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  undefined8 extraout_RDX;
  
  if (DAT_05704111 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__int);
    DAT_05704111 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__int);
  System_Collections_Generic_Dictionary<object__int>___ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Int32);
  (__this->fields).Requirements = (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
  il2cpp_runtime_glue(&(__this->fields).Requirements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  vtable_dispatch = (__this->klass->vtable)._6_SetupRequirements.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._6_SetupRequirements.method,extraout_RDX,
             vtable_dispatch);
  return;
}


// Characters.BasePerk$$SetupRequirements
// il2cpp: void Characters_BasePerk__SetupRequirements (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x3fda310

void Characters_BasePerk__SetupRequirements(Characters_BasePerk_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BasePerk$$HasRequirements
// il2cpp: bool Characters_BasePerk__HasRequirements (Characters_BasePerk_o* __this, System_Collections_Generic_Dictionary_string__BasePerk__o* perks, const MethodInfo* method);
// 0x3fda320

bool_conflict
Characters_BasePerk__HasRequirements
          (Characters_BasePerk_o *__this,
          System_Collections_Generic_Dictionary_string__BasePerk__o *perks,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__int__o *pSVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar3;
  int32_t iVar4;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_03;
  Il2CppObject *pIVar5;
  undefined8 extraout_RAX;
  int iVar6;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *key;
  Il2CppObject *pIVar9;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (DAT_05704112 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_BasePerk_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    DAT_05704112 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
  if ((pSVar2 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) ||
     (__this_03 = System_Collections_Generic_Dictionary<object__int>__get_Keys(pSVar2,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S),
     __this_03 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_KeyCollection<object__int>__GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
             auStack_48,__this_03,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
  if (perks == (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0) {
    __this_01.fields._index = auStack_48._8_4_;
    __this_01.fields._version = auStack_48._12_4_;
    __this_01.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_48._0_8_;
    __this_01.fields._currentKey = pIStack_38;
    bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__int>__MoveNext
                      (__this_01,(MethodInfo_31CEE70 *)&stack0xffffffffffffff98);
    iVar6 = 6;
    pSVar7 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
             auStack_48._0_8_;
    pIVar8 = (Il2CppType *)auStack_48._8_8_;
    pIVar9 = pIStack_38;
    if ((char)bVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    iVar6 = 5;
    pSVar7 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
             auStack_48._0_8_;
    pIVar8 = (Il2CppType *)auStack_48._8_8_;
    key = pIStack_38;
    do {
      __this_00.fields._8_8_ = pIVar8;
      __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7
      ;
      __this_00.fields._currentKey = key;
      bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__int>__MoveNext
                        (__this_00,(MethodInfo_31CEE70 *)&stack0xffffffffffffff98);
      pIVar9 = key;
      if ((char)bVar3 == '\0') {
        iVar6 = 6;
        break;
      }
      bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)perks,key,
                         MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 == '\0') break;
      pIVar5 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)perks,key,
                          MethodInfo_BasePerk_get_Item);
      if (pIVar5 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements
      ;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      iVar1 = *(int *)((long)&pIVar5[1].klass + 4);
      iVar4 = System_Collections_Generic_Dictionary<object__int>__get_Item(pSVar2,key,MethodInfo_Int32_get_Item);
      key = pIVar9;
    } while (iVar4 <= iVar1);
  }
  __this_02.fields._8_8_ = pIVar8;
  __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
  __this_02.fields._currentKey = pIVar9;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__int>__Dispose
            (__this_02,(MethodInfo_31CEE60 *)&stack0xffffffffffffff98);
  return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),iVar6 != 5);
}


// Characters.BasePerk$$Validate
// il2cpp: bool Characters_BasePerk__Validate (Characters_BasePerk_o* __this, System_Collections_Generic_Dictionary_string__BasePerk__o* perks, const MethodInfo* method);
// 0x3fda5b0

bool_conflict
Characters_BasePerk__Validate
          (Characters_BasePerk_o *__this,
          System_Collections_Generic_Dictionary_string__BasePerk__o *perks,MethodInfo *method)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = (*(__this->klass->vtable)._7_HasRequirements.methodPtr)
                    (__this,perks,(__this->klass->vtable)._7_HasRequirements.method);
  iVar3 = (__this->fields).CurrPoints;
  if (cVar1 == '\0') {
    bVar4 = iVar3 != 0;
    iVar3 = 0;
    if (bVar4) {
      return 0;
    }
  }
  else if (iVar3 < 0) {
    return 0;
  }
  uVar2 = (*(__this->klass->vtable)._5_get_MaxPoints.methodPtr)
                    (__this,(__this->klass->vtable)._5_get_MaxPoints.method);
  return (bool_conflict)CONCAT71((int7)((ulong)uVar2 >> 8),iVar3 <= (int)uVar2);
}


