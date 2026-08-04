// Type: Characters.BasePerk
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BasePerk.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Perks/BasePerk.cs
// --------------------------------

// Characters.BasePerk$$get_Name
// il2cpp: System_String_o* Characters_BasePerk__get_Name (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x42e6b90

System_String_o * Characters_BasePerk__get_Name(Characters_BasePerk_o *__this,MethodInfo *method)

{
  if (g_data_057ade7e == '\0') {
    il2cpp_runtime_helper_023445d0(&"Default");
    g_data_057ade7e = '\x01';
  }
  return "Default";
}


// Characters.BasePerk$$get_MaxPoints
// il2cpp: int32_t Characters_BasePerk__get_MaxPoints (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x42e6bc0

int32_t Characters_BasePerk__get_MaxPoints(Characters_BasePerk_o *__this,MethodInfo *method)

{
  return 1;
}


// Characters.BasePerk$$.ctor
// il2cpp: void Characters_BasePerk___ctor (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x42e6b00

void Characters_BasePerk___ctor(Characters_BasePerk_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  undefined8 extraout_RDX;
  
  if (g_data_057ade7f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_int);
    g_data_057ade7f = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_int);
  System_Collections_Generic_Dictionary_object__int____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_Int32);
  (__this->fields).Requirements = (System_Collections_Generic_Dictionary_string__int__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Requirements);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  vtableDispatch = (__this->klass->vtable)._6_SetupRequirements.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._6_SetupRequirements.method,extraout_RDX,vtableDispatch);
  return;
}


// Characters.BasePerk$$SetupRequirements
// il2cpp: void Characters_BasePerk__SetupRequirements (Characters_BasePerk_o* __this, const MethodInfo* method);
// 0x42e6bd0

void Characters_BasePerk__SetupRequirements(Characters_BasePerk_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BasePerk$$HasRequirements
// il2cpp: bool Characters_BasePerk__HasRequirements (Characters_BasePerk_o* __this, System_Collections_Generic_Dictionary_string__BasePerk__o* perks, const MethodInfo* method);
// 0x42e6be0

bool_conflict
Characters_BasePerk__HasRequirements
          (Characters_BasePerk_o *__this,System_Collections_Generic_Dictionary_string__BasePerk__o *perks,
          MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__int__o *pSVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar4;
  int32_t iVar5;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_05;
  Il2CppObject *pIVar6;
  undefined8 extraout_RAX;
  undefined8 uVar7;
  long *plVar8;
  undefined8 extraout_RAX_00;
  int iVar9;
  undefined1 auVar10 [12];
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *pSVar11;
  Il2CppType *pIVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *key;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (g_data_057ade80 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasePerk_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    g_data_057ade80 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pIVar13 = (Il2CppObject *)0x0;
  pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
  if ((pSVar2 != (System_Collections_Generic_Dictionary_object__int__o *)0x0) &&
     (__this_05 = System_Collections_Generic_Dictionary_object__int___get_Keys(pSVar2,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys),
     __this_05 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_KeyCollection_object__int___GetEnumerator
              ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)auStack_48,
               __this_05,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    if (perks == (System_Collections_Generic_Dictionary_string__BasePerk__o *)0x0) {
      __this_01.fields._index = auStack_48._8_4_;
      __this_01.fields._version = auStack_48._12_4_;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_48._0_8_
      ;
      __this_01.fields._currentKey = pIStack_38;
      bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext
                        (__this_01,(MethodInfo_3250140 *)&stack0xffffffffffffff98);
      iVar9 = 6;
      pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                auStack_48._0_8_;
      pIVar12 = (Il2CppType *)auStack_48._8_8_;
      pIVar13 = pIStack_38;
      if ((char)bVar4 != '\0') {
        il2cpp_runtime_helper_022b2c90();
label_042e6d74:
        iVar9 = 6;
        pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                  auStack_48._0_8_;
        pIVar12 = (Il2CppType *)auStack_48._8_8_;
        pIVar13 = pIStack_38;
      }
    }
    else {
      iVar9 = 5;
      pSVar11 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__c *)
                auStack_48._0_8_;
      pIVar12 = (Il2CppType *)auStack_48._8_8_;
      key = pIStack_38;
      do {
        __this_00.fields._8_8_ = pIVar12;
        __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
        __this_00.fields._currentKey = key;
        bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___MoveNext
                          (__this_00,(MethodInfo_3250140 *)&stack0xffffffffffffff98);
        auStack_48._0_8_ = pSVar11;
        auStack_48._8_8_ = pIVar12;
        pIStack_38 = key;
        if ((char)bVar4 == '\0') goto label_042e6d74;
        pIVar13 = key;
        bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)perks,key,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar4 == '\0') break;
        pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                           ((System_Collections_Generic_Dictionary_object__object__o *)perks,key,MethodInfo_BasePerk_get_Item)
        ;
        if (pIVar6 == (Il2CppObject *)0x0) {
label_042e6da5:
          il2cpp_runtime_helper_022b2c90();
          goto label_042e6daa;
        }
        pSVar2 = (System_Collections_Generic_Dictionary_object__int__o *)(__this->fields).Requirements;
        if (pSVar2 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_042e6da5;
        }
        iVar1 = *(int *)((long)&pIVar6[1].klass + 4);
        iVar5 = System_Collections_Generic_Dictionary_object__int___get_Item(pSVar2,key,MethodInfo_Int32_get_Item);
        key = pIVar13;
      } while (iVar5 <= iVar1);
    }
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
    __this_02.fields._currentKey = pIVar13;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
              (__this_02,(MethodInfo_3250130 *)&stack0xffffffffffffff98);
    uVar7 = extraout_RAX;
label_042e6d8b:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),iVar9 != 5);
  }
label_042e6daa:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar8 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar3 = *plVar8;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar12;
    __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
    __this_03.fields._currentKey = pIVar13;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
              (__this_03,(MethodInfo_3250130 *)&stack0xffffffffffffff98);
    iVar9 = 0;
    uVar7 = extraout_RAX_00;
    if (lVar3 == 0) goto label_042e6d8b;
    il2cpp_runtime_helper_022fefe0(lVar3);
  }
  __this_04.fields._8_8_ = pIVar12;
  __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
  __this_04.fields._currentKey = pIVar13;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__int___Dispose
            (__this_04,(MethodInfo_3250130 *)&stack0xffffffffffffff98);
  _Unwind_Resume(auVar10._0_8_);
}


// Characters.BasePerk$$Validate
// il2cpp: bool Characters_BasePerk__Validate (Characters_BasePerk_o* __this, System_Collections_Generic_Dictionary_string__BasePerk__o* perks, const MethodInfo* method);
// 0x42e6e70

bool_conflict
Characters_BasePerk__Validate
          (Characters_BasePerk_o *__this,System_Collections_Generic_Dictionary_string__BasePerk__o *perks,
          MethodInfo *method)

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


