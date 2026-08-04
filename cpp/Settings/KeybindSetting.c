// Type: Settings.KeybindSetting
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/KeybindSetting.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/KeybindSetting.cs
// --------------------------------

// Settings.KeybindSetting$$.ctor
// il2cpp: void Settings_KeybindSetting___ctor (Settings_KeybindSetting_o* __this, System_String_array* defaultKeyStrings, const MethodInfo* method);
// 0x41f38c0

void Settings_KeybindSetting___ctor
               (Settings_KeybindSetting_o *__this,System_String_array *defaultKeyStrings,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_Collections_Generic_List_InputKey__o *__this_00;
  undefined8 extraout_RDX;
  
  if (g_data_057ad8ac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_InputKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_InputKey);
    g_data_057ad8ac = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_InputKey__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_InputKey);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Settings_InputKey);
  (__this->fields).InputKeys = __this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._defaultKeyStrings = defaultKeyStrings;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._defaultKeyStrings,defaultKeyStrings);
  vtableDispatch = (__this->klass->vtable)._4_SetDefault.methodPtr;
  (*vtableDispatch)
            (__this,(__this->klass->vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
  return;
}


// Settings.KeybindSetting$$ContainsEnter
// il2cpp: bool Settings_KeybindSetting__ContainsEnter (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x4201230

bool_conflict Settings_KeybindSetting__ContainsEnter(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *in_RDX;
  MethodInfo *method_00;
  
  bVar1 = Settings_KeybindSetting__Contains_4101260(__this,0x10f,in_RDX);
  if ((char)bVar1 != '\0') {
    return CONCAT31((int3)((uint)bVar1 >> 8),1);
  }
  bVar1 = Settings_KeybindSetting__Contains_4101260(__this,0xd,method_00);
  return bVar1;
}


// Settings.KeybindSetting$$SetDefault
// il2cpp: void Settings_KeybindSetting__SetDefault (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x42013e0

void Settings_KeybindSetting__SetDefault(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  MethodInfo *in_RDX;
  
  Settings_KeybindSetting__LoadFromStringArray(__this,(__this->fields)._defaultKeyStrings,in_RDX);
  return;
}


// Settings.KeybindSetting$$LoadFromStringArray
// il2cpp: void Settings_KeybindSetting__LoadFromStringArray (Settings_KeybindSetting_o* __this, System_String_array* keyStrings, const MethodInfo* method);
// 0x42013f0

void Settings_KeybindSetting__LoadFromStringArray
               (Settings_KeybindSetting_o *__this,System_String_array *keyStrings,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_InputKey__o *pSVar3;
  System_Object_array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar6;
  System_Collections_Generic_List_object__o *__this_05;
  System_String_array *value;
  long *plVar7;
  Il2CppRGCTXData *unaff_RBX;
  Settings_InputKey_array *__this_06;
  _union_249689 unaff_R12;
  ulong uVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppType *pIVar12;
  Il2CppObject *pIVar13;
  Il2CppObject *pIVar14;
  undefined1 local_70 [16];
  Il2CppObject *local_60;
  Il2CppRGCTXData *pIStack_58;
  _union_249689 _Stack_50;
  Settings_KeybindSetting_o *pSStack_48;
  System_String_array *pSStack_40;
  
  __this_06 = (Settings_InputKey_array *)__this;
  if (g_data_057ad8ad == '\0') {
    pSStack_40 = (System_String_array *)0x4201416;
    il2cpp_runtime_helper_023445d0(&TypeInfo_InputKey);
    pSStack_40 = (System_String_array *)0x4201422;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    __this_06 = (Settings_InputKey_array *)&MethodInfo_Void_Clear;
    pSStack_40 = (System_String_array *)0x420142e;
    il2cpp_runtime_helper_023445d0();
    g_data_057ad8ad = '\x01';
  }
  pSVar3 = (__this->fields).InputKeys;
  if (pSVar3 == (System_Collections_Generic_List_InputKey__o *)0x0) {
label_0420152f:
    pSStack_40 = (System_String_array *)0x4201534;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      __this_06 = (pSVar3->fields)._items;
      pSStack_40 = (System_String_array *)0x4201461;
      System_Array__Clear((System_Array_o *)__this_06,0,length,(MethodInfo *)0x0);
    }
    if (keyStrings == (System_String_array *)0x0) goto label_0420152f;
    if ((int)keyStrings->max_length < 1) {
      return;
    }
    uVar8 = 0;
    if ((keyStrings->max_length & 0xffffffff) != 0) {
      do {
        unaff_R12 = (_union_249689)((_union_249689 *)(keyStrings->m_Items + uVar8))->genericMethod;
        pSStack_40 = (System_String_array *)0x42014d2;
        auVar10 = il2cpp_runtime_helper_023052d0(TypeInfo_InputKey);
        unaff_RBX = auVar10._0_8_;
        pSStack_40 = (System_String_array *)0x42014e0;
        Settings_InputKey___ctor_40ffd90
                  ((Settings_InputKey_o *)unaff_RBX,unaff_R12.genericMethod,auVar10._8_8_);
        lVar5 = MethodInfo_Void_Add;
        __this_06 = (Settings_InputKey_array *)(__this->fields).InputKeys;
        if (__this_06 == (Settings_InputKey_array *)0x0) goto label_0420152f;
        piVar1 = (int32_t *)((long)&__this_06->max_length + 4);
        *piVar1 = *piVar1 + 1;
        pSVar4 = ((System_Collections_Generic_List_object__Fields *)&__this_06->bounds)->_items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_0420152f;
        uVar2 = (uint)__this_06->max_length;
        if (uVar2 < (uint)pSVar4->max_length) {
          *(uint *)&__this_06->max_length = uVar2 + 1;
          __this_06 = (Settings_InputKey_array *)(pSVar4->m_Items + (int)uVar2);
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)unaff_RBX;
          pSStack_40 = (System_String_array *)0x420151e;
          il2cpp_runtime_helper_022b4080(__this_06,unaff_RBX);
        }
        else {
          pSStack_40 = (System_String_array *)0x42014a7;
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_06,(Il2CppObject *)unaff_RBX,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        uVar8 = uVar8 + 1;
        uVar2 = (uint)keyStrings->max_length;
        if ((long)(int)uVar2 <= (long)uVar8) {
          return;
        }
      } while (uVar8 < uVar2);
    }
  }
  pSStack_40 = (System_String_array *)0x4201539;
  il2cpp_runtime_helper_022b2ca0();
  pIStack_58 = unaff_RBX;
  _Stack_50 = unaff_R12;
  pSStack_48 = __this;
  pSStack_40 = keyStrings;
  if (g_data_057ad8ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&" / ");
    g_data_057ad8ae = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  pIVar13 = (Il2CppObject *)0x0;
  __this_05 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_05,MethodInfo_List_1_System_String);
  pSVar4 = ((System_Collections_Generic_List_object__Fields *)&__this_06->bounds)->_items;
  if (pSVar4 == (System_Object_array *)0x0) goto label_042017b8;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
             (System_Collections_Generic_List_object__o *)pSVar4,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)local_70._0_8_;
  pIVar12 = (Il2CppType *)local_70._8_8_;
  pIVar14 = local_60;
  pIVar13 = local_60;
  if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
    while (__this_01.fields._8_8_ = pIVar12,
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
          __this_01.fields._current = pIVar14,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70), pIVar13 = pIVar14,
          (char)bVar6 != '\0') {
      if (pIVar14 == (Il2CppObject *)0x0) goto label_04201799;
      if ((*(char *)((long)&pIVar14[1].klass + 4) == '\0') || (*(int *)&pIVar14[1].monitor != 0)) {
        pIVar13 = (Il2CppObject *)
                  (*pIVar14->klass->vtable[3].methodPtr)(pIVar14,pIVar14->klass->vtable[3].method);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(__this_05->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_05->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_042017b3;
        uVar2 = (__this_05->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_05->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = pIVar13;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pIVar13);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_05,pIVar13,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
label_0420173e:
    __this_02.fields._8_8_ = pIVar12;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_02.fields._current = pIVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    goto label_04201750;
  }
  do {
    __this_00.fields._8_8_ = pIVar12;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_00.fields._current = pIVar13;
    bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70);
    if ((char)bVar6 == '\0') goto label_0420173e;
    if (pIVar13 == (Il2CppObject *)0x0) goto label_04201799;
    pIVar14 = pIVar13;
  } while ((*(char *)((long)&pIVar13[1].klass + 4) != '\0') && (*(int *)&pIVar13[1].monitor == 0));
label_0420179e:
  (*pIVar13->klass->vtable[3].methodPtr)();
  il2cpp_runtime_helper_022b2c90();
label_042017b3:
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = pIVar14;
label_042017b8:
  do {
    auVar9 = il2cpp_runtime_helper_022b2c90();
    if (auVar9._8_4_ != 1) {
label_0420182a:
      __this_04.fields._8_8_ = pIVar12;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
      __this_04.fields._current = pIVar13;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
      _Unwind_Resume(auVar9._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar9._0_8_);
    lVar5 = *plVar7;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar12;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
    __this_03.fields._current = pIVar13;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      goto label_0420182a;
    }
label_04201750:
    if (__this_05 != (System_Collections_Generic_List_object__o *)0x0) {
      if ((__this_05->fields)._size != 0) {
        value = (System_String_array *)
                System_Collections_Generic_List_object___ToArray(__this_05,MethodInfo_String_ToArray);
        System_String__Join(" / ",value,(MethodInfo *)0x0);
      }
      return;
    }
  } while( true );
label_04201799:
  pIVar14 = pIVar13;
  il2cpp_runtime_helper_022b2c90();
  goto label_0420179e;
}


