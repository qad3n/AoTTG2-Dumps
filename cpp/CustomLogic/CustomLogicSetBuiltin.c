// Type: CustomLogic.CustomLogicSetBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicSetBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicSetBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicSetBuiltin_o* CustomLogic_CustomLogicSetBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59ba1c0

CustomLogic_CustomLogicSetBuiltin_o *
CustomLogic_CustomLogicSetBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  il2cpp_array_size_t iVar1;
  CustomLogic_CustomLogicSetBuiltin_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545bb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin);
    Il2CppMethodInitialized_07545bb1 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = args->max_length;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin);
  if (iVar1 == 0) {
    CustomLogic_CustomLogicSetBuiltin___ctor(__this,method);
  }
  else {
    CustomLogic_CustomLogicSetBuiltin___ctor_58b9a00(__this,args,method_00);
  }
  return __this;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59d8210

void CustomLogic_CustomLogicSetBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545ca2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545ca2 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59d8280

void CustomLogic_CustomLogicSetBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d8290

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicSetBuiltin__Clear(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__4_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d82b0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__4_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar1 = CustomLogic_CustomLogicSetBuiltin__Contains(__c,__a->m_Items[0],(MethodInfo *)0x0);
      uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Add_b__5_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d8300

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Add_b__5_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSetBuiltin__Add(__c,__a->m_Items[0],(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__6_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d8330

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__6_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSetBuiltin__Remove(__c,__a->m_Items[0],(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Union>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Union_b__7_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d8360

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Union_b__7_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicSetBuiltin_o *set;
  
  if (Il2CppMethodInitialized_07545ca3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ca3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    set = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (obj,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSetBuiltin__Union(__c,set,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Intersect>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Intersect_b__8_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d8400

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Intersect_b__8_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicSetBuiltin_o *set;
  
  if (Il2CppMethodInitialized_07545ca4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ca4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    set = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (obj,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSetBuiltin__Intersect(__c,set,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Difference>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Difference_b__9_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d84a0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Difference_b__9_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicSetBuiltin_o *set;
  
  if (Il2CppMethodInitialized_07545ca5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ca5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    set = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (obj,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      CustomLogic_CustomLogicSetBuiltin__Difference(__c,set,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsSubsetOf>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSubsetOf_b__10_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d8540

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSubsetOf_b__10_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  CustomLogic_CustomLogicSetBuiltin_o *set;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545ca6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ca6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    set = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar2,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicSetBuiltin__IsSubsetOf(__c,set,(MethodInfo *)0x0);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsSupersetOf>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSupersetOf_b__11_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d85f0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsSupersetOf_b__11_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  CustomLogic_CustomLogicSetBuiltin_o *set;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545ca7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ca7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    set = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar2,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicSetBuiltin__IsSupersetOf(__c,set,(MethodInfo *)0x0);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsProperSubsetOf>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSubsetOf_b__12_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d86a0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSubsetOf_b__12_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  CustomLogic_CustomLogicSetBuiltin_o *set;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545ca8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ca8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    set = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar2,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicSetBuiltin__IsProperSubsetOf(__c,set,(MethodInfo *)0x0);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsProperSupersetOf>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSupersetOf_b__13_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d8750

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__IsProperSupersetOf_b__13_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  CustomLogic_CustomLogicSetBuiltin_o *set;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545ca9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ca9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    set = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar2,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicSetBuiltin__IsProperSupersetOf(__c,set,(MethodInfo *)0x0);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__Overlaps>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Overlaps_b__14_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d8800

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__Overlaps_b__14_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  CustomLogic_CustomLogicSetBuiltin_o *set;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545caa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545caa = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    set = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar2,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicSetBuiltin__Overlaps(__c,set,(MethodInfo *)0x0);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetEquals>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__SetEquals_b__15_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d88b0

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__SetEquals_b__15_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  CustomLogic_CustomLogicSetBuiltin_o *set;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545cab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545cab = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    set = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar2,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicSetBuiltin);
    if (__c != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
      bVar1 = CustomLogic_CustomLogicSetBuiltin__SetEquals(__c,set,(MethodInfo *)0x0);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToList>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__ToList_b__16_0 (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicSetBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59d8960

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings___c_____CreateMethodBinding__ToList_b__16_0
          (CustomLogic_CustomLogicSetBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicSetBuiltin_o *__c,
          System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicSetBuiltin__ToList(__c,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicSetBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59ba230

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicSetBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicSetBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545bb2 == '\0') {
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
    Il2CppMethodInitialized_07545bb2 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x819a4895) {
    if (uVar2 < 0x21a5901e) {
      if (uVar2 == 0x4a57fc2) {
        bVar1 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Clear
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Clear
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x21797cc1) {
        bVar1 = System_String__op_Equality(name,"Overlaps",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Overlaps
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Overlaps
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x21a5901d) {
        bVar1 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Remove
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Remove
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x5db8d715) {
      if (uVar2 == 0x25973e73) {
        bVar1 = System_String__op_Equality(name,"IsProperSupersetOf",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSupersetOf
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5db8d714) {
        bVar1 = System_String__op_Equality(name,"IsProperSubsetOf",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSubsetOf
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x819a4894) {
      bVar1 = System_String__op_Equality(name,"Union",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Union
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x669c4958) {
      bVar1 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Contains
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x9dc3aa15) {
    if (uVar2 < 0x8c99c7e7) {
      if (uVar2 == 0x81a75162) {
        bVar1 = System_String__op_Equality(name,"Difference",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Difference
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x8c99c7e6) {
        bVar1 = System_String__op_Equality(name,"IsSubsetOf",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSubsetOf
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x91bde06d) {
      bVar1 = System_String__op_Equality(name,"IsSupersetOf",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSupersetOf
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x9dc3aa14) {
      bVar1 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Add((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xcf21bf87) {
    if (uVar2 == 0xba01b30c) {
      bVar1 = System_String__op_Equality(name,"ToList",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__ToList
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xcf21bf86) {
      bVar1 = System_String__op_Equality(name,"Intersect",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Intersect
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xedda3dae) {
    bVar1 = System_String__op_Equality(name,"SetEquals",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__SetEquals
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xe1e7b894) {
    bVar1 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicSetBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x59ba850

CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_CustomLogicSetBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSetBuiltin_object);
    Il2CppMethodInitialized_07545bb3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x59ba8f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ba925: jmp 0x59ba995

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545bb4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x59baa30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59baa65: jmp 0x59baad5

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Contains_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545bb5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Contains_b__4_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Add
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Add (const MethodInfo* method);
// 0x59bab70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59baba5: jmp 0x59bac15

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Add(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Add_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545bb6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Add_b__5_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x59bacb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bace5: jmp 0x59bad55

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Remove_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545bb7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Remove_b__6_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Union
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Union (const MethodInfo* method);
// 0x59badf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bae25: jmp 0x59bae95

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Union(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Union_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545bb8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Union_b__7_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Intersect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Intersect (const MethodInfo* method);
// 0x59baf30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59baf65: jmp 0x59bafd5

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Intersect(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bb9 == '\0') {
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
    Il2CppMethodInitialized_07545bb9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Intersect_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Difference
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Difference (const MethodInfo* method);
// 0x59bb070
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bb0a5: jmp 0x59bb115

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Difference(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bba == '\0') {
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
    Il2CppMethodInitialized_07545bba = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Difference_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsSubsetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSubsetOf (const MethodInfo* method);
// 0x59bb1b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bb1e5: jmp 0x59bb255

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSubsetOf(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bbb == '\0') {
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
    Il2CppMethodInitialized_07545bbb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSubsetOf_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsSupersetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSupersetOf (const MethodInfo* method);
// 0x59bb2f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bb325: jmp 0x59bb395

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsSupersetOf(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bbc == '\0') {
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
    Il2CppMethodInitialized_07545bbc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsSupersetOf_b__11_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsProperSubsetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSubsetOf (const MethodInfo* method);
// 0x59bb430
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bb465: jmp 0x59bb4d5

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSubsetOf(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bbd == '\0') {
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
    Il2CppMethodInitialized_07545bbd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSubsetOf_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__IsProperSupersetOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSupersetOf (const MethodInfo* method);
// 0x59bb570
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bb5a5: jmp 0x59bb615

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__IsProperSupersetOf(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bbe == '\0') {
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
    Il2CppMethodInitialized_07545bbe = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__IsProperSupersetOf_b__13_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__Overlaps
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Overlaps (const MethodInfo* method);
// 0x59bb6b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bb6e5: jmp 0x59bb755

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__Overlaps(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bbf == '\0') {
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
    Il2CppMethodInitialized_07545bbf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__Overlaps_b__14_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__SetEquals
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__SetEquals (const MethodInfo* method);
// 0x59bb7f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bb825: jmp 0x59bb895

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__SetEquals(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bc0 == '\0') {
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
    Il2CppMethodInitialized_07545bc0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__SetEquals_b__15_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$__CreateMethodBinding__ToList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o* CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__ToList (const MethodInfo* method);
// 0x59bb930
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59bb965: jmp 0x59bb9d5

CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *
CustomLogic_CustomLogicSetBuiltin_Bindings____CreateMethodBinding__ToList(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicSetBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicSetBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicSetBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545bc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__ToList_b__16_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545bc1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicSetBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicSetBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c___CreateMethodBinding__ToList_b__16_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicSetBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59bba70

void CustomLogic_CustomLogicSetBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545bc2 == '\0') {
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
    Il2CppMethodInitialized_07545bc2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Count",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clear",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Contains",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Add",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Remove",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Union",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Intersect",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Difference",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsSubsetOf",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsSupersetOf",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsProperSubsetOf",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsProperSupersetOf",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Overlaps",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetEquals",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToList",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicSetBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicSetBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicSetBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicSetBuiltin_o* __i, const MethodInfo* method);
// 0x59bbd10

Il2CppObject *
CustomLogic_CustomLogicSetBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0
          (CustomLogic_CustomLogicSetBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Il2CppObject *pIVar2;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545ba1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_HashSet_object_get_Count);
      Il2CppMethodInitialized_07545ba1 = '\x01';
    }
    pSVar1 = (__i->fields).Set;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      local_c = (pSVar1->fields)._count;
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicSetBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin___ctor (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x59b1e10

void CustomLogic_CustomLogicSetBuiltin___ctor(CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_object);
    Il2CppMethodInitialized_07545b9f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_object);
  System_Collections_Generic_HashSet_object____ctor
            (__this_00,(MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_object_ctor);
  (__this->fields).Set = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Set);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicSetBuiltin___ctor (CustomLogic_CustomLogicSetBuiltin_o* __this, System_Object_array* parameterValues, const MethodInfo* method);
// 0x59b9a00

void CustomLogic_CustomLogicSetBuiltin___ctor_58b9a00
               (CustomLogic_CustomLogicSetBuiltin_o *__this,System_Object_array *parameterValues,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o **targetAddress;
  uint uVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_07545ba0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_object);
    Il2CppMethodInitialized_07545ba0 = '\x01';
  }
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_object);
  System_Collections_Generic_HashSet_object____ctor
            (pSVar2,(MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_object_ctor);
  targetAddress = &(__this->fields).Set;
  (__this->fields).Set = pSVar2;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (parameterValues == (System_Object_array *)0x0) {
label_059b9afa:
    ThrowNullReferenceException();
  }
  if (0 < (int)parameterValues->max_length) {
    uVar3 = parameterValues->max_length & 0xffffffff;
    uVar4 = 0;
    do {
      if (uVar3 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      pSVar2 = *targetAddress;
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_059b9afa;
      System_Collections_Generic_HashSet_object___Add
                (pSVar2,parameterValues->m_Items[uVar4],
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_object_Add);
      uVar4 = uVar4 + 1;
      uVar1 = (uint)parameterValues->max_length;
      uVar3 = (ulong)uVar1;
    } while ((long)uVar4 < (long)(int)uVar1);
  }
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicSetBuiltin__get_Count (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x59b9b00

int32_t CustomLogic_CustomLogicSetBuiltin__get_Count
                  (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545ba1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_get_Count);
    Il2CppMethodInitialized_07545ba1 = '\x01';
  }
  pSVar1 = (__this->fields).Set;
  if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._count;
}


// CustomLogic.CustomLogicSetBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Clear (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x59b9b40

void CustomLogic_CustomLogicSetBuiltin__Clear(CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ba2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Clear);
    Il2CppMethodInitialized_07545ba2 = '\x01';
  }
  __this_00 = (__this->fields).Set;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Clear
            (__this_00,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_object_Clear);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__Contains (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x59b9b80

bool CustomLogic_CustomLogicSetBuiltin__Contains
               (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545ba3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Contains)
    ;
    Il2CppMethodInitialized_07545ba3 = '\x01';
  }
  __this_00 = (__this->fields).Set;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___Contains
                    (__this_00,value,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_object_Contains);
  return bVar1;
}


// CustomLogic.CustomLogicSetBuiltin$$Add
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Add (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x59b9bd0

void CustomLogic_CustomLogicSetBuiltin__Add
               (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ba4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Add);
    Il2CppMethodInitialized_07545ba4 = '\x01';
  }
  __this_00 = (__this->fields).Set;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            (__this_00,value,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_object_Add);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Remove (CustomLogic_CustomLogicSetBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x59b9c20

void CustomLogic_CustomLogicSetBuiltin__Remove
               (CustomLogic_CustomLogicSetBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ba5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Remove);
    Il2CppMethodInitialized_07545ba5 = '\x01';
  }
  __this_00 = (__this->fields).Set;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Remove
            (__this_00,value,(MethodInfo_4FB39F0 *)MethodInfo_System_Collections_Generic_HashSet_object_Remove
            );
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$Union
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Union (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x59b9c70

void CustomLogic_CustomLogicSetBuiltin__Union
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ba6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_UnionWith);
    Il2CppMethodInitialized_07545ba6 = '\x01';
  }
  if ((set == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Set, __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___UnionWith
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
             (MethodInfo_4FB4470 *)MethodInfo_System_Collections_Generic_HashSet_object_UnionWith);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$Intersect
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Intersect (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x59b9cd0

void CustomLogic_CustomLogicSetBuiltin__Intersect
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ba7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_IntersectWith);
    Il2CppMethodInitialized_07545ba7 = '\x01';
  }
  if ((set == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Set, __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___IntersectWith
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
             (MethodInfo_4FB47B0 *)MethodInfo_System_Collections_Generic_HashSet_object_IntersectWith);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$Difference
// il2cpp: void CustomLogic_CustomLogicSetBuiltin__Difference (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x59b9d30

void CustomLogic_CustomLogicSetBuiltin__Difference
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ba8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_ExceptWith);
    Il2CppMethodInitialized_07545ba8 = '\x01';
  }
  if ((set == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Set, __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___ExceptWith
            (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
             (MethodInfo_4FB4A50 *)MethodInfo_System_Collections_Generic_HashSet_object_ExceptWith);
  return;
}


// CustomLogic.CustomLogicSetBuiltin$$IsSubsetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsSubsetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x59b9d90

bool CustomLogic_CustomLogicSetBuiltin__IsSubsetOf
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545ba9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_IsSubsetOf);
    Il2CppMethodInitialized_07545ba9 = '\x01';
  }
  if ((set == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Set, __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___IsSubsetOf
                    (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                     (MethodInfo_4FB5000 *)MethodInfo_System_Collections_Generic_HashSet_object_IsSubsetOf);
  return bVar1;
}


// CustomLogic.CustomLogicSetBuiltin$$IsSupersetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsSupersetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x59b9df0

bool CustomLogic_CustomLogicSetBuiltin__IsSupersetOf
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545baa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_IsSupersetOf);
    Il2CppMethodInitialized_07545baa = '\x01';
  }
  if ((set == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Set, __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___IsSupersetOf
                    (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                     (MethodInfo_4FB5490 *)MethodInfo_System_Collections_Generic_HashSet_object_IsSupersetOf);
  return bVar1;
}


// CustomLogic.CustomLogicSetBuiltin$$IsProperSubsetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsProperSubsetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x59b9e50

bool CustomLogic_CustomLogicSetBuiltin__IsProperSubsetOf
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545bab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_IsProperSubsetOf);
    Il2CppMethodInitialized_07545bab = '\x01';
  }
  if ((set == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Set, __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___IsProperSubsetOf
                    (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                     (MethodInfo_4FB51A0 *)
                     MethodInfo_System_Collections_Generic_HashSet_object_IsProperSubsetOf);
  return bVar1;
}


// CustomLogic.CustomLogicSetBuiltin$$IsProperSupersetOf
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__IsProperSupersetOf (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x59b9eb0

bool CustomLogic_CustomLogicSetBuiltin__IsProperSupersetOf
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545bac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_IsProperSupersetOf);
    Il2CppMethodInitialized_07545bac = '\x01';
  }
  if ((set == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Set, __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___IsProperSupersetOf
                    (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                     (MethodInfo_4FB56B0 *)
                     MethodInfo_System_Collections_Generic_HashSet_object_IsProperSupersetOf);
  return bVar1;
}


// CustomLogic.CustomLogicSetBuiltin$$Overlaps
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__Overlaps (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x59b9f10

bool CustomLogic_CustomLogicSetBuiltin__Overlaps
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545bad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Overlaps)
    ;
    Il2CppMethodInitialized_07545bad = '\x01';
  }
  if ((set == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Set, __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___Overlaps
                    (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                     (MethodInfo_4FB5930 *)MethodInfo_System_Collections_Generic_HashSet_object_Overlaps);
  return bVar1;
}


// CustomLogic.CustomLogicSetBuiltin$$SetEquals
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__SetEquals (CustomLogic_CustomLogicSetBuiltin_o* __this, CustomLogic_CustomLogicSetBuiltin_o* set, const MethodInfo* method);
// 0x59b9f70

bool CustomLogic_CustomLogicSetBuiltin__SetEquals
               (CustomLogic_CustomLogicSetBuiltin_o *__this,CustomLogic_CustomLogicSetBuiltin_o *set,
               MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07545bae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_SetEquals);
    Il2CppMethodInitialized_07545bae = '\x01';
  }
  if ((set == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Set, __this_00 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___SetEquals
                    (__this_00,(System_Collections_Generic_IEnumerable_T__o *)(set->fields).Set,
                     (MethodInfo_4FB5CB0 *)MethodInfo_System_Collections_Generic_HashSet_object_SetEquals);
  return bVar1;
}


// CustomLogic.CustomLogicSetBuiltin$$ToList
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicSetBuiltin__ToList (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x59b9fd0
// eh: try 0x59ba0a3..0x59ba0fd -> pad 0x59ba103 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59ba11b..0x59ba120 -> pad 0x59ba13f cleanup
// eh: try 0x59ba142..0x59ba14c -> pad 0x59ba154 catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59ba087: lea r14, [rip + 0x18d457a]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_MoveNext
// asm:   0x59ba08e: mov rbx, rsp
// asm:   0x59ba091: nop word ptr cs:[rax + rax]
// asm:   0x59ba0fd: jmp 0x59ba103
// asm:   0x59ba0ff: jmp 0x59ba103
// asm:   0x59ba101: jmp 0x59ba103
// asm:   0x59ba103: mov r14, rax
// asm:   0x59ba106: cmp edx, 1
// asm:   0x59ba109: jne 0x59ba142
// asm:   0x59ba10b: mov rdi, r14
// asm:   0x59ba10e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59ba113: mov rbx, qword ptr [rax]
// asm:   0x59ba116: mov qword ptr [rsp + 0x20], rbx
// asm:   0x59ba11b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59ba120: lea rax, [rip + 0x18d44d9]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_Dispose
// asm:   0x59ba127: mov rsi, qword ptr [rax]
// asm:   0x59ba12a: mov rdi, rsp
// asm:   0x59ba12d: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x59ba132: test rbx, rbx
// asm:   0x59ba135: je 0x59ba0e6
// asm:   0x59ba137: mov rdi, rbx
// asm:   0x59ba13a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59ba13f: mov r14, rax
// asm:   0x59ba142: lea rdi, [rsp + 0x20]
// asm:   0x59ba147: call 0x2fd4e50  ; il2cpp_runtime_helper_02fd4e50()
// asm:   0x59ba14c: mov rdi, r14
// asm:   0x59ba14f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59ba154: mov rdi, rax
// asm:   0x59ba157: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicSetBuiltin__ToList(CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o *pSVar1;
  bool bVar2;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;
  undefined8 uStack_28;
  undefined1 *puStack_20;
  
  if (Il2CppMethodInitialized_07545baf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_object_GetEnumerator);
    Il2CppMethodInitialized_07545baf = '\x01';
  }
  SStack_48.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  SStack_48.fields._index = 0;
  SStack_48.fields._version = 0;
  SStack_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,method);
  puStack_20 = (undefined1 *)&SStack_48;
  __this_00 = (__this->fields).Set;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___GetEnumerator
            (&SStack_48,__this_00,
             (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_object_GetEnumerator);
  uStack_28 = 0;
  pSVar1 = &SStack_48;
  if (__this_01 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (&SStack_48,
                       (MethodInfo_4C456D0 *)
                       MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_MoveNext);
    if (bVar2) {
      ThrowNullReferenceException();
    }
  }
  else {
    while (puStack_20 = (undefined1 *)pSVar1,
          bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (&SStack_48,
                             (MethodInfo_4C456D0 *)
                             MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_MoveNext), bVar2)
    {
      CustomLogic_CustomLogicListBuiltin__Add(__this_01,SStack_48.fields._current,method_00);
      pSVar1 = (System_Collections_Generic_HashSet_Enumerator_T__o *)puStack_20;
    }
  }
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (&SStack_48,
             (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_object_Dispose);
  return __this_01;
}


// CustomLogic.CustomLogicSetBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicSetBuiltin__get_ClassName (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x59ba160

System_String_o *
CustomLogic_CustomLogicSetBuiltin__get_ClassName
          (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545bb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    Il2CppMethodInitialized_07545bb0 = '\x01';
  }
  return "Set";
}


// CustomLogic.CustomLogicSetBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_IsAbstract (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x59ba190

bool CustomLogic_CustomLogicSetBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicSetBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_IsStatic (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x59ba1a0

bool CustomLogic_CustomLogicSetBuiltin__get_IsStatic
               (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicSetBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicSetBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicSetBuiltin_o* __this, const MethodInfo* method);
// 0x59ba1b0

bool CustomLogic_CustomLogicSetBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicSetBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


