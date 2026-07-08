// Type: Settings.InputKey
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/InputKey.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/InputKey.cs  [CHANGED since prior version]
// --------------------------------

// Settings.InputKey$$.ctor
// il2cpp: void Settings_InputKey___ctor (Settings_InputKey_o* __this, const MethodInfo* method);
// 0x3f0d6d0

void Settings_InputKey___ctor(Settings_InputKey_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_KeyCode__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  
  if (DAT_05703c79 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_KeyCode);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_KeyCode);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"3");
    il2cpp_init_method_metadata(&"2");
    il2cpp_init_method_metadata(&"9");
    il2cpp_init_method_metadata(&"6");
    il2cpp_init_method_metadata(&"7");
    il2cpp_init_method_metadata(&"4");
    il2cpp_init_method_metadata(&"8");
    il2cpp_init_method_metadata(&"1");
    il2cpp_init_method_metadata(&"5");
    il2cpp_init_method_metadata(&"0");
    DAT_05703c79 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_KeyCode__o *)il2cpp_runtime_glue(TypeInfo_HashSet_KeyCode);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_UnityEngine_KeyCode);
  if (__this_00 != (System_Collections_Generic_HashSet_KeyCode__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x130,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x134,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x132,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x12f,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x133,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x131,MethodInfo_Boolean_Add);
    (__this->fields).ModifierKeys = __this_00;
    il2cpp_runtime_glue(&(__this->fields).ModifierKeys,__this_00);
    __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
    System_Collections_Generic_HashSet<object>___ctor(__this_01,MethodInfo_HashSet_1_System_String);
    if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Add(__this_01,"0",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"1",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"2",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"3",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"4",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"5",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"6",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"7",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"8",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"9",MethodInfo_Boolean_Add);
      (__this->fields).AlphaDigits = (System_Collections_Generic_HashSet_string__o *)__this_01;
      il2cpp_runtime_glue(&(__this->fields).AlphaDigits);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.InputKey$$.ctor
// il2cpp: void Settings_InputKey___ctor (Settings_InputKey_o* __this, System_String_o* keyStr, const MethodInfo* method);
// 0x3f0d980

void Settings_InputKey___ctor
               (Settings_InputKey_o *__this,System_String_o *keyStr,MethodInfo *method)

{
  System_Collections_Generic_HashSet_KeyCode__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  MethodInfo *method_00;
  
  if (DAT_05703c7a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_UnityEngine_KeyCode);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_KeyCode);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"3");
    il2cpp_init_method_metadata(&"2");
    il2cpp_init_method_metadata(&"9");
    il2cpp_init_method_metadata(&"6");
    il2cpp_init_method_metadata(&"7");
    il2cpp_init_method_metadata(&"4");
    il2cpp_init_method_metadata(&"8");
    il2cpp_init_method_metadata(&"1");
    il2cpp_init_method_metadata(&"5");
    il2cpp_init_method_metadata(&"0");
    DAT_05703c7a = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_KeyCode__o *)il2cpp_runtime_glue(TypeInfo_HashSet_KeyCode);
  System_Collections_Generic_HashSet<Int32Enum>___ctor
            ((System_Collections_Generic_HashSet_T__o *)__this_00,MethodInfo_HashSet_1_UnityEngine_KeyCode);
  if (__this_00 != (System_Collections_Generic_HashSet_KeyCode__o *)0x0) {
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x130,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x134,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x132,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x12f,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x133,MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<Int32Enum>__Add
              ((System_Collections_Generic_HashSet_T__o *)__this_00,0x131,MethodInfo_Boolean_Add);
    (__this->fields).ModifierKeys = __this_00;
    il2cpp_runtime_glue(&(__this->fields).ModifierKeys,__this_00);
    __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
    System_Collections_Generic_HashSet<object>___ctor(__this_01,MethodInfo_HashSet_1_System_String);
    if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Add(__this_01,"0",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"1",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"2",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"3",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"4",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"5",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"6",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"7",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"8",MethodInfo_Boolean_Add);
      System_Collections_Generic_HashSet<object>__Add(__this_01,"9",MethodInfo_Boolean_Add);
      (__this->fields).AlphaDigits = (System_Collections_Generic_HashSet_string__o *)__this_01;
      il2cpp_runtime_glue(&(__this->fields).AlphaDigits);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      Settings_InputKey__LoadFromString(__this,keyStr,method_00);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.InputKey$$MatchesKeyCode
// il2cpp: bool Settings_InputKey__MatchesKeyCode (Settings_InputKey_o* __this, int32_t key, const MethodInfo* method);
// 0x3f0de00

bool_conflict
Settings_InputKey__MatchesKeyCode(Settings_InputKey_o *__this,int32_t key,MethodInfo *method)

{
  undefined8 in_RAX;
  
  if ((char)(__this->fields)._isSpecial != '\0') {
    return 0;
  }
  if ((char)(__this->fields)._isModifier != '\0') {
    return 0;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),(__this->fields)._key == key);
}