// Settings.KeybindSetting$$ToString
// il2cpp: System_String_o* Settings_KeybindSetting__ToString (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x4201540

System_String_o * Settings_KeybindSetting__ToString(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_InputKey__o *__this_00;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_06;
  System_String_array *value;
  System_String_o *pSVar6;
  long *plVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  Il2CppType *pIVar10;
  Il2CppObject *pIVar11;
  Il2CppObject *pIVar12;
  undefined1 auStack_38 [16];
  Il2CppObject *pIStack_28;
  
  if (g_data_057ad8ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&" / ");
    g_data_057ad8ae = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar10 = (Il2CppType *)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  __this_06 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_06,MethodInfo_List_1_System_String);
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) goto label_042017b8;
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)auStack_38,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
  pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_38._0_8_;
  pIVar10 = (Il2CppType *)auStack_38._8_8_;
  pIVar12 = pIStack_28;
  pIVar11 = pIStack_28;
  if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
    while (__this_02.fields._8_8_ = pIVar10,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar9,
          __this_02.fields._current = pIVar12,
          bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8), pIVar11 = pIVar12,
          (char)bVar5 != '\0') {
      if (pIVar12 == (Il2CppObject *)0x0) goto label_04201799;
      if ((*(char *)((long)&pIVar12[1].klass + 4) == '\0') || (*(int *)&pIVar12[1].monitor != 0)) {
        pIVar11 = (Il2CppObject *)
                  (*pIVar12->klass->vtable[3].methodPtr)(pIVar12,pIVar12->klass->vtable[3].method);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(__this_06->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_06->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) goto label_042017b3;
        uVar2 = (__this_06->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_06->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = pIVar11;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pIVar11);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_06,pIVar11,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
label_0420173e:
    __this_03.fields._8_8_ = pIVar10;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_03.fields._current = pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    goto label_04201750;
  }
  do {
    __this_01.fields._8_8_ = pIVar10;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_01.fields._current = pIVar11;
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa8);
    if ((char)bVar5 == '\0') goto label_0420173e;
    if (pIVar11 == (Il2CppObject *)0x0) goto label_04201799;
    pIVar12 = pIVar11;
  } while ((*(char *)((long)&pIVar11[1].klass + 4) != '\0') && (*(int *)&pIVar11[1].monitor == 0));
