// Type: CustomLogic.CustomLogicSetBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSetBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicSetBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSetBuiltin_o* CustomLogic_CustomLogicSetBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3dc44d0

CustomLogic_CustomLogicSetBuiltin_o *
CustomLogic_CustomLogicSetBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  il2cpp_array_size_t iVar1;
  CustomLogic_CustomLogicSetBuiltin_o *__this;
  undefined1 auVar2 [16];
  
  if (DAT_057028af == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSetBuiltin);
    DAT_057028af = '\x01';
  }
  if (args != (System_Object_array *)0x0) {
    iVar1 = args->max_length;
    auVar2 = il2cpp_runtime_glue(TypeInfo_CustomLogicSetBuiltin);
    __this = auVar2._0_8_;
    if (iVar1 == 0) {
      CustomLogic_CustomLogicSetBuiltin___ctor(__this,method);
    }
    else {
      CustomLogic_CustomLogicSetBuiltin___ctor(__this,args,auVar2._8_8_);
    }
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3dc6160

void CustomLogic_CustomLogicSetBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057028c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028c1 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3dc61d0

void CustomLogic_CustomLogicSetBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc61e0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__Clear>b__3_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    if (DAT_057028a0 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
      DAT_057028a0 = '\x01';
    }
    __this_00 = (__c->fields).Set;
    __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Clear(__this_00,MethodInfo_Void_Clear);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__4_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc6230

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__Contains>b__4_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      pIVar2 = __a->m_Items[0];
      uStack_18 = in_RAX;
      if (DAT_057028a1 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
        DAT_057028a1 = '\x01';
      }
      __this_00 = (__c->fields).Set;
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar1 = System_Collections_Generic_HashSet<object>__Contains(__this_00,pIVar2,MethodInfo_Boolean_Contains);
        uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
        return pIVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Add_b__5_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc62b0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__Add>b__5_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *item;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      item = __a->m_Items[0];
      if (DAT_057028a2 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
        DAT_057028a2 = '\x01';
      }
      __this_00 = (__c->fields).Set;
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Add(__this_00,item,MethodInfo_Boolean_Add);
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__6_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc6320

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__Remove>b__6_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *item;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      item = __a->m_Items[0];
      if (DAT_057028a3 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
        DAT_057028a3 = '\x01';
      }
      __this_00 = (__c->fields).Set;
      __this = (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Remove(__this_00,item,MethodInfo_Boolean_Remove);
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Union>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Union_b__7_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc6390

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__Union>b__7_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *pIVar1;
  
  if (DAT_057028c2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028c2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (DAT_057028a4 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_UnionWith);
        DAT_057028a4 = '\x01';
      }
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (__this_00 = (__c->fields).Set,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet<object>__UnionWith
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar1[3].klass,
                   MethodInfo_Void_UnionWith);
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Intersect>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Intersect_b__8_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc6460

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__Intersect>b__8_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *pIVar1;
  
  if (DAT_057028c3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028c3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (DAT_057028a5 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_IntersectWith);
        DAT_057028a5 = '\x01';
      }
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (__this_00 = (__c->fields).Set,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet<object>__IntersectWith
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar1[3].klass,
                   MethodInfo_Void_IntersectWith);
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Difference>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Difference_b__9_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc6530

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__Difference>b__9_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *pIVar1;
  
  if (DAT_057028c4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028c4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (DAT_057028a6 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_ExceptWith);
        DAT_057028a6 = '\x01';
      }
      if ((pIVar1 != (Il2CppObject *)0x0) &&
         (__this_00 = (__c->fields).Set,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet<object>__ExceptWith
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar1[3].klass,
                   MethodInfo_Void_ExceptWith);
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsSubsetOf>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSubsetOf_b__10_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc6600

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__IsSubsetOf>b__10_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_057028c5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028c5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (DAT_057028a7 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_IsSubsetOf);
        DAT_057028a7 = '\x01';
      }
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (__this_00 = (__c->fields).Set,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        bVar1 = System_Collections_Generic_HashSet<object>__IsSubsetOf
                          (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar2[3].klass,
                           MethodInfo_Boolean_IsSubsetOf);
        uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
        return pIVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsSupersetOf>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSupersetOf_b__11_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc66f0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__IsSupersetOf>b__11_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_057028c6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028c6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (DAT_057028a8 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_IsSupersetOf);
        DAT_057028a8 = '\x01';
      }
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (__this_00 = (__c->fields).Set,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        bVar1 = System_Collections_Generic_HashSet<object>__IsSupersetOf
                          (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar2[3].klass,
                           MethodInfo_Boolean_IsSupersetOf);
        uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
        return pIVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsProperSubsetOf>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSubsetOf_b__12_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc67e0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__IsProperSubsetOf>b__12_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_057028c7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028c7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (DAT_057028a9 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_IsProperSubsetOf);
        DAT_057028a9 = '\x01';
      }
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (__this_00 = (__c->fields).Set,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        bVar1 = System_Collections_Generic_HashSet<object>__IsProperSubsetOf
                          (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar2[3].klass,
                           MethodInfo_Boolean_IsProperSubsetOf);
        uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
        return pIVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsProperSupersetOf>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSupersetOf_b__13_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc68d0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__IsProperSupersetOf>b__13_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_057028c8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028c8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (DAT_057028aa == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_IsProperSupersetOf);
        DAT_057028aa = '\x01';
      }
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (__this_00 = (__c->fields).Set,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        bVar1 = System_Collections_Generic_HashSet<object>__IsProperSupersetOf
                          (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar2[3].klass,
                           MethodInfo_Boolean_IsProperSupersetOf);
        uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
        return pIVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Overlaps>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Overlaps_b__14_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc69c0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__Overlaps>b__14_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_057028c9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028c9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (DAT_057028ab == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_Overlaps);
        DAT_057028ab = '\x01';
      }
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (__this_00 = (__c->fields).Set,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        bVar1 = System_Collections_Generic_HashSet<object>__Overlaps
                          (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar2[3].klass,
                           MethodInfo_Boolean_Overlaps);
        uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
        return pIVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetEquals>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__SetEquals_b__15_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc6ab0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__SetEquals>b__15_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (DAT_057028ca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057028ca = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_CustomLogicSetBuiltin_ConvertTo_CustomLogicSetBu);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (DAT_057028ac == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_SetEquals);
        DAT_057028ac = '\x01';
      }
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (__this_00 = (__c->fields).Set,
         __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        bVar1 = System_Collections_Generic_HashSet<object>__SetEquals
                          (__this_00,(System_Collections_Generic_IEnumerable_T__o *)pIVar2[3].klass,
                           MethodInfo_Boolean_SetEquals);
        uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
        return pIVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToList>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__ToList_b__16_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc6ba0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_<>c__<__CreateMethodBinding__ToList>b__16_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicSetBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar1;
  CustomLogic_CustomLogicListBuiltin_o *__this_04;
  MethodInfo *method_00;
  MethodInfo *method_01;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar2;
  Il2CppType *pIVar3;
  Il2CppObject *value;
  undefined1 auStack_38 [16];
  Il2CppObject *pIStack_28;
  
  if (__c == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  method_01 = (MethodInfo *)__c;
  if (DAT_057028ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_Object__GetEnumer);
    DAT_057028ad = '\x01';
  }
  __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_04,method_01);
  __this_00 = (__c->fields).Set;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<object>__GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_38,__this_00,MethodInfo_HashSet_1_T__Enumerator_System_Object__GetEnumer
            );
  pSVar2 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_38._0_8_;
  pIVar3 = (Il2CppType *)auStack_38._8_8_;
  value = pIStack_28;
  if (__this_04 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_02.fields._index = auStack_38._8_4_;
    __this_02.fields._version = auStack_38._12_4_;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_38._0_8_;
    __this_02.fields._current = pIStack_28;
    bVar1 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffffa8);
    if ((char)bVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this_01.fields._8_8_ = pIVar3,
          __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar2,
          __this_01.fields._current = value,
          bVar1 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffffa8),
          auStack_38._0_8_ = pSVar2, auStack_38._8_8_ = pIVar3, pIStack_28 = value,
          (char)bVar1 != '\0') {
      CustomLogic_CustomLogicListBuiltin__Add(__this_04,value,method_00);
    }
  }
  __this_03.fields._8_8_ = auStack_38._8_8_;
  __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_38._0_8_;
  __this_03.fields._current = pIStack_28;
  System_Collections_Generic_HashSet_Enumerator<object>__Dispose
            (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffffa8);
  return (Il2CppObject *)__this_04;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSetBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3dc4540

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSetBuiltin_Bindings__CreateMemberBinding
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
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_T__o *__this_00;
  System_Func_T__object____object__o *pSVar7;
  CustomLogic_CLMethodBinding_T__o *pCVar8;
  
  if (DAT_057028b0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"IsProperSubsetOf");
    il2cpp_init_method_metadata(&"Remove");
    il2cpp_init_method_metadata(&"Add");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Count");
    il2cpp_init_method_metadata(&"Difference");
    il2cpp_init_method_metadata(&"Union");
    il2cpp_init_method_metadata(&"ToList");
    il2cpp_init_method_metadata(&"Overlaps");
    il2cpp_init_method_metadata(&"IsProperSupersetOf");
    il2cpp_init_method_metadata(&"IsSubsetOf");
    il2cpp_init_method_metadata(&"SetEquals");
    il2cpp_init_method_metadata(&"IsSupersetOf");
    il2cpp_init_method_metadata(&"Contains");
    il2cpp_init_method_metadata(&"Intersect");
    DAT_057028b0 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x819a4895) {
    if (uVar3 < 0x21a5901e) {
      if (uVar3 == 0x4a57fc2) {
        bVar4 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028b2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__3_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057028b2 = '\x01';
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
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 8,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x21797cc1) {
        bVar4 = System_String__op_Equality(name,"Overlaps",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028bd == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Overlaps_b__14_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057028bd = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x60,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x21a5901d) &&
              (bVar4 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028b5 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Remove_b__6_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028b5 = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x5db8d715) {
      if (uVar3 == 0x25973e73) {
        bVar4 = System_String__op_Equality(name,"IsProperSupersetOf",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028bc == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsProperSupersetO);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057028bc = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x58,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x5db8d714) &&
              (bVar4 = System_String__op_Equality(name,"IsProperSubsetOf",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028bb == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsProperSubsetOf);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028bb = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x50,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x819a4894) {
      bVar4 = System_String__op_Equality(name,"Union",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028b6 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Union_b__7_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028b6 = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x669c4958) &&
            (bVar4 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057028b3 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Contains_b__4_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057028b3 = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x9dc3aa15) {
    if (uVar3 < 0x8c99c7e7) {
      if (uVar3 == 0x81a75162) {
        bVar4 = System_String__op_Equality(name,"Difference",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057028b8 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Difference_b__9_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057028b8 = '\x01';
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
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x38,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x8c99c7e6) &&
              (bVar4 = System_String__op_Equality(name,"IsSubsetOf",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028b9 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsSubsetOf_b__10);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028b9 = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x40,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x91bde06d) {
      bVar4 = System_String__op_Equality(name,"IsSupersetOf",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028ba == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsSupersetOf_b__1);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028ba = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x48,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x9dc3aa14) &&
            (bVar4 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057028b4 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Add_b__5_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057028b4 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x18,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xcf21bf87) {
    if (uVar3 == 0xba01b30c) {
      bVar4 = System_String__op_Equality(name,"ToList",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057028bf == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToList_b__16_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057028bf = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x70,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xcf21bf86) &&
            (bVar4 = System_String__op_Equality(name,"Intersect",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057028b7 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Intersect_b__8_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057028b7 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x30,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xedda3dae) {
    bVar4 = System_String__op_Equality(name,"SetEquals",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057028be == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetEquals_b__15_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057028be = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x68,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xe1e7b894) &&
          (bVar4 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057028b1 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Count_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSetBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSetBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object);
      DAT_057028b1 = '\x01';
    }
    getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object);
    System_Func<object__object>___ctor();
    __this_00 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSetBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor
              (__this_00,getter,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicSetBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)__this_00;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicSetBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x3dc4b60

CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028b1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Count_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object);
    DAT_057028b1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicSetBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x3dc4c00

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028b2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028b2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x3dc4d50

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028b3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Contains_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028b3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Add
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Add (const MethodInfo* method);
// 0x3dc4ea0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Add(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028b4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Add_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028b4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x3dc4ff0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028b5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Remove_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028b5 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Union
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Union (const MethodInfo* method);
// 0x3dc5140

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Union(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Union_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028b6 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Intersect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Intersect (const MethodInfo* method);
// 0x3dc5290

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Intersect(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Intersect_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028b7 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Difference
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Difference (const MethodInfo* method);
// 0x3dc53e0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Difference(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028b8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Difference_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028b8 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsSubsetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSubsetOf (const MethodInfo* method);
// 0x3dc5530

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSubsetOf(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028b9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsSubsetOf_b__10);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028b9 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsSupersetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSupersetOf (const MethodInfo* method);
// 0x3dc5680

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSupersetOf(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028ba == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsSupersetOf_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028ba = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsProperSubsetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSubsetOf (const MethodInfo* method);
// 0x3dc57d0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSubsetOf
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028bb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsProperSubsetOf);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028bb = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsProperSupersetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSupersetOf (const MethodInfo* method);
// 0x3dc5920

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSupersetOf
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028bc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IsProperSupersetO);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028bc = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Overlaps
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Overlaps (const MethodInfo* method);
// 0x3dc5a70

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Overlaps(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Overlaps_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028bd = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__SetEquals
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__SetEquals (const MethodInfo* method);
// 0x3dc5bc0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__SetEquals(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028be == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SetEquals_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028be = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__ToList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__ToList (const MethodInfo* method);
// 0x3dc5d10

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__ToList(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this;
  
  if (DAT_057028bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToList_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057028bf = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicSetBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicSetBuiltin);
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3dc5e60

void CustomLogic_CustomLogicSetBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057028c0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"IsProperSubsetOf");
    il2cpp_init_method_metadata(&"Remove");
    il2cpp_init_method_metadata(&"Add");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Count");
    il2cpp_init_method_metadata(&"Difference");
    il2cpp_init_method_metadata(&"Union");
    il2cpp_init_method_metadata(&"ToList");
    il2cpp_init_method_metadata(&"Overlaps");
    il2cpp_init_method_metadata(&"IsProperSupersetOf");
    il2cpp_init_method_metadata(&"IsSubsetOf");
    il2cpp_init_method_metadata(&"SetEquals");
    il2cpp_init_method_metadata(&"IsSupersetOf");
    il2cpp_init_method_metadata(&"Contains");
    il2cpp_init_method_metadata(&"Intersect");
    DAT_057028c0 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Count",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Clear",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Contains",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Add",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Remove",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Union",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Intersect",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Difference",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsSubsetOf",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsSupersetOf",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsProperSubsetOf",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsProperSupersetOf",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Overlaps",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SetEquals",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToList",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicSetBuiltin_o* __i, const MethodInfo* method);
// 0x3dc6100

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings__<__CreatePropertyBinding__Count>g____getter_2_0
          (CustomLogic_CustomLogicSetBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Il2CppObject *pIVar2;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    if (DAT_0570289f == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
      DAT_0570289f = '\x01';
    }
    pSVar1 = (__i->fields).Set;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      local_c = (pSVar1->fields)._count;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin___ctor (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x3dbbf00

void CustomLogic_CustomLogicSetBuiltin___ctor
               (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_0570289d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_object);
    DAT_0570289d = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_object);
  System_Collections_Generic_HashSet<object>___ctor(__this_00,MethodInfo_HashSet_1_System_Object);
  (__this->fields).Set = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Set);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin___ctor (CustomLogic_CustomLogicSetBuiltin_o* __this, System_Object_array* parameterValues, const MethodInfo* method);
// 0x3dc3ce0

void CustomLogic_CustomLogicSetBuiltin___ctor
               (CustomLogic_CustomLogicSetBuiltin_o *__this,System_Object_array *parameterValues,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o **ppSVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (DAT_0570289e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_object);
    DAT_0570289e = '\x01';
  }
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_object);
  System_Collections_Generic_HashSet<object>___ctor(pSVar3,MethodInfo_HashSet_1_System_Object);
  ppSVar1 = &(__this->fields).Set;
  (__this->fields).Set = pSVar3;
  il2cpp_runtime_glue(ppSVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (parameterValues != (System_Object_array *)0x0) {
    if (0 < (int)parameterValues->max_length) {
      uVar4 = parameterValues->max_length & 0xffffffff;
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar3 = *ppSVar1;
        if (pSVar3 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03dc3ddb;
        System_Collections_Generic_HashSet<object>__Add
                  (pSVar3,parameterValues->m_Items[uVar5],MethodInfo_Boolean_Add);
        uVar5 = uVar5 + 1;
        uVar2 = (uint)parameterValues->max_length;
        uVar4 = (ulong)uVar2;
      } while ((long)uVar5 < (long)(int)uVar2);
    }
    return;
  }
LAB_03dc3ddb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicSetBuiltin__get_Count (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x3dc3de0

int32_t CustomLogic_CustomLogicSetBuiltin__get_Count
                  (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  
  if (DAT_0570289f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_0570289f = '\x01';
  }
  pSVar1 = (__this->fields).Set;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    return (pSVar1->fields)._count;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Clear (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x3dc3e20

void CustomLogic_CustomLogicSetBuiltin__Clear
               (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_057028a0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_057028a0 = '\x01';
  }
  __this_00 = (__this->fields).Set;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Clear(__this_00,MethodInfo_Void_Clear);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__Contains (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3dc3e60

bool_conflict
CustomLogic_CustomLogicSetBuiltin__Contains
          (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_057028a1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    DAT_057028a1 = '\x01';
  }
  __this_00 = (__this->fields).Set;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains(__this_00,value,MethodInfo_Boolean_Contains);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$Add
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Add (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3dc3eb0

void CustomLogic_CustomLogicSetBuiltin__Add
               (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_057028a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    DAT_057028a2 = '\x01';
  }
  __this_00 = (__this->fields).Set;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this_00,value,MethodInfo_Boolean_Add);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Remove (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3dc3f00

void CustomLogic_CustomLogicSetBuiltin__Remove
               (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_057028a3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_057028a3 = '\x01';
  }
  __this_00 = (__this->fields).Set;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Remove(__this_00,value,MethodInfo_Boolean_Remove);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$Union
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Union (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x3dc3f50

void CustomLogic_CustomLogicSetBuiltin__Union
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set
               ,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_057028a4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_UnionWith);
    DAT_057028a4 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet<object>__UnionWith
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
               MethodInfo_Void_UnionWith);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$Intersect
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Intersect (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x3dc3fb0

void CustomLogic_CustomLogicSetBuiltin__Intersect
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set
               ,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_057028a5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_IntersectWith);
    DAT_057028a5 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet<object>__IntersectWith
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
               MethodInfo_Void_IntersectWith);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$Difference
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Difference (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x3dc4010

void CustomLogic_CustomLogicSetBuiltin__Difference
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set
               ,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_057028a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_ExceptWith);
    DAT_057028a6 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet<object>__ExceptWith
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
               MethodInfo_Void_ExceptWith);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$IsSubsetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsSubsetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x3dc4070

bool_conflict
CustomLogic_CustomLogicSetBuiltin__IsSubsetOf
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_057028a7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_IsSubsetOf);
    DAT_057028a7 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<object>__IsSubsetOf
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       MethodInfo_Boolean_IsSubsetOf);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$IsSupersetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsSupersetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x3dc40d0

bool_conflict
CustomLogic_CustomLogicSetBuiltin__IsSupersetOf
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_057028a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_IsSupersetOf);
    DAT_057028a8 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<object>__IsSupersetOf
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       MethodInfo_Boolean_IsSupersetOf);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$IsProperSubsetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsProperSubsetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x3dc4130

bool_conflict
CustomLogic_CustomLogicSetBuiltin__IsProperSubsetOf
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_057028a9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_IsProperSubsetOf);
    DAT_057028a9 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<object>__IsProperSubsetOf
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       MethodInfo_Boolean_IsProperSubsetOf);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$IsProperSupersetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsProperSupersetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x3dc4190

bool_conflict
CustomLogic_CustomLogicSetBuiltin__IsProperSupersetOf
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_057028aa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_IsProperSupersetOf);
    DAT_057028aa = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<object>__IsProperSupersetOf
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       MethodInfo_Boolean_IsProperSupersetOf);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$Overlaps
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__Overlaps (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x3dc41f0

bool_conflict
CustomLogic_CustomLogicSetBuiltin__Overlaps
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_057028ab == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Overlaps);
    DAT_057028ab = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<object>__Overlaps
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       MethodInfo_Boolean_Overlaps);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$SetEquals
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__SetEquals (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x3dc4250

bool_conflict
CustomLogic_CustomLogicSetBuiltin__SetEquals
          (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
          MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_057028ac == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_SetEquals);
    DAT_057028ac = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set,
     __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet<object>__SetEquals
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       MethodInfo_Boolean_SetEquals);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicSetBuiltin$$ToList
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicSetBuiltin__ToList (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x3dc42b0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicSetBuiltin__ToList
          (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  bool_conflict bVar1;
  CustomLogic_CustomLogicListBuiltin_o *__this_04;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar2;
  Il2CppType *pIVar3;
  Il2CppObject *value;
  undefined1 auStack_38 [16];
  Il2CppObject *pIStack_28;
  
  if (DAT_057028ad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_Object__GetEnumer);
    DAT_057028ad = '\x01';
  }
  __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_04,method);
  __this_00 = (__this->fields).Set;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<object>__GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)auStack_38,__this_00,MethodInfo_HashSet_1_T__Enumerator_System_Object__GetEnumer
            );
  pSVar2 = (System_Collections_Generic_HashSet_Enumerator_T__c *)auStack_38._0_8_;
  pIVar3 = (Il2CppType *)auStack_38._8_8_;
  value = pIStack_28;
  if (__this_04 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    __this_02.fields._index = auStack_38._8_4_;
    __this_02.fields._version = auStack_38._12_4_;
    __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_38._0_8_;
    __this_02.fields._current = pIStack_28;
    bVar1 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                      (__this_02,(MethodInfo_3185890 *)&stack0xffffffffffffffa8);
    if ((char)bVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this_01.fields._8_8_ = pIVar3,
          __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar2,
          __this_01.fields._current = value,
          bVar1 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffffa8),
          auStack_38._0_8_ = pSVar2, auStack_38._8_8_ = pIVar3, pIStack_28 = value,
          (char)bVar1 != '\0') {
      CustomLogic_CustomLogicListBuiltin__Add(__this_04,value,method_00);
    }
  }
  __this_03.fields._8_8_ = auStack_38._8_8_;
  __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)auStack_38._0_8_;
  __this_03.fields._current = pIStack_28;
  System_Collections_Generic_HashSet_Enumerator<object>__Dispose
            (__this_03,(MethodInfo_3185880 *)&stack0xffffffffffffffa8);
  return __this_04;
}


// CustomLogic.CustomLogicSetBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSetBuiltin__get_ClassName (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x3dc4470

System_String_o *
CustomLogic_CustomLogicSetBuiltin__get_ClassName
          (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_057028ae == '\0') {
    il2cpp_init_method_metadata(&"Set");
    DAT_057028ae = '\x01';
  }
  return "Set";
}


// CustomLogic.CustomLogicSetBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_IsAbstract (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x3dc44a0

bool_conflict
CustomLogic_CustomLogicSetBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicSetBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_IsStatic (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x3dc44b0

bool_conflict
CustomLogic_CustomLogicSetBuiltin__get_IsStatic
          (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicSetBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x3dc44c0

bool_conflict
CustomLogic_CustomLogicSetBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


