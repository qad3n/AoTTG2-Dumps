// Type: Settings.KeybindSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/KeybindSetting.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/SettingTypes/KeybindSetting.cs  [CHANGED since prior version]
// --------------------------------

// Settings.KeybindSetting$$.ctor
// il2cpp: void Settings_KeybindSetting___ctor (Settings_KeybindSetting_o* __this, System_String_array* defaultKeyStrings, const MethodInfo* method);
// 0x3f07e30

void Settings_KeybindSetting___ctor
               (Settings_KeybindSetting_o *__this,System_String_array *defaultKeyStrings,
               MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_Collections_Generic_List_InputKey__o *__this_00;
  undefined8 extraout_RDX;
  
  if (DAT_05703c84 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_InputKey);
    il2cpp_init_method_metadata(&TypeInfo_List_InputKey);
    DAT_05703c84 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_InputKey__o *)il2cpp_runtime_glue(TypeInfo_List_InputKey);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Settings_InputKey);
  (__this->fields).InputKeys = __this_00;
  il2cpp_runtime_glue(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._defaultKeyStrings = defaultKeyStrings;
  il2cpp_runtime_glue(&(__this->fields)._defaultKeyStrings,defaultKeyStrings);
  vtable_dispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtable_dispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtable_dispatch)
  ;
  return;
}


// Settings.KeybindSetting$$ContainsEnter
// il2cpp: bool Settings_KeybindSetting__ContainsEnter (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x3f0ee70

bool_conflict
Settings_KeybindSetting__ContainsEnter(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  
  bVar1 = Settings_KeybindSetting__Contains(__this,0x10f,in_RDX);
  if ((char)bVar1 != '\0') {
    return CONCAT31((int3)((uint)bVar1 >> 8),1);
  }
  bVar1 = Settings_KeybindSetting__Contains(__this,0xd,method_00);
  return bVar1;
}


// Settings.KeybindSetting$$SetDefault
// il2cpp: void Settings_KeybindSetting__SetDefault (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x3f0f020

void Settings_KeybindSetting__SetDefault(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Settings_KeybindSetting__LoadFromStringArray(__this,(__this->fields)._defaultKeyStrings,in_RDX);
  return;
}


// Settings.KeybindSetting$$LoadFromStringArray
// il2cpp: void Settings_KeybindSetting__LoadFromStringArray (Settings_KeybindSetting_o* __this, System_String_array* keyStrings, const MethodInfo* method);
// 0x3f0f030