label_0420179e:
  (*pIVar11->klass->vtable[3].methodPtr)();
  il2cpp_runtime_helper_022b2c90();
label_042017b3:
  il2cpp_runtime_helper_022b2c90();
  pIVar11 = pIVar12;
label_042017b8:
  do {
    auVar8 = il2cpp_runtime_helper_022b2c90();
    if (auVar8._8_4_ != 1) {
label_0420182a:
      __this_05.fields._8_8_ = pIVar10;
      __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
      __this_05.fields._current = pIVar11;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
      _Unwind_Resume(auVar8._0_8_);
    }
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar4 = *plVar7;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar10;
    __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar9;
    __this_04.fields._current = pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa8);
    if (lVar4 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar4);
      goto label_0420182a;
    }
label_04201750:
    if (__this_06 != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar6 = "None";
      if ((__this_06->fields)._size != 0) {
        value = (System_String_array *)
                System_Collections_Generic_List_object___ToArray(__this_06,MethodInfo_String_ToArray);
        pSVar6 = System_String__Join(" / ",value,(MethodInfo *)0x0);
      }
      return pSVar6;
    }
  } while( true );
label_04201799:
  pIVar12 = pIVar11;
  il2cpp_runtime_helper_022b2c90();
  goto label_0420179e;
}