// Settings.InputKey$$ReadNextInput
// il2cpp: bool Settings_InputKey__ReadNextInput (Settings_InputKey_o* __this, const MethodInfo* method);
// 0x3f0de20

/* WARNING: Removing unreachable block (ram,0x03f0e56a) */

bool_conflict Settings_InputKey__ReadNextInput(Settings_InputKey_o *__this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  System_Collections_Generic_HashSet_KeyCode__o *pSVar5;
  System_Collections_IEnumerator_c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  undefined1 uVar8;
  System_RuntimeTypeHandle_o SVar9;
  char cVar10;
  bool_conflict bVar11;
  uint uVar12;
  System_Type_o *pSVar13;
  System_Array_o *pSVar14;
  System_Collections_IEnumerator_o *pSVar15;
  VirtualInvokeData *pVVar16;
  long *plVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  int32_t iVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar26;
  Il2CppType *pIVar27;
  int32_t key;
  undefined4 uVar28;
  undefined1 local_48 [24];
  
  if (DAT_05703c7b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyCode_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_UnityEngine_KeyCode__Get);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeRef_KeyCode);
    il2cpp_init_method_metadata(&TypeInfo_KeyCode);
    il2cpp_init_method_metadata(&TypeRef_SpecialKey);
    il2cpp_init_method_metadata(&TypeInfo_SpecialKey);
    DAT_05703c7b = '\x01';
  }
  *(undefined1 *)&(__this->fields)._isModifier = 0;
  pSVar5 = (__this->fields).ModifierKeys;
  if (pSVar5 == (System_Collections_Generic_HashSet_KeyCode__o *)0x0) goto LAB_03f0e565;
  System_Collections_Generic_HashSet<Int32Enum>__GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
             (System_Collections_Generic_HashSet_T__o *)pSVar5,MethodInfo_HashSet_1_T__Enumerator_UnityEngine_KeyCode__Get);
  uVar28 = SUB84(local_48._16_8_,4);
  pSVar26 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48._0_8_;
  pIVar27 = (Il2CppType *)local_48._8_8_;
  iVar21 = (int32_t)local_48._16_8_;
  while (key = iVar21, __this_00.fields._8_8_ = pIVar27,
        __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar26,
        __this_00.fields._current._0_4_ = key, __this_00.fields._current._4_4_ = uVar28,
        bVar11 = System_Collections_Generic_HashSet_Enumerator<Int32Enum>__MoveNext
                           (__this_00,(MethodInfo_3181AF0 *)&stack0xffffffffffffff98),
        (char)bVar11 != '\0') {
    iVar21 = key;
    bVar11 = UnityEngine_Input__GetKey(key,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      (__this->fields)._modifier = key;
      *(undefined1 *)&(__this->fields)._isModifier = 1;
    }
  }
  __this_01.fields._8_8_ = pIVar27;
  __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar26;
  __this_01.fields._current._0_4_ = key;
  __this_01.fields._current._4_4_ = uVar28;
  System_Collections_Generic_HashSet_Enumerator<Int32Enum>__Dispose
            (__this_01,(MethodInfo_3181AE0 *)&stack0xffffffffffffff98);
  SVar9 = TypeRef_KeyCode;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar13 = System_Type__GetTypeFromHandle(SVar9,(MethodInfo *)0x0);
  if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar14 = System_Enum__GetValues(pSVar13,(MethodInfo *)0x0);
  if (pSVar14 == (System_Array_o *)0x0) goto LAB_03f0e565;
  pSVar15 = System_Array__GetEnumerator(pSVar14,(MethodInfo *)0x0);
  if (pSVar15 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    do {
      pSVar6 = pSVar15->klass;
      uVar1._0_1_ = (pSVar6->_2).rank;
      uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar23) == TypeInfo_IEnumerator) {
            pVVar16 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar23);
            goto LAB_03f0e053;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar23);
      }
      pVVar16 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar15,TypeInfo_IEnumerator,0);
