// Type: CustomLogic.CustomLogicSetBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicSetBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSetBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSetBuiltin_o* CustomLogic_CustomLogicSetBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ed89c0

CustomLogic_CustomLogicSetBuiltin_o *
CustomLogic_CustomLogicSetBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184345218 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin);
    Il2CppMethodInitialized_184345218 = '\x01';
  }
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin);
      CustomLogic_CustomLogicSetBuiltin___ctor(pCVar1,(MethodInfo *)0x0);
      return pCVar1;
    }
    pCVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin);
    if (Il2CppMethodInitialized_184345207 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Add);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_object);
      Il2CppMethodInitialized_184345207 = '\x01';
    }
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_object);
    System_Collections_Generic_HashSet_object____ctor
              (pSVar2,(MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_object_ctor);
    (pCVar1->fields).Set = pSVar2;
    Il2CppCodeGenWriteBarrier(&(pCVar1->fields).Set,pSVar2);
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar1,(MethodInfo *)0x0);
    uVar3 = 0;
    while( true ) {
      if ((int)args->max_length <= (int)uVar3) {
        return pCVar1;
      }
      if ((uint)args->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      pSVar2 = (pCVar1->fields).Set;
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
      System_Collections_Generic_HashSet_object___Add
                (pSVar2,args->m_Items[(int)uVar3],
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_object_Add);
      uVar3 = uVar3 + 1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181ee3ef0

void CustomLogic_CustomLogicSetBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_18434522a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434522a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9,__this)
  ;
  return;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicSetBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181eded10

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_00;
  
  if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345209 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Clear);
      Il2CppMethodInitialized_184345209 = '\x01';
    }
    __this_00 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__c->fields).Set;
    if (__this_00 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (__this_00,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_object_Clear);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__4_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edefb0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__4_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      pIVar1 = __a->m_Items[0];
      if (Il2CppMethodInitialized_18434520a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_object_Contains);
        Il2CppMethodInitialized_18434520a = '\x01';
      }
      __this_00 = (__c->fields).Set;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        local_res18[0] =
             System_Collections_Generic_HashSet_object___Contains
                       (__this_00,pIVar1,
                        (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_object_Contains);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Add_b__5_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ede680

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Add_b__5_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *item;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      item = __a->m_Items[0];
      if (Il2CppMethodInitialized_18434520b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Add);
        Il2CppMethodInitialized_18434520b = '\x01';
      }
      __this_00 = (__c->fields).Set;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (__this_00,item,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_object_Add);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__6_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee1540

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__6_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *item;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      item = __a->m_Items[0];
      if (Il2CppMethodInitialized_18434520c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_object_Remove);
        Il2CppMethodInitialized_18434520c = '\x01';
      }
      __this_00 = (__c->fields).Set;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Remove
                  (__this_00,item,
                   (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_object_Remove);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Union>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Union_b__7_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2450

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Union_b__7_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_HashSet_object__o *__this_00;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434522b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434522b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_18434520d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_object_UnionWith);
        Il2CppMethodInitialized_18434520d = '\x01';
      }
      if ((pCVar1 != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet_object___UnionWith
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(pCVar1->fields).Set,
                   (MethodInfo_176B920 *)MethodInfo_System_Collections_Generic_HashSet_object_UnionWith);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Intersect>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Intersect_b__8_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edfbd0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Intersect_b__8_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_HashSet_object__o *__this_00;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434522c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434522c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_18434520e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_object_IntersectWith);
        Il2CppMethodInitialized_18434520e = '\x01';
      }
      if ((pCVar1 != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet_object___IntersectWith
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(pCVar1->fields).Set,
                   (MethodInfo_175FCB0 *)MethodInfo_System_Collections_Generic_HashSet_object_IntersectWith);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Difference>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Difference_b__9_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edf160

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Difference_b__9_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_HashSet_object__o *__this_00;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434522d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434522d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_18434520f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_object_ExceptWith);
        Il2CppMethodInitialized_18434520f = '\x01';
      }
      if ((pCVar1 != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        System_Collections_Generic_HashSet_object___ExceptWith
                  (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(pCVar1->fields).Set,
                   (MethodInfo_175B8F0 *)MethodInfo_System_Collections_Generic_HashSet_object_ExceptWith);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsSubsetOf>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSubsetOf_b__10_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edff30

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSubsetOf_b__10_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_18434522e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434522e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345210 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_object_IsSubsetOf);
        Il2CppMethodInitialized_184345210 = '\x01';
      }
      if ((pCVar1 != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        local_res18[0] =
             System_Collections_Generic_HashSet_object___IsSubsetOf
                       (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(pCVar1->fields).Set,
                        (MethodInfo_1762A50 *)MethodInfo_System_Collections_Generic_HashSet_object_IsSubsetOf)
        ;
        pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsSupersetOf>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSupersetOf_b__11_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee0020

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSupersetOf_b__11_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_18434522f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434522f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345211 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_object_IsSupersetOf);
        Il2CppMethodInitialized_184345211 = '\x01';
      }
      if ((pCVar1 != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        local_res18[0] =
             System_Collections_Generic_HashSet_object___IsSupersetOf
                       (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(pCVar1->fields).Set,
                        (MethodInfo_1762F90 *)
                        MethodInfo_System_Collections_Generic_HashSet_object_IsSupersetOf);
        pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsProperSubsetOf>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSubsetOf_b__12_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edfd50

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSubsetOf_b__12_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_184345230 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345230 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345212 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_object_IsProperSubsetOf);
        Il2CppMethodInitialized_184345212 = '\x01';
      }
      if ((pCVar1 != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        local_res18[0] =
             System_Collections_Generic_HashSet_object___IsProperSubsetOf
                       (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(pCVar1->fields).Set,
                        (MethodInfo_1760DE0 *)
                        MethodInfo_System_Collections_Generic_HashSet_object_IsProperSubsetOf);
        pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsProperSupersetOf>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSupersetOf_b__13_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edfe40

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSupersetOf_b__13_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_184345231 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345231 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345213 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_object_IsProperSupersetOf);
        Il2CppMethodInitialized_184345213 = '\x01';
      }
      if ((pCVar1 != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        local_res18[0] =
             System_Collections_Generic_HashSet_object___IsProperSupersetOf
                       (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(pCVar1->fields).Set,
                        (MethodInfo_1761AA0 *)
                        MethodInfo_System_Collections_Generic_HashSet_object_IsProperSupersetOf);
        pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Overlaps>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Overlaps_b__14_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee0f60

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Overlaps_b__14_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_184345232 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345232 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345214 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_object_Overlaps);
        Il2CppMethodInitialized_184345214 = '\x01';
      }
      if ((pCVar1 != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        local_res18[0] =
             System_Collections_Generic_HashSet_object___Overlaps
                       (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(pCVar1->fields).Set,
                        (MethodInfo_1765E30 *)MethodInfo_System_Collections_Generic_HashSet_object_Overlaps);
        pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetEquals>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__SetEquals_b__15_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee18e0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__SetEquals_b__15_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_184345233 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345233 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345215 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_object_SetEquals);
        Il2CppMethodInitialized_184345215 = '\x01';
      }
      if ((pCVar1 != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
         (__this_00 = (__c->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
        local_res18[0] =
             System_Collections_Generic_HashSet_object___SetEquals
                       (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(pCVar1->fields).Set,
                        (MethodInfo_1767C40 *)MethodInfo_System_Collections_Generic_HashSet_object_SetEquals);
        pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToList>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__ToList_b__16_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2410

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__ToList_b__16_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicSetBuiltin__ToList(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSetBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ebc4f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSetBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Func_CustomLogicSetBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_01;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_02;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_03;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicSetBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184345219 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"IsProperSubsetOf");
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Count");
    il2cpp_codegen_initialize_runtime_metadata(&"Difference");
    il2cpp_codegen_initialize_runtime_metadata(&"Union");
    il2cpp_codegen_initialize_runtime_metadata(&"ToList");
    il2cpp_codegen_initialize_runtime_metadata(&"Overlaps");
    il2cpp_codegen_initialize_runtime_metadata(&"IsProperSupersetOf");
    il2cpp_codegen_initialize_runtime_metadata(&"IsSubsetOf");
    il2cpp_codegen_initialize_runtime_metadata(&"SetEquals");
    il2cpp_codegen_initialize_runtime_metadata(&"IsSupersetOf");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"Intersect");
    Il2CppMethodInitialized_184345219 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x819a4895) {
    if (uVar3 < 0x21a5901e) {
      if (uVar3 == 0x4a57fc2) {
        bVar2 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebd6f8;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434521b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434521b = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__3_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__3_0 =
             (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__3_0;
      }
      else if (uVar3 == 0x21797cc1) {
        bVar2 = System_String__op_Equality(name,"Overlaps",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebd6f8;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345226 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Overlaps_b__14_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345226 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__14_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Overlaps_b__14_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__14_0 =
             (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__14_0;
      }
      else {
        if (uVar3 != 0x21a5901d) goto label_181ebd6f8;
        bVar2 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebd6f8;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434521e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Remove_b__6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434521e = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__6_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Remove_b__6_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__6_0 =
             (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__6_0;
      }
    }
    else if (uVar3 < 0x5db8d715) {
      if (uVar3 == 0x25973e73) {
        bVar2 = System_String__op_Equality(name,"IsProperSupersetOf",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebd6f8;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345225 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSupersetOf_b__13_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345225 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__13_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSupersetOf_b__13_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__13_0 =
             (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__13_0;
      }
      else {
        if (uVar3 != 0x5db8d714) goto label_181ebd6f8;
        bVar2 = System_String__op_Equality(name,"IsProperSubsetOf",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebd6f8;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345224 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSubsetOf_b__12_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345224 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__12_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSubsetOf_b__12_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__12_0 =
             (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__12_0;
      }
    }
    else if (uVar3 == 0x669c4958) {
      bVar2 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebd6f8;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434521c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Contains_b__4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434521c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__4_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Contains_b__4_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__4_0 =
           (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__4_0;
    }
    else {
      if (uVar3 != 0x819a4894) goto label_181ebd6f8;
      bVar2 = System_String__op_Equality(name,"Union",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebd6f8;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434521f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Union_b__7_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434521f = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__7_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Union_b__7_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__7_0 =
           (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__7_0;
    }
  }
  else if (uVar3 < 0x9dc3aa15) {
    if (uVar3 < 0x8c99c7e7) {
      if (uVar3 == 0x81a75162) {
        bVar2 = System_String__op_Equality(name,"Difference",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebd6f8;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345221 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Difference_b__9_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345221 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__9_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Difference_b__9_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__9_0 =
             (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__9_0;
      }
      else {
        if (uVar3 != 0x8c99c7e6) goto label_181ebd6f8;
        bVar2 = System_String__op_Equality(name,"IsSubsetOf",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebd6f8;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345222 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSubsetOf_b__10_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345222 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__10_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSubsetOf_b__10_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__10_0 =
             (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__10_0;
      }
    }
    else if (uVar3 == 0x91bde06d) {
      bVar2 = System_String__op_Equality(name,"IsSupersetOf",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebd6f8;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345223 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSupersetOf_b__11_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345223 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__11_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSupersetOf_b__11_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__11_0 =
           (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__11_0;
    }
    else {
      if (uVar3 != 0x9dc3aa14) goto label_181ebd6f8;
      bVar2 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebd6f8;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434521d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Add_b__5_0)
        ;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434521d = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__5_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Add_b__5_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__5_0 =
           (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__5_0;
    }
  }
  else if (uVar3 < 0xcf21bf87) {
    if (uVar3 == 0xba01b30c) {
      bVar2 = System_String__op_Equality(name,"ToList",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebd6f8;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345228 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__ToList_b__16_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345228 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__16_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__ToList_b__16_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__16_0 =
           (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__16_0;
    }
    else {
      if (uVar3 != 0xcf21bf86) goto label_181ebd6f8;
      bVar2 = System_String__op_Equality(name,"Intersect",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebd6f8;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345220 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Intersect_b__8_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345220 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__8_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Intersect_b__8_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__8_0 =
           (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__8_0;
    }
  }
  else {
    if (uVar3 == 0xe1e7b894) {
      bVar2 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434521a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSetBuiltin_object);
          Il2CppMethodInitialized_18434521a = '\x01';
        }
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                   (System_Action_T__object__o *)0x0,
                   (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)__this_00;
      }
label_181ebd6f8:
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSetBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_03 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_03,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,lastManagedFrame);
    }
    if (uVar3 != 0xedda3dae) goto label_181ebd6f8;
    bVar2 = System_String__op_Equality(name,"SetEquals",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ebd6f8;
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184345227 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__SetEquals_b__15_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      Il2CppMethodInitialized_184345227 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__15_0;
    if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebd6c4;
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this_01,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__SetEquals_b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this_01;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__15_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this_01);
label_181ebd6c4:
  __this_02 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_02,(System_String_o *)__this_01,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_02;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x181eca920

CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_CustomLogicSetBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434521a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSetBuiltin_object);
    Il2CppMethodInitialized_18434521a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x181ec4ef0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434521b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434521b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x181ec5010

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434521c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Contains_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434521c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Contains_b__4_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Add
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Add (const MethodInfo* method);
// 0x181ec45f0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Add(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434521d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Add_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434521d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Add_b__5_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x181ec78a0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434521e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Remove_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434521e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Remove_b__6_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Union
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Union (const MethodInfo* method);
// 0x181ec8bc0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Union(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434521f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Union_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434521f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Union_b__7_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Intersect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Intersect (const MethodInfo* method);
// 0x181ec5fe0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Intersect(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345220 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Intersect_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345220 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Intersect_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Difference
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Difference (const MethodInfo* method);
// 0x181ec54a0

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Difference(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345221 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Difference_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345221 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Difference_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsSubsetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSubsetOf (const MethodInfo* method);
// 0x181ec6460

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSubsetOf(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345222 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSubsetOf_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345222 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSubsetOf_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsSupersetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSupersetOf (const MethodInfo* method);
// 0x181ec6580

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSupersetOf(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345223 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSupersetOf_b__11_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345223 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSupersetOf_b__11_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsProperSubsetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSubsetOf (const MethodInfo* method);
// 0x181ec6220

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSubsetOf(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345224 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSubsetOf_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345224 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSubsetOf_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsProperSupersetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSupersetOf (const MethodInfo* method);
// 0x181ec6340

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSupersetOf(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345225 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSupersetOf_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345225 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSupersetOf_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Overlaps
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Overlaps (const MethodInfo* method);
// 0x181ec7300

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Overlaps(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345226 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Overlaps_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345226 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Overlaps_b__14_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__SetEquals
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__SetEquals (const MethodInfo* method);
// 0x181ec7d20

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__SetEquals(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345227 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__SetEquals_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345227 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__SetEquals_b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__ToList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__ToList (const MethodInfo* method);
// 0x181ec8980

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__ToList(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345228 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__ToList_b__16_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345228 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__ToList_b__16_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicSetBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181ecc970

void CustomLogic_CustomLogicSetBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345229 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"IsProperSubsetOf");
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Count");
    il2cpp_codegen_initialize_runtime_metadata(&"Difference");
    il2cpp_codegen_initialize_runtime_metadata(&"Union");
    il2cpp_codegen_initialize_runtime_metadata(&"ToList");
    il2cpp_codegen_initialize_runtime_metadata(&"Overlaps");
    il2cpp_codegen_initialize_runtime_metadata(&"IsProperSupersetOf");
    il2cpp_codegen_initialize_runtime_metadata(&"IsSubsetOf");
    il2cpp_codegen_initialize_runtime_metadata(&"SetEquals");
    il2cpp_codegen_initialize_runtime_metadata(&"IsSupersetOf");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"Intersect");
    Il2CppMethodInitialized_184345229 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Count",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clear",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Contains",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Add",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Remove",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Union",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Intersect",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Difference",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsSubsetOf",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsSupersetOf",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsProperSubsetOf",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsProperSupersetOf",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Overlaps",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetEquals",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToList",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicSetBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3a10

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0
          (CustomLogic_CustomLogicSetBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345208 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_object_get_Count);
      Il2CppMethodInitialized_184345208 = '\x01';
    }
    pSVar1 = (__i->fields).Set;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      local_res8[0] = (pSVar1->fields)._count;
      pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin___ctor (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x181ed37e0

void CustomLogic_CustomLogicSetBuiltin___ctor(CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_184345206 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_object);
    Il2CppMethodInitialized_184345206 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_object);
  System_Collections_Generic_HashSet_object____ctor
            (__this_00,(MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_object_ctor);
  (__this->fields).Set = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Set,__this_00);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin___ctor (CustomLogic_CustomLogicSetBuiltin_o* __this, System_Object_array* parameterValues, const MethodInfo* method);
// 0x181ed3880

void CustomLogic_CustomLogicSetBuiltin___ctor_1ed3880
               (CustomLogic_CustomLogicSetBuiltin_o *__this,System_Object_array *parameterValues,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184345207 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_object);
    Il2CppMethodInitialized_184345207 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_object);
  System_Collections_Generic_HashSet_object____ctor
            (pSVar1,(MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_object_ctor);
  (__this->fields).Set = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Set,pSVar1);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (parameterValues != (System_Object_array *)0x0) {
    uVar2 = 0;
    while( true ) {
      if ((int)parameterValues->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)parameterValues->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      pSVar1 = (__this->fields).Set;
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
      System_Collections_Generic_HashSet_object___Add
                (pSVar1,parameterValues->m_Items[(int)uVar2],
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_object_Add);
      uVar2 = uVar2 + 1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicSetBuiltin__get_Count (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x181ed39b0

int32_t CustomLogic_CustomLogicSetBuiltin__get_Count
                  (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  
  if (Il2CppMethodInitialized_184345208 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_get_Count);
    Il2CppMethodInitialized_184345208 = '\x01';
  }
  pSVar1 = (__this->fields).Set;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    return (pSVar1->fields)._count;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Clear (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x181ed3220

void CustomLogic_CustomLogicSetBuiltin__Clear(CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_00;
  
  if (Il2CppMethodInitialized_184345209 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Clear);
    Il2CppMethodInitialized_184345209 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields).Set;
  if (__this_00 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
    System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
              (__this_00,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_object_Clear);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__Contains (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x181ed3270

bool CustomLogic_CustomLogicSetBuiltin__Contains
               (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434520a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Contains)
    ;
    Il2CppMethodInitialized_18434520a = '\x01';
  }
  __this_00 = (__this->fields).Set;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this_00,value,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_object_Contains);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$Add
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Add (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x181ed31c0

void CustomLogic_CustomLogicSetBuiltin__Add
               (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_18434520b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Add);
    Il2CppMethodInitialized_18434520b = '\x01';
  }
  __this_00 = (__this->fields).Set;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              (__this_00,value,(MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_object_Add)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Remove (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x181ed3570

void CustomLogic_CustomLogicSetBuiltin__Remove
               (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_18434520c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Remove);
    Il2CppMethodInitialized_18434520c = '\x01';
  }
  __this_00 = (__this->fields).Set;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Remove
              (__this_00,value,
               (MethodInfo_1766930 *)MethodInfo_System_Collections_Generic_HashSet_object_Remove);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$Union
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Union (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x181ed3780

void CustomLogic_CustomLogicSetBuiltin__Union
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_18434520d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_UnionWith);
    Il2CppMethodInitialized_18434520d = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___UnionWith
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
               (MethodInfo_176B920 *)MethodInfo_System_Collections_Generic_HashSet_object_UnionWith);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$Intersect
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Intersect (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x181ed3330

void CustomLogic_CustomLogicSetBuiltin__Intersect
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_18434520e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_IntersectWith);
    Il2CppMethodInitialized_18434520e = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___IntersectWith
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
               (MethodInfo_175FCB0 *)MethodInfo_System_Collections_Generic_HashSet_object_IntersectWith);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$Difference
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Difference (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x181ed32d0

void CustomLogic_CustomLogicSetBuiltin__Difference
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_18434520f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_ExceptWith);
    Il2CppMethodInitialized_18434520f = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet_object___ExceptWith
              (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
               (MethodInfo_175B8F0 *)MethodInfo_System_Collections_Generic_HashSet_object_ExceptWith);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$IsSubsetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsSubsetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x181ed3450

bool CustomLogic_CustomLogicSetBuiltin__IsSubsetOf
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345210 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_IsSubsetOf);
    Il2CppMethodInitialized_184345210 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet_object___IsSubsetOf
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       (MethodInfo_1762A50 *)MethodInfo_System_Collections_Generic_HashSet_object_IsSubsetOf);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$IsSupersetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsSupersetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x181ed34b0

bool CustomLogic_CustomLogicSetBuiltin__IsSupersetOf
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345211 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_IsSupersetOf);
    Il2CppMethodInitialized_184345211 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet_object___IsSupersetOf
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       (MethodInfo_1762F90 *)MethodInfo_System_Collections_Generic_HashSet_object_IsSupersetOf
                      );
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$IsProperSubsetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsProperSubsetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x181ed3390

bool CustomLogic_CustomLogicSetBuiltin__IsProperSubsetOf
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345212 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_IsProperSubsetOf);
    Il2CppMethodInitialized_184345212 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       (MethodInfo_1760DE0 *)
                       MethodInfo_System_Collections_Generic_HashSet_object_IsProperSubsetOf);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$IsProperSupersetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsProperSupersetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x181ed33f0

bool CustomLogic_CustomLogicSetBuiltin__IsProperSupersetOf
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345213 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_IsProperSupersetOf);
    Il2CppMethodInitialized_184345213 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       (MethodInfo_1761AA0 *)
                       MethodInfo_System_Collections_Generic_HashSet_object_IsProperSupersetOf);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$Overlaps
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__Overlaps (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x181ed3510

bool CustomLogic_CustomLogicSetBuiltin__Overlaps
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345214 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Overlaps)
    ;
    Il2CppMethodInitialized_184345214 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet_object___Overlaps
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       (MethodInfo_1765E30 *)MethodInfo_System_Collections_Generic_HashSet_object_Overlaps);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$SetEquals
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__SetEquals (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x181ed35d0

bool CustomLogic_CustomLogicSetBuiltin__SetEquals
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184345215 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_SetEquals);
    Il2CppMethodInitialized_184345215 = '\x01';
  }
  if ((set != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Set, __this_00 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    bVar1 = System_Collections_Generic_HashSet_object___SetEquals
                      (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                       (MethodInfo_1767C40 *)MethodInfo_System_Collections_Generic_HashSet_object_SetEquals);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$ToList
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicSetBuiltin__ToList (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x181ed3630
// eh: try 0x181ed3700..0x181ed3777 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ed36fd: nop dword ptr [rax]
// asm:   0x181ed373d: mov rdx, qword ptr [rip + 0x21bb4a4]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_Dispose
// asm:   0x181ed3744: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181ed3749: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ed374e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181ed3753: test rcx, rcx
// asm:   0x181ed3756: jne 0x181ed3777
// asm:   0x181ed3758: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x181ed3777: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicSetBuiltin__ToList(CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  bool bVar1;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_HashSet_Enumerator_T__o local_28;
  
  if (Il2CppMethodInitialized_184345216 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_GetEnumerator);
    Il2CppMethodInitialized_184345216 = '\x01';
  }
  local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields).Set;
  if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_object_GetEnumerator);
    local_28.fields._set = (System_Collections_Generic_HashSet_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_Dispose);
        return __this_01;
      }
      if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) break;
      CustomLogic_CustomLogicListBuiltin__Add(__this_01,local_28.fields._current,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSetBuiltin__get_ClassName (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x181ed3980

System_String_o *
CustomLogic_CustomLogicSetBuiltin__get_ClassName
          (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345217 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    Il2CppMethodInitialized_184345217 = '\x01';
  }
  return "Set";
}


// CustomLogic.CustomLogicSetBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_IsAbstract (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicSetBuiltin__get_IsAbstract(CustomLogic_CustomLogicSetBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicSetBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_IsStatic (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicSetBuiltin__get_IsStatic(CustomLogic_CustomLogicSetBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicSetBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicSetBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicSetBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