void Settings_KeybindSetting__LoadFromStringArray
               (Settings_KeybindSetting_o *__this,System_String_array *keyStrings,MethodInfo *method
               )

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_InputKey__o *pSVar3;
  System_String_o *keyStr;
  Settings_InputKey_array *pSVar4;
  long lVar5;
  Settings_InputKey_o *__this_00;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if (DAT_05703c85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_InputKey);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05703c85 = '\x01';
  }
  pSVar3 = (__this->fields).InputKeys;
  if (pSVar3 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    if (keyStrings != (System_String_array *)0x0) {
      if ((int)keyStrings->max_length < 1) {
        return;
      }
      uVar6 = 0;
      if ((keyStrings->max_length & 0xffffffff) != 0) {
        do {
          keyStr = keyStrings->m_Items[uVar6];
          auVar7 = il2cpp_runtime_glue(TypeInfo_InputKey);
          __this_00 = auVar7._0_8_;
          Settings_InputKey___ctor(__this_00,keyStr,auVar7._8_8_);
          lVar5 = MethodInfo_Void_Add;
          pSVar3 = (__this->fields).InputKeys;
          if (pSVar3 == (System_Collections_Generic_List_InputKey__o *)0x0) goto LAB_03f0f16f;
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar3->fields)._items;
          if (pSVar4 == (Settings_InputKey_array *)0x0) goto LAB_03f0f16f;
          uVar2 = (pSVar3->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = __this_00;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,__this_00);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)__this_00
                       ,*(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          uVar6 = uVar6 + 1;
          uVar2 = (uint)keyStrings->max_length;
          if ((long)(int)uVar2 <= (long)uVar6) {
            return;
          }
        } while (uVar6 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03f0f16f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.KeybindSetting$$ToString
// il2cpp: System_String_o* Settings_KeybindSetting__ToString (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x3f0f180

System_String_o *
Settings_KeybindSetting__ToString(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_InputKey__o *__this_00;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_04;
  Il2CppObject *item;
  System_String_array *value;
  System_String_o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *pIVar9;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  if (DAT_05703c86 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_InputKey_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&" / ");
    DAT_05703c86 = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_String);
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
    pIVar8 = (Il2CppType *)local_38._8_8_;
    pIVar9 = local_28;
    if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
      while (__this_01.fields._8_8_ = pIVar8,
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar7,
            __this_01.fields._current = pIVar9,
            bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
            (char)bVar5 != '\0') {
        if (pIVar9 == (Il2CppObject *)0x0) goto LAB_03f0f3d9;
        if ((*(char *)((long)&pIVar9[1].klass + 4) == '\0') || (*(int *)&pIVar9[1].monitor != 0)) {
          (*pIVar9->klass->vtable[3].methodPtr)(pIVar9,pIVar9->klass->vtable[3].method);
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
    else {
      while (__this_02.fields._8_8_ = pIVar8,
            __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar7,
            __this_02.fields._current = pIVar9,
            bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
            (char)bVar5 != '\0') {
        if (pIVar9 == (Il2CppObject *)0x0) {
LAB_03f0f3d9:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((*(char *)((long)&pIVar9[1].klass + 4) == '\0') || (*(int *)&pIVar9[1].monitor != 0)) {
          item = (Il2CppObject *)
                 (*pIVar9->klass->vtable[3].methodPtr)(pIVar9,pIVar9->klass->vtable[3].method);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_04->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_04->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_04->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_04,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    __this_03.fields._8_8_ = pIVar8;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar7;
    __this_03.fields._current = pIVar9;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
    if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar6 = "None";
      if ((__this_04->fields)._size != 0) {
        value = (System_String_array *)
                System_Collections_Generic_List<object>__ToArray(__this_04,MethodInfo_String___ToArray);
        pSVar6 = System_String__Join(" / ",value,(MethodInfo *)0x0);
      }
      return pSVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.KeybindSetting$$Contains
// il2cpp: bool Settings_KeybindSetting__Contains (Settings_KeybindSetting_o* __this, Settings_InputKey_o* key, const MethodInfo* method);
// 0x3f0f4b0

bool_conflict
Settings_KeybindSetting__Contains
          (Settings_KeybindSetting_o *__this,Settings_InputKey_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  char cVar1;
  bool_conflict bVar2;
  undefined8 extraout_RAX;
  byte bVar3;
  int iVar4;
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  Il2CppObject *pIVar7;
  
  if (DAT_05703c87 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_InputKey_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    DAT_05703c87 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
  do {
    __this_01.fields._8_8_ = pIVar6;
    __this_01.fields._list = pSVar5;
    __this_01.fields._current = pIVar7;
    bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
    if ((char)bVar2 == '\0') {
      iVar4 = 5;
      bVar3 = 0;
      goto LAB_03f0f580;
    }
    if (pIVar7 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    cVar1 = (*pIVar7->klass->vtable[0].methodPtr)(pIVar7,key,pIVar7->klass->vtable[0].method);
  } while (cVar1 == '\0');
  bVar3 = 1;
  iVar4 = 4;
LAB_03f0f580:
  __this_02.fields._8_8_ = pIVar6;
  __this_02.fields._list = pSVar5;
  __this_02.fields._current = pIVar7;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
  return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),iVar4 == 4 & bVar3);
}


// Settings.KeybindSetting$$Contains
// il2cpp: bool Settings_KeybindSetting__Contains (Settings_KeybindSetting_o* __this, int32_t key, const MethodInfo* method);
// 0x3f0eea0

bool_conflict
Settings_KeybindSetting__Contains(Settings_KeybindSetting_o *__this,int32_t key,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar1;
  undefined8 extraout_RAX;
  byte bVar2;
  int iVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  Il2CppObject *pIVar6;
  
  if (DAT_05703c88 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_InputKey_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    DAT_05703c88 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
  do {
    __this_01.fields._8_8_ = pIVar5;
    __this_01.fields._list = pSVar4;
    __this_01.fields._current = pIVar6;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
    if ((char)bVar1 == '\0') {
      iVar3 = 5;
      bVar2 = 0;
      goto LAB_03f0ef6c;
    }
    if (pIVar6 == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  } while (((*(char *)((long)&pIVar6[1].klass + 4) != '\0') ||
           (*(char *)((long)&pIVar6[1].monitor + 4) != '\0')) || (*(int *)&pIVar6[1].klass != key));
  bVar2 = 1;
  iVar3 = 4;
LAB_03f0ef6c:
  __this_02.fields._8_8_ = pIVar5;
  __this_02.fields._list = pSVar4;
  __this_02.fields._current = pIVar6;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
  return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),iVar3 == 4 & bVar2);
}


// Settings.KeybindSetting$$GetKeyDown
// il2cpp: bool Settings_KeybindSetting__GetKeyDown (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x3f0f640

bool_conflict
Settings_KeybindSetting__GetKeyDown
          (Settings_KeybindSetting_o *__this,bool_conflict cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_InputKey__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar1;
  undefined8 in_RCX;
  byte bVar2;
  int iVar3;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  Settings_InputKey_o *__this_04;
  
  if (DAT_05703c89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_InputKey_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    DAT_05703c89 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  __this_04 = (Settings_InputKey_o *)0x0;
  if ((char)cl == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f0f78d;
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)__this,MethodInfo_Boolean_Contains);
    if ((char)bVar1 != '\0') {
      return 0;
    }
  }
  __this_01 = (__this->fields).InputKeys;
  if (__this_01 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    do {
      __this_02.fields._8_8_ = pIVar5;
      __this_02.fields._list = pSVar4;
      __this_02.fields._current = (Il2CppObject *)__this_04;
      method_00 = MethodInfo_Boolean_MoveNext;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar1 == '\0') {
        iVar3 = 6;
        bVar2 = 0;
        goto LAB_03f0f763;
      }
      if (__this_04 == (Settings_InputKey_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = Settings_InputKey__GetKeyDown(__this_04,method_00);
    } while ((char)bVar1 == '\0');
    bVar2 = 1;
    iVar3 = 5;
LAB_03f0f763:
    __this_03.fields._8_8_ = pIVar5;
    __this_03.fields._list = pSVar4;
    __this_03.fields._current = (Il2CppObject *)__this_04;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    return (bool_conflict)CONCAT71((int7)((ulong)in_RCX >> 8),iVar3 == 5 & bVar2);
  }
LAB_03f0f78d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.KeybindSetting$$GetKey
// il2cpp: bool Settings_KeybindSetting__GetKey (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x3f0f820

bool_conflict
Settings_KeybindSetting__GetKey
          (Settings_KeybindSetting_o *__this,bool_conflict cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_List_InputKey__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  bool_conflict bVar3;
  undefined8 in_RCX;
  byte bVar5;
  int iVar6;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Settings_InputKey_o *__this_03;
  undefined8 uVar4;
  
  if (DAT_05703c8a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_InputKey_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    DAT_05703c8a = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  __this_03 = (Settings_InputKey_o *)0x0;
  if ((char)cl == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
    if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f0f9bd;
    bVar2 = System_Collections_Generic_HashSet<object>__Contains
                      (pSVar1,(Il2CppObject *)__this,MethodInfo_Boolean_Contains);
    if ((char)bVar2 != '\0') {
      return 0;
    }
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x80)
  ;
  if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
LAB_03f0f9bd:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar2 = System_Collections_Generic_HashSet<object>__Contains
                    (pSVar1,(Il2CppObject *)__this,MethodInfo_Boolean_Contains);
  uVar4 = CONCAT71((int7)((ulong)in_RCX >> 8),1);
  bVar3 = (bool_conflict)uVar4;
  if ((char)bVar2 == '\0') {
    __this_00 = (__this->fields).InputKeys;
    if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) goto LAB_03f0f9bd;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    do {
      __this_01.fields._8_8_ = pIVar8;
      __this_01.fields._list = pSVar7;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      method_00 = MethodInfo_Boolean_MoveNext;
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar2 == '\0') {
        iVar6 = 7;
        bVar5 = 0;
        goto LAB_03f0f993;
      }
      if (__this_03 == (Settings_InputKey_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar2 = Settings_InputKey__GetKey(__this_03,method_00);
    } while ((char)bVar2 == '\0');
    bVar5 = 1;
    iVar6 = 6;
LAB_03f0f993:
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._list = pSVar7;
    __this_02.fields._current = (Il2CppObject *)__this_03;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),iVar6 == 6 & bVar5);
  }
  return bVar3;
}


// Settings.KeybindSetting$$GetKeyUp
// il2cpp: bool Settings_KeybindSetting__GetKeyUp (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x3f0fa50

bool_conflict
Settings_KeybindSetting__GetKeyUp
          (Settings_KeybindSetting_o *__this,bool_conflict cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_InputKey__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar1;
  undefined8 in_RCX;
  byte bVar2;
  int iVar3;
  MethodInfo *method_00;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  Settings_InputKey_o *__this_04;
  
  if (DAT_05703c8b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_InputKey_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    DAT_05703c8b = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  __this_04 = (Settings_InputKey_o *)0x0;
  if ((char)cl == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                 (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78);
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f0fb9d;
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this_00,(Il2CppObject *)__this,MethodInfo_Boolean_Contains);
    if ((char)bVar1 != '\0') {
      return 0;
    }
  }
  __this_01 = (__this->fields).InputKeys;
  if (__this_01 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    do {
      __this_02.fields._8_8_ = pIVar5;
      __this_02.fields._list = pSVar4;
      __this_02.fields._current = (Il2CppObject *)__this_04;
      method_00 = MethodInfo_Boolean_MoveNext;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
      if ((char)bVar1 == '\0') {
        iVar3 = 6;
        bVar2 = 0;
        goto LAB_03f0fb73;
      }
      if (__this_04 == (Settings_InputKey_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = Settings_InputKey__GetKeyUp(__this_04,method_00);
    } while ((char)bVar1 == '\0');
    bVar2 = 1;
    iVar3 = 5;
LAB_03f0fb73:
    __this_03.fields._8_8_ = pIVar5;
    __this_03.fields._list = pSVar4;
    __this_03.fields._current = (Il2CppObject *)__this_04;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    return (bool_conflict)CONCAT71((int7)((ulong)in_RCX >> 8),iVar3 == 5 & bVar2);
  }
LAB_03f0fb9d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.KeybindSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_KeybindSetting__SerializeToJsonObject (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x3f0fc30

SimpleJSONFixed_JSONNode_o *
Settings_KeybindSetting__SerializeToJsonObject(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONArray_o *__this_04;
  System_String_o *pSVar2;
  SimpleJSONFixed_JSONString_o *pSVar3;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  Il2CppObject *pIVar6;
  
  if (DAT_05703c8c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_InputKey_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
    DAT_05703c8c = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  pIVar6 = (Il2CppObject *)0x0;
  __this_04 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_04,(MethodInfo *)0x0);
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_Settings_InputKey__GetEnume);
  if (__this_04 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    __this_02.fields._8_8_ = pIVar5;
    __this_02.fields._list = pSVar4;
    __this_02.fields._current = pIVar6;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
    if ((char)bVar1 != '\0') {
      if (pIVar6 != (Il2CppObject *)0x0) {
        pSVar2 = (System_String_o *)
                 (*pIVar6->klass->vtable[3].methodPtr)(pIVar6,pIVar6->klass->vtable[3].method);
        pSVar3 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
        SimpleJSONFixed_JSONString___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_03f0fdac:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this_01.fields._8_8_ = pIVar5, __this_01.fields._list = pSVar4,
          __this_01.fields._current = pIVar6,
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8),
          (char)bVar1 != '\0') {
      if (pIVar6 == (Il2CppObject *)0x0) goto LAB_03f0fdac;
      pSVar2 = (System_String_o *)
               (*pIVar6->klass->vtable[3].methodPtr)(pIVar6,pIVar6->klass->vtable[3].method);
      pSVar3 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
      SimpleJSONFixed_JSONString___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
      (*(__this_04->klass->vtable)._21_Add.methodPtr)
                (__this_04,pSVar3,(__this_04->klass->vtable)._21_Add.method);
    }
  }
  __this_03.fields._8_8_ = pIVar5;
  __this_03.fields._list = pSVar4;
  __this_03.fields._current = pIVar6;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
  return (SimpleJSONFixed_JSONNode_o *)__this_04;
}


// Settings.KeybindSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_KeybindSetting__DeserializeFromJsonObject (Settings_KeybindSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x3f0fea0

void Settings_KeybindSetting__DeserializeFromJsonObject
               (Settings_KeybindSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,
               MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  SimpleJSONFixed_JSONNode_c *pSVar4;
  System_Object_array *pSVar5;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_03;
  long lVar6;
  bool_conflict bVar7;
  System_Collections_Generic_List_object__o *__this_04;
  long *plVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  Il2CppObject *item;
  System_String_array *keyStrings;
  MethodInfo *method_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar10;
  undefined8 in_stack_ffffffffffffff28;
  Il2CppMethodPointer pIVar11;
  Il2CppMethodPointer pIVar12;
  InvokerMethod pIVar13;
  char *pcVar14;
  Il2CppClass *pIVar15;
  Il2CppType *pIVar16;
  SimpleJSONFixed_JSONNode_o *pSVar17;
  Il2CppMethodPointer pIStack_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod pIStack_68;
  char *pcStack_60;
  Il2CppClass *pIStack_58;
  Il2CppType *pIStack_50;
  SimpleJSONFixed_JSONNode_o *pSStack_48;
  
  if (DAT_05703c8d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05703c8d = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_04,MethodInfo_List_1_System_String);
  if (json != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar8 = (long *)(*(json->klass->vtable)._45_get_AsArray.methodPtr)
                               (json,(json->klass->vtable)._45_get_AsArray.method);
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x338))(&pIStack_78,plVar8,*(undefined8 *)(*plVar8 + 0x340));
      __this_00.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
      __this_00.fields._0_8_ = in_stack_ffffffffffffff28;
      __this_00.fields.m_Object.fields._8_8_ = pIStack_78;
      __this_00.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
      __this_00.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_68;
      __this_00.fields.m_Object.fields._32_8_ = pcStack_60;
      __this_00.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_58;
      __this_00.fields.m_Array.fields._8_8_ = pIStack_50;
      __this_00.fields.m_Array.fields._current = pSStack_48;
      bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar7 == '\0') {
        if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f1016f;
      }
      else {
        if (__this_04 == (System_Collections_Generic_List_object__o *)0x0) {
          __this_03.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
          __this_03.fields._0_8_ = in_stack_ffffffffffffff28;
          __this_03.fields.m_Object.fields._8_8_ = pIStack_78;
          __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
          __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_68;
          __this_03.fields.m_Object.fields._32_8_ = pcStack_60;
          __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_58
          ;
          __this_03.fields.m_Array.fields._8_8_ = pIStack_50;
          __this_03.fields.m_Array.fields._current = pSStack_48;
          SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(SVar10,(MethodInfo *)0x0);
          if (pSVar9 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar4 = pSVar9->klass;
            bVar2 = (TypeInfo_JSONString->_2).naturalAligment;
            if ((bVar2 <= (pSVar4->_2).naturalAligment) &&
               ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_JSONString)) {
              (*(pSVar4->vtable)._9_get_Value.methodPtr)
                        (pSVar9,(pSVar4->vtable)._9_get_Value.method);
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_03f101b3:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pSVar9);
          }
          goto LAB_03f1016f;
        }
        pIVar11 = pIStack_78;
        pIVar12 = pIStack_70;
        pIVar13 = pIStack_68;
        pcVar14 = pcStack_60;
        pIVar15 = pIStack_58;
        pIVar16 = pIStack_50;
        pSVar17 = pSStack_48;
        do {
          __this_02.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
          __this_02.fields._0_8_ = in_stack_ffffffffffffff28;
          __this_02.fields.m_Object.fields._8_8_ = pIVar11;
          __this_02.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar12;
          __this_02.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar13;
          __this_02.fields.m_Object.fields._32_8_ = pcVar14;
          __this_02.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar15;
          __this_02.fields.m_Array.fields._8_8_ = pIVar16;
          __this_02.fields.m_Array.fields._current = pSVar17;
          SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                             (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(SVar10,(MethodInfo *)0x0);
          if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_03f1016f;
          pSVar4 = pSVar9->klass;
          bVar2 = (TypeInfo_JSONString->_2).naturalAligment;
          if (((pSVar4->_2).naturalAligment < bVar2) ||
             ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONString)) goto LAB_03f101b3;
          item = (Il2CppObject *)
                 (*(pSVar4->vtable)._9_get_Value.methodPtr)
                           (pSVar9,(pSVar4->vtable)._9_get_Value.method);
          lVar6 = MethodInfo_Void_Add;
          piVar1 = &(__this_04->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this_04->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) goto LAB_03f1016f;
          uVar3 = (__this_04->fields)._size;
          if (uVar3 < (uint)pSVar5->max_length) {
            (__this_04->fields)._size = uVar3 + 1;
            pSVar5->m_Items[(int)uVar3] = item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar3,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_04,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          __this_01.fields.m_Object.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
          __this_01.fields._0_8_ = in_stack_ffffffffffffff28;
          __this_01.fields.m_Object.fields._8_8_ = pIVar11;
          __this_01.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIVar12;
          __this_01.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar13;
          __this_01.fields.m_Object.fields._32_8_ = pcVar14;
          __this_01.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIVar15;
          __this_01.fields.m_Array.fields._8_8_ = pIVar16;
          __this_01.fields.m_Array.fields._current = pSVar17;
          bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
        } while ((char)bVar7 != '\0');
      }
      keyStrings = (System_String_array *)
                   System_Collections_Generic_List<object>__ToArray(__this_04,MethodInfo_String___ToArray);
      Settings_KeybindSetting__LoadFromStringArray(__this,keyStrings,method_00);
      return;
    }
  }
LAB_03f1016f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