// Settings.KeybindSetting$$Contains
// il2cpp: bool Settings_KeybindSetting__Contains (Settings_KeybindSetting_o* __this, Settings_InputKey_o* key, const MethodInfo* method);
// 0x4201870

bool_conflict
Settings_KeybindSetting__Contains
          (Settings_KeybindSetting_o *__this,Settings_InputKey_o *key,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  char cVar2;
  bool_conflict bVar3;
  undefined8 extraout_RAX;
  undefined8 uVar4;
  long *plVar5;
  undefined8 extraout_RAX_00;
  undefined8 uVar6;
  int iVar7;
  undefined1 auVar8 [12];
  System_Collections_Generic_List_T__o *pSVar9;
  Il2CppMethodPointer pIVar10;
  Il2CppObject *pIVar11;
  
  if (g_data_057ad8af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
    g_data_057ad8af = '\x01';
  }
  pSVar9 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  pIVar11 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
    do {
      __this_01.fields._8_8_ = pIVar10;
      __this_01.fields._list = pSVar9;
      __this_01.fields._current = pIVar11;
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar3 == '\0') {
        iVar7 = 5;
        uVar6 = 0;
        goto label_04201940;
      }
      if (pIVar11 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_0420196a;
      }
      cVar2 = (*pIVar11->klass->vtable[0].methodPtr)(pIVar11,key,pIVar11->klass->vtable[0].method);
    } while (cVar2 == '\0');
    uVar6 = 1;
    iVar7 = 4;
label_04201940:
    __this_02.fields._8_8_ = pIVar10;
    __this_02.fields._list = pSVar9;
    __this_02.fields._current = pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar4 = extraout_RAX;
label_04201952:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar4 >> 8),iVar7 == 4 & (byte)uVar6);
  }
label_0420196a:
  auVar8 = il2cpp_runtime_helper_022b2c90();
  uVar6 = auVar8._0_8_;
  if (auVar8._8_4_ == 1) {
    plVar5 = (long *)__cxa_begin_catch(uVar6);
    lVar1 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar10;
    __this_03.fields._list = pSVar9;
    __this_03.fields._current = pIVar11;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar6 = 0;
    iVar7 = 0;
    uVar4 = extraout_RAX_00;
    if (lVar1 == 0) goto label_04201952;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar10;
  __this_04.fields._list = pSVar9;
  __this_04.fields._current = pIVar11;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(uVar6);
}


// Settings.KeybindSetting$$Contains
// il2cpp: bool Settings_KeybindSetting__Contains (Settings_KeybindSetting_o* __this, int32_t key, const MethodInfo* method);
// 0x4201260

bool_conflict
Settings_KeybindSetting__Contains_4101260(Settings_KeybindSetting_o *__this,int32_t key,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  undefined8 extraout_RAX;
  undefined8 uVar3;
  long *plVar4;
  undefined8 extraout_RAX_00;
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *pIVar10;
  
  if (g_data_057ad8b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
    g_data_057ad8b0 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
    do {
      __this_01.fields._8_8_ = pIVar9;
      __this_01.fields._list = pSVar8;
      __this_01.fields._current = pIVar10;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar2 == '\0') {
        iVar6 = 5;
        uVar5 = 0;
        goto label_0420132c;
      }
      if (pIVar10 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04201354;
      }
    } while (((*(char *)((long)&pIVar10[1].klass + 4) != '\0') ||
             (*(char *)((long)&pIVar10[1].monitor + 4) != '\0')) || (*(int *)&pIVar10[1].klass != key));
    uVar5 = 1;
    iVar6 = 4;
label_0420132c:
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = pSVar8;
    __this_02.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar3 = extraout_RAX;
label_0420133e:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),iVar6 == 4 & (byte)uVar5);
  }