LAB_03f0e053:
      cVar10 = (*pVVar16->methodPtr)(pSVar15,pVVar16->method);
      if (cVar10 == '\0') {
        iVar22 = 10;
        uVar8 = 0;
        goto LAB_03f0e1e2;
      }
      pSVar6 = pSVar15->klass;
      uVar2._0_1_ = (pSVar6->_2).rank;
      uVar2._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar23) == TypeInfo_IEnumerator) {
            pVVar16 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar23) + 1);
            goto LAB_03f0e0d8;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar23);
      }
      pVVar16 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar15,TypeInfo_IEnumerator,1);
LAB_03f0e0d8:
      plVar17 = (long *)(*pVVar16->methodPtr)(pSVar15,pVVar16->method);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(long *)(*plVar17 + 0x40) != *(long *)(TypeInfo_KeyCode + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(plVar17);
      }
      piVar18 = (int *)il2cpp_glue_022c7330();
      iVar22 = *piVar18;
    } while (iVar22 - 0x141U < 2);
    pSVar5 = (__this->fields).ModifierKeys;
    if (pSVar5 == (System_Collections_Generic_HashSet_KeyCode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar11 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                       ((System_Collections_Generic_HashSet_T__o *)pSVar5,iVar22,MethodInfo_Boolean_Contains);
    if (((char)bVar11 != '\0') &&
       (bVar11 = UnityEngine_Input__GetKeyUp(iVar22,(MethodInfo *)0x0), (char)bVar11 != '\0')) {
      *(undefined1 *)&(__this->fields)._isModifier = 0;
      (__this->fields)._key = iVar22;
      goto LAB_03f0e1d2;
    }
    pSVar5 = (__this->fields).ModifierKeys;
    if (pSVar5 == (System_Collections_Generic_HashSet_KeyCode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar11 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                       ((System_Collections_Generic_HashSet_T__o *)pSVar5,iVar22,MethodInfo_Boolean_Contains);
    if (((iVar22 == 0x143) && ((char)bVar11 != '\x01')) &&
       (bVar11 = UnityEngine_Input__GetKeyUp(0x143,(MethodInfo *)0x0), (char)bVar11 != '\0')) {
      (__this->fields)._key = 0x143;
      goto LAB_03f0e1d2;
    }
    pSVar5 = (__this->fields).ModifierKeys;
    if (pSVar5 == (System_Collections_Generic_HashSet_KeyCode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    bVar11 = System_Collections_Generic_HashSet<Int32Enum>__Contains
                       ((System_Collections_Generic_HashSet_T__o *)pSVar5,iVar22,MethodInfo_Boolean_Contains);
  } while ((iVar22 == 0x143 || (char)bVar11 != '\0') ||
          (bVar11 = UnityEngine_Input__GetKeyDown(iVar22,(MethodInfo *)0x0), (char)bVar11 == '\0'));
  (__this->fields)._key = iVar22;
LAB_03f0e1d2:
  *(undefined1 *)&(__this->fields)._isSpecial = 0;
  uVar8 = 1;
  iVar22 = 8;
LAB_03f0e1e2:
  plVar17 = (long *)il2cpp_runtime_glue();
  uVar20 = 0;
  if (plVar17 != (long *)0x0) {
    lVar23 = *plVar17;
    if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
      lVar24 = 0;
      do {
        if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IDisposable) {
          puVar19 = (undefined8 *)
                    (lVar23 + (long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + 0x138);
          goto LAB_03f0e25d;
        }
        lVar24 = lVar24 + 0x10;
      } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
    }
    puVar19 = (undefined8 *)il2cpp_runtime_glue(plVar17,TypeInfo_IDisposable,0);
LAB_03f0e25d:
    uVar20 = (*(code *)*puVar19)(plVar17);
  }
  SVar9.fields.value = TypeRef_SpecialKey.fields.value;
  uVar12 = (uint)uVar20;
  if (iVar22 == 10) {
LAB_03f0e285:
    if (*(int *)(DAT_05711100 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar13 = System_Type__GetTypeFromHandle(SVar9,(MethodInfo *)0x0);
    if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar14 = System_Enum__GetValues(pSVar13,(MethodInfo *)0x0);
    if (pSVar14 == (System_Array_o *)0x0) {
LAB_03f0e565:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = System_Array__GetEnumerator(pSVar14,(MethodInfo *)0x0);
    if (pSVar15 == (System_Collections_IEnumerator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_03f0e310:
    do {
      pSVar6 = pSVar15->klass;
      uVar3._0_1_ = (pSVar6->_2).rank;
      uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar23) == TypeInfo_IEnumerator) {
            pVVar16 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar23);
            goto LAB_03f0e363;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar23);
      }
      pVVar16 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar15,TypeInfo_IEnumerator,0);
LAB_03f0e363:
      cVar10 = (*pVVar16->methodPtr)(pSVar15,pVVar16->method);
      if (cVar10 == '\0') {
        iVar22 = 0xd;
        goto LAB_03f0e4a1;
      }
      pSVar6 = pSVar15->klass;
      uVar4._0_1_ = (pSVar6->_2).rank;
      uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
      if ((ulong)uVar4 != 0) {
        pIVar7 = (pSVar6->_1).interfaceOffsets;
        lVar23 = 0;
        do {
          if (*(long *)((long)&pIVar7->interfaceType + lVar23) == TypeInfo_IEnumerator) {
            pVVar16 = pSVar6->vtable + (*(int *)((long)&pIVar7->offset + lVar23) + 1);
            goto LAB_03f0e3e8;
          }
          lVar23 = lVar23 + 0x10;
        } while ((ulong)uVar4 << 4 != lVar23);
      }
      pVVar16 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar15,TypeInfo_IEnumerator,1);
LAB_03f0e3e8:
      plVar17 = (long *)(*pVVar16->methodPtr)(pSVar15,pVVar16->method);
      if (plVar17 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(long *)(*plVar17 + 0x40) != *(long *)(TypeInfo_SpecialKey + 0x40)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(plVar17);
      }
      piVar18 = (int *)il2cpp_glue_022c7330();
      iVar22 = *piVar18;
      if (DAT_05703c7e == '\0') {
        il2cpp_init_method_metadata();
        DAT_05703c7e = '\x01';
      }
      if (iVar22 != 2) {
        if ((iVar22 == 1) &&
           (fVar25 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0), 0.0 < fVar25)) {
          iVar21 = 1;
          goto LAB_03f0e48f;
        }
        goto LAB_03f0e310;
      }
      fVar25 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
    } while (0.0 <= fVar25);
    iVar21 = 2;
LAB_03f0e48f:
    (__this->fields)._special = iVar21;
    *(undefined1 *)&(__this->fields)._isSpecial = 1;
    uVar8 = 1;
    iVar22 = 8;
LAB_03f0e4a1:
    plVar17 = (long *)il2cpp_runtime_glue(pSVar15,TypeInfo_IDisposable);
    uVar20 = 0;
    if (plVar17 != (long *)0x0) {
      lVar23 = *plVar17;
      if ((ulong)*(ushort *)(lVar23 + 0x12e) != 0) {
        lVar24 = 0;
        do {
          if (*(long *)(*(long *)(lVar23 + 0xb0) + lVar24) == TypeInfo_IDisposable) {
            puVar19 = (undefined8 *)
                      (lVar23 + (long)*(int *)(*(long *)(lVar23 + 0xb0) + 8 + lVar24) * 0x10 + 0x138
                      );
            goto LAB_03f0e50d;
          }
          lVar24 = lVar24 + 0x10;
        } while ((ulong)*(ushort *)(lVar23 + 0x12e) << 4 != lVar24);
      }
      puVar19 = (undefined8 *)il2cpp_runtime_glue(plVar17,TypeInfo_IDisposable,0);
LAB_03f0e50d:
      uVar20 = (*(code *)*puVar19)(plVar17,puVar19[1]);
    }
    if (iVar22 != 8) {
      uVar12 = 0;
      goto LAB_03f0e52b;
    }
  }
  else if (iVar22 != 8) {
    if (iVar22 != 0) goto LAB_03f0e52b;
    goto LAB_03f0e285;
  }
  uVar12 = (uint)CONCAT71((int7)((ulong)uVar20 >> 8),uVar8);
LAB_03f0e52b:
  return uVar12 & 0xffffff01;
}


// Settings.InputKey$$GetKeyDown
// il2cpp: bool Settings_InputKey__GetKeyDown (Settings_InputKey_o* __this, const MethodInfo* method);
// 0x3f0e910

bool_conflict Settings_InputKey__GetKeyDown(Settings_InputKey_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar4;
  bool bVar5;
  float fVar6;
  
  bVar3 = (__this->fields)._isSpecial;
  if ((char)(__this->fields)._isModifier != '\0') {
    bVar5 = false;
    bVar2 = UnityEngine_Input__GetKey((__this->fields)._modifier,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto LAB_03f0e934;
  }
  bVar5 = true;
LAB_03f0e934:
  if ((char)bVar3 == '\0') {
    if (bVar5) {
      bVar3 = UnityEngine_Input__GetKeyDown((__this->fields)._key,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  else if (bVar5) {
    iVar1 = (__this->fields)._special;
    if (DAT_05703c7e == '\0') {
      il2cpp_init_method_metadata(&"Mouse ScrollWheel");
      DAT_05703c7e = '\x01';
    }
    if (iVar1 == 2) {
      fVar6 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
      bVar5 = 0.0 < fVar6;
      uVar4 = extraout_RAX_00;
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      fVar6 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
      bVar5 = fVar6 < 0.0;
      uVar4 = extraout_RAX;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),!bVar5 && fVar6 != 0.0);
  }
  return 0;
}


// Settings.InputKey$$GetKey
// il2cpp: bool Settings_InputKey__GetKey (Settings_InputKey_o* __this, const MethodInfo* method);
// 0x3f0e9e0

bool_conflict Settings_InputKey__GetKey(Settings_InputKey_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar4;
  bool bVar5;
  float fVar6;
  
  bVar3 = (__this->fields)._isSpecial;
  if ((char)(__this->fields)._isModifier != '\0') {
    bVar5 = false;
    bVar2 = UnityEngine_Input__GetKey((__this->fields)._modifier,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto LAB_03f0ea04;
  }
  bVar5 = true;
LAB_03f0ea04:
  if ((char)bVar3 == '\0') {
    if (bVar5) {
      bVar3 = UnityEngine_Input__GetKey((__this->fields)._key,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  else if (bVar5) {
    iVar1 = (__this->fields)._special;
    if (DAT_05703c7e == '\0') {
      il2cpp_init_method_metadata(&"Mouse ScrollWheel");
      DAT_05703c7e = '\x01';
    }
    if (iVar1 == 2) {
      fVar6 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
      bVar5 = 0.0 < fVar6;
      uVar4 = extraout_RAX_00;
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      fVar6 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
      bVar5 = fVar6 < 0.0;
      uVar4 = extraout_RAX;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),!bVar5 && fVar6 != 0.0);
  }
  return 0;
}


// Settings.InputKey$$GetKeyUp
// il2cpp: bool Settings_InputKey__GetKeyUp (Settings_InputKey_o* __this, const MethodInfo* method);
// 0x3f0ea90

bool_conflict Settings_InputKey__GetKeyUp(Settings_InputKey_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  undefined8 uVar4;
  bool bVar5;
  float fVar6;
  
  bVar3 = (__this->fields)._isSpecial;
  if ((char)(__this->fields)._isModifier != '\0') {
    bVar5 = false;
    bVar2 = UnityEngine_Input__GetKey((__this->fields)._modifier,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto LAB_03f0eab4;
  }
  bVar5 = true;
LAB_03f0eab4:
  if ((char)bVar3 == '\0') {
    if (bVar5) {
      bVar3 = UnityEngine_Input__GetKeyUp((__this->fields)._key,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  else if (bVar5) {
    iVar1 = (__this->fields)._special;
    if (DAT_05703c7e == '\0') {
      il2cpp_init_method_metadata(&"Mouse ScrollWheel");
      DAT_05703c7e = '\x01';
    }
    if (iVar1 == 2) {
      fVar6 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
      bVar5 = 0.0 < fVar6;
      uVar4 = extraout_RAX_00;
    }
    else {
      if (iVar1 != 1) {
        return 0;
      }
      fVar6 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
      bVar5 = fVar6 < 0.0;
      uVar4 = extraout_RAX;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),!bVar5 && fVar6 != 0.0);
  }
  return 0;
}


// Settings.InputKey$$IsWheel
// il2cpp: bool Settings_InputKey__IsWheel (Settings_InputKey_o* __this, const MethodInfo* method);
// 0x3f0eb40

bool_conflict Settings_InputKey__IsWheel(Settings_InputKey_o *__this,MethodInfo *method)

{
  uint uVar1;
  
  if ((char)(__this->fields)._isSpecial != '\0') {
    uVar1 = (__this->fields)._special - 1;
    return CONCAT31((int3)(uVar1 >> 8),uVar1 < 2);
  }
  return 0;
}


// Settings.InputKey$$IsNone
// il2cpp: bool Settings_InputKey__IsNone (Settings_InputKey_o* __this, const MethodInfo* method);
// 0x3f0eb60

bool_conflict Settings_InputKey__IsNone(Settings_InputKey_o *__this,MethodInfo *method)

{
  undefined8 in_RAX;
  
  if ((char)(__this->fields)._isSpecial != '\0') {
    return (bool_conflict)CONCAT71((int7)((ulong)in_RAX >> 8),(__this->fields)._special == 0);
  }
  return 0;
}


// Settings.InputKey$$ToString
// il2cpp: System_String_o* Settings_InputKey__ToString (Settings_InputKey_o* __this, const MethodInfo* method);
// 0x3f0eb80

System_String_o * Settings_InputKey__ToString(Settings_InputKey_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  ulong uVar2;
  System_String_o *__this_00;
  System_String_o *str0;
  undefined8 *puVar3;
  System_Enum_o *__this_01;
  System_Enum_o SStack_40;
  int32_t iStack_30;
  System_Enum_o SStack_28;
  
  if (DAT_05703c7c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeyCode);
    il2cpp_init_method_metadata(&TypeInfo_SpecialKey);
    il2cpp_init_method_metadata(&"+");
    il2cpp_init_method_metadata(&"Alpha");
    DAT_05703c7c = '\x01';
  }
  uVar2 = (ulong)(byte)(__this->fields)._isSpecial;
  __this_01 = &SStack_28;
  if (uVar2 == 0) {
    __this_01 = &SStack_40;
  }
  puVar3 = &TypeInfo_SpecialKey;
  if (uVar2 == 0) {
    puVar3 = &TypeInfo_KeyCode;
  }
  __this_01->klass = (System_Enum_c *)*puVar3;
  __this_01->monitor = (void *)0xffffffffffffffff;
  *(int32_t *)&__this_01[1].klass = (&(__this->fields)._key)[uVar2 * 2];
  __this_00 = System_Enum__ToString(__this_01,(MethodInfo *)0x0);
  if (__this_00 != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(__this_00,"Alpha",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      __this_00 = System_String__Substring(__this_00,5,(MethodInfo *)0x0);
    }
    if ((char)(__this->fields)._isModifier != '\0') {
      SStack_40.klass = TypeInfo_KeyCode;
      SStack_40.monitor = (void *)0xffffffffffffffff;
      iStack_30 = (__this->fields)._modifier;
      str0 = System_Enum__ToString(&SStack_40,(MethodInfo *)0x0);
      __this_00 = System_String__Concat(str0,"+",__this_00,(MethodInfo *)0x0);
    }
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.InputKey$$Equals
// il2cpp: bool Settings_InputKey__Equals (Settings_InputKey_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x3f0eca0

bool_conflict
Settings_InputKey__Equals(Settings_InputKey_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  System_String_o *b;
  
  a = (System_String_o *)
      (*(__this->klass->vtable)._3_ToString.methodPtr)
                (__this,(__this->klass->vtable)._3_ToString.method);
  if (obj != (Il2CppObject *)0x0) {
    b = (System_String_o *)(*obj->klass->vtable[3].methodPtr)(obj,obj->klass->vtable[3].method);
    bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.InputKey$$LoadFromString
// il2cpp: void Settings_InputKey__LoadFromString (Settings_InputKey_o* __this, System_String_o* serializedKey, const MethodInfo* method);
// 0x3f0dc50

void Settings_InputKey__LoadFromString
               (Settings_InputKey_o *__this,System_String_o *serializedKey,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  undefined1 uVar2;
  int32_t iVar3;
  bool_conflict bVar4;
  System_String_array *pSVar5;
  System_String_o *value;
  
  if (DAT_05703c7d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_KeyCode_ToEnum_KeyCode);
    il2cpp_init_method_metadata(&MethodInfo_SpecialKey_ToEnum_SpecialKey);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&"Alpha");
    DAT_05703c7d = '\x01';
  }
  *(undefined1 *)&(__this->fields)._isModifier = 0;
  if (serializedKey != (System_String_o *)0x0) {
    pSVar5 = System_String__Split(serializedKey,0x2b,0,(MethodInfo *)0x0);
    if (pSVar5 != (System_String_array *)0x0) {
      iVar1 = (int)pSVar5->max_length;
      if (iVar1 == 0) {
LAB_03f0ddf9:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      value = pSVar5->m_Items[0];
      if (1 < iVar1) {
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar3 = MiscExtensions__ToEnum<Int32Enum>(value,1,MethodInfo_KeyCode_ToEnum_KeyCode);
        (__this->fields)._modifier = iVar3;
        *(undefined1 *)&(__this->fields)._isModifier = 1;
        if ((uint)pSVar5->max_length < 2) goto LAB_03f0ddf9;
        value = pSVar5->m_Items[1];
      }
      if (value != (System_String_o *)0x0) {
        if ((value->fields)._stringLength == 1) {
          __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields).AlphaDigits;
          if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f0ddf4;
          bVar4 = System_Collections_Generic_HashSet<object>__Contains
                            (__this_00,(Il2CppObject *)value,MethodInfo_Boolean_Contains);
          if ((char)bVar4 != '\0') {
            value = System_String__Concat("Alpha",value,(MethodInfo *)0x0);
          }
        }
        if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
          il2cpp_init_class();
        }
        iVar3 = MiscExtensions__ToEnum<Int32Enum>(value,1,MethodInfo_KeyCode_ToEnum_KeyCode);
        if ((iVar3 - 0x141U < 2) || (iVar3 == 0)) {
          if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
            il2cpp_init_class();
          }
          iVar3 = MiscExtensions__ToEnum<Int32Enum>(value,1,MethodInfo_SpecialKey_ToEnum_SpecialKey);
          (__this->fields)._special = iVar3;
          uVar2 = 1;
        }
        else {
          (__this->fields)._key = iVar3;
          uVar2 = 0;
        }
        *(undefined1 *)&(__this->fields)._isSpecial = uVar2;
        return;
      }
    }
  }
LAB_03f0ddf4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.InputKey$$GetModifier
// il2cpp: bool Settings_InputKey__GetModifier (Settings_InputKey_o* __this, const MethodInfo* method);
// 0x3f0e9c0

bool_conflict Settings_InputKey__GetModifier(Settings_InputKey_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  bool_conflict bVar1;
  
  if ((char)(__this->fields)._isModifier != '\0') {
    bVar1 = UnityEngine_Input__GetKey((__this->fields)._modifier,(MethodInfo *)0x0);
    return bVar1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// Settings.InputKey$$GetSpecial
// il2cpp: bool Settings_InputKey__GetSpecial (Settings_InputKey_o* __this, int32_t specialKey, const MethodInfo* method);
// 0x3f0e8a0

bool_conflict
Settings_InputKey__GetSpecial(Settings_InputKey_o *__this,int32_t specialKey,MethodInfo *method)

{
  undefined8 extraout_RAX;
  undefined8 extraout_RAX_00;
  float fVar1;
  
  if (DAT_05703c7e == '\0') {
    il2cpp_init_method_metadata(&"Mouse ScrollWheel");
    DAT_05703c7e = '\x01';
  }
  if (specialKey != 2) {
    if (specialKey == 1) {
      fVar1 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
      return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),0.0 < fVar1);
    }
    return 0;
  }
  fVar1 = UnityEngine_Input__GetAxis("Mouse ScrollWheel",(MethodInfo *)0x0);
  return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX_00 >> 8),fVar1 < 0.0);
}


