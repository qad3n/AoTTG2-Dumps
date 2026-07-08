// Type: CustomLogic.CustomLogicMapBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMapBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicMapBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicMapBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMapBuiltin_o* CustomLogic_CustomLogicMapBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ecd570

CustomLogic_CustomLogicMapBuiltin_o *
CustomLogic_CustomLogicMapBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicMapBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_0570399e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_0570399e = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicMapBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicMapBuiltin);
      CustomLogic_CustomLogicMapBuiltin___ctor(__this,method);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicMapBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicMapBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ecf800

void CustomLogic_CustomLogicMapBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057039b3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039b3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ecf870

void CustomLogic_CustomLogicMapBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindAllMapObjects>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindAllMapObjects_b__2_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ecf880

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__FindAllMapObjects>b__2_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_05;
  long lVar5;
  bool_conflict bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_07;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  ulong in_stack_ffffffffffffff88;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;
  
  if (DAT_057039b4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039b4 = '\x01';
    iVar3 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703983 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05703983 = '\x01';
  }
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  if ((__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_07 = System_Collections_Generic_Dictionary<object__object>__get_Values
                            (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE),
     __this_07 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
            (&SStack_48,__this_07,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
  if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_04.fields._index = 0;
    __this_04.fields._version = 0;
    __this_04.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
    __this_04.fields._currentValue = (Il2CppObject *)SStack_48.fields._dictionary;
    bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                      (__this_04,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
    if ((char)bVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
             SStack_48.fields._dictionary;
    while (__this_03.fields._8_8_ = __this_06,
          __this_03.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88,
          __this_03.fields._currentValue = (Il2CppObject *)pSVar7,
          bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                            (__this_03,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98),
          SStack_48.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7, (char)bVar6 != '\0')
    {
      __this_01 = (__this_06->fields).List;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_02 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (__this_02 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                       (__this_02,(Map_MapObject_o *)SStack_48.fields._currentValue,
                        (MethodInfo *)0x0);
      lVar5 = MethodInfo_Void_Add;
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_01->fields)._items;
      if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (__this_01->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (__this_01->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item;
        il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,item);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_01,(Il2CppObject *)item,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
  }
  __this_05.fields._8_8_ = __this_06;
  __this_05.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
  __this_05.fields._currentValue = (Il2CppObject *)SStack_48.fields._dictionary;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
            (__this_05,(MethodInfo_31D09D0 *)&stack0xffffffffffffff98);
  return (Il2CppObject *)__this_06;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByName>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByName_b__3_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ecf8e0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__FindMapObjectByName>b__3_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Map_MapScriptBaseObject_o *pMVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  System_String_o *b;
  int iVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar7;
  Map_MapObject_o *obj_00;
  Map_MapObject_o *pMVar8;
  undefined1 auStack_40 [16];
  Map_MapObject_o *pMStack_30;
  
  if (DAT_057039b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039b5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  obj = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  b = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703984 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05703984 = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  if ((__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_04 = System_Collections_Generic_Dictionary<object__object>__get_Values
                            (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE),
     __this_04 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
             auStack_40,__this_04,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
  pCVar3 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_40._0_8_;
  pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
           auStack_40._8_8_;
  do {
    obj_00 = pMStack_30;
    __this_02.fields._8_8_ = pSVar7;
    __this_02.fields._dictionary = pSVar6;
    __this_02.fields._currentValue = (Il2CppObject *)obj_00;
    bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                      (__this_02,(MethodInfo_31D09E0 *)&stack0xffffffffffffffa8);
    if ((char)bVar2 == '\0') {
      iVar5 = 5;
      goto LAB_03eca1d1;
    }
    if (obj_00 == (Map_MapObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar1 = (obj_00->fields).ScriptObject;
    if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar8 = obj_00;
    bVar2 = System_String__op_Equality
                      (*(System_String_o **)&(pMVar1->fields).Visible,b,(MethodInfo *)0x0);
    pMStack_30 = pMVar8;
  } while ((char)bVar2 == '\0');
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                     (__this_01,obj_00,(MethodInfo *)0x0);
  iVar5 = 4;
  obj_00 = pMVar8;
LAB_03eca1d1:
  __this_03.fields._8_8_ = pSVar7;
  __this_03.fields._dictionary = pSVar6;
  __this_03.fields._currentValue = (Il2CppObject *)obj_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
            (__this_03,(MethodInfo_31D09D0 *)&stack0xffffffffffffffa8);
  pCVar4 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  if (iVar5 == 4) {
    pCVar4 = pCVar3;
  }
  return (Il2CppObject *)pCVar4;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByName>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByName_b__4_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ecf990

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__FindMapObjectsByName>b__4_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_List_object__o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  System_Object_array *pSVar4;
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_05;
  long lVar5;
  bool_conflict bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_06;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_07;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  System_String_o *b;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;
  
  if (DAT_057039b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039b6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  obj = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  b = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703985 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05703985 = '\x01';
  }
  __this_06 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_06,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  if ((__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_07 = System_Collections_Generic_Dictionary<object__object>__get_Values
                            (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE),
     __this_07 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
            (&SStack_48,__this_07,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
  pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
           SStack_48.fields._dictionary;
  if (__this_06 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    while (__this_04.fields._8_8_ = __this_06,
          __this_04.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88,
          __this_04.fields._currentValue = (Il2CppObject *)pSVar7,
          bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                            (__this_04,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98),
          (char)bVar6 != '\0') {
      if ((Map_MapObject_o *)SStack_48.fields._currentValue == (Map_MapObject_o *)0x0)
      goto LAB_03eca582;
      pMVar3 = ((Map_MapObject_Fields *)((long)SStack_48.fields._currentValue + 0x10))->ScriptObject
      ;
      if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto LAB_03eca587;
      bVar6 = System_String__op_Equality
                        (*(System_String_o **)&(pMVar3->fields).Visible,b,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  else {
    while (__this_03.fields._8_8_ = __this_06,
          __this_03.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88,
          __this_03.fields._currentValue = (Il2CppObject *)pSVar7,
          bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                            (__this_03,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98),
          (char)bVar6 != '\0') {
      if ((Map_MapObject_o *)SStack_48.fields._currentValue == (Map_MapObject_o *)0x0) {
LAB_03eca582:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pMVar3 = ((Map_MapObject_Fields *)((long)SStack_48.fields._currentValue + 0x10))->ScriptObject
      ;
      if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) {
LAB_03eca587:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar6 = System_String__op_Equality
                        (*(System_String_o **)&(pMVar3->fields).Visible,b,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        __this_01 = (__this_06->fields).List;
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this_02 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (__this_02 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_02,(Map_MapObject_o *)SStack_48.fields._currentValue,
                          (MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(__this_01->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this_01->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_01->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_01,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  }
  __this_05.fields._8_8_ = __this_06;
  __this_05.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
  __this_05.fields._currentValue = (Il2CppObject *)pSVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
            (__this_05,(MethodInfo_31D09D0 *)&stack0xffffffffffffff98);
  return (Il2CppObject *)__this_06;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByRegex>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByRegex_b__5_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ecfa40

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__FindMapObjectsByRegex>b__5_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  int iVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Map_MapScriptBaseObject_o *pMVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Object_array *pSVar6;
  long lVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar9;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Text_RegularExpressions_Regex_o *__this_06;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_07;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  System_Comparison_T__o *comparison;
  System_String_o *pattern;
  uint uVar10;
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar11;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
  
  if (DAT_057039b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039b7 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar8 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pattern = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar8,MethodInfo_String_ConvertTo_String);
  if ((int)__a->max_length < 2) {
    uVar10 = 0;
    iVar3 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    pIVar8 = __a->m_Items[1];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar8,MethodInfo_Boolean_ConvertTo_Boolean);
    iVar3 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  uVar10 = uVar10 & 0xff;
  if (DAT_05703986 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Comparison_object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&MethodInfo_Int32__FindMapObjectsByRegex_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05703986 = '\x01';
  }
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  __this_06 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(__this_06,pattern,9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  if ((__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_07 = System_Collections_Generic_Dictionary<object__object>__get_Values
                            (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE),
     __this_07 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
              (&local_48,__this_07,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    if (__this_06 == (System_Text_RegularExpressions_Regex_o *)0x0) {
      __this_03.fields._version = uVar10;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88._0_8_;
      __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_03.fields._currentValue = (Il2CppObject *)local_48.fields._dictionary;
      bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                        (__this_03,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
      if ((char)bVar9 != '\0') {
        if ((Map_MapObject_o *)local_48.fields._currentValue != (Map_MapObject_o *)0x0) {
          if (((Map_MapObject_Fields *)((long)local_48.fields._currentValue + 0x10))->ScriptObject
              != (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03ecaa89:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03ecaa7d:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      pSVar11 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
                local_48.fields._dictionary;
      while (__this_02.fields._version = uVar10,
            __this_02.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 in_stack_ffffffffffffff88._0_8_,
            __this_02.fields._index = in_stack_ffffffffffffff88._8_4_,
            __this_02.fields._currentValue = (Il2CppObject *)pSVar11,
            bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                              (__this_02,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98),
            local_48.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11,
            (char)bVar9 != '\0') {
        if ((Map_MapObject_o *)local_48.fields._currentValue == (Map_MapObject_o *)0x0)
        goto LAB_03ecaa7d;
        pMVar4 = ((Map_MapObject_Fields *)((long)local_48.fields._currentValue + 0x10))->
                 ScriptObject;
        if (pMVar4 == (Map_MapScriptBaseObject_o *)0x0) goto LAB_03ecaa89;
        bVar9 = System_Text_RegularExpressions_Regex__IsMatch
                          (__this_06,*(System_String_o **)&(pMVar4->fields).Visible,
                           (MethodInfo *)0x0);
        if ((char)bVar9 != '\0') {
          if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar5 = (__this_05->fields).List;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_01,(Map_MapObject_o *)local_48.fields._currentValue,
                            (MethodInfo *)0x0);
          lVar7 = MethodInfo_Void_Add;
          if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (pSVar5->fields)._items;
          if (pSVar6 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (pSVar5->fields)._size;
          if (uVar2 < (uint)pSVar6->max_length) {
            (pSVar5->fields)._size = uVar2 + 1;
            pSVar6->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar6->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar5,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    __this_04.fields._version = uVar10;
    __this_04.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88._0_8_;
    __this_04.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_04.fields._currentValue = (Il2CppObject *)local_48.fields._dictionary;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
              (__this_04,(MethodInfo_31D09D0 *)&stack0xffffffffffffff98);
    if ((char)uVar10 == '\0') {
      return (Il2CppObject *)__this_05;
    }
    if (__this_05 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pSVar5 = (__this_05->fields).List;
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
        comparison = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        comparison = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (comparison == (System_Comparison_T__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        comparison = (System_Comparison_T__o *)il2cpp_runtime_glue(TypeInfo_Comparison_object);
        System_Comparison<object>___ctor();
        lVar7 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Comparison_T__o **)(lVar7 + 8) = comparison;
        il2cpp_runtime_glue(lVar7 + 8,comparison);
      }
      if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__Sort(pSVar5,comparison,MethodInfo_Void_Sort);
        return (Il2CppObject *)__this_05;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByComponent>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByComponent_b__6_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ecfb50

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__FindMapObjectByComponent>b__6_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int32_t iVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  Il2CppObject *pIVar4;
  System_String_o *className;
  MethodInfo *method_00;
  Il2CppObject *pIVar5;
  
  if (DAT_057039b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039b8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar5 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = MethodInfo_String_ConvertTo_String;
  className = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                        (pIVar5,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703987 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    DAT_05703987 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this_00 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,method_00);
  }
  else {
    __this_00 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,method_00);
  }
  if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar3 = CustomLogic_CustomLogicListBuiltin__get_Count(__this_00,(MethodInfo *)0x0);
  pIVar5 = (Il2CppObject *)0x0;
  if (0 < iVar3) {
    pIVar4 = CustomLogic_CustomLogicListBuiltin__Get(__this_00,0,(MethodInfo *)0x0);
    pIVar5 = (Il2CppObject *)0x0;
    if (pIVar4 != (Il2CppObject *)0x0) {
      bVar1 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
      if (((pIVar4->klass->_2).naturalAligment < bVar1) ||
         (pIVar5 = pIVar4, (pIVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicMapObjectBuiltin)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar4);
      }
    }
  }
  return pIVar5;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByComponent>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByComponent_b__7_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ecfc00

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__FindMapObjectsByComponent>b__7_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *className;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  MethodInfo *method_00;
  
  if (DAT_057039b9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039b9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  obj = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = MethodInfo_String_ConvertTo_String;
  className = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                        (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) != 0) {
    pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,method_00);
    return (Il2CppObject *)pCVar1;
  }
  il2cpp_init_class();
  pCVar1 = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,method_00);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByID>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByID_b__8_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ecfcb0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__FindMapObjectByID>b__8_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  Il2CppObject *obj;
  bool_conflict bVar2;
  int32_t key;
  Map_MapObject_o *obj_00;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  
  if (DAT_057039ba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039ba = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  obj = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  key = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703989 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05703989 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
  }
  else {
    __this_00 = (System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
  }
  if (__this_00 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                      (__this_00,key,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return (Il2CppObject *)0x0;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((System_Collections_Generic_Dictionary_int__object__o *)
         **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
         (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
       (obj_00 = (Map_MapObject_o *)
                 System_Collections_Generic_Dictionary<int__object>__get_Item
                           ((System_Collections_Generic_Dictionary_int__object__o *)
                            **(undefined8 **)(TypeInfo_MapLoader + 0xb8),key,MethodInfo_MapObject_get_Item),
       __this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
      pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_01,obj_00,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectByTag>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectByTag_b__9_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ecfd60

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__FindMapObjectByTag>b__9_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_object__o *__this_01;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  Il2CppObject *pIVar6;
  
  if (DAT_057039bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039bb = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar6 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar6,MethodInfo_String_ConvertTo_String);
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570398a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_0570398a = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,pIVar6,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (Il2CppObject *)0x0;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar2,pIVar6,MethodInfo_List_1_Map_MapObject__get_Item), pIVar4 != (Il2CppObject *)0x0)) {
      if (*(int *)&pIVar4[1].monitor < 1) {
        return (Il2CppObject *)0x0;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
      if (((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
          (__this_01 = (System_Collections_Generic_List_object__o *)
                       System_Collections_Generic_Dictionary<object__object>__get_Item
                                 (pSVar2,pIVar6,MethodInfo_List_1_Map_MapObject__get_Item),
          __this_01 != (System_Collections_Generic_List_object__o *)0x0)) &&
         (obj = (Map_MapObject_o *)
                System_Collections_Generic_List<object>__get_Item(__this_01,0,MethodInfo_MapObject_get_Item),
         __this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
        pCVar5 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_00,obj,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByTag>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByTag_b__10_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ecfe10

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__FindMapObjectsByTag>b__10_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  long lVar5;
  bool_conflict bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_04;
  System_Collections_Generic_List_object__o *pSVar7;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  Il2CppObject *pIVar8;
  ulong in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (DAT_057039bc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039bc = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar8 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar8,MethodInfo_String_ConvertTo_String);
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570398b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_0570398b = '\x01';
  }
  __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_04,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  if (pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03ecb6b5:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                    (pSVar3,pIVar8,MethodInfo_Boolean_ContainsKey);
  if ((char)bVar6 != '\0') {
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    if ((pSVar3 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (pSVar7 = (System_Collections_Generic_List_object__o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar3,pIVar8,MethodInfo_List_1_Map_MapObject__get_Item),
       pSVar7 == (System_Collections_Generic_List_object__o *)0x0)) goto LAB_03ecb6b5;
    System_Collections_Generic_List<object>__GetEnumerator(&SStack_48,pSVar7,MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    if (__this_04 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      __this_02.fields._index = 0;
      __this_02.fields._version = 0;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_02.fields._current = (Il2CppObject *)SStack_48.fields._list;
      bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
      while (__this_01.fields._8_8_ = __this_04,
            __this_01.fields._list =
                 (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
            __this_01.fields._current = (Il2CppObject *)pSVar9,
            bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            SStack_48.fields._list = (System_Collections_Generic_List_T__o *)pSVar9,
            (char)bVar6 != '\0') {
        pSVar7 = (__this_04->fields).List;
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_00,(Map_MapObject_o *)SStack_48.fields._current,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(pSVar7->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar7->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (pSVar7->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar7->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar7,(Il2CppObject *)item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_03.fields._8_8_ = __this_04;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
    __this_03.fields._current = (Il2CppObject *)SStack_48.fields._list;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  }
  return (Il2CppObject *)__this_04;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindMapObjectsByPlayer>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__FindMapObjectsByPlayer_b__11_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ecfec0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__FindMapObjectsByPlayer>b__11_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this_00;
  CustomLogic_CustomLogicPhotonSync_o *pCVar2;
  Il2CppObject *obj;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_04;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar4;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar7;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar8;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_06;
  undefined1 auStack_40 [16];
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCStack_30;
  
  if (DAT_057039bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039bd = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  obj = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pCVar5 = (CustomLogic_CustomLogicPlayerBuiltin_o *)
           CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570398c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicNetworkViewBuiltin_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_0570398c = '\x01';
  }
  __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_04,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if (((lVar1 == 0) ||
      (__this_00 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar1 + 0x28),
      __this_00 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) ||
     (__this_05 = System_Collections_Generic_Dictionary<int__object>__get_Values
                            (__this_00,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System),
     __this_05 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_ValueCollection<int__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
             auStack_40,__this_05,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_40._0_8_;
  pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
           auStack_40._8_8_;
  if (__this_04 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    while (__this_06 = pCStack_30, __this_02.fields._8_8_ = pSVar7,
          __this_02.fields._dictionary = pSVar6,
          __this_02.fields._currentValue = (Il2CppObject *)__this_06,
          bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                            (__this_02,(MethodInfo_31C3100 *)&stack0xffffffffffffffa8),
          (char)bVar3 != '\0') {
      if (__this_06 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
LAB_03ecb93c:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pCVar8 = __this_06;
      pCVar4 = CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner(__this_06,(MethodInfo *)0x0);
      pCStack_30 = pCVar8;
      if (pCVar4 == pCVar5) {
        if ((__this_06->fields).Sync != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03ecb948:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  else {
    while (__this_06 = pCStack_30, __this_01.fields._8_8_ = pSVar7,
          __this_01.fields._dictionary = pSVar6,
          __this_01.fields._currentValue = (Il2CppObject *)__this_06,
          bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                            (__this_01,(MethodInfo_31C3100 *)&stack0xffffffffffffffa8),
          (char)bVar3 != '\0') {
      if (__this_06 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) goto LAB_03ecb93c;
      pCVar8 = __this_06;
      pCVar4 = CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner(__this_06,(MethodInfo *)0x0);
      pCStack_30 = pCVar8;
      if (pCVar4 == pCVar5) {
        pCVar2 = (__this_06->fields).Sync;
        if (pCVar2 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) goto LAB_03ecb948;
        CustomLogic_CustomLogicListBuiltin__Add
                  (__this_04,
                   (Il2CppObject *)(pCVar2->fields)._CustomLogicMapObjectBuiltin_k__BackingField,
                   (MethodInfo *)0x0);
        pCStack_30 = pCVar8;
      }
    }
  }
  __this_03.fields._8_8_ = pSVar7;
  __this_03.fields._dictionary = pSVar6;
  __this_03.fields._currentValue = (Il2CppObject *)__this_06;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
            (__this_03,(MethodInfo_31C30F0 *)&stack0xffffffffffffffa8);
  return (Il2CppObject *)__this_04;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateMapObject>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CreateMapObject_b__12_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ecff70

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__CreateMapObject>b__12_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  MethodInfo **ppMVar2;
  byte bVar3;
  int iVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  int32_t iVar6;
  undefined8 uVar7;
  Map_MapScriptSceneObject_o *__this_00;
  System_Object_array *data;
  long lVar8;
  UnityEngine_GameObject_o *__this_01;
  CustomLogic_CustomLogicPhotonSync_o *__this_02;
  System_String_o *csvScript;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar9;
  Il2CppObject *pIVar10;
  Il2CppObject *pIVar11;
  Il2CppObject *pIVar12;
  Il2CppObject *pIVar13;
  MethodInfo *method_00;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  if (DAT_057039be == '\0') {
    pcStack_40 = (code *)0x3ecff93;
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicPrefabBuiltin_ConvertTo_CustomLogicPr);
    pcStack_40 = (code *)0x3ecff9f;
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    pcStack_40 = (code *)0x3ecffab;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    pcStack_40 = (code *)0x3ecffb7;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039be = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    pcStack_40 = (code *)0x3ed00eb;
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    pcStack_40 = 
    CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__CreateMapObjectRaw>b__13_0
    ;
    il2cpp_raise_exception();
  }
  pIVar10 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    pcStack_40 = (code *)0x3ecffee;
    il2cpp_init_class();
  }
  pcStack_40 = (code *)0x3ed0000;
  pIVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar10,MethodInfo_CustomLogicPrefabBuiltin_ConvertTo_CustomLogicPr);
  if ((int)__a->max_length < 2) {
    pIVar12 = (Il2CppObject *)0x0;
    pIVar11 = (Il2CppObject *)0x0;
  }
  else {
    pIVar11 = __a->m_Items[1];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      pcStack_40 = (code *)0x3ed0027;
      il2cpp_init_class();
    }
    pcStack_40 = (code *)0x3ed003a;
    pIVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar11,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if ((int)__a->max_length < 3) {
      pIVar12 = (Il2CppObject *)0x0;
    }
    else {
      pIVar12 = __a->m_Items[2];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        pcStack_40 = (code *)0x3ed005e;
        il2cpp_init_class();
      }
      pcStack_40 = (code *)0x3ed006a;
      pIVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar12,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (3 < (int)__a->max_length) {
        pIVar13 = __a->m_Items[3];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          pcStack_40 = (code *)0x3ed00c2;
          il2cpp_init_class();
        }
        pcStack_40 = (code *)0x3ed00ce;
        pIVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar13,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        iVar4 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
        goto joined_r0x03ed00e2;
      }
    }
  }
  pIVar13 = (Il2CppObject *)0x0;
  iVar4 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
joined_r0x03ed00e2:
  uStack_38 = &TypeInfo_CustomLogicMapBuiltin;
  if (iVar4 == 0) {
    pcStack_40 = (code *)0x3ed008d;
    uStack_38 = (MethodInfo **)il2cpp_init_class();
  }
  if (DAT_0570398d == '\0') {
    pcStack_40 = (code *)0x3ecba3c;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    pcStack_40 = (code *)0x3ecba48;
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    DAT_0570398d = '\x01';
  }
  if ((pIVar10 != (Il2CppObject *)0x0) && (pIVar10[3].klass != (Il2CppClass *)0x0)) {
    pcStack_40 = (code *)0x3ecba75;
    uVar7 = (**(code **)((long)((pIVar10[3].klass)->_1).image + 0x1b8))();
    pcStack_40 = (code *)0x3ecba87;
    __this_00 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
    pcStack_40 = (code *)0x3ecba94;
    Map_MapScriptSceneObject___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
      pcStack_40 = (code *)0x3ecbab3;
      (*(__this_00->klass->vtable)._9_Deserialize.methodPtr)
                (__this_00,uVar7,(__this_00->klass->vtable)._9_Deserialize.method);
      if (pIVar11 != (Il2CppObject *)0x0) {
        pcStack_40 = (code *)0x3ecbace;
        Map_MapScriptBaseObject__SetPosition
                  ((Map_MapScriptBaseObject_o *)__this_00,
                   (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar11 + 3),
                   (MethodInfo *)0x0);
      }
      if (pIVar12 != (Il2CppObject *)0x0) {
        pcStack_40 = (code *)0x3ecbaeb;
        Map_MapScriptBaseObject__SetRotation
                  ((Map_MapScriptBaseObject_o *)__this_00,
                   (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar12 + 3),
                   (MethodInfo *)0x0);
      }
      if (pIVar13 != (Il2CppObject *)0x0) {
        pcStack_40 = (code *)0x3ecbb06;
        Map_MapScriptBaseObject__SetScale
                  ((Map_MapScriptBaseObject_o *)__this_00,
                   (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar13 + 3),
                   (MethodInfo *)0x0);
      }
      if (*(char *)((long)&(__this_00->fields).Active + 3) != '\0') {
        bVar3 = *(byte *)&pIVar10[3].monitor;
        if (*(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4) == 0) {
          pcStack_40 = (code *)0x3ecbb28;
          il2cpp_init_class();
        }
        if (DAT_05703995 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
          il2cpp_init_method_metadata(&TypeInfo_object);
          il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
          il2cpp_init_method_metadata(&"Game/CustomLogicPhotonSyncDynamicPrefab");
          DAT_05703995 = '\x01';
          iVar4 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
          method_00 = TypeInfo_CustomLogicMapBuiltin;
        }
        else {
          iVar4 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
          method_00 = TypeInfo_CustomLogicMapBuiltin;
        }
        TypeInfo_CustomLogicMapBuiltin = method_00;
        if (iVar4 == 0) {
          il2cpp_init_class();
          CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(method_00);
        }
        else {
          CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(method_00);
        }
        if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
          (__this_00->fields).Id = -1;
          (__this_00->fields).Parent = 0;
          *(undefined1 *)((long)&(__this_00->fields).Active + 3) = 1;
          data = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          uStack_5c = 2;
          pIVar10 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_5c);
          if (data != (System_Object_array *)0x0) {
            if ((pIVar10 != (Il2CppObject *)0x0) &&
               (lVar8 = il2cpp_runtime_glue(pIVar10,(((data->obj).klass)->_1).element_class),
               lVar8 == 0)) {
              uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar7,0);
            }
            if ((int)data->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            data->m_Items[0] = pIVar10;
            il2cpp_runtime_glue(data->m_Items);
            if (DAT_056fdd15 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fdd15 = '\x01';
            }
            uVar7 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            uVar14 = (int)uVar7;
            uVar15 = (int)((ulong)uVar7 >> 0x20);
            uVar16 = 0;
            uVar17 = 0;
            if (DAT_056fde1e == '\0') {
              uStack_50 = 0;
              uStack_58 = uVar7;
              il2cpp_init_method_metadata(&TypeInfo_Quaternion);
              DAT_056fde1e = '\x01';
              uVar14 = (undefined4)uStack_58;
              uVar15 = uStack_58._4_4_;
              uVar16 = (undefined4)uStack_50;
              uVar17 = uStack_50._4_4_;
            }
            ppMVar2 = (MethodInfo **)**(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            uVar7 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            uVar18 = (int)ppMVar2;
            uVar19 = (int)((ulong)ppMVar2 >> 0x20);
            uVar20 = (int)uVar7;
            uVar21 = (int)((ulong)uVar7 >> 0x20);
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              uStack_58 = CONCAT44(uVar15,uVar14);
              uStack_50 = CONCAT44(uVar17,uVar16);
              pcStack_40 = (code *)0x0;
              uStack_48 = uVar7;
              uStack_38 = ppMVar2;
              il2cpp_init_class();
              uVar14 = (undefined4)uStack_58;
              uVar15 = uStack_58._4_4_;
              uVar18 = (undefined4)uStack_38;
              uVar19 = uStack_38._4_4_;
              uVar20 = (undefined4)uStack_48;
              uVar21 = uStack_48._4_4_;
            }
            position.fields.y = (float)uVar15;
            position.fields.x = (float)uVar14;
            position.fields.z = fVar1;
            rotation.fields.y = (float)uVar19;
            rotation.fields.x = (float)uVar18;
            rotation.fields.w = (float)uVar21;
            rotation.fields.z = (float)uVar20;
            __this_01 = Photon_Pun_PhotonNetwork__Instantiate
                                  ("Game/CustomLogicPhotonSyncDynamicPrefab",position,rotation,'\0',data,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
              __this_02 = (CustomLogic_CustomLogicPhotonSync_o *)
                          UnityEngine_GameObject__GetComponent<object>(__this_01,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
              csvScript = (System_String_o *)
                          (*(__this_00->klass->vtable)._8_Serialize.methodPtr)
                                    (__this_00,(__this_00->klass->vtable)._8_Serialize.method);
              if (__this_02 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
                CustomLogic_CustomLogicPhotonSync__InitDynamic
                          (__this_02,(uint)bVar3,csvScript,(MethodInfo *)0x0);
                return (Il2CppObject *)
                       (__this_02->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4) == 0) {
        pcStack_40 = (code *)0x3ecbb57;
        il2cpp_init_class();
      }
      if (DAT_05703996 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        il2cpp_init_method_metadata(&TypeInfo_MapLoader);
        DAT_05703996 = '\x01';
        iVar4 = *(int *)(TypeInfo_MapLoader + 0xe4);
      }
      else {
        iVar4 = *(int *)(TypeInfo_MapLoader + 0xe4);
      }
      if (iVar4 == 0) {
        il2cpp_init_class();
        iVar6 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
      }
      else {
        iVar6 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
      }
      if (__this_00 != (Map_MapScriptSceneObject_o *)0x0) {
        (__this_00->fields).Id = iVar6;
        (__this_00->fields).Parent = 0;
        *(undefined1 *)((long)&(__this_00->fields).Active + 3) = 0;
        mapObject = Map_MapLoader__LoadObject
                              ((Map_MapScriptBaseObject_o *)__this_00,0,(MethodInfo *)0x0);
        Map_MapLoader__SetParent(mapObject,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if ((pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents
                      (pCVar5,mapObject,1,(MethodInfo *)0x0), mapObject != (Map_MapObject_o *)0x0))
        {
          *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
          pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            pCVar9 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                               (pCVar5,mapObject,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar9;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  pcStack_40 = (code *)&UNK_03ecbb72;
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CreateMapObjectRaw>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CreateMapObjectRaw_b__13_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed00f0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__CreateMapObjectRaw>b__13_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  int32_t iVar6;
  System_Object_array *data;
  Il2CppObject *pIVar7;
  long lVar8;
  UnityEngine_GameObject_o *__this_00;
  CustomLogic_CustomLogicPhotonSync_o *__this_01;
  undefined8 uVar9;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar10;
  System_String_array *value;
  Map_MapScriptSceneObject_o *__this_02;
  System_String_o *pSVar11;
  MethodInfo *method_00;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_20;
  MethodInfo **ppMStack_18;
  
  if (DAT_057039bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039bf = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar7 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar11 = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar7,MethodInfo_String_ConvertTo_String);
  if (*(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570398e == '\0') {
    puStack_20 = (undefined *)0x3ecbf2c;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    puStack_20 = (undefined *)0x3ecbf38;
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    puStack_20 = (undefined *)0x3ecbf44;
    il2cpp_init_method_metadata(&"");
    DAT_0570398e = '\x01';
  }
  if (pSVar11 != (System_String_o *)0x0) {
    puStack_20 = (undefined *)0x3ecbf65;
    value = System_String__Split(pSVar11,10,0,(MethodInfo *)0x0);
    puStack_20 = (undefined *)0x3ecbf79;
    pSVar11 = System_String__Join("",value,(MethodInfo *)0x0);
    puStack_20 = (undefined *)0x3ecbf8b;
    __this_02 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
    puStack_20 = (undefined *)0x3ecbf98;
    Map_MapScriptSceneObject___ctor(__this_02,(MethodInfo *)0x0);
    if (__this_02 != (Map_MapScriptSceneObject_o *)0x0) {
      puStack_20 = (undefined *)0x3ecbfb3;
      (*(__this_02->klass->vtable)._9_Deserialize.methodPtr)
                (__this_02,pSVar11,(__this_02->klass->vtable)._9_Deserialize.method);
      cVar3 = *(char *)((long)&(__this_02->fields).Active + 3);
      ppMStack_18 = &TypeInfo_CustomLogicMapBuiltin;
      if (*(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4) == 0) {
        puStack_20 = (undefined *)0x3ecbfe2;
        ppMStack_18 = (MethodInfo **)il2cpp_init_class();
      }
      if (cVar3 != '\0') {
        if (DAT_05703995 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
          il2cpp_init_method_metadata(&TypeInfo_object);
          il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
          il2cpp_init_method_metadata(&"Game/CustomLogicPhotonSyncDynamicPrefab");
          DAT_05703995 = '\x01';
          iVar4 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
          method_00 = TypeInfo_CustomLogicMapBuiltin;
        }
        else {
          iVar4 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
          method_00 = TypeInfo_CustomLogicMapBuiltin;
        }
        TypeInfo_CustomLogicMapBuiltin = method_00;
        if (iVar4 == 0) {
          il2cpp_init_class();
          CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(method_00);
        }
        else {
          CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(method_00);
        }
        if (__this_02 != (Map_MapScriptSceneObject_o *)0x0) {
          (__this_02->fields).Id = -1;
          (__this_02->fields).Parent = 0;
          *(undefined1 *)((long)&(__this_02->fields).Active + 3) = 1;
          data = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          uStack_5c = 2;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_5c);
          if (data != (System_Object_array *)0x0) {
            if ((pIVar7 != (Il2CppObject *)0x0) &&
               (lVar8 = il2cpp_runtime_glue(pIVar7,(((data->obj).klass)->_1).element_class),
               lVar8 == 0)) {
              uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar9,0);
            }
            if ((int)data->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            data->m_Items[0] = pIVar7;
            il2cpp_runtime_glue(data->m_Items);
            if (DAT_056fdd15 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fdd15 = '\x01';
            }
            uVar9 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            uVar12 = (int)uVar9;
            uVar13 = (int)((ulong)uVar9 >> 0x20);
            uVar14 = 0;
            uVar15 = 0;
            if (DAT_056fde1e == '\0') {
              uStack_50 = 0;
              uStack_58 = uVar9;
              il2cpp_init_method_metadata(&TypeInfo_Quaternion);
              DAT_056fde1e = '\x01';
              uVar12 = (undefined4)uStack_58;
              uVar13 = uStack_58._4_4_;
              uVar14 = (undefined4)uStack_50;
              uVar15 = uStack_50._4_4_;
            }
            uVar9 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            uVar2 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            uVar16 = (int)uVar9;
            uVar17 = (int)((ulong)uVar9 >> 0x20);
            uVar18 = (int)uVar2;
            uVar19 = (int)((ulong)uVar2 >> 0x20);
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              uStack_58 = CONCAT44(uVar13,uVar12);
              uStack_50 = CONCAT44(uVar15,uVar14);
              uStack_30 = 0;
              uStack_40 = 0;
              uStack_48 = uVar2;
              uStack_38 = uVar9;
              il2cpp_init_class();
              uVar12 = (undefined4)uStack_58;
              uVar13 = uStack_58._4_4_;
              uVar16 = (undefined4)uStack_38;
              uVar17 = uStack_38._4_4_;
              uVar18 = (undefined4)uStack_48;
              uVar19 = uStack_48._4_4_;
            }
            position.fields.y = (float)uVar13;
            position.fields.x = (float)uVar12;
            position.fields.z = fVar1;
            rotation.fields.y = (float)uVar17;
            rotation.fields.x = (float)uVar16;
            rotation.fields.w = (float)uVar19;
            rotation.fields.z = (float)uVar18;
            __this_00 = Photon_Pun_PhotonNetwork__Instantiate
                                  ("Game/CustomLogicPhotonSyncDynamicPrefab",position,rotation,'\0',data,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              __this_01 = (CustomLogic_CustomLogicPhotonSync_o *)
                          UnityEngine_GameObject__GetComponent<object>(__this_00,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
              pSVar11 = (System_String_o *)
                        (*(__this_02->klass->vtable)._8_Serialize.methodPtr)
                                  (__this_02,(__this_02->klass->vtable)._8_Serialize.method);
              if (__this_01 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
                CustomLogic_CustomLogicPhotonSync__InitDynamic
                          (__this_01,0,pSVar11,(MethodInfo *)0x0);
                return (Il2CppObject *)
                       (__this_01->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (DAT_05703996 == '\0') {
        puStack_20 = (undefined *)0x3ecbe40;
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        puStack_20 = (undefined *)0x3ecbe4c;
        il2cpp_init_method_metadata(&TypeInfo_MapLoader);
        DAT_05703996 = '\x01';
        iVar4 = *(int *)(TypeInfo_MapLoader + 0xe4);
      }
      else {
        iVar4 = *(int *)(TypeInfo_MapLoader + 0xe4);
      }
      if (iVar4 == 0) {
        puStack_20 = (undefined *)0x3ecbe6b;
        il2cpp_init_class();
        puStack_20 = (undefined *)0x3ecbe72;
        iVar6 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
      }
      else {
        puStack_20 = (undefined *)0x3ecbe2a;
        iVar6 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
      }
      if (__this_02 != (Map_MapScriptSceneObject_o *)0x0) {
        (__this_02->fields).Id = iVar6;
        (__this_02->fields).Parent = 0;
        *(undefined1 *)((long)&(__this_02->fields).Active + 3) = 0;
        puStack_20 = (undefined *)0x3ecbe95;
        mapObject = Map_MapLoader__LoadObject
                              ((Map_MapScriptBaseObject_o *)__this_02,0,(MethodInfo *)0x0);
        puStack_20 = (undefined *)0x3ecbea2;
        Map_MapLoader__SetParent(mapObject,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          puStack_20 = (undefined *)0x3ecbeba;
          il2cpp_init_class();
        }
        pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          puStack_20 = (undefined *)0x3ecbedc;
          CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents
                    (pCVar5,mapObject,1,(MethodInfo *)0x0);
          if (mapObject != (Map_MapObject_o *)0x0) {
            *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
            pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              pCVar10 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                                  (pCVar5,mapObject,(MethodInfo *)0x0);
              return (Il2CppObject *)pCVar10;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      puStack_20 = &UNK_03ecbf0e;
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  puStack_20 = &UNK_03ecbff8;
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__PrefabFromMapObject>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__PrefabFromMapObject_b__14_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed01a0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__PrefabFromMapObject>b__14_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  long *plVar2;
  Il2CppObject *obj;
  uint uVar3;
  System_String_o *prefabCSV;
  CustomLogic_CustomLogicPrefabBuiltin_o *__this_00;
  Il2CppObject *pIVar4;
  
  if (DAT_057039c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicMapObjectBuiltin_ConvertTo_CustomLogi);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039c0 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar4 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar4,MethodInfo_CustomLogicMapObjectBuiltin_ConvertTo_CustomLogi);
  if ((int)__a->max_length < 2) {
    uVar3 = 0;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    obj = __a->m_Items[1];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570398f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPrefabBuiltin);
    DAT_0570398f = '\x01';
  }
  if (((pIVar4 != (Il2CppObject *)0x0) && (pIVar4[3].klass != (Il2CppClass *)0x0)) &&
     (plVar2 = ((pIVar4[3].klass)->_1).byval_arg.data, plVar2 != (long *)0x0)) {
    prefabCSV = (System_String_o *)
                (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    __this_00 = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPrefabBuiltin);
    CustomLogic_CustomLogicPrefabBuiltin___ctor(__this_00,prefabCSV,uVar3 & 0xff,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__DestroyMapObject>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__DestroyMapObject_b__15_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed02b0

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__DestroyMapObject>b__15_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_057039c1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicMapObjectBuiltin_ConvertTo_CustomLogi);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039c1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    mapObject = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicMapObjectBuiltin_ConvertTo_CustomLogi);
    if (1 < (uint)__a->max_length) {
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[1],MethodInfo_Boolean_ConvertTo_Boolean);
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      CustomLogic_CustomLogicMapBuiltin__DestroyMapObject(mapObject,uVar1 & 0xff,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__CopyMapObject>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__CopyMapObject_b__16_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed0390

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__CopyMapObject>b__16_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t parent;
  Il2CppClass *obj;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Il2CppObject *obj_00;
  uint uVar1;
  Map_MapObject_o *obj_01;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  Il2CppObject *pIVar3;
  
  if (DAT_057039c2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicMapObjectBuiltin_ConvertTo_CustomLogi);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039c2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar3 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar3,MethodInfo_CustomLogicMapObjectBuiltin_ConvertTo_CustomLogi);
  uVar1 = 1;
  if (1 < (int)__a->max_length) {
    obj_00 = __a->m_Items[1];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj_00,MethodInfo_Boolean_ConvertTo_Boolean);
  }
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703991 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_05703991 = '\x01';
  }
  if ((pIVar3 != (Il2CppObject *)0x0) && (obj = pIVar3[3].klass, obj != (Il2CppClass *)0x0)) {
    parent = ((Map_MapObject_Fields *)&(obj->_1).name)->Parent;
    if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
      il2cpp_init_class();
    }
    obj_01 = CustomLogic_CustomLogicMapBuiltin__CopyMapObject
                       ((Map_MapObject_o *)obj,parent,uVar1 & 0xff,method);
    if (obj_01 != (Map_MapObject_o *)0x0) {
      *(undefined1 *)&(obj_01->fields).RuntimeCreated = 1;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_00,obj_01,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__DestroyMapTargetable>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__DestroyMapTargetable_b__17_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed0490

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__DestroyMapTargetable>b__17_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *targetable;
  MethodInfo *method_00;
  
  if (DAT_057039c3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicMapTargetableBuiltin_ConvertTo_Custom);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039c3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_CustomLogicMapTargetableBuiltin_ConvertTo_Custom;
      targetable = (CustomLogic_CustomLogicMapTargetableBuiltin_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                             (obj,(MethodInfo_24AB7B0 *)MethodInfo_CustomLogicMapTargetableBuiltin_ConvertTo_Custom);
      if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicMapBuiltin__DestroyMapTargetable(targetable,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__UpdateNavMesh>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__UpdateNavMesh_b__18_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed0540

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__UpdateNavMesh>b__18_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  System_Threading_Tasks_Task_o *__this_00;
  
  if (DAT_057039c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039c4 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703993 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05703993 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  }
  else {
    __this_00 = Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  }
  if (__this_00 == (System_Threading_Tasks_Task_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Threading_Tasks_Task__Wait(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings.<>c$$<__CreateMethodBinding__UpdateNavMeshAsync>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMapBuiltin_Bindings___c_____CreateMethodBinding__UpdateNavMeshAsync_b__19_0 (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMapBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed0610

Il2CppObject *
CustomLogic_CustomLogicMapBuiltin_Bindings_<>c__<__CreateMethodBinding__UpdateNavMeshAsync>b__19_0
          (CustomLogic_CustomLogicMapBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicMapBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057039c5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_057039c5 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703994 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05703994 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMapBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ecd660

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMapBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_Exception_o *__this;
  System_Func_T__object____object__o *pSVar7;
  CustomLogic_CLMethodBinding_T__o *pCVar8;
  
  if (DAT_0570399f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"UpdateNavMeshAsync");
    il2cpp_init_method_metadata(&"FindAllMapObjects");
    il2cpp_init_method_metadata(&"FindMapObjectByID");
    il2cpp_init_method_metadata(&"UpdateNavMesh");
    il2cpp_init_method_metadata(&"FindMapObjectByComponent");
    il2cpp_init_method_metadata(&"DestroyMapTargetable");
    il2cpp_init_method_metadata(&"FindMapObjectsByComponent");
    il2cpp_init_method_metadata(&"FindMapObjectByName");
    il2cpp_init_method_metadata(&"DestroyMapObject");
    il2cpp_init_method_metadata(&"FindMapObjectsByTag");
    il2cpp_init_method_metadata(&"CreateMapObject");
    il2cpp_init_method_metadata(&"FindMapObjectsByPlayer");
    il2cpp_init_method_metadata(&"PrefabFromMapObject");
    il2cpp_init_method_metadata(&"FindMapObjectByTag");
    il2cpp_init_method_metadata(&"FindMapObjectsByRegex");
    il2cpp_init_method_metadata(&"CreateMapObjectRaw");
    il2cpp_init_method_metadata(&"FindMapObjectsByName");
    il2cpp_init_method_metadata(&"CopyMapObject");
    DAT_0570399f = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x6a75bbaf) {
    if (uVar3 < 0x3aa79d29) {
      if (uVar3 < 0x23f4b409) {
        if (uVar3 == 0x7042ece) {
          bVar4 = System_String__op_Equality(name,"FindMapObjectsByName",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_057039a2 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectsByN);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_057039a2 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x18);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x18);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x18,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0x23f4b408) &&
                (bVar4 = System_String__op_Equality(name,"FindMapObjectsByComponent",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057039a5 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectsByC);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057039a5 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x30,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x34c16581) {
        bVar4 = System_String__op_Equality(name,"CopyMapObject",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057039ae == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__CopyMapObject_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057039ae = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x78,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x3aa79d28) &&
              (bVar4 = System_String__op_Equality(name,"UpdateNavMesh",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039b0 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__UpdateNavMesh_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039b0 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x88,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x4df313e9) {
      if (uVar3 == 0x472155dc) {
        bVar4 = System_String__op_Equality(name,"DestroyMapTargetable",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057039af == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__DestroyMapTargeta);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057039af = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x80,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x4df313e8) &&
              (bVar4 = System_String__op_Equality(name,"FindMapObjectsByPlayer",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039a9 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectsByP);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039a9 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x50,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x604b4ecd) {
      bVar4 = System_String__op_Equality(name,"FindMapObjectByName",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039a1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectByNa);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039a1 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x6889a906) {
      bVar4 = System_String__op_Equality(name,"CreateMapObject",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039aa == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__CreateMapObject_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039aa = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x58,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x6a75bbae) &&
            (bVar4 = System_String__op_Equality(name,"DestroyMapObject",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039ad == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__DestroyMapObject);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057039ad = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x70,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x9bea5774) {
    if (uVar3 < 0x926c3e54) {
      if (uVar3 == 0x926c3e53) {
        bVar4 = System_String__op_Equality(name,"FindMapObjectByID",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057039a6 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectByID);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057039a6 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x38,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x7b196e7c) &&
              (bVar4 = System_String__op_Equality(name,"PrefabFromMapObject",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039ac == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PrefabFromMapObje);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039ac = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x68,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x9947e69d) {
      bVar4 = System_String__op_Equality(name,"FindMapObjectByComponent",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039a4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectByCo);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039a4 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x9bea5773) &&
            (bVar4 = System_String__op_Equality(name,"FindAllMapObjects",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039a0 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindAllMapObjects);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057039a0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 8,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xc985509d) {
    if (uVar3 == 0xbf6edce0) {
      bVar4 = System_String__op_Equality(name,"FindMapObjectsByRegex",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039a3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectsByR);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039a3 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xc985509c) &&
            (bVar4 = System_String__op_Equality(name,"UpdateNavMeshAsync",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039b1 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__UpdateNavMeshAsyn);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057039b1 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x90) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x90,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xd805e00e) {
    bVar4 = System_String__op_Equality(name,"FindMapObjectByTag",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039a7 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectByTa);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057039a7 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x40,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xea839630) {
    bVar4 = System_String__op_Equality(name,"CreateMapObjectRaw",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039ab == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__CreateMapObjectRa);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057039ab = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x60,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xecb4a36b) &&
          (bVar4 = System_String__op_Equality(name,"FindMapObjectsByTag",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057039a8 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectsByT);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_057039a8 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    }
    else {
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    }
    if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
      il2cpp_runtime_glue(lVar2 + 0x48,pSVar7);
    }
    pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicMapBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindAllMapObjects
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindAllMapObjects (const MethodInfo* method);
// 0x3ecdd60

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindAllMapObjects
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039a0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindAllMapObjects);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039a0 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByName (const MethodInfo* method);
// 0x3ecdeb0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByName
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039a1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectByNa);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039a1 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByName (const MethodInfo* method);
// 0x3ece000

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByName
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectsByN);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039a2 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByRegex
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByRegex (const MethodInfo* method);
// 0x3ece150

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByRegex
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039a3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectsByR);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039a3 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByComponent (const MethodInfo* method);
// 0x3ece2a0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByComponent
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectByCo);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039a4 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByComponent
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByComponent (const MethodInfo* method);
// 0x3ece3f0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByComponent
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039a5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectsByC);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039a5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByID
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByID (const MethodInfo* method);
// 0x3ece540

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByID
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectByID);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039a6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectByTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByTag (const MethodInfo* method);
// 0x3ece690

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectByTag
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectByTa);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039a7 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByTag
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByTag (const MethodInfo* method);
// 0x3ece7e0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByTag
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectsByT);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039a8 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__FindMapObjectsByPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByPlayer (const MethodInfo* method);
// 0x3ece930

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__FindMapObjectsByPlayer
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039a9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindMapObjectsByP);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039a9 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CreateMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObject (const MethodInfo* method);
// 0x3ecea80

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObject
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039aa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__CreateMapObject_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039aa = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CreateMapObjectRaw
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObjectRaw (const MethodInfo* method);
// 0x3ecebd0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CreateMapObjectRaw
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__CreateMapObjectRa);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039ab = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__PrefabFromMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__PrefabFromMapObject (const MethodInfo* method);
// 0x3eced20

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__PrefabFromMapObject
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039ac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PrefabFromMapObje);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039ac = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__DestroyMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapObject (const MethodInfo* method);
// 0x3ecee70

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapObject
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039ad == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__DestroyMapObject);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039ad = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__CopyMapObject
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CopyMapObject (const MethodInfo* method);
// 0x3ecefc0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__CopyMapObject(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039ae == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__CopyMapObject_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039ae = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__DestroyMapTargetable
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapTargetable (const MethodInfo* method);
// 0x3ecf110

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__DestroyMapTargetable
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039af == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__DestroyMapTargeta);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039af = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__UpdateNavMesh
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMesh (const MethodInfo* method);
// 0x3ecf260

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMesh(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039b0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__UpdateNavMesh_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039b0 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$__CreateMethodBinding__UpdateNavMeshAsync
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o* CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMeshAsync (const MethodInfo* method);
// 0x3ecf3b0

CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *
CustomLogic_CustomLogicMapBuiltin_Bindings____CreateMethodBinding__UpdateNavMeshAsync
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *__this;
  
  if (DAT_057039b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__UpdateNavMeshAsyn);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039b1 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x90);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicMapBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x90) = function;
    il2cpp_runtime_glue(lVar2 + 0x90,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicMapBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicMapBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicMapBuiltin);
  return __this;
}


// CustomLogic.CustomLogicMapBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ecf500

void CustomLogic_CustomLogicMapBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057039b2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"UpdateNavMeshAsync");
    il2cpp_init_method_metadata(&"FindAllMapObjects");
    il2cpp_init_method_metadata(&"FindMapObjectByID");
    il2cpp_init_method_metadata(&"UpdateNavMesh");
    il2cpp_init_method_metadata(&"FindMapObjectByComponent");
    il2cpp_init_method_metadata(&"DestroyMapTargetable");
    il2cpp_init_method_metadata(&"FindMapObjectsByComponent");
    il2cpp_init_method_metadata(&"FindMapObjectByName");
    il2cpp_init_method_metadata(&"DestroyMapObject");
    il2cpp_init_method_metadata(&"FindMapObjectsByTag");
    il2cpp_init_method_metadata(&"CreateMapObject");
    il2cpp_init_method_metadata(&"FindMapObjectsByPlayer");
    il2cpp_init_method_metadata(&"PrefabFromMapObject");
    il2cpp_init_method_metadata(&"FindMapObjectByTag");
    il2cpp_init_method_metadata(&"FindMapObjectsByRegex");
    il2cpp_init_method_metadata(&"CreateMapObjectRaw");
    il2cpp_init_method_metadata(&"FindMapObjectsByName");
    il2cpp_init_method_metadata(&"CopyMapObject");
    DAT_057039b2 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"FindAllMapObjects",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindMapObjectByName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindMapObjectsByName",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindMapObjectsByRegex",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindMapObjectByComponent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindMapObjectsByComponent",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindMapObjectByID",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindMapObjectByTag",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindMapObjectsByTag",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindMapObjectsByPlayer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CreateMapObject",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CreateMapObjectRaw",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PrefabFromMapObject",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DestroyMapObject",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CopyMapObject",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DestroyMapTargetable",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"UpdateNavMesh",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"UpdateNavMeshAsync",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___c___cctor (const MethodInfo* method);
// 0x3ed06c0

void CustomLogic_CustomLogicMapBuiltin_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057039c6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039c6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___c___ctor (CustomLogic_CustomLogicMapBuiltin___c_o* __this, const MethodInfo* method);
// 0x3ed0730

void CustomLogic_CustomLogicMapBuiltin_<>c___ctor
               (CustomLogic_CustomLogicMapBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapBuiltin.<>c$$<FindMapObjectsByRegex>b__7_0
// il2cpp: int32_t CustomLogic_CustomLogicMapBuiltin___c___FindMapObjectsByRegex_b__7_0 (CustomLogic_CustomLogicMapBuiltin___c_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x3ed0740

int32_t CustomLogic_CustomLogicMapBuiltin_<>c__<FindMapObjectsByRegex>b__7_0
                  (CustomLogic_CustomLogicMapBuiltin___c_o *__this,Il2CppObject *a,Il2CppObject *b,
                  MethodInfo *method)

{
  byte bVar1;
  void *pvVar2;
  void *pvVar3;
  int32_t iVar4;
  
  if (DAT_057039c7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    DAT_057039c7 = '\x01';
  }
  if (a != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
    if (((a->klass->_2).naturalAligment < bVar1) ||
       ((a->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicMapObjectBuiltin)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(a);
    }
    if (((a[3].klass != (Il2CppClass *)0x0) &&
        (pvVar2 = ((a[3].klass)->_1).byval_arg.data, pvVar2 != (void *)0x0)) &&
       (b != (Il2CppObject *)0x0)) {
      if (((b->klass->_2).naturalAligment < bVar1) ||
         ((b->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicMapObjectBuiltin)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(b);
      }
      if ((b[3].klass != (Il2CppClass *)0x0) &&
         (pvVar3 = ((b[3].klass)->_1).byval_arg.data, pvVar3 != (void *)0x0)) {
        iVar4 = System_String__Compare
                          (*(System_String_o **)((long)pvVar2 + 0x30),
                           *(System_String_o **)((long)pvVar3 + 0x30),(MethodInfo *)0x0);
        return iVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___ctor (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x3ec9be0

void CustomLogic_CustomLogicMapBuiltin___ctor
               (CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  Utility_RateLimit_o *__this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (DAT_05703982 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RateLimit);
    DAT_05703982 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  __this_00 = (Utility_RateLimit_o *)il2cpp_runtime_glue(TypeInfo_RateLimit);
  if ((char)bVar2 == '\0') {
    Utility_RateLimit___ctor(__this_00,0x14,1.0,(MethodInfo *)0x0);
    uVar4 = 300;
    uVar3 = 300;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    Utility_RateLimit___ctor(__this_00,0x28,1.0,(MethodInfo *)0x0);
    uVar4 = 1000;
    uVar3 = 1000;
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    uVar3 = uVar4;
  }
  **(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8) = __this_00;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicMapBuiltin + 0xb8),__this_00);
  *(undefined4 *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 0xc) = uVar3;
  return;
}


// CustomLogic.CustomLogicMapBuiltin$$FindAllMapObjects
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindAllMapObjects (const MethodInfo* method);
// 0x3ec9d20

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindAllMapObjects(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Object_array *pSVar3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  long lVar4;
  bool_conflict bVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_06;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  ulong in_stack_ffffffffffffff88;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;
  
  if (DAT_05703983 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05703983 = '\x01';
  }
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_06 = System_Collections_Generic_Dictionary<object__object>__get_Values
                          (__this,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    if (__this_06 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                (&SStack_48,__this_06,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        __this_03.fields._index = 0;
        __this_03.fields._version = 0;
        __this_03.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
        __this_03.fields._currentValue = (Il2CppObject *)SStack_48.fields._dictionary;
        bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_03,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
        if ((char)bVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        pSVar6 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *
                 )SStack_48.fields._dictionary;
        while( true ) {
          __this_02.fields._8_8_ = __this_05;
          __this_02.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
          __this_02.fields._currentValue = (Il2CppObject *)pSVar6;
          bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                            (__this_02,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
          SStack_48.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6;
          if ((char)bVar5 == '\0') break;
          __this_00 = (__this_05->fields).List;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_01,(Map_MapObject_o *)SStack_48.fields._currentValue,
                            (MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this_00->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this_00,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_04.fields._8_8_ = __this_05;
      __this_04.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
      __this_04.fields._currentValue = (Il2CppObject *)SStack_48.fields._dictionary;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                (__this_04,(MethodInfo_31D09D0 *)&stack0xffffffffffffff98);
      return __this_05;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByName
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByName (System_String_o* objectName, const MethodInfo* method);
// 0x3eca040

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByName
          (System_String_o *objectName,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptBaseObject_o *pMVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_03;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  int iVar5;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar7;
  Map_MapObject_o *obj;
  Map_MapObject_o *pMVar8;
  undefined1 auStack_40 [16];
  Map_MapObject_o *pMStack_30;
  
  if (DAT_05703984 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05703984 = '\x01';
  }
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_03 = System_Collections_Generic_Dictionary<object__object>__get_Values
                          (__this,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    if (__this_03 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )auStack_40,__this_03,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      pCVar3 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
      pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_40._0_8_;
      pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
               auStack_40._8_8_;
      do {
        obj = pMStack_30;
        __this_01.fields._8_8_ = pSVar7;
        __this_01.fields._dictionary = pSVar6;
        __this_01.fields._currentValue = (Il2CppObject *)obj;
        bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                          (__this_01,(MethodInfo_31D09E0 *)&stack0xffffffffffffffa8);
        if ((char)bVar2 == '\0') {
          iVar5 = 5;
          goto LAB_03eca1d1;
        }
        if (obj == (Map_MapObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pMVar1 = (obj->fields).ScriptObject;
        if (pMVar1 == (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pMVar8 = obj;
        bVar2 = System_String__op_Equality
                          (*(System_String_o **)&(pMVar1->fields).Visible,objectName,
                           (MethodInfo *)0x0);
        pMStack_30 = pMVar8;
      } while ((char)bVar2 == '\0');
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_00,obj,(MethodInfo *)0x0);
      iVar5 = 4;
      obj = pMVar8;
LAB_03eca1d1:
      __this_02.fields._8_8_ = pSVar7;
      __this_02.fields._dictionary = pSVar6;
      __this_02.fields._currentValue = (Il2CppObject *)obj;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                (__this_02,(MethodInfo_31D09D0 *)&stack0xffffffffffffffa8);
      pCVar4 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
      if (iVar5 == 4) {
        pCVar4 = pCVar3;
      }
      return pCVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByName
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByName (System_String_o* objectName, const MethodInfo* method);
// 0x3eca2d0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByName
          (System_String_o *objectName,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Object_array *pSVar4;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  long lVar5;
  bool_conflict bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_05;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_06;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar7;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;
  
  if (DAT_05703985 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05703985 = '\x01';
  }
  __this_05 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_05,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    __this_06 = System_Collections_Generic_Dictionary<object__object>__get_Values
                          (__this,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    if (__this_06 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
                (&SStack_48,__this_06,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
               SStack_48.fields._dictionary;
      if (__this_05 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        while( true ) {
          __this_03.fields._8_8_ = __this_05;
          __this_03.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
          __this_03.fields._currentValue = (Il2CppObject *)pSVar7;
          bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                            (__this_03,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
          if ((char)bVar6 == '\0') break;
          if ((Map_MapObject_o *)SStack_48.fields._currentValue == (Map_MapObject_o *)0x0)
          goto LAB_03eca582;
          pMVar3 = ((Map_MapObject_Fields *)((long)SStack_48.fields._currentValue + 0x10))->
                   ScriptObject;
          if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto LAB_03eca587;
          bVar6 = System_String__op_Equality
                            (*(System_String_o **)&(pMVar3->fields).Visible,objectName,
                             (MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
      else {
        while( true ) {
          __this_02.fields._8_8_ = __this_05;
          __this_02.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
          __this_02.fields._currentValue = (Il2CppObject *)pSVar7;
          bVar6 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                            (__this_02,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
          if ((char)bVar6 == '\0') break;
          if ((Map_MapObject_o *)SStack_48.fields._currentValue == (Map_MapObject_o *)0x0) {
LAB_03eca582:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pMVar3 = ((Map_MapObject_Fields *)((long)SStack_48.fields._currentValue + 0x10))->
                   ScriptObject;
          if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) {
LAB_03eca587:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar6 = System_String__op_Equality
                            (*(System_String_o **)&(pMVar3->fields).Visible,objectName,
                             (MethodInfo *)0x0);
          if ((char)bVar6 != '\0') {
            __this_00 = (__this_05->fields).List;
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8)
            ;
            if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_01,(Map_MapObject_o *)SStack_48.fields._currentValue,
                              (MethodInfo *)0x0);
            lVar5 = MethodInfo_Void_Add;
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            piVar1 = &(__this_00->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (__this_00->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_00->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (__this_00->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,item);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_00,(Il2CppObject *)item,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
      }
      __this_04.fields._8_8_ = __this_05;
      __this_04.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88;
      __this_04.fields._currentValue = (Il2CppObject *)pSVar7;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                (__this_04,(MethodInfo_31D09D0 *)&stack0xffffffffffffff98);
      return __this_05;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByRegex
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByRegex (System_String_o* pattern, bool sorted, const MethodInfo* method);
// 0x3eca690

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByRegex
          (System_String_o *pattern,bool_conflict sorted,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Map_MapScriptBaseObject_o *pMVar3;
  System_Collections_Generic_List_object__o *pSVar4;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *pSVar5;
  long lVar6;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_04;
  System_Text_RegularExpressions_Regex_o *__this_05;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_06;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  System_Comparison_T__o *comparison;
  undefined1 in_stack_ffffffffffffff88 [12];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o SStack_48;
  
  if (DAT_05703986 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Comparison_object);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&MethodInfo_Int32__FindMapObjectsByRegex_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05703986 = '\x01';
  }
  __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_04,(MethodInfo *)0x0);
  __this_05 = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(__this_05,pattern,9,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  if ((__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_06 = System_Collections_Generic_Dictionary<object__object>__get_Values
                            (__this,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE),
     __this_06 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
              (&SStack_48,__this_06,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    if (__this_05 == (System_Text_RegularExpressions_Regex_o *)0x0) {
      __this_02.fields._version = sorted;
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88._0_8_;
      __this_02.fields._index = in_stack_ffffffffffffff88._8_4_;
      __this_02.fields._currentValue = (Il2CppObject *)SStack_48.fields._dictionary;
      bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                        (__this_02,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98);
      if ((char)bVar7 != '\0') {
        if ((Map_MapObject_o *)SStack_48.fields._currentValue != (Map_MapObject_o *)0x0) {
          if (((Map_MapObject_Fields *)((long)SStack_48.fields._currentValue + 0x10))->ScriptObject
              != (Map_MapScriptBaseObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
LAB_03ecaa89:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03ecaa7d:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      pSVar8 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
               SStack_48.fields._dictionary;
      while (__this_01.fields._version = sorted,
            __this_01.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                 in_stack_ffffffffffffff88._0_8_,
            __this_01.fields._index = in_stack_ffffffffffffff88._8_4_,
            __this_01.fields._currentValue = (Il2CppObject *)pSVar8,
            bVar7 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                              (__this_01,(MethodInfo_31D09E0 *)&stack0xffffffffffffff98),
            SStack_48.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8,
            (char)bVar7 != '\0') {
        if ((Map_MapObject_o *)SStack_48.fields._currentValue == (Map_MapObject_o *)0x0)
        goto LAB_03ecaa7d;
        pMVar3 = ((Map_MapObject_Fields *)((long)SStack_48.fields._currentValue + 0x10))->
                 ScriptObject;
        if (pMVar3 == (Map_MapScriptBaseObject_o *)0x0) goto LAB_03ecaa89;
        bVar7 = System_Text_RegularExpressions_Regex__IsMatch
                          (__this_05,*(System_String_o **)&(pMVar3->fields).Visible,
                           (MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if (__this_04 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar4 = (__this_04->fields).List;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this_00,(Map_MapObject_o *)SStack_48.fields._currentValue,
                            (MethodInfo *)0x0);
          lVar6 = MethodInfo_Void_Add;
          if (pSVar4 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(pSVar4->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (pSVar4->fields)._items;
          if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (pSVar4->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (pSVar4->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar4,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
    }
    __this_03.fields._version = sorted;
    __this_03.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff88._0_8_;
    __this_03.fields._index = in_stack_ffffffffffffff88._8_4_;
    __this_03.fields._currentValue = (Il2CppObject *)SStack_48.fields._dictionary;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
              (__this_03,(MethodInfo_31D09D0 *)&stack0xffffffffffffff98);
    if ((char)sorted == '\0') {
      return __this_04;
    }
    if (__this_04 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pSVar4 = (__this_04->fields).List;
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
        comparison = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        comparison = *(System_Comparison_T__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (comparison == (System_Comparison_T__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        comparison = (System_Comparison_T__o *)il2cpp_runtime_glue(TypeInfo_Comparison_object);
        System_Comparison<object>___ctor();
        lVar6 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Comparison_T__o **)(lVar6 + 8) = comparison;
        il2cpp_runtime_glue(lVar6 + 8,comparison);
      }
      if (pSVar4 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List<object>__Sort(pSVar4,comparison,MethodInfo_Void_Sort);
        return __this_04;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByComponent
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByComponent (System_String_o* className, const MethodInfo* method);
// 0x3ecab80

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByComponent
          (System_String_o *className,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  int32_t iVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  
  if (DAT_05703987 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    DAT_05703987 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    __this = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,method);
  }
  else {
    __this = CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent(className,method);
  }
  if (__this == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar3 = CustomLogic_CustomLogicListBuiltin__get_Count(__this,(MethodInfo *)0x0);
  pCVar5 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  if (0 < iVar3) {
    pCVar4 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
             CustomLogic_CustomLogicListBuiltin__Get(__this,0,(MethodInfo *)0x0);
    pCVar5 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    if (pCVar4 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
      bVar1 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
      if (((((Il2CppClass *)pCVar4->klass)->_2).naturalAligment < bVar1) ||
         (pCVar5 = pCVar4,
         (((Il2CppClass *)pCVar4->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicMapObjectBuiltin)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pCVar4);
      }
    }
  }
  return pCVar5;
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByComponent
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent (System_String_o* className, const MethodInfo* method);
// 0x3ecac80

/* WARNING: Removing unreachable block (ram,0x03ecaf77) */

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByComponent
          (System_String_o *className,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_object__o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *__this_02;
  System_Object_array *pSVar3;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_06;
  long lVar4;
  bool_conflict bVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_07;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_08;
  System_String_o *a;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  _union_234480 _Var6;
  Il2CppType *pIVar7;
  Map_MapObject_o *obj;
  Map_MapObject_o *pMVar8;
  _union_234480 local_68;
  Il2CppType *pIStack_60;
  Map_MapObject_o *local_58;
  _union_234480 local_48;
  Il2CppType *pIStack_40;
  Map_MapObject_o *local_38;
  
  if (DAT_05703988 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_05703988 = '\x01';
  }
  local_68.genericMethod =
       (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (Map_MapObject_o *)0x0;
  __this_07 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_07,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x10);
  if ((__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
     (__this_08 = System_Collections_Generic_Dictionary<object__object>__get_Values
                            (__this,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_UnityE),
     __this_08 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary_ValueCollection<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
             &local_48,__this_08,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
  _Var6 = local_48;
  pIVar7 = pIStack_40;
  obj = local_38;
  do {
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._dictionary = _Var6.genericMethod;
    __this_03.fields._currentValue = (Il2CppObject *)obj;
    bVar5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__MoveNext
                      (__this_03,(MethodInfo_31D09E0 *)&stack0xffffffffffffff78);
    if ((char)bVar5 == '\0') {
      __this_06.fields._8_8_ = pIVar7;
      __this_06.fields._dictionary = _Var6.genericMethod;
      __this_06.fields._currentValue = (Il2CppObject *)obj;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator<object__object>__Dispose
                (__this_06,(MethodInfo_31D09D0 *)&stack0xffffffffffffff78);
      return __this_07;
    }
    if (obj == (Map_MapObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_00 = (obj->fields).ComponentInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar8 = obj;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&local_48,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    local_58 = local_38;
    local_68.genericMethod = local_48.genericMethod;
    pIStack_60 = pIStack_40;
    do {
      __this_04.fields._8_8_ = pIVar7;
      __this_04.fields._list = _Var6.genericMethod;
      __this_04.fields._current = (Il2CppObject *)pMVar8;
      bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_04,(MethodInfo_3185E20 *)&local_68);
      if ((char)bVar5 == '\0') goto LAB_03ecaf5a;
      if (local_58 == (Map_MapObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      a = (System_String_o *)
          (*((Il2CppClass *)local_58->klass)->vtable[4].methodPtr)
                    (local_58,((Il2CppClass *)local_58->klass)->vtable[4].method);
      bVar5 = System_String__op_Equality(a,className,(MethodInfo *)0x0);
    } while ((char)bVar5 == '\0');
    if (__this_07 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_01 = (__this_07->fields).List;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_02 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (__this_02 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                     (__this_02,obj,(MethodInfo *)0x0);
    lVar4 = MethodInfo_Void_Add;
    if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar1 = &(__this_01->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_01->fields)._items;
    if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar2 = (__this_01->fields)._size;
    if (uVar2 < (uint)pSVar3->max_length) {
      (__this_01->fields)._size = uVar2 + 1;
      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)item;
      il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,item);
    }
    else {
      System_Collections_Generic_List<object>__AddWithResize
                (__this_01,(Il2CppObject *)item,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
LAB_03ecaf5a:
    __this_05.fields._8_8_ = pIVar7;
    __this_05.fields._list = _Var6.genericMethod;
    __this_05.fields._current = (Il2CppObject *)pMVar8;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_05,(MethodInfo_3185E10 *)&local_68);
    obj = pMVar8;
  } while( true );
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByID
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByID (int32_t id, const MethodInfo* method);
// 0x3ecb100

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByID(int32_t id,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar2;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  
  if (DAT_05703989 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05703989 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_int__object__o *)
             **(undefined8 **)(TypeInfo_MapLoader + 0xb8);
  }
  if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<int__object>__ContainsKey(__this,id,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (((System_Collections_Generic_Dictionary_int__object__o *)
         **(undefined8 **)(TypeInfo_MapLoader + 0xb8) !=
         (System_Collections_Generic_Dictionary_int__object__o *)0x0) &&
       (obj = (Map_MapObject_o *)
              System_Collections_Generic_Dictionary<int__object>__get_Item
                        ((System_Collections_Generic_Dictionary_int__object__o *)
                         **(undefined8 **)(TypeInfo_MapLoader + 0xb8),id,MethodInfo_MapObject_get_Item),
       __this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
      pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                         (__this_00,obj,(MethodInfo *)0x0);
      return pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectByTag
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectByTag (System_String_o* tag, const MethodInfo* method);
// 0x3ecb230

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectByTag(System_String_o *tag,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  CustomLogic_CustomLogicEvaluator_o *__this;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  System_Collections_Generic_List_object__o *__this_00;
  Map_MapObject_o *obj;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar5;
  
  if (DAT_0570398a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_0570398a = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar2,(Il2CppObject *)tag,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    if ((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pIVar4 = System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar2,(Il2CppObject *)tag,MethodInfo_List_1_Map_MapObject__get_Item), pIVar4 != (Il2CppObject *)0x0)
       ) {
      if (*(int *)&pIVar4[1].monitor < 1) {
        return (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
      if (((pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
          (__this_00 = (System_Collections_Generic_List_object__o *)
                       System_Collections_Generic_Dictionary<object__object>__get_Item
                                 (pSVar2,(Il2CppObject *)tag,MethodInfo_List_1_Map_MapObject__get_Item),
          __this_00 != (System_Collections_Generic_List_object__o *)0x0)) &&
         (obj = (Map_MapObject_o *)
                System_Collections_Generic_List<object>__get_Item(__this_00,0,MethodInfo_MapObject_get_Item),
         __this != (CustomLogic_CustomLogicEvaluator_o *)0x0)) {
        pCVar5 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this,obj,(MethodInfo *)0x0);
        return pCVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByTag
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByTag (System_String_o* tag, const MethodInfo* method);
// 0x3ecb400

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByTag(System_String_o *tag,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  CustomLogic_CustomLogicEvaluator_o *__this;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar5;
  bool_conflict bVar6;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  System_Collections_Generic_List_object__o *pSVar7;
  CustomLogic_CustomLogicMapObjectBuiltin_o *item;
  ulong in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  System_Collections_Generic_List_Enumerator_T__o SStack_48;
  
  if (DAT_0570398b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Map_MapObject__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_0570398b = '\x01';
  }
  __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (pSVar3,(Il2CppObject *)tag,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
      return __this_03;
    }
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_MapLoader + 0xb8) + 0x18);
    if ((pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
       (pSVar7 = (System_Collections_Generic_List_object__o *)
                 System_Collections_Generic_Dictionary<object__object>__get_Item
                           (pSVar3,(Il2CppObject *)tag,MethodInfo_List_1_Map_MapObject__get_Item),
       pSVar7 != (System_Collections_Generic_List_object__o *)0x0)) {
      System_Collections_Generic_List<object>__GetEnumerator(&SStack_48,pSVar7,MethodInfo_List_1_T__Enumerator_Map_MapObject__GetEnumerato);
      if (__this_03 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        __this_01.fields._index = 0;
        __this_01.fields._version = 0;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
        __this_01.fields._current = (Il2CppObject *)SStack_48.fields._list;
        bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
        if ((char)bVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)SStack_48.fields._list;
        while (__this_00.fields._8_8_ = __this_03,
              __this_00.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88,
              __this_00.fields._current = (Il2CppObject *)pSVar8,
              bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
              SStack_48.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
              (char)bVar6 != '\0') {
          pSVar7 = (__this_03->fields).List;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (__this == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          item = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this,(Map_MapObject_o *)SStack_48.fields._current,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          if (pSVar7 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = &(pSVar7->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar7->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar2 = (pSVar7->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar7->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)item;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar7,(Il2CppObject *)item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
      }
      __this_02.fields._8_8_ = __this_03;
      __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_02.fields._current = (Il2CppObject *)SStack_48.fields._list;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
      return __this_03;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$FindMapObjectsByPlayer
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByPlayer (CustomLogic_CustomLogicPlayerBuiltin_o* player, const MethodInfo* method);
// 0x3ecb770

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__FindMapObjectsByPlayer
          (CustomLogic_CustomLogicPlayerBuiltin_o *player,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  CustomLogic_CustomLogicPhotonSync_o *pCVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  bool_conflict bVar3;
  CustomLogic_CustomLogicListBuiltin_o *__this_03;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar6;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCVar7;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this_05;
  undefined1 auStack_40 [16];
  CustomLogic_CustomLogicNetworkViewBuiltin_o *pCStack_30;
  
  if (DAT_0570398c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicNetworkViewBuiltin_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
    DAT_0570398c = '\x01';
  }
  __this_03 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_03,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  if ((lVar1 != 0) &&
     (__this = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar1 + 0x28),
     __this != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
    __this_04 = System_Collections_Generic_Dictionary<int__object>__get_Values(__this,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    if (__this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
      System_Collections_Generic_Dictionary_ValueCollection<int__object>__GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *
                 )auStack_40,__this_04,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_TKey_T);
      pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_40._0_8_;
      pSVar6 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
               auStack_40._8_8_;
      if (__this_03 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        do {
          do {
            __this_05 = pCStack_30;
            __this_00.fields._8_8_ = pSVar6;
            __this_00.fields._dictionary = pSVar5;
            __this_00.fields._currentValue = (Il2CppObject *)__this_05;
            bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                              (__this_00,(MethodInfo_31C3100 *)&stack0xffffffffffffffa8);
            if ((char)bVar3 == '\0') {
LAB_03ecb919:
              __this_02.fields._8_8_ = pSVar6;
              __this_02.fields._dictionary = pSVar5;
              __this_02.fields._currentValue = (Il2CppObject *)__this_05;
              System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__Dispose
                        (__this_02,(MethodInfo_31C30F0 *)&stack0xffffffffffffffa8);
              return __this_03;
            }
            if (__this_05 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
LAB_03ecb93c:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pCVar7 = __this_05;
            pCVar4 = CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner
                               (__this_05,(MethodInfo *)0x0);
            pCStack_30 = pCVar7;
          } while (pCVar4 != player);
          pCVar2 = (__this_05->fields).Sync;
          if (pCVar2 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) goto LAB_03ecb948;
          CustomLogic_CustomLogicListBuiltin__Add
                    (__this_03,
                     (Il2CppObject *)(pCVar2->fields)._CustomLogicMapObjectBuiltin_k__BackingField,
                     (MethodInfo *)0x0);
          pCStack_30 = pCVar7;
        } while( true );
      }
      do {
        __this_05 = pCStack_30;
        __this_01.fields._8_8_ = pSVar6;
        __this_01.fields._dictionary = pSVar5;
        __this_01.fields._currentValue = (Il2CppObject *)__this_05;
        bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator<int__object>__MoveNext
                          (__this_01,(MethodInfo_31C3100 *)&stack0xffffffffffffffa8);
        if ((char)bVar3 == '\0') goto LAB_03ecb919;
        if (__this_05 == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) goto LAB_03ecb93c;
        pCVar7 = __this_05;
        pCVar4 = CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner(__this_05,(MethodInfo *)0x0);
        pCStack_30 = pCVar7;
      } while (pCVar4 != player);
      if ((__this_05->fields).Sync != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
LAB_03ecb948:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$CreateMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateMapObject (CustomLogic_CustomLogicPrefabBuiltin_o* prefab, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicVector3Builtin_o* rotation, CustomLogic_CustomLogicVector3Builtin_o* scale, const MethodInfo* method);
// 0x3ecba10

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateMapObject
          (CustomLogic_CustomLogicPrefabBuiltin_o *prefab,
          CustomLogic_CustomLogicVector3Builtin_o *position,
          CustomLogic_CustomLogicVector3Builtin_o *rotation,
          CustomLogic_CustomLogicVector3Builtin_o *scale,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  CustomLogic_CustomLogicEvaluator_o *pCVar4;
  bool_conflict bVar5;
  int32_t iVar6;
  undefined8 in_RAX;
  undefined8 uVar7;
  Map_MapScriptSceneObject_o *pMVar8;
  System_Object_array *data;
  Il2CppObject *pIVar9;
  long lVar10;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  System_String_o *csvScript;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar11;
  MethodInfo *method_00;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Quaternion_o rotation_00;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (DAT_0570398d == '\0') {
    puStack_40 = (undefined *)0x3ecba3c;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    puStack_40 = (undefined *)0x3ecba48;
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    DAT_0570398d = '\x01';
  }
  if ((prefab != (CustomLogic_CustomLogicPrefabBuiltin_o *)0x0) &&
     (pMVar8 = (prefab->fields).Value, pMVar8 != (Map_MapScriptSceneObject_o *)0x0)) {
    puStack_40 = (undefined *)0x3ecba75;
    uVar7 = (*(pMVar8->klass->vtable)._8_Serialize.methodPtr)();
    puStack_40 = (undefined *)0x3ecba87;
    pMVar8 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
    puStack_40 = (undefined *)0x3ecba94;
    Map_MapScriptSceneObject___ctor(pMVar8,(MethodInfo *)0x0);
    if (pMVar8 != (Map_MapScriptSceneObject_o *)0x0) {
      puStack_40 = (undefined *)0x3ecbab3;
      (*(pMVar8->klass->vtable)._9_Deserialize.methodPtr)
                (pMVar8,uVar7,(pMVar8->klass->vtable)._9_Deserialize.method);
      if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        puStack_40 = (undefined *)0x3ecbace;
        Map_MapScriptBaseObject__SetPosition
                  ((Map_MapScriptBaseObject_o *)pMVar8,
                   (UnityEngine_Vector3_o)(position->fields).Value.fields,(MethodInfo *)0x0);
      }
      if (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        puStack_40 = (undefined *)0x3ecbaeb;
        Map_MapScriptBaseObject__SetRotation
                  ((Map_MapScriptBaseObject_o *)pMVar8,
                   (UnityEngine_Vector3_o)(rotation->fields).Value.fields,(MethodInfo *)0x0);
      }
      if (scale != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        puStack_40 = (undefined *)0x3ecbb06;
        Map_MapScriptBaseObject__SetScale
                  ((Map_MapScriptBaseObject_o *)pMVar8,
                   (UnityEngine_Vector3_o)(scale->fields).Value.fields,(MethodInfo *)0x0);
      }
      if (*(char *)((long)&(pMVar8->fields).Active + 3) != '\0') {
        bVar5 = (prefab->fields).PersistsOwnership;
        if (*(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4) == 0) {
          puStack_40 = (undefined *)0x3ecbb28;
          il2cpp_init_class();
        }
        if (DAT_05703995 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
          il2cpp_init_method_metadata(&TypeInfo_object);
          il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
          il2cpp_init_method_metadata(&"Game/CustomLogicPhotonSyncDynamicPrefab");
          DAT_05703995 = '\x01';
          iVar3 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
          method_00 = TypeInfo_CustomLogicMapBuiltin;
        }
        else {
          iVar3 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
          method_00 = TypeInfo_CustomLogicMapBuiltin;
        }
        TypeInfo_CustomLogicMapBuiltin = method_00;
        if (iVar3 == 0) {
          il2cpp_init_class();
          CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(method_00);
        }
        else {
          CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(method_00);
        }
        if (pMVar8 != (Map_MapScriptSceneObject_o *)0x0) {
          (pMVar8->fields).Id = -1;
          (pMVar8->fields).Parent = 0;
          *(undefined1 *)((long)&(pMVar8->fields).Active + 3) = 1;
          data = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          uStack_5c = 2;
          pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_5c);
          if (data != (System_Object_array *)0x0) {
            if ((pIVar9 != (Il2CppObject *)0x0) &&
               (lVar10 = il2cpp_runtime_glue(pIVar9,(((data->obj).klass)->_1).element_class),
               lVar10 == 0)) {
              uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar7,0);
            }
            if ((int)data->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            data->m_Items[0] = pIVar9;
            il2cpp_runtime_glue(data->m_Items);
            if (DAT_056fdd15 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fdd15 = '\x01';
            }
            uVar7 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            uVar12 = (int)uVar7;
            uVar13 = (int)((ulong)uVar7 >> 0x20);
            uVar14 = 0;
            uVar15 = 0;
            if (DAT_056fde1e == '\0') {
              uStack_50 = 0;
              uStack_58 = uVar7;
              il2cpp_init_method_metadata(&TypeInfo_Quaternion);
              DAT_056fde1e = '\x01';
              uVar12 = (undefined4)uStack_58;
              uVar13 = uStack_58._4_4_;
              uVar14 = (undefined4)uStack_50;
              uVar15 = uStack_50._4_4_;
            }
            uVar7 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            uVar2 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            uVar16 = (int)uVar7;
            uVar17 = (int)((ulong)uVar7 >> 0x20);
            uVar18 = (int)uVar2;
            uVar19 = (int)((ulong)uVar2 >> 0x20);
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              uStack_58 = CONCAT44(uVar13,uVar12);
              uStack_50 = CONCAT44(uVar15,uVar14);
              puStack_40 = (undefined *)0x0;
              uStack_48 = uVar2;
              uStack_38 = uVar7;
              il2cpp_init_class();
              uVar12 = (undefined4)uStack_58;
              uVar13 = uStack_58._4_4_;
              uVar16 = (undefined4)uStack_38;
              uVar17 = uStack_38._4_4_;
              uVar18 = (undefined4)uStack_48;
              uVar19 = uStack_48._4_4_;
            }
            position_00.fields.y = (float)uVar13;
            position_00.fields.x = (float)uVar12;
            position_00.fields.z = fVar1;
            rotation_00.fields.y = (float)uVar17;
            rotation_00.fields.x = (float)uVar16;
            rotation_00.fields.w = (float)uVar19;
            rotation_00.fields.z = (float)uVar18;
            __this = Photon_Pun_PhotonNetwork__Instantiate
                               ("Game/CustomLogicPhotonSyncDynamicPrefab",position_00,rotation_00,'\0',data,(MethodInfo *)0x0);
            if (__this != (UnityEngine_GameObject_o *)0x0) {
              __this_00 = (CustomLogic_CustomLogicPhotonSync_o *)
                          UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
              csvScript = (System_String_o *)
                          (*(pMVar8->klass->vtable)._8_Serialize.methodPtr)
                                    (pMVar8,(pMVar8->klass->vtable)._8_Serialize.method);
              if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
                CustomLogic_CustomLogicPhotonSync__InitDynamic
                          (__this_00,(uint)(byte)bVar5,csvScript,(MethodInfo *)0x0);
                return (__this_00->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4) == 0) {
        puStack_40 = (undefined *)0x3ecbb57;
        il2cpp_init_class();
      }
      if (DAT_05703996 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        il2cpp_init_method_metadata(&TypeInfo_MapLoader);
        DAT_05703996 = '\x01';
        iVar3 = *(int *)(TypeInfo_MapLoader + 0xe4);
      }
      else {
        iVar3 = *(int *)(TypeInfo_MapLoader + 0xe4);
      }
      if (iVar3 == 0) {
        il2cpp_init_class();
        iVar6 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
      }
      else {
        iVar6 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
      }
      if (pMVar8 != (Map_MapScriptSceneObject_o *)0x0) {
        (pMVar8->fields).Id = iVar6;
        (pMVar8->fields).Parent = 0;
        *(undefined1 *)((long)&(pMVar8->fields).Active + 3) = 0;
        mapObject = Map_MapLoader__LoadObject
                              ((Map_MapScriptBaseObject_o *)pMVar8,0,(MethodInfo *)0x0);
        Map_MapLoader__SetParent(mapObject,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pCVar4 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if ((pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
           (CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents
                      (pCVar4,mapObject,1,(MethodInfo *)0x0), mapObject != (Map_MapObject_o *)0x0))
        {
          *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
          pCVar4 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
          if (pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            pCVar11 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                                (pCVar4,mapObject,(MethodInfo *)0x0);
            return pCVar11;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  puStack_40 = &UNK_03ecbb72;
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$CreateMapObjectRaw
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateMapObjectRaw (System_String_o* prefab, const MethodInfo* method);
// 0x3ecbf10

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateMapObjectRaw(System_String_o *prefab,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  int32_t iVar6;
  System_Object_array *data;
  Il2CppObject *pIVar7;
  long lVar8;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  undefined8 uVar9;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar10;
  System_String_array *value;
  System_String_o *pSVar11;
  Map_MapScriptSceneObject_o *__this_01;
  MethodInfo *method_00;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined *puStack_20;
  
  if (DAT_0570398e == '\0') {
    puStack_20 = (undefined *)0x3ecbf2c;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    puStack_20 = (undefined *)0x3ecbf38;
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    puStack_20 = (undefined *)0x3ecbf44;
    il2cpp_init_method_metadata(&"");
    DAT_0570398e = '\x01';
  }
  if (prefab != (System_String_o *)0x0) {
    puStack_20 = (undefined *)0x3ecbf65;
    value = System_String__Split(prefab,10,0,(MethodInfo *)0x0);
    puStack_20 = (undefined *)0x3ecbf79;
    pSVar11 = System_String__Join("",value,(MethodInfo *)0x0);
    puStack_20 = (undefined *)0x3ecbf8b;
    __this_01 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
    puStack_20 = (undefined *)0x3ecbf98;
    Map_MapScriptSceneObject___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Map_MapScriptSceneObject_o *)0x0) {
      puStack_20 = (undefined *)0x3ecbfb3;
      (*(__this_01->klass->vtable)._9_Deserialize.methodPtr)
                (__this_01,pSVar11,(__this_01->klass->vtable)._9_Deserialize.method);
      cVar3 = *(char *)((long)&(__this_01->fields).Active + 3);
      if (*(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4) == 0) {
        puStack_20 = (undefined *)0x3ecbfe2;
        il2cpp_init_class();
      }
      if (cVar3 != '\0') {
        if (DAT_05703995 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
          il2cpp_init_method_metadata(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
          il2cpp_init_method_metadata(&TypeInfo_object);
          il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
          il2cpp_init_method_metadata(&"Game/CustomLogicPhotonSyncDynamicPrefab");
          DAT_05703995 = '\x01';
          iVar4 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
          method_00 = TypeInfo_CustomLogicMapBuiltin;
        }
        else {
          iVar4 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
          method_00 = TypeInfo_CustomLogicMapBuiltin;
        }
        TypeInfo_CustomLogicMapBuiltin = method_00;
        if (iVar4 == 0) {
          il2cpp_init_class();
          CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(method_00);
        }
        else {
          CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(method_00);
        }
        if (__this_01 != (Map_MapScriptSceneObject_o *)0x0) {
          (__this_01->fields).Id = -1;
          (__this_01->fields).Parent = 0;
          *(undefined1 *)((long)&(__this_01->fields).Active + 3) = 1;
          data = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          uStack_5c = 2;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_5c);
          if (data != (System_Object_array *)0x0) {
            if ((pIVar7 != (Il2CppObject *)0x0) &&
               (lVar8 = il2cpp_runtime_glue(pIVar7,(((data->obj).klass)->_1).element_class),
               lVar8 == 0)) {
              uVar9 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar9,0);
            }
            if ((int)data->max_length == 0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            data->m_Items[0] = pIVar7;
            il2cpp_runtime_glue(data->m_Items);
            if (DAT_056fdd15 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fdd15 = '\x01';
            }
            uVar9 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
            fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
            uVar12 = (int)uVar9;
            uVar13 = (int)((ulong)uVar9 >> 0x20);
            uVar14 = 0;
            uVar15 = 0;
            if (DAT_056fde1e == '\0') {
              uStack_50 = 0;
              uStack_58 = uVar9;
              il2cpp_init_method_metadata(&TypeInfo_Quaternion);
              DAT_056fde1e = '\x01';
              uVar12 = (undefined4)uStack_58;
              uVar13 = uStack_58._4_4_;
              uVar14 = (undefined4)uStack_50;
              uVar15 = uStack_50._4_4_;
            }
            uVar9 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
            uVar2 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
            uVar16 = (int)uVar9;
            uVar17 = (int)((ulong)uVar9 >> 0x20);
            uVar18 = (int)uVar2;
            uVar19 = (int)((ulong)uVar2 >> 0x20);
            if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
              uStack_58 = CONCAT44(uVar13,uVar12);
              uStack_50 = CONCAT44(uVar15,uVar14);
              uStack_30 = 0;
              uStack_40 = 0;
              uStack_48 = uVar2;
              uStack_38 = uVar9;
              il2cpp_init_class();
              uVar12 = (undefined4)uStack_58;
              uVar13 = uStack_58._4_4_;
              uVar16 = (undefined4)uStack_38;
              uVar17 = uStack_38._4_4_;
              uVar18 = (undefined4)uStack_48;
              uVar19 = uStack_48._4_4_;
            }
            position.fields.y = (float)uVar13;
            position.fields.x = (float)uVar12;
            position.fields.z = fVar1;
            rotation.fields.y = (float)uVar17;
            rotation.fields.x = (float)uVar16;
            rotation.fields.w = (float)uVar19;
            rotation.fields.z = (float)uVar18;
            __this = Photon_Pun_PhotonNetwork__Instantiate
                               ("Game/CustomLogicPhotonSyncDynamicPrefab",position,rotation,'\0',data,(MethodInfo *)0x0);
            if (__this != (UnityEngine_GameObject_o *)0x0) {
              __this_00 = (CustomLogic_CustomLogicPhotonSync_o *)
                          UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
              pSVar11 = (System_String_o *)
                        (*(__this_01->klass->vtable)._8_Serialize.methodPtr)
                                  (__this_01,(__this_01->klass->vtable)._8_Serialize.method);
              if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
                CustomLogic_CustomLogicPhotonSync__InitDynamic
                          (__this_00,0,pSVar11,(MethodInfo *)0x0);
                return (__this_00->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (DAT_05703996 == '\0') {
        puStack_20 = (undefined *)0x3ecbe40;
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
        puStack_20 = (undefined *)0x3ecbe4c;
        il2cpp_init_method_metadata(&TypeInfo_MapLoader);
        DAT_05703996 = '\x01';
        iVar4 = *(int *)(TypeInfo_MapLoader + 0xe4);
      }
      else {
        iVar4 = *(int *)(TypeInfo_MapLoader + 0xe4);
      }
      if (iVar4 == 0) {
        puStack_20 = (undefined *)0x3ecbe6b;
        il2cpp_init_class();
        puStack_20 = (undefined *)0x3ecbe72;
        iVar6 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
      }
      else {
        puStack_20 = (undefined *)0x3ecbe2a;
        iVar6 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
      }
      if (__this_01 != (Map_MapScriptSceneObject_o *)0x0) {
        (__this_01->fields).Id = iVar6;
        (__this_01->fields).Parent = 0;
        *(undefined1 *)((long)&(__this_01->fields).Active + 3) = 0;
        puStack_20 = (undefined *)0x3ecbe95;
        mapObject = Map_MapLoader__LoadObject
                              ((Map_MapScriptBaseObject_o *)__this_01,0,(MethodInfo *)0x0);
        puStack_20 = (undefined *)0x3ecbea2;
        Map_MapLoader__SetParent(mapObject,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          puStack_20 = (undefined *)0x3ecbeba;
          il2cpp_init_class();
        }
        pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          puStack_20 = (undefined *)0x3ecbedc;
          CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents
                    (pCVar5,mapObject,1,(MethodInfo *)0x0);
          if (mapObject != (Map_MapObject_o *)0x0) {
            *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
            pCVar5 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
              pCVar10 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                                  (pCVar5,mapObject,(MethodInfo *)0x0);
              return pCVar10;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      puStack_20 = &UNK_03ecbf0e;
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  puStack_20 = &UNK_03ecbff8;
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$PrefabFromMapObject
// il2cpp: CustomLogic_CustomLogicPrefabBuiltin_o* CustomLogic_CustomLogicMapBuiltin__PrefabFromMapObject (CustomLogic_CustomLogicMapObjectBuiltin_o* mapObject, bool clearComponents, const MethodInfo* method);
// 0x3ecc000

CustomLogic_CustomLogicPrefabBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__PrefabFromMapObject
          (CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,bool_conflict clearComponents,
          MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  System_String_o *prefabCSV;
  CustomLogic_CustomLogicPrefabBuiltin_o *__this;
  
  if (DAT_0570398f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPrefabBuiltin);
    DAT_0570398f = '\x01';
  }
  if (((mapObject != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    prefabCSV = (System_String_o *)
                (*(pMVar2->klass->vtable)._8_Serialize.methodPtr)
                          (pMVar2,(pMVar2->klass->vtable)._8_Serialize.method);
    __this = (CustomLogic_CustomLogicPrefabBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPrefabBuiltin);
    CustomLogic_CustomLogicPrefabBuiltin___ctor
              (__this,prefabCSV,clearComponents & 0xff,(MethodInfo *)0x0);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$DestroyMapObject
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__DestroyMapObject (CustomLogic_CustomLogicMapObjectBuiltin_o* mapObject, bool includeChildren, const MethodInfo* method);
// 0x3ecc080

void CustomLogic_CustomLogicMapBuiltin__DestroyMapObject
               (CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,bool_conflict includeChildren,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  Map_MapScriptBaseObject_o *pMVar2;
  long lVar3;
  System_Collections_Generic_Dictionary_int__object__o *pSVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  
  if (DAT_05703990 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
    DAT_05703990 = '\x01';
    method = extraout_RDX;
  }
  if (((mapObject != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
      (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
     (pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) {
    if (*(char *)((long)&(pMVar2->fields).Active + 3) == '\0') {
LAB_03ecc22f:
      if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
        method = extraout_RDX_01;
      }
      CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin
                ((Il2CppObject *)mapObject,includeChildren & 0xff,method);
      return;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (((lVar3 != 0) && (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) &&
       ((pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0 &&
        (pSVar4 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar3 + 0x28),
        pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)))) {
      bVar5 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                        (pSVar4,(pMVar2->fields).Id,MethodInfo_Boolean_ContainsKey);
      method = extraout_RDX_00;
      if ((char)bVar5 == '\0') goto LAB_03ecc22f;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (((lVar3 != 0) && (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0))
         && ((pMVar2 = (pMVar1->fields).ScriptObject, pMVar2 != (Map_MapScriptBaseObject_o *)0x0 &&
             (pSVar4 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar3 + 0x28),
             pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)))) {
        pIVar6 = System_Collections_Generic_Dictionary<int__object>__get_Item
                           (pSVar4,(pMVar2->fields).Id,MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
        lVar3 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if ((((lVar3 != 0) && (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)
             ) && (pMVar2 = (pMVar1->fields).ScriptObject,
                  pMVar2 != (Map_MapScriptBaseObject_o *)0x0)) &&
           (pSVar4 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar3 + 0x28),
           pSVar4 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
          System_Collections_Generic_Dictionary<int__object>__Remove
                    (pSVar4,(pMVar2->fields).Id,MethodInfo_Boolean_Remove);
          if ((pIVar6 != (Il2CppObject *)0x0) &&
             (pIVar6[3].monitor != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
            CustomLogic_CustomLogicPhotonSync__DestroyMe(pIVar6[3].monitor,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$CopyMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CopyMapObject (CustomLogic_CustomLogicMapObjectBuiltin_o* mapObject, bool includeChildren, const MethodInfo* method);
// 0x3eccae0

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CopyMapObject
          (CustomLogic_CustomLogicMapObjectBuiltin_o *mapObject,bool_conflict includeChildren,
          MethodInfo *method)

{
  int32_t parent;
  CustomLogic_CustomLogicEvaluator_o *__this;
  Map_MapObject_o *pMVar1;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar2;
  MethodInfo *in_RCX;
  
  if (DAT_05703991 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_05703991 = '\x01';
  }
  if ((mapObject != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
     (pMVar1 = (mapObject->fields).Value, pMVar1 != (Map_MapObject_o *)0x0)) {
    parent = (pMVar1->fields).Parent;
    if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar1 = CustomLogic_CustomLogicMapBuiltin__CopyMapObject
                       (pMVar1,parent,includeChildren & 0xff,in_RCX);
    if (pMVar1 != (Map_MapObject_o *)0x0) {
      *(undefined1 *)&(pMVar1->fields).RuntimeCreated = 1;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (__this,pMVar1,(MethodInfo *)0x0);
        return pCVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$DestroyMapTargetable
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__DestroyMapTargetable (CustomLogic_CustomLogicMapTargetableBuiltin_o* targetable, const MethodInfo* method);
// 0x3ecd020

void CustomLogic_CustomLogicMapBuiltin__DestroyMapTargetable
               (CustomLogic_CustomLogicMapTargetableBuiltin_o *targetable,MethodInfo *method)

{
  UnityEngine_Object_o *obj;
  System_Collections_Generic_List_object__o *__this;
  
  if (DAT_05703992 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05703992 = '\x01';
  }
  if (targetable != (CustomLogic_CustomLogicMapTargetableBuiltin_o *)0x0) {
    obj = (UnityEngine_Object_o *)(targetable->fields)._GameObject_k__BackingField;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_MapLoader + 0xb8) + 0x38);
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__Remove
                (__this,(Il2CppObject *)(targetable->fields)._Value_k__BackingField,MethodInfo_Boolean_Remove);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$UpdateNavMesh
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__UpdateNavMesh (const MethodInfo* method);
// 0x3ecd0d0

void CustomLogic_CustomLogicMapBuiltin__UpdateNavMesh(MethodInfo *method)

{
  int iVar1;
  System_Threading_Tasks_Task_o *__this;
  
  if (DAT_05703993 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05703993 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  }
  else {
    __this = Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  }
  if (__this != (System_Threading_Tasks_Task_o *)0x0) {
    System_Threading_Tasks_Task__Wait(__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$UpdateNavMeshAsync
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__UpdateNavMeshAsync (const MethodInfo* method);
// 0x3ecd140

void CustomLogic_CustomLogicMapBuiltin__UpdateNavMeshAsync(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703994 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05703994 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 != 0) {
    Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  Map_MapLoader__UpdateNavMesh((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMapBuiltin$$CreateRuntimeNetworkedMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject (Map_MapScriptSceneObject_o* script, bool persistsOwnership, const MethodInfo* method);
// 0x3ecbb80

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateRuntimeNetworkedMapObject
          (Map_MapScriptSceneObject_o *script,bool_conflict persistsOwnership,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  System_Object_array *data;
  Il2CppObject *pIVar4;
  long lVar5;
  UnityEngine_GameObject_o *__this;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  System_String_o *csvScript;
  undefined8 uVar6;
  MethodInfo *method_00;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  UnityEngine_Vector3_o position;
  UnityEngine_Quaternion_o rotation;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (DAT_05703995 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&"Game/CustomLogicPhotonSyncDynamicPrefab");
    DAT_05703995 = '\x01';
    iVar3 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
    method_00 = TypeInfo_CustomLogicMapBuiltin;
  }
  else {
    iVar3 = *(int *)((long)&TypeInfo_CustomLogicMapBuiltin[2].parameters + 4);
    method_00 = TypeInfo_CustomLogicMapBuiltin;
  }
  TypeInfo_CustomLogicMapBuiltin = method_00;
  if (iVar3 == 0) {
    il2cpp_init_class();
    CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(method_00);
  }
  else {
    CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(method_00);
  }
  if (script != (Map_MapScriptSceneObject_o *)0x0) {
    (script->fields).Id = -1;
    (script->fields).Parent = 0;
    *(undefined1 *)((long)&(script->fields).Active + 3) = 1;
    data = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
    uStack_5c = 2;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&uStack_5c);
    if (data != (System_Object_array *)0x0) {
      if ((pIVar4 != (Il2CppObject *)0x0) &&
         (lVar5 = il2cpp_runtime_glue(pIVar4,(((data->obj).klass)->_1).element_class), lVar5 == 0)) {
        uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar6,0);
      }
      if ((int)data->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      data->m_Items[0] = pIVar4;
      il2cpp_runtime_glue(data->m_Items);
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar6 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      fVar1 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      uVar7 = (int)uVar6;
      uVar8 = (int)((ulong)uVar6 >> 0x20);
      uVar9 = 0;
      uVar10 = 0;
      if (DAT_056fde1e == '\0') {
        uStack_50 = 0;
        uStack_58 = uVar6;
        il2cpp_init_method_metadata(&TypeInfo_Quaternion);
        DAT_056fde1e = '\x01';
        uVar7 = (undefined4)uStack_58;
        uVar8 = uStack_58._4_4_;
        uVar9 = (undefined4)uStack_50;
        uVar10 = uStack_50._4_4_;
      }
      uVar6 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
      uVar2 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
      uVar11 = (int)uVar6;
      uVar12 = (int)((ulong)uVar6 >> 0x20);
      uVar13 = (int)uVar2;
      uVar14 = (int)((ulong)uVar2 >> 0x20);
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        uStack_58 = CONCAT44(uVar8,uVar7);
        uStack_50 = CONCAT44(uVar10,uVar9);
        uStack_30 = 0;
        uStack_40 = 0;
        uStack_48 = uVar2;
        uStack_38 = uVar6;
        il2cpp_init_class();
        uVar7 = (undefined4)uStack_58;
        uVar8 = uStack_58._4_4_;
        uVar11 = (undefined4)uStack_38;
        uVar12 = uStack_38._4_4_;
        uVar13 = (undefined4)uStack_48;
        uVar14 = uStack_48._4_4_;
      }
      position.fields.y = (float)uVar8;
      position.fields.x = (float)uVar7;
      position.fields.z = fVar1;
      rotation.fields.y = (float)uVar12;
      rotation.fields.x = (float)uVar11;
      rotation.fields.w = (float)uVar14;
      rotation.fields.z = (float)uVar13;
      __this = Photon_Pun_PhotonNetwork__Instantiate
                         ("Game/CustomLogicPhotonSyncDynamicPrefab",position,rotation,'\0',data,(MethodInfo *)0x0);
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = (CustomLogic_CustomLogicPhotonSync_o *)
                    UnityEngine_GameObject__GetComponent<object>(__this,MethodInfo_CustomLogicPhotonSync_GetComponent_CustomLogicPh);
        csvScript = (System_String_o *)
                    (*(script->klass->vtable)._8_Serialize.methodPtr)
                              (script,(script->klass->vtable)._8_Serialize.method);
        if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
          CustomLogic_CustomLogicPhotonSync__InitDynamic
                    (__this_00,persistsOwnership & 0xff,csvScript,(MethodInfo *)0x0);
          return (__this_00->fields)._CustomLogicMapObjectBuiltin_k__BackingField;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$CreateRuntimeMapObject
// il2cpp: CustomLogic_CustomLogicMapObjectBuiltin_o* CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject (Map_MapScriptSceneObject_o* script, const MethodInfo* method);
// 0x3ecbe00

CustomLogic_CustomLogicMapObjectBuiltin_o *
CustomLogic_CustomLogicMapBuiltin__CreateRuntimeMapObject
          (Map_MapScriptSceneObject_o *script,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  int32_t iVar3;
  Map_MapObject_o *mapObject;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar4;
  
  if (DAT_05703996 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    DAT_05703996 = '\x01';
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MapLoader + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    iVar3 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
  }
  else {
    iVar3 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
  }
  if (script != (Map_MapScriptSceneObject_o *)0x0) {
    (script->fields).Id = iVar3;
    (script->fields).Parent = 0;
    *(undefined1 *)((long)&(script->fields).Active + 3) = 0;
    mapObject = Map_MapLoader__LoadObject((Map_MapScriptBaseObject_o *)script,0,(MethodInfo *)0x0);
    Map_MapLoader__SetParent(mapObject,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if ((pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents
                  (pCVar2,mapObject,1,(MethodInfo *)0x0), mapObject != (Map_MapObject_o *)0x0)) {
      *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
      pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar4 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                           (pCVar2,mapObject,(MethodInfo *)0x0);
        return pCVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$CopyMapObject
// il2cpp: Map_MapObject_o* CustomLogic_CustomLogicMapBuiltin__CopyMapObject (Map_MapObject_o* obj, int32_t parent, bool recursive, const MethodInfo* method);
// 0x3eccba0

Map_MapObject_o *
CustomLogic_CustomLogicMapBuiltin__CopyMapObject
          (Map_MapObject_o *obj,int32_t parent,bool_conflict recursive,MethodInfo *method)

{
  Map_MapScriptBaseObject_o *pMVar1;
  CustomLogic_CustomLogicEvaluator_o *__this;
  System_Collections_Generic_Dictionary_int__object__o *pSVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  int32_t iVar3;
  bool_conflict bVar4;
  Map_MapScriptSceneObject_o *__this_02;
  undefined8 uVar5;
  Map_MapObject_o *mapObject;
  System_Collections_Generic_HashSet_int__o *__this_03;
  Map_MapObject_o *obj_00;
  MethodInfo_3350A60 **method_00;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  int32_t iVar8;
  undefined4 uVar9;
  undefined1 local_48 [24];
  
  if (DAT_05703997 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapScriptSceneObject);
    DAT_05703997 = '\x01';
  }
  __this_02 = (Map_MapScriptSceneObject_o *)il2cpp_runtime_glue(TypeInfo_MapScriptSceneObject);
  Map_MapScriptSceneObject___ctor(__this_02,(MethodInfo *)0x0);
  if (((obj != (Map_MapObject_o *)0x0) &&
      (pMVar1 = (obj->fields).ScriptObject, pMVar1 != (Map_MapScriptBaseObject_o *)0x0)) &&
     (uVar5 = (*(pMVar1->klass->vtable)._8_Serialize.methodPtr)
                        (pMVar1,(pMVar1->klass->vtable)._8_Serialize.method),
     __this_02 != (Map_MapScriptSceneObject_o *)0x0)) {
    (*(__this_02->klass->vtable)._9_Deserialize.methodPtr)
              (__this_02,uVar5,(__this_02->klass->vtable)._9_Deserialize.method);
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar3 = Map_MapLoader__GetNextObjectId((MethodInfo *)0x0);
    (__this_02->fields).Id = iVar3;
    (__this_02->fields).Parent = parent;
    *(undefined1 *)((long)&(__this_02->fields).Active + 3) = 0;
    mapObject = Map_MapLoader__LoadObject
                          ((Map_MapScriptBaseObject_o *)__this_02,0,(MethodInfo *)0x0);
    Map_MapLoader__SetParent(mapObject,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if ((__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
       (CustomLogic_CustomLogicEvaluator__LoadMapObjectComponents
                  (__this,mapObject,1,(MethodInfo *)0x0), mapObject != (Map_MapObject_o *)0x0)) {
      *(undefined1 *)&(mapObject->fields).RuntimeCreated = 1;
      if ((char)recursive == '\0') {
        return mapObject;
      }
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar1 = (obj->fields).ScriptObject;
      if ((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
         (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                    (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
         pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
        bVar4 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                          (pSVar2,(pMVar1->fields).Id,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar4 == '\0') {
          return mapObject;
        }
        if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pMVar1 = (obj->fields).ScriptObject;
        if (((pMVar1 != (Map_MapScriptBaseObject_o *)0x0) &&
            (pSVar2 = *(System_Collections_Generic_Dictionary_int__object__o **)
                       (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
            pSVar2 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) &&
           (__this_03 = (System_Collections_Generic_HashSet_int__o *)
                        System_Collections_Generic_Dictionary<int__object>__get_Item
                                  (pSVar2,(pMVar1->fields).Id,MethodInfo_HashSet_1_System_Int32__get_Item),
           __this_03 != (System_Collections_Generic_HashSet_int__o *)0x0)) {
          method_00 = &MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera;
          System_Collections_Generic_HashSet<int>__GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,__this_03,
                     MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
          uVar9 = SUB84(local_48._16_8_,4);
          pSVar6 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48._0_8_;
          pIVar7 = (Il2CppType *)local_48._8_8_;
          iVar3 = (int32_t)local_48._16_8_;
          while( true ) {
            iVar8 = iVar3;
            __this_00.fields._8_8_ = pIVar7;
            __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6;
            __this_00.fields._current._0_4_ = iVar8;
            __this_00.fields._current._4_4_ = uVar9;
            bVar4 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                              (__this_00,(MethodInfo_3180BA0 *)&stack0xffffffffffffff98);
            if ((char)bVar4 == '\0') {
              __this_01.fields._8_8_ = pIVar7;
              __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar6;
              __this_01.fields._current._0_4_ = iVar8;
              __this_01.fields._current._4_4_ = uVar9;
              System_Collections_Generic_HashSet_Enumerator<int>__Dispose
                        (__this_01,(MethodInfo_3180B90 *)&stack0xffffffffffffff98);
              return mapObject;
            }
            iVar3 = iVar8;
            if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if ((System_Collections_Generic_Dictionary_int__object__o *)
                **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                (System_Collections_Generic_Dictionary_int__object__o *)0x0) break;
            bVar4 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                              ((System_Collections_Generic_Dictionary_int__object__o *)
                               **(undefined8 **)(TypeInfo_MapLoader + 0xb8),iVar8,MethodInfo_Boolean_ContainsKey);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if ((System_Collections_Generic_Dictionary_int__object__o *)
                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                  (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              obj_00 = (Map_MapObject_o *)
                       System_Collections_Generic_Dictionary<int__object>__get_Item
                                 ((System_Collections_Generic_Dictionary_int__object__o *)
                                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8),iVar8,MethodInfo_MapObject_get_Item);
              iVar8 = (__this_02->fields).Id;
              if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
                il2cpp_init_class();
              }
              CustomLogic_CustomLogicMapBuiltin__CopyMapObject
                        (obj_00,iVar8,1,(MethodInfo *)method_00);
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$DestroyMapObjectBuiltin
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin (Il2CppObject* obj, bool recursive, const MethodInfo* method);
// 0x3ecc260

void CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin
               (Il2CppObject *obj,bool_conflict recursive,MethodInfo *method)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  Map_MapScriptBaseObject_o *pMVar5;
  long lVar6;
  System_Collections_Generic_Dictionary_int__object__o *pSVar7;
  System_Collections_Generic_List_object__o *__this;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_06;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_07;
  _union_329991 instance;
  bool_conflict bVar8;
  System_Collections_Generic_HashSet_int__o *__this_08;
  System_Collections_Generic_HashSet_int__o *__this_09;
  Il2CppObject *obj_00;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  Il2CppClass *pIVar9;
  Il2CppClass **ppIVar10;
  System_Collections_Generic_List_Enumerator_T__c *pSVar11;
  Il2CppRGCTXData *pIVar12;
  int32_t iVar13;
  int32_t iVar14;
  undefined4 uVar15;
  char local_6c;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  Il2CppRGCTXData *pIStack_60;
  _union_329991 local_58;
  undefined1 local_48 [16];
  _union_329991 local_38;
  
  if (DAT_05703998 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32__get_Item);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_MapObject_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Int32);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_int);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_MapObject);
    DAT_05703998 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar12 = (Il2CppRGCTXData *)0x0;
  iVar13 = 0;
  uVar15 = 0;
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppRGCTXData *)0x0;
  local_58.genericMethod = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (obj == (Il2CppObject *)0x0) {
    return;
  }
  pIVar9 = obj->klass;
  bVar2 = (pIVar9->_2).naturalAligment;
  bVar3 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
  if ((bVar2 < bVar3) ||
     (ppIVar10 = (pIVar9->_2).typeHierarchy, ppIVar10[(ulong)bVar3 - 1] != TypeInfo_CustomLogicMapObjectBuiltin)) {
    bVar4 = (TypeInfo_MapObject->_2).naturalAligment;
    if (bVar2 < bVar4) {
      return;
    }
    ppIVar10 = (pIVar9->_2).typeHierarchy;
    if (ppIVar10[(ulong)bVar4 - 1] != TypeInfo_MapObject) {
      return;
    }
    if (bVar3 <= bVar2) goto LAB_03ecc41f;
LAB_03ecc426:
    bVar3 = (TypeInfo_MapObject->_2).naturalAligment;
    pIVar9 = (Il2CppClass *)0x0;
    if ((bVar3 <= bVar2) && (ppIVar10[(ulong)bVar3 - 1] == TypeInfo_MapObject)) {
      pIVar9 = (Il2CppClass *)obj;
    }
  }
  else {
LAB_03ecc41f:
    if (ppIVar10[(ulong)bVar3 - 1] != TypeInfo_CustomLogicMapObjectBuiltin) goto LAB_03ecc426;
    pIVar9 = obj[3].klass;
    obj[3].klass = (Il2CppClass *)0x0;
    il2cpp_runtime_glue(obj + 3,0);
  }
  if ((pIVar9 != (Il2CppClass *)0x0) &&
     (pMVar5 = (pIVar9->_1).byval_arg.data, pMVar5 != (Map_MapScriptBaseObject_o *)0x0)) {
    iVar14 = (pMVar5->fields).Id;
    if ((*(char *)&(pIVar9->_1).declaringType != '\0') &&
       (*(char *)((long)&(pMVar5->fields).Active + 3) != '\0')) {
      if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
        il2cpp_init_class();
      }
      piVar1 = (int *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 8);
      *piVar1 = *piVar1 + -1;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if ((lVar6 != 0) &&
       (pSVar7 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar6 + 0x28),
       pSVar7 != (System_Collections_Generic_Dictionary_int__object__o *)0x0)) {
      bVar8 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                        (pSVar7,iVar14,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if ((lVar6 == 0) ||
           (pSVar7 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar6 + 0x28),
           pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0))
        goto LAB_03ecc8e7;
        System_Collections_Generic_Dictionary<int__object>__get_Item(pSVar7,iVar14,MethodInfo_CustomLogicNetworkViewBuiltin_get_Item);
        lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if ((lVar6 == 0) ||
           (pSVar7 = *(System_Collections_Generic_Dictionary_int__object__o **)(lVar6 + 0x28),
           pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0))
        goto LAB_03ecc8e7;
        System_Collections_Generic_Dictionary<int__object>__Remove(pSVar7,iVar14,MethodInfo_Boolean_Remove);
      }
      __this_08 = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_glue(TypeInfo_HashSet_int);
      System_Collections_Generic_HashSet<int>___ctor(__this_08,MethodInfo_HashSet_1_System_Int32);
      if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = *(System_Collections_Generic_Dictionary_int__object__o **)
                (*(long *)(TypeInfo_MapLoader + 0xb8) + 8);
      if (pSVar7 != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
        bVar8 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                          (pSVar7,iVar14,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar8 != '\0') {
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pMVar5 = (pIVar9->_1).byval_arg.data;
          if (((pMVar5 == (Map_MapScriptBaseObject_o *)0x0) ||
              (pSVar7 = *(System_Collections_Generic_Dictionary_int__object__o **)
                         (*(long *)(TypeInfo_MapLoader + 0xb8) + 8),
              pSVar7 == (System_Collections_Generic_Dictionary_int__object__o *)0x0)) ||
             (__this_09 = (System_Collections_Generic_HashSet_int__o *)
                          System_Collections_Generic_Dictionary<int__object>__get_Item
                                    (pSVar7,(pMVar5->fields).Id,MethodInfo_HashSet_1_System_Int32__get_Item),
             __this_09 == (System_Collections_Generic_HashSet_int__o *)0x0)) goto LAB_03ecc8e7;
          System_Collections_Generic_HashSet<int>__GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,__this_09,
                     MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
          iVar13 = local_38._0_4_;
          uVar15 = local_38._4_4_;
          pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
          pIVar12 = (Il2CppRGCTXData *)local_48._8_8_;
          if (__this_08 == (System_Collections_Generic_HashSet_int__o *)0x0) {
            __this_02.fields._index = local_48._8_4_;
            __this_02.fields._version = local_48._12_4_;
            __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)local_48._0_8_;
            __this_02.fields._current._0_4_ = iVar13;
            __this_02.fields._current._4_4_ = uVar15;
            bVar8 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                              (__this_02,(MethodInfo_3180BA0 *)&stack0xffffffffffffff68);
            if ((char)bVar8 != '\0') {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
          }
          else {
            while (__this_01.fields._8_8_ = pIVar12,
                  __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar11,
                  __this_01.fields._current._0_4_ = iVar13, __this_01.fields._current._4_4_ = uVar15
                  , bVar8 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                                      (__this_01,(MethodInfo_3180BA0 *)&stack0xffffffffffffff68),
                  (char)bVar8 != '\0') {
              System_Collections_Generic_HashSet<int>__Add(__this_08,iVar13,MethodInfo_Boolean_Add);
            }
          }
          __this_03.fields._8_8_ = pIVar12;
          __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar11;
          __this_03.fields._current._0_4_ = iVar13;
          __this_03.fields._current._4_4_ = uVar15;
          System_Collections_Generic_HashSet_Enumerator<int>__Dispose
                    (__this_03,(MethodInfo_3180B90 *)&stack0xffffffffffffff68);
        }
        __this = *(System_Collections_Generic_List_object__o **)&(pIVar9->_1).this_arg.bits;
        if (__this != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_48,__this,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp
                    );
          local_58 = local_38;
          local_68 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
          pIStack_60 = (Il2CppRGCTXData *)local_48._8_8_;
          while (__this_04.fields._8_8_ = pIVar12,
                __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar11,
                __this_04.fields._current._0_4_ = iVar13, __this_04.fields._current._4_4_ = uVar15,
                bVar8 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_04,(MethodInfo_3185E20 *)&local_68), instance = local_58,
                (char)bVar8 != '\0') {
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8)
            ;
            if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            CustomLogic_CustomLogicEvaluator__RemoveComponent
                      (__this_00,instance.genericMethod,(MethodInfo *)0x0);
          }
          __this_05.fields._8_8_ = pIVar12;
          __this_05.fields._list = (System_Collections_Generic_List_T__o *)pSVar11;
          __this_05.fields._current._0_4_ = iVar13;
          __this_05.fields._current._4_4_ = uVar15;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_05,(MethodInfo_3185E10 *)&local_68);
          if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Map_MapLoader__DeleteObject((Map_MapObject_o *)pIVar9,(MethodInfo *)0x0);
          local_6c = (char)recursive;
          if (local_6c != '\0') {
            if (__this_08 == (System_Collections_Generic_HashSet_int__o *)0x0) goto LAB_03ecc8e7;
            System_Collections_Generic_HashSet<int>__GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,__this_08,
                       MethodInfo_HashSet_1_T__Enumerator_System_Int32__GetEnumera);
            uVar15 = local_38._4_4_;
            pSVar11 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
            pIVar12 = (Il2CppRGCTXData *)local_48._8_8_;
            iVar13 = local_38._0_4_;
            while (iVar14 = iVar13, __this_06.fields._8_8_ = pIVar12,
                  __this_06.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar11,
                  __this_06.fields._current._0_4_ = iVar14, __this_06.fields._current._4_4_ = uVar15
                  , bVar8 = System_Collections_Generic_HashSet_Enumerator<int>__MoveNext
                                      (__this_06,(MethodInfo_3180BA0 *)&stack0xffffffffffffff68),
                  (char)bVar8 != '\0') {
              iVar13 = iVar14;
              if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if ((System_Collections_Generic_Dictionary_int__object__o *)
                  **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                  (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              bVar8 = System_Collections_Generic_Dictionary<int__object>__ContainsKey
                                ((System_Collections_Generic_Dictionary_int__object__o *)
                                 **(undefined8 **)(TypeInfo_MapLoader + 0xb8),iVar14,MethodInfo_Boolean_ContainsKey);
              if ((char)bVar8 != '\0') {
                if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                if ((System_Collections_Generic_Dictionary_int__object__o *)
                    **(undefined8 **)(TypeInfo_MapLoader + 0xb8) ==
                    (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                obj_00 = System_Collections_Generic_Dictionary<int__object>__get_Item
                                   ((System_Collections_Generic_Dictionary_int__object__o *)
                                    **(undefined8 **)(TypeInfo_MapLoader + 0xb8),iVar14,MethodInfo_MapObject_get_Item);
                method_00 = extraout_RDX;
                if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
                  il2cpp_init_class();
                  method_00 = extraout_RDX_00;
                }
                CustomLogic_CustomLogicMapBuiltin__DestroyMapObjectBuiltin(obj_00,1,method_00);
              }
            }
            __this_07.fields._8_8_ = pIVar12;
            __this_07.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar11;
            __this_07.fields._current._0_4_ = iVar14;
            __this_07.fields._current._4_4_ = uVar15;
            System_Collections_Generic_HashSet_Enumerator<int>__Dispose
                      (__this_07,(MethodInfo_3180B90 *)&stack0xffffffffffffff68);
          }
          return;
        }
      }
    }
  }
LAB_03ecc8e7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicMapBuiltin$$get_HasInstantiateAvailable
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_HasInstantiateAvailable (const MethodInfo* method);
// 0x3ecd350

bool_conflict CustomLogic_CustomLogicMapBuiltin__get_HasInstantiateAvailable(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05703999 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_05703999 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8);
  return (bool_conflict)
         CONCAT71((int7)((ulong)lVar1 >> 8),*(int *)(lVar1 + 8) < *(int *)(lVar1 + 0xc));
}


// CustomLogic.CustomLogicMapBuiltin$$CanSpawnRuntimeNetworkedMapObject
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__CanSpawnRuntimeNetworkedMapObject (const MethodInfo* method);
// 0x3ecd3a0

bool_conflict
CustomLogic_CustomLogicMapBuiltin__CanSpawnRuntimeNetworkedMapObject(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (DAT_0570399a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_0570399a = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05703999 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_05703999 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    if (*(int *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 0xc) <=
        *(int *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 8)) {
      return 0;
    }
  }
  else if (*(int *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 0xc) <=
           *(int *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 8)) {
    return 0;
  }
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((Utility_RateLimit_o *)**(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8) == (Utility_RateLimit_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar2 = Utility_RateLimit__Peek
                    ((Utility_RateLimit_o *)**(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8),1,
                     (MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicMapBuiltin$$TrySpawningRuntimeNetworkedObject
// il2cpp: void CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject (const MethodInfo* method);
// 0x3ecd1a0

void CustomLogic_CustomLogicMapBuiltin__TrySpawningRuntimeNetworkedObject(MethodInfo *method)

{
  int *piVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  System_Exception_o *__this;
  System_String_o *message;
  undefined *puVar4;
  
  if (DAT_0570399b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_0570399b = '\x01';
    if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) goto LAB_03ecd274;
LAB_03ecd1c5:
    if (DAT_05703999 != '\0') goto LAB_03ecd1d2;
LAB_03ecd286:
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_05703999 = '\x01';
    if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) goto LAB_03ecd2a9;
LAB_03ecd1e2:
    if (*(int *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 0xc) <=
        *(int *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 8)) {
LAB_03ecd2c4:
      uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
      puVar4 = &"Out of instantiations, please clean up networked objects to spawn more.";
      goto LAB_03ecd31c;
    }
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) != 0) goto LAB_03ecd1c5;
LAB_03ecd274:
    il2cpp_init_class();
    if (DAT_05703999 == '\0') goto LAB_03ecd286;
LAB_03ecd1d2:
    if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) != 0) goto LAB_03ecd1e2;
LAB_03ecd2a9:
    il2cpp_init_class();
    if (*(int *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 0xc) <=
        *(int *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 8)) goto LAB_03ecd2c4;
  }
  if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((Utility_RateLimit_o *)**(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8) == (Utility_RateLimit_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar2 = Utility_RateLimit__Use
                    ((Utility_RateLimit_o *)**(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8),1,
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_CustomLogicMapBuiltin + 0xe4) != 0) {
      piVar1 = (int *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 8);
      *piVar1 = *piVar1 + 1;
      return;
    }
    il2cpp_init_class();
    piVar1 = (int *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 8);
    *piVar1 = *piVar1 + 1;
    return;
  }
  uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
  puVar4 = &"Spawning networked runtime map objects too fast, please slow down.";
LAB_03ecd31c:
  message = (System_String_o *)il2cpp_init_method_metadata(puVar4);
  System_Exception___ctor(__this,message,(MethodInfo *)0x0);
  uVar3 = il2cpp_init_method_metadata(&MethodInfo_Void_TrySpawningRuntimeNetworkedObject);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar3);
}


// CustomLogic.CustomLogicMapBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMapBuiltin__get_ClassName (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x3ecd4b0

System_String_o *
CustomLogic_CustomLogicMapBuiltin__get_ClassName
          (CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_0570399c == '\0') {
    il2cpp_init_method_metadata(&"Map");
    DAT_0570399c = '\x01';
  }
  return "Map";
}


// CustomLogic.CustomLogicMapBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_IsAbstract (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x3ecd4e0

bool_conflict
CustomLogic_CustomLogicMapBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicMapBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_IsStatic (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x3ecd4f0

bool_conflict
CustomLogic_CustomLogicMapBuiltin__get_IsStatic
          (CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicMapBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMapBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMapBuiltin_o* __this, const MethodInfo* method);
// 0x3ecd500

bool_conflict
CustomLogic_CustomLogicMapBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicMapBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicMapBuiltin$$.cctor
// il2cpp: void CustomLogic_CustomLogicMapBuiltin___cctor (const MethodInfo* method);
// 0x3ecd510

void CustomLogic_CustomLogicMapBuiltin___cctor(MethodInfo *method)

{
  if (DAT_0570399d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapBuiltin);
    DAT_0570399d = '\x01';
  }
  **(undefined8 **)(TypeInfo_CustomLogicMapBuiltin + 0xb8) = 0;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicMapBuiltin + 0xb8),0);
  *(undefined8 *)(*(long *)(TypeInfo_CustomLogicMapBuiltin + 0xb8) + 8) = 0x6400000000;
  return;
}