label_04201354:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  uVar5 = auVar7._0_8_;
  if (auVar7._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(uVar5);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._list = pSVar8;
    __this_03.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar5 = 0;
    iVar6 = 0;
    uVar3 = extraout_RAX_00;
    if (lVar1 == 0) goto label_0420133e;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar9;
  __this_04.fields._list = pSVar8;
  __this_04.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(uVar5);
}


// Settings.KeybindSetting$$GetKeyDown
// il2cpp: bool Settings_KeybindSetting__GetKeyDown (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x4201a00

bool_conflict
Settings_KeybindSetting__GetKeyDown(Settings_KeybindSetting_o *__this,bool_conflict cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_InputKey__o *__this_01;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar2;
  long *plVar3;
  undefined8 in_RCX;
  undefined8 uVar4;
  int iVar5;
  MethodInfo *method_00;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Settings_InputKey_o *__this_06;
  
  if (g_data_057ad8b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
    g_data_057ad8b1 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  __this_06 = (Settings_InputKey_o *)0x0;
  if ((char)cl == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)__this,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        return 0;
      }
      goto label_04201acb;
    }
  }
  else {
label_04201acb:
    __this_01 = (__this->fields).InputKeys;
    if (__this_01 != (System_Collections_Generic_List_InputKey__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
      do {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._list = pSVar7;
        __this_02.fields._current = (Il2CppObject *)__this_06;
        method_00 = MethodInfo_Boolean_MoveNext;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') {
          iVar5 = 6;
          uVar4 = 0;
          goto label_04201b33;
        }
        if (__this_06 == (Settings_InputKey_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04201b5d;
        }
        bVar2 = Settings_InputKey__GetKeyDown(__this_06,method_00);
      } while ((char)bVar2 == '\0');
      uVar4 = 1;
      iVar5 = 5;
label_04201b33:
      __this_03.fields._8_8_ = pIVar8;
      __this_03.fields._list = pSVar7;
      __this_03.fields._current = (Il2CppObject *)__this_06;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      goto label_04201b45;
    }
  }
label_04201b5d:
  auVar6 = il2cpp_runtime_helper_022b2c90();
  uVar4 = auVar6._0_8_;
  if (auVar6._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(uVar4);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar8;
    __this_04.fields._list = pSVar7;
    __this_04.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar4 = 0;
    iVar5 = 0;
    if (lVar1 == 0) {
label_04201b45:
      return (bool_conflict)CONCAT71((int7)((ulong)in_RCX >> 8),iVar5 == 5 & (byte)uVar4);
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._8_8_ = pIVar8;
  __this_05.fields._list = pSVar7;
  __this_05.fields._current = (Il2CppObject *)__this_06;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(uVar4);
}


// Settings.KeybindSetting$$GetKey
// il2cpp: bool Settings_KeybindSetting__GetKey (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x4201bf0

bool_conflict
Settings_KeybindSetting__GetKey(Settings_KeybindSetting_o *__this,bool_conflict cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_List_InputKey__o *__this_00;
  long lVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar3;
  long *plVar4;
  undefined8 in_RCX;
  undefined8 uVar5;
  int iVar6;
  MethodInfo *method_00;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Settings_InputKey_o *__this_05;
  
  if (g_data_057ad8b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
    g_data_057ad8b2 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  __this_05 = (Settings_InputKey_o *)0x0;
  if ((char)cl == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains(pSVar1,(Il2CppObject *)__this,MethodInfo_Boolean_Contains)
      ;
      if ((char)bVar3 != '\0') {
        return 0;
      }
      goto label_04201cbb;
    }
  }
  else {
label_04201cbb:
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains(pSVar1,(Il2CppObject *)__this,MethodInfo_Boolean_Contains)
      ;
      in_RCX = CONCAT71((int7)((ulong)in_RCX >> 8),1);
      if ((char)bVar3 != '\0') {
        return (bool_conflict)in_RCX;
      }
      __this_00 = (__this->fields).InputKeys;
      if (__this_00 != (System_Collections_Generic_List_InputKey__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                   (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
        do {
          __this_01.fields._8_8_ = pIVar9;
          __this_01.fields._list = pSVar8;
          __this_01.fields._current = (Il2CppObject *)__this_05;
          method_00 = MethodInfo_Boolean_MoveNext;
          bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
          if ((char)bVar3 == '\0') {
            iVar6 = 7;
            uVar5 = 0;
            goto label_04201d73;
          }
          if (__this_05 == (Settings_InputKey_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_04201d9d;
          }
          bVar3 = Settings_InputKey__GetKey(__this_05,method_00);
        } while ((char)bVar3 == '\0');
        uVar5 = 1;
        iVar6 = 6;
label_04201d73:
        __this_02.fields._8_8_ = pIVar9;
        __this_02.fields._list = pSVar8;
        __this_02.fields._current = (Il2CppObject *)__this_05;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        goto label_04201d85;
      }
    }
  }
label_04201d9d:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  uVar5 = auVar7._0_8_;
  if (auVar7._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(uVar5);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._list = pSVar8;
    __this_03.fields._current = (Il2CppObject *)__this_05;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar5 = 0;
    iVar6 = 0;
    if (lVar2 == 0) {
label_04201d85:
      return (bool_conflict)CONCAT71((int7)((ulong)in_RCX >> 8),iVar6 == 6 & (byte)uVar5);
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar9;
  __this_04.fields._list = pSVar8;
  __this_04.fields._current = (Il2CppObject *)__this_05;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(uVar5);
}


// Settings.KeybindSetting$$GetKeyUp
// il2cpp: bool Settings_KeybindSetting__GetKeyUp (Settings_KeybindSetting_o* __this, bool cl, const MethodInfo* method);
// 0x4201e30

bool_conflict
Settings_KeybindSetting__GetKeyUp(Settings_KeybindSetting_o *__this,bool_conflict cl,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_List_InputKey__o *__this_01;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar2;
  long *plVar3;
  undefined8 in_RCX;
  undefined8 uVar4;
  int iVar5;
  MethodInfo *method_00;
  undefined1 auVar6 [12];
  System_Collections_Generic_List_T__o *pSVar7;
  Il2CppMethodPointer pIVar8;
  Settings_InputKey_o *__this_06;
  
  if (g_data_057ad8b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
    g_data_057ad8b3 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar8 = (Il2CppMethodPointer)0x0;
  __this_06 = (Settings_InputKey_o *)0x0;
  if ((char)cl == '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)__this,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        return 0;
      }
      goto label_04201efb;
    }
  }
  else {
label_04201efb:
    __this_01 = (__this->fields).InputKeys;
    if (__this_01 != (System_Collections_Generic_List_InputKey__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
      do {
        __this_02.fields._8_8_ = pIVar8;
        __this_02.fields._list = pSVar7;
        __this_02.fields._current = (Il2CppObject *)__this_06;
        method_00 = MethodInfo_Boolean_MoveNext;
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') {
          iVar5 = 6;
          uVar4 = 0;
          goto label_04201f63;
        }
        if (__this_06 == (Settings_InputKey_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          goto label_04201f8d;
        }
        bVar2 = Settings_InputKey__GetKeyUp(__this_06,method_00);
      } while ((char)bVar2 == '\0');
      uVar4 = 1;
      iVar5 = 5;
label_04201f63:
      __this_03.fields._8_8_ = pIVar8;
      __this_03.fields._list = pSVar7;
      __this_03.fields._current = (Il2CppObject *)__this_06;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      goto label_04201f75;
    }
  }
label_04201f8d:
  auVar6 = il2cpp_runtime_helper_022b2c90();
  uVar4 = auVar6._0_8_;
  if (auVar6._8_4_ == 1) {
    plVar3 = (long *)__cxa_begin_catch(uVar4);
    lVar1 = *plVar3;
    __cxa_end_catch();
    __this_04.fields._8_8_ = pIVar8;
    __this_04.fields._list = pSVar7;
    __this_04.fields._current = (Il2CppObject *)__this_06;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar4 = 0;
    iVar5 = 0;
    if (lVar1 == 0) {
label_04201f75:
      return (bool_conflict)CONCAT71((int7)((ulong)in_RCX >> 8),iVar5 == 5 & (byte)uVar4);
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_05.fields._8_8_ = pIVar8;
  __this_05.fields._list = pSVar7;
  __this_05.fields._current = (Il2CppObject *)__this_06;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(uVar4);
}


// Settings.KeybindSetting$$SerializeToJsonObject
// il2cpp: SimpleJSONFixed_JSONNode_o* Settings_KeybindSetting__SerializeToJsonObject (Settings_KeybindSetting_o* __this, const MethodInfo* method);
// 0x4202020

SimpleJSONFixed_JSONNode_o *
Settings_KeybindSetting__SerializeToJsonObject(Settings_KeybindSetting_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_InputKey__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONArray_o *__this_06;
  System_String_o *pSVar3;
  SimpleJSONFixed_JSONString_o *pSVar4;
  long *plVar5;
  Il2CppObject *pIVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *pIVar10;
  
  if (g_data_057ad8b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_InputKey_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
    g_data_057ad8b4 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  __this_06 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_06,(MethodInfo *)0x0);
  __this_00 = (__this->fields).InputKeys;
  if (__this_00 == (System_Collections_Generic_List_InputKey__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pIVar6 = pIVar10;
label_04202192:
    pIVar10 = pIVar6;
    if (pIVar6 == (Il2CppObject *)0x0) {
label_0420219c:
      pIVar10 = pIVar6;
      il2cpp_runtime_helper_022b2c90();
    }
    pSVar3 = (System_String_o *)(*pIVar6->klass->vtable[3].methodPtr)();
    pSVar4 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    SimpleJSONFixed_JSONString___ctor(pSVar4,pSVar3,(MethodInfo *)0x0);
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ == 1) {
      plVar5 = (long *)__cxa_begin_catch(auVar7._0_8_);
      lVar1 = *plVar5;
      __cxa_end_catch();
      __this_04.fields._8_8_ = pIVar9;
      __this_04.fields._list = pSVar8;
      __this_04.fields._current = pIVar10;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
      if (lVar1 == 0) {
        return (SimpleJSONFixed_JSONNode_o *)__this_06;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_05.fields._8_8_ = pIVar9;
    __this_05.fields._list = pSVar8;
    __this_05.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
    _Unwind_Resume(auVar7._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Settings_InputKey_GetEnumerator);
  if (__this_06 == (SimpleJSONFixed_JSONArray_o *)0x0) {
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = pSVar8;
    __this_02.fields._current = pIVar10;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8);
    pIVar6 = pIVar10;
    if ((char)bVar2 != '\0') goto label_04202192;
  }
  else {
    while (__this_01.fields._8_8_ = pIVar9, __this_01.fields._list = pSVar8,
          __this_01.fields._current = pIVar10,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffb8), (char)bVar2 != '\0') {
      pIVar6 = (Il2CppObject *)0x0;
      if (pIVar10 == (Il2CppObject *)0x0) goto label_0420219c;
      pSVar3 = (System_String_o *)
               (*pIVar10->klass->vtable[3].methodPtr)(pIVar10,pIVar10->klass->vtable[3].method);
      pSVar4 = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
      SimpleJSONFixed_JSONString___ctor(pSVar4,pSVar3,(MethodInfo *)0x0);
      (*(__this_06->klass->vtable)._21_Add.methodPtr)
                (__this_06,pSVar4,(__this_06->klass->vtable)._21_Add.method);
    }
  }
  __this_03.fields._8_8_ = pIVar9;
  __this_03.fields._list = pSVar8;
  __this_03.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffb8);
  return (SimpleJSONFixed_JSONNode_o *)__this_06;
}


// Settings.KeybindSetting$$DeserializeFromJsonObject
// il2cpp: void Settings_KeybindSetting__DeserializeFromJsonObject (Settings_KeybindSetting_o* __this, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x4202290

void Settings_KeybindSetting__DeserializeFromJsonObject
               (Settings_KeybindSetting_o *__this,SimpleJSONFixed_JSONNode_o *json,MethodInfo *method)

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
  Settings_TypedSetting_T__o *__this_05;
  Il2CppObject *pIVar9;
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
  
  if (g_data_057ad8b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ad8b5 = '\x01';
  }
  __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_System_String);
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
      bVar7 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext(__this_00,(MethodInfo *)&stack0xffffffffffffff38);
      if ((char)bVar7 == '\0') {
        if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) goto label_042024f2;
      }
      else {
        if (__this_04 != (System_Collections_Generic_List_object__o *)0x0) {
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
              il2cpp_runtime_helper_02337ed0();
            }
            __this_05 = (Settings_TypedSetting_T__o *)
                        SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar10,(MethodInfo *)0x0);
            if (__this_05 == (Settings_TypedSetting_T__o *)0x0) goto label_0420255f;
            pSVar4 = (SimpleJSONFixed_JSONNode_c *)__this_05->klass;
            bVar2 = (TypeInfo_JSONString->_2).naturalAligment;
            if (((pSVar4->_2).naturalAligment < bVar2) ||
               ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_JSONString)) goto label_042025a3;
            pIVar9 = (Il2CppObject *)
                     (*(pSVar4->vtable)._9_get_Value.methodPtr)
                               (__this_05,(pSVar4->vtable)._9_get_Value.method);
            lVar6 = MethodInfo_Void_Add;
            piVar1 = &(__this_04->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this_04->fields)._items;
            if (pSVar5 == (System_Object_array *)0x0) goto label_0420255f;
            uVar3 = (__this_04->fields)._size;
            if (uVar3 < (uint)pSVar5->max_length) {
              (__this_04->fields)._size = uVar3 + 1;
              pSVar5->m_Items[(int)uVar3] = pIVar9;
              il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3,pIVar9);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (__this_04,pIVar9,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
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
label_042024f2:
          keyStrings = (System_String_array *)
                       System_Collections_Generic_List_object___ToArray(__this_04,MethodInfo_String_ToArray);
          Settings_KeybindSetting__LoadFromStringArray(__this,keyStrings,method_00);
          return;
        }
        __this_03.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)__this;
        __this_03.fields._0_8_ = in_stack_ffffffffffffff28;
        __this_03.fields.m_Object.fields._8_8_ = pIStack_78;
        __this_03.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pIStack_70;
        __this_03.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIStack_68;
        __this_03.fields.m_Object.fields._32_8_ = pcStack_60;
        __this_03.fields.m_Array.fields._list = (System_Collections_Generic_List_T__o *)pIStack_58;
        __this_03.fields.m_Array.fields._8_8_ = pIStack_50;
        __this_03.fields.m_Array.fields._current = pSStack_48;
        SVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                           (__this_03,(MethodInfo *)&stack0xffffffffffffff38);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_05 = (Settings_TypedSetting_T__o *)
                    SimpleJSONFixed_JSONNode__op_Implicit_3f7a5a0(SVar10,(MethodInfo *)0x0);
        if (__this_05 != (Settings_TypedSetting_T__o *)0x0) goto label_04202564;
      }
    }
  }
label_0420255f:
  __this_05 = (Settings_TypedSetting_T__o *)il2cpp_runtime_helper_022b2c90();
label_04202564:
  pSVar4 = (SimpleJSONFixed_JSONNode_c *)__this_05->klass;
  bVar2 = (TypeInfo_JSONString->_2).naturalAligment;
  if ((bVar2 <= (pSVar4->_2).naturalAligment) &&
     ((pSVar4->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_JSONString)) {
    (*(pSVar4->vtable)._9_get_Value.methodPtr)(__this_05,(pSVar4->vtable)._9_get_Value.method);
    __this_05 = (Settings_TypedSetting_T__o *)il2cpp_runtime_helper_022b2c90();
  }
label_042025a3:
  il2cpp_runtime_helper_022b2fd0();
  *(undefined4 *)((long)&__this_05[1].klass + 4) = 0x7fffffff;
  pIVar9 = (Il2CppObject *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  if (g_data_057ad8c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_String);
    g_data_057ad8c1 = '\x01';
  }
  *(undefined4 *)&__this_05[1].klass = 0x7fffffff;
  Settings_TypedSetting_object____ctor_2a240d0(__this_05,pIVar9,MethodInfo_TypedSetting_1_System_String);
  *(undefined4 *)&__this_05[1].klass = 0x7fffffff;
  return;
}


