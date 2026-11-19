// Type: CustomLogic.CustomLogicListBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicListBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicListBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicListBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59b2180

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  il2cpp_array_size_t iVar1;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545b47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    Il2CppMethodInitialized_07545b47 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = args->max_length;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  if (iVar1 == 0) {
    CustomLogic_CustomLogicListBuiltin___ctor(__this,method);
  }
  else {
    CustomLogic_CustomLogicListBuiltin___ctor_58b0e70(__this,args,method_00);
  }
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x59b4070

void CustomLogic_CustomLogicListBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545b5b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b5b = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59b40e0

void CustomLogic_CustomLogicListBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b40f0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicListBuiltin__Clear(__c,(MethodInfo *)__c);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b4110
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b41be: jmp 0x59b41e1

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  int32_t index;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07545b5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b5c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar1,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int)
    ;
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07545b36 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_object_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_object_get_Item);
        Il2CppMethodInitialized_07545b36 = '\x01';
      }
      __this_00 = (__c->fields).List;
      if (index < 0) {
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          index = index + (__this_00->fields)._size;
          goto label_059b41ca;
        }
      }
      else if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
label_059b41ca:
        pIVar1 = System_Collections_Generic_List_object___get_Item
                           (__this_00,index,
                            (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b41f0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  
  if (Il2CppMethodInitialized_07545b5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b5d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059b4280:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        CustomLogic_CustomLogicListBuiltin__Set(__c,index,__a->m_Items[1],method);
        return (Il2CppObject *)0x0;
      }
      goto label_059b4280;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Add_b__6_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b4290

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Add_b__6_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      CustomLogic_CustomLogicListBuiltin__Add(__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__InsertAt>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__InsertAt_b__7_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b42c0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__InsertAt_b__7_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  
  if (Il2CppMethodInitialized_07545b5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b5e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059b4350:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        CustomLogic_CustomLogicListBuiltin__InsertAt(__c,index,__a->m_Items[1],method);
        return (Il2CppObject *)0x0;
      }
      goto label_059b4350;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveAt>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__RemoveAt_b__8_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b4360

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__RemoveAt_b__8_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545b5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b5f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      CustomLogic_CustomLogicListBuiltin__RemoveAt(__c,index,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__9_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b43f0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__9_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      CustomLogic_CustomLogicListBuiltin__Remove(__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__10_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b4420

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__10_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar1 = CustomLogic_CustomLogicListBuiltin__Contains(__c,__a->m_Items[0],(MethodInfo *)__a);
      uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sort>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Sort_b__11_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b4470

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Sort_b__11_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  if (__c == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicListBuiltin__Sort(__c,(MethodInfo *)__c);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__SortCustom>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__SortCustom_b__12_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b4490

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__SortCustom_b__12_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *method_00;
  MethodInfo *methodInfo;
  
  if (Il2CppMethodInitialized_07545b60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b60 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom(__c,method_00,methodInfo);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Filter>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Filter_b__13_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b4520

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Filter_b__13_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *method_00;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  MethodInfo *methodInfo;
  
  if (Il2CppMethodInitialized_07545b61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b61 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicListBuiltin__Filter(__c,method_00,methodInfo);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Map>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Map_b__14_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b45b0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Map_b__14_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_UserMethod_o *method_00;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  MethodInfo *methodInfo;
  
  if (Il2CppMethodInitialized_07545b62 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b62 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicListBuiltin__Map(__c,method_00,methodInfo);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reduce>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Reduce_b__15_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b4640

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Reduce_b__15_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_UserMethod_o *method_00;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07545b63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545b63 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059b46ce:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if ((__a->max_length & 0xfffffffe) != 0) {
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        pIVar1 = CustomLogic_CustomLogicListBuiltin__Reduce(__c,method_00,__a->m_Items[1],method);
        return pIVar1;
      }
      goto label_059b46ce;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Randomize>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Randomize_b__16_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b46e0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Randomize_b__16_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicListBuiltin__Randomize(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToSet>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__ToSet_b__17_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b4700

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__ToSet_b__17_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicListBuiltin__ToSet(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Copy>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Copy_b__18_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59b4720

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Copy_b__18_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicListBuiltin__Copy(__c,(MethodInfo *)__c);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicListBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59b21f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicListBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicListBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545b48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"Filter");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Count");
    il2cpp_codegen_initialize_runtime_metadata(&"Sort");
    il2cpp_codegen_initialize_runtime_metadata(&"Randomize");
    il2cpp_codegen_initialize_runtime_metadata(&"SortCustom");
    il2cpp_codegen_initialize_runtime_metadata(&"Reduce");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"InsertAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    il2cpp_codegen_initialize_runtime_metadata(&"ToSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    Il2CppMethodInitialized_07545b48 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x658f3665) {
    if (uVar2 < 0x28b19ea4) {
      if (uVar2 < 0xbd14ccd) {
        if (uVar2 == 0x4a57fc2) {
          bVar1 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Clear
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xbd14ccc) {
          bVar1 = System_String__op_Equality(name,"ToSet",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__ToSet
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x21a5901d) {
        bVar1 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Remove
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x28b19ea3) {
        bVar1 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Set
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x486bbbe1) {
      if (uVar2 == 0x44a7f051) {
        bVar1 = System_String__op_Equality(name,"Map",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Map
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x486bbbe0) {
        bVar1 = System_String__op_Equality(name,"RemoveAt",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__RemoveAt
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x4b0b408d) {
      bVar1 = System_String__op_Equality(name,"InsertAt",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__InsertAt
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x658f3664) {
      bVar1 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Copy
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x9dc3aa15) {
    if (uVar2 < 0x8459a7f2) {
      if (uVar2 == 0x8459a7f1) {
        bVar1 = System_String__op_Equality(name,"Sort",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Sort
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x669c4958) {
        bVar1 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Contains
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x9450dd5c) {
      bVar1 = System_String__op_Equality(name,"Randomize",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Randomize
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x9dc3aa14) {
      bVar1 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Add((MethodInfo *)pCVar6)
        ;
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xb6973ef8) {
    if (uVar2 == 0xa42c4e6a) {
      bVar1 = System_String__op_Equality(name,"SortCustom",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__SortCustom
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xb6973ef7) {
      bVar1 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Get((MethodInfo *)pCVar6)
        ;
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xbd680907) {
    bVar1 = System_String__op_Equality(name,"Reduce",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings)
        ;
      }
      pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Reduce
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf4a9c097) {
    bVar1 = System_String__op_Equality(name,"Filter",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings)
        ;
      }
      pCVar3 = CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Filter
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xe1e7b894) {
    bVar1 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings)
        ;
      }
      pCVar4 = CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicListBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x59b2890

CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_CustomLogicListBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicListBuiltin_object);
    Il2CppMethodInitialized_07545b49 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x59b2930
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b2965: jmp 0x59b29d5

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b4a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x59b2a70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b2aa5: jmp 0x59b2b15

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b4b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x59b2bb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b2be5: jmp 0x59b2c55

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b4c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Add
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Add (const MethodInfo* method);
// 0x59b2cf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b2d25: jmp 0x59b2d95

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Add(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Add_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b4d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Add_b__6_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__InsertAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__InsertAt (const MethodInfo* method);
// 0x59b2e30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b2e65: jmp 0x59b2ed5

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__InsertAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b4e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__InsertAt_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b4e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__InsertAt_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__RemoveAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__RemoveAt (const MethodInfo* method);
// 0x59b2f70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b2fa5: jmp 0x59b3015

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__RemoveAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b4f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__RemoveAt_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b4f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__RemoveAt_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x59b30b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b30e5: jmp 0x59b3155

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b50 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Remove_b__9_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b50 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Remove_b__9_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x59b31f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b3225: jmp 0x59b3295

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b51 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Contains_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b51 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Contains_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Sort
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Sort (const MethodInfo* method);
// 0x59b3330
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b3365: jmp 0x59b33d5

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Sort(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b52 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Sort_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b52 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Sort_b__11_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__SortCustom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__SortCustom (const MethodInfo* method);
// 0x59b3470
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b34a5: jmp 0x59b3515

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__SortCustom(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b53 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__SortCustom_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b53 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__SortCustom_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Filter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Filter (const MethodInfo* method);
// 0x59b35b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b35e5: jmp 0x59b3655

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Filter(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b54 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Filter_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b54 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Filter_b__13_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Map
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Map (const MethodInfo* method);
// 0x59b36f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b3725: jmp 0x59b3795

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Map(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b55 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Map_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b55 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Map_b__14_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Reduce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Reduce (const MethodInfo* method);
// 0x59b3830
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b3865: jmp 0x59b38d5

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Reduce(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Reduce_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b56 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Reduce_b__15_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Randomize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Randomize (const MethodInfo* method);
// 0x59b3970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b39a5: jmp 0x59b3a15

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Randomize(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b57 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Randomize_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b57 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Randomize_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__ToSet
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__ToSet (const MethodInfo* method);
// 0x59b3ab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b3ae5: jmp 0x59b3b55

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__ToSet(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b58 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__ToSet_b__17_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b58 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__ToSet_b__17_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Copy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Copy (const MethodInfo* method);
// 0x59b3bf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b3c28: jmp 0x59b3c9b

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Copy(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicListBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicListBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Copy_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545b59 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicListBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Copy_b__18_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59b3d30

void CustomLogic_CustomLogicListBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545b5a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"Filter");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Count");
    il2cpp_codegen_initialize_runtime_metadata(&"Sort");
    il2cpp_codegen_initialize_runtime_metadata(&"Randomize");
    il2cpp_codegen_initialize_runtime_metadata(&"SortCustom");
    il2cpp_codegen_initialize_runtime_metadata(&"Reduce");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"InsertAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    il2cpp_codegen_initialize_runtime_metadata(&"ToSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    Il2CppMethodInitialized_07545b5a = '\x01';
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Get",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Add",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InsertAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Remove",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Contains",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sort",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SortCustom",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Filter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Map",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reduce",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Randomize",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToSet",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Copy",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->static_fields->MemberNames)
  ;
  return;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicListBuiltin_o* __i, const MethodInfo* method);
// 0x59b4010

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0
          (CustomLogic_CustomLogicListBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  Il2CppObject *pIVar2;
  int32_t iStack_c;
  
  if (__i != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545b34 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count)
      ;
      Il2CppMethodInitialized_07545b34 = '\x01';
    }
    pSVar1 = (__i->fields).List;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      iStack_c = (pSVar1->fields)._size;
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_c);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass14_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x59b1590

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass14_0$$<Contains>b__0
// il2cpp: bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___Contains_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x59b4740

bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___Contains_b__0
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *__this,Il2CppObject *e,
               MethodInfo *method)

{
  uint32_t uVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07545b64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07545b64 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)
                 ((long)((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager)->static_fields + 8);
  }
  if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__CheckEquals(__this_00,e,(__this->fields).value,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass16_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x59b1750

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass16_0$$<SortCustom>b__0
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___SortCustom_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x59b47d0

int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___SortCustom_b__0
                  (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *__this,Il2CppObject *a,
                  Il2CppObject *b,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  int32_t *piVar2;
  
  if (Il2CppMethodInitialized_07545b65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07545b65 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameterValues == (System_Object_array *)0x0) {
label_059b4906:
    ThrowNullReferenceException();
  }
  if (a != (Il2CppObject *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst(a,(((parameterValues->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_059b4910;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = a;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if (b != (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst(b,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
label_059b4910:
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((parameterValues->max_length & 0xfffffffe) != 0) {
      parameterValues->m_Items[1] = b;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                           (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        if (pIVar1 != (Il2CppObject *)0x0) {
          if ((pIVar1->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
            il2cpp_codegen_raise_invalid_cast_exception(pIVar1);
          }
          piVar2 = il2cpp_vm_Object_Unbox(pIVar1);
          return *piVar2;
        }
      }
      goto label_059b4906;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass17_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x59b18a0

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass17_0$$<Filter>b__0
// il2cpp: bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___Filter_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x59b4930

bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___Filter_b__0
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *__this,Il2CppObject *e,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  undefined1 *puVar2;
  
  if (Il2CppMethodInitialized_07545b66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07545b66 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameterValues != (System_Object_array *)0x0) {
    if (e != (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst(e,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = e;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                         (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      if (pIVar1 != (Il2CppObject *)0x0) {
        if ((pIVar1->klass->_1).element_class != *(Il2CppClass **)(g_data_075566f0 + 0x40)) {
          il2cpp_codegen_raise_invalid_cast_exception(pIVar1);
        }
        puVar2 = il2cpp_vm_Object_Unbox(pIVar1);
        return (bool)*puVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass18_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x59b19f0

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass18_0$$<Map>b__0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___Map_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x59b4a50

Il2CppObject *
CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___Map_b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *__this,Il2CppObject *e,
          MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07545b67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07545b67 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameterValues != (System_Object_array *)0x0) {
    if (e != (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst(e,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = e;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                         (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass19_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x59b1ae0

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass19_0$$<Reduce>b__0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___Reduce_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o* __this, Il2CppObject* acc, Il2CppObject* e, const MethodInfo* method);
// 0x59b4b40

Il2CppObject *
CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___Reduce_b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *__this,Il2CppObject *acc,
          Il2CppObject *e,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07545b68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_07545b68 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameterValues == (System_Object_array *)0x0) {
label_059b4c4b:
    ThrowNullReferenceException();
  }
  if (acc != (Il2CppObject *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst(acc,(((parameterValues->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) goto label_059b4c50;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = acc;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if (e != (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst(e,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
label_059b4c50:
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((parameterValues->max_length & 0xfffffffe) != 0) {
      parameterValues->m_Items[1] = e;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                           (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return pIVar1;
      }
      goto label_059b4c4b;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass20_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x59b1c50

void CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass20_0$$<Randomize>b__0
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___Randomize_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o* __this, Il2CppObject* x, const MethodInfo* method);
// 0x59b4c60

int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___Randomize_b__0
                  (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *__this,Il2CppObject *x,
                  MethodInfo *method)

{
  System_Random_o *pSVar1;
  int32_t iVar2;
  
  pSVar1 = (__this->fields).r;
  if (pSVar1 == (System_Random_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(pSVar1->klass->vtable)._5_Next.methodPtr)(pSVar1,(pSVar1->klass->vtable)._5_Next.method);
  return iVar2;
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b0dd0

void CustomLogic_CustomLogicListBuiltin___ctor
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07545b31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    Il2CppMethodInitialized_07545b31 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            (__this_00,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  (__this->fields).List = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).List);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, System_Object_array* parameterValues, const MethodInfo* method);
// 0x59b0e70

void CustomLogic_CustomLogicListBuiltin___ctor_58b0e70
               (CustomLogic_CustomLogicListBuiltin_o *__this,System_Object_array *parameterValues,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o **targetAddress;
  int32_t *piVar1;
  uint uVar2;
  Il2CppObject *item;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_07545b32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    Il2CppMethodInitialized_07545b32 = '\x01';
  }
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            (pSVar5,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  targetAddress = &(__this->fields).List;
  (__this->fields).List = pSVar5;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (parameterValues == (System_Object_array *)0x0) {
label_059b0fb3:
    ThrowNullReferenceException();
  }
  if (0 < (int)parameterValues->max_length) {
    uVar6 = parameterValues->max_length & 0xffffffff;
    uVar7 = 0;
    do {
      pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
      if (uVar6 <= uVar7) {
        ThrowIndexOutOfRangeException();
      }
      pSVar5 = *targetAddress;
      if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) goto label_059b0fb3;
      item = parameterValues->m_Items[uVar7];
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar5->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) goto label_059b0fb3;
      uVar2 = (pSVar5->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar5->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar5,item,(MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      uVar7 = uVar7 + 1;
      uVar2 = (uint)parameterValues->max_length;
      uVar6 = (ulong)uVar2;
    } while ((long)uVar7 < (long)(int)uVar2);
  }
  return;
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, System_Collections_Generic_IEnumerable_object__o* enumerable, bool isReadOnly, const MethodInfo* method);
// 0x59ae130

void CustomLogic_CustomLogicListBuiltin___ctor_58ae130
               (CustomLogic_CustomLogicListBuiltin_o *__this,
               System_Collections_Generic_IEnumerable_object__o *enumerable,bool isReadOnly,MethodInfo *method
               )

{
  System_Collections_Generic_List_object__o **targetAddress;
  System_Collections_Generic_List_object__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545b33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_ctor_7195bf0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    Il2CppMethodInitialized_07545b33 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            (pSVar1,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  targetAddress = &(__this->fields).List;
  (__this->fields).List = pSVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor_395ca70
            (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)enumerable,
             (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_object_ctor_7195bf0);
  (__this->fields).List = pSVar1;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields)._isReadOnly = isReadOnly;
  return;
}


// CustomLogic.CustomLogicListBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin__get_Count (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b0fc0

int32_t CustomLogic_CustomLogicListBuiltin__get_Count
                  (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545b34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    Il2CppMethodInitialized_07545b34 = '\x01';
  }
  pSVar1 = (__this->fields).List;
  if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar1->fields)._size;
}


// CustomLogic.CustomLogicListBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Clear (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b1000

void CustomLogic_CustomLogicListBuiltin__Clear
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_object__o *pSVar2;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07545b35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Clear);
    Il2CppMethodInitialized_07545b35 = '\x01';
  }
  if ((__this->fields)._isReadOnly != false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor_54fa440(__this_00,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Clear);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  pSVar2 = (__this->fields).List;
  if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (length < 1) {
    return;
  }
  System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$Get
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin__Get (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x59b10a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b10de: jmp 0x59b1100

Il2CppObject *
CustomLogic_CustomLogicListBuiltin__Get
          (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07545b36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    Il2CppMethodInitialized_07545b36 = '\x01';
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      index = index + (__this_00->fields)._size;
      goto label_059b10e8;
    }
  }
  else if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
label_059b10e8:
    pIVar1 = System_Collections_Generic_List_object___get_Item
                       (__this_00,index,
                        (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Set (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, Il2CppObject* value, const MethodInfo* method);
// 0x59b1110
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b1157: jmp 0x59b11c0

void CustomLogic_CustomLogicListBuiltin__Set
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,Il2CppObject *value,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07545b37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_set_Item);
    Il2CppMethodInitialized_07545b37 = '\x01';
  }
  if ((__this->fields)._isReadOnly != false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Set)
    ;
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      index = index + (__this_00->fields)._size;
      goto label_059b1161;
    }
  }
  else if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
label_059b1161:
    System_Collections_Generic_List_object___set_Item
              (__this_00,index,value,
               (MethodInfo_395CF60 *)MethodInfo_System_Collections_Generic_List_object_set_Item);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Add
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Add (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x59b11d0

void CustomLogic_CustomLogicListBuiltin__Add
               (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07545b38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_07545b38 = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
  if ((__this->fields)._isReadOnly != false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
    pMVar4 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Add);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar4);
  }
  __this_00 = (__this->fields).List;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = value;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,value,(MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$InsertAt
// il2cpp: void CustomLogic_CustomLogicListBuiltin__InsertAt (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, Il2CppObject* value, const MethodInfo* method);
// 0x59b12b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b12f7: jmp 0x59b1360

void CustomLogic_CustomLogicListBuiltin__InsertAt
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,Il2CppObject *value,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07545b39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    Il2CppMethodInitialized_07545b39 = '\x01';
  }
  if ((__this->fields)._isReadOnly != false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_InsertAt);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      index = index + (__this_00->fields)._size;
      goto label_059b1301;
    }
  }
  else if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
label_059b1301:
    System_Collections_Generic_List_object___Insert
              (__this_00,index,value,
               (MethodInfo_395E3E0 *)MethodInfo_System_Collections_Generic_List_object_Insert);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$RemoveAt
// il2cpp: void CustomLogic_CustomLogicListBuiltin__RemoveAt (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x59b1370
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b13b3: jmp 0x59b141b

void CustomLogic_CustomLogicListBuiltin__RemoveAt
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07545b3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    Il2CppMethodInitialized_07545b3a = '\x01';
  }
  if ((__this->fields)._isReadOnly != false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_RemoveAt);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      index = index + (__this_00->fields)._size;
      goto label_059b13bd;
    }
  }
  else if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
label_059b13bd:
    System_Collections_Generic_List_object___RemoveAt
              (__this_00,index,
               (MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_object_RemoveAt);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Remove (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x59b1420

void CustomLogic_CustomLogicListBuiltin__Remove
               (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07545b3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Remove);
    Il2CppMethodInitialized_07545b3b = '\x01';
  }
  if ((__this->fields)._isReadOnly != false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Remove);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields).List;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___Remove
            (__this_00,value,(MethodInfo_395ED70 *)MethodInfo_System_Collections_Generic_List_object_Remove);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__Contains (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x59b14c0

bool CustomLogic_CustomLogicListBuiltin__Contains
               (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  bool bVar1;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *__this_00;
  System_Func_object__bool__o *__this_01;
  
  if (Il2CppMethodInitialized_07545b3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0_Contains_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0);
    Il2CppMethodInitialized_07545b3c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).value = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
  source = (__this->fields).List;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_bool);
  System_Func_object__bool____ctor
            (__this_01,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0_Contains_b__0,
             (MethodInfo_4F19300 *)0x0);
  bVar1 = System_Linq_Enumerable__Any_object__34dfce0
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__bool__o *)__this_01,
                     (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_object);
  return bVar1;
}


// CustomLogic.CustomLogicListBuiltin$$Sort
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Sort (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b15a0

void CustomLogic_CustomLogicListBuiltin__Sort(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07545b3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Sort);
    Il2CppMethodInitialized_07545b3d = '\x01';
  }
  if ((__this->fields)._isReadOnly != false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Sort);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields).List;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___Sort
            (__this_00,(MethodInfo_395F360 *)MethodInfo_System_Collections_Generic_List_object_Sort);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$SortCustom
// il2cpp: void CustomLogic_CustomLogicListBuiltin__SortCustom (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x59b1630

void CustomLogic_CustomLogicListBuiltin__SortCustom
               (CustomLogic_CustomLogicListBuiltin_o *__this,CustomLogic_UserMethod_o *method,
               MethodInfo *methodInfo)

{
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *__this_01;
  System_Comparison_T__o *comparison;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07545b3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_Sort_7195c58);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0_SortCustom_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0);
    Il2CppMethodInitialized_07545b3e = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *)0x0) {
    (__this_01->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).method);
    if ((__this->fields)._isReadOnly != false) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
      System_Exception___ctor_54fa440(__this_02,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_SortCustom);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
    }
    __this_00 = (__this->fields).List;
    comparison = (System_Comparison_T__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_object);
    System_Comparison_object____ctor
              ((System_Comparison_object__o *)comparison,(Il2CppObject *)__this_01,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0_SortCustom_b__0,
               (MethodInfo_48E28F0 *)0x0);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Sort_395f500
                (__this_00,comparison,
                 (MethodInfo_395F500 *)MethodInfo_System_Collections_Generic_List_object_Sort_7195c58);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Filter
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Filter (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x59b1760

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Filter
          (CustomLogic_CustomLogicListBuiltin_o *__this,CustomLogic_UserMethod_o *method,
          MethodInfo *methodInfo)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *__this_00;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Func_object__bool__o *__this_02;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545b3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0_Filter_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0);
    Il2CppMethodInitialized_07545b3f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *)0x0) {
    (__this_00->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)method);
    source = (__this->fields).List;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_bool);
    System_Func_object__bool____ctor
              (__this_02,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0_Filter_b__0,
               (MethodInfo_4F19300 *)0x0);
    source_00 = System_Linq_Enumerable__Where_object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this_02,
                           (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_object);
    pSVar1 = System_Linq_Enumerable__ToList_object_
                       (source_00,(MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_object);
    if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_01->fields).List = (System_Collections_Generic_List_object__o *)pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).List);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Map
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Map (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x59b18b0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Map
          (CustomLogic_CustomLogicListBuiltin_o *__this,CustomLogic_UserMethod_o *method,
          MethodInfo *methodInfo)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *__this_00;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Func_object__object__o *__this_02;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545b40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_object_object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0_Map_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0);
    Il2CppMethodInitialized_07545b40 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *)0x0) {
    (__this_00->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).method);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_01,(MethodInfo *)method);
    source = (__this->fields).List;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_object);
    System_Func_object__object____ctor
              (__this_02,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0_Map_b__0,
               (MethodInfo_4F19B50 *)0x0);
    source_00 = System_Linq_Enumerable__Select_object__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)__this_02,
                           (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_object_object);
    pSVar1 = System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_object);
    if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_01->fields).List = (System_Collections_Generic_List_object__o *)pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).List);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Reduce
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin__Reduce (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, Il2CppObject* initialValue, const MethodInfo* method);
// 0x59b1a00

Il2CppObject *
CustomLogic_CustomLogicListBuiltin__Reduce
          (CustomLogic_CustomLogicListBuiltin_o *__this,CustomLogic_UserMethod_o *method,
          Il2CppObject *initialValue,MethodInfo *methodInfo)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *__this_00;
  System_Func_object__object__object__o *__this_01;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07545b41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Aggregate_object_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_object_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0_Reduce_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0);
    Il2CppMethodInitialized_07545b41 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).method = method;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).method);
  source = (__this->fields).List;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_object_object);
  System_Func_object__object__object____ctor
            (__this_01,(Il2CppObject *)__this_00,
             (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0_Reduce_b__0,
             (MethodInfo_4F20F30 *)0x0);
  pIVar1 = System_Linq_Enumerable__Aggregate_object__object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,initialValue,
                      (System_Func_TAccumulate__TSource__TAccumulate__o *)__this_01,
                      (MethodInfo_34DE0A0 *)MethodInfo_System_Linq_Enumerable_Aggregate_object_object);
  return pIVar1;
}


// CustomLogic.CustomLogicListBuiltin$$Randomize
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Randomize (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b1af0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Randomize(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *__this_00;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  System_Random_o *__this_02;
  System_Func_object__int__o *__this_03;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545b42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_object_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0_Randomize_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0);
    Il2CppMethodInitialized_07545b42 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0);
  method_00 = (MethodInfo *)0x0;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,method_00);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
  System_Random___ctor(__this_02,(MethodInfo *)0x0);
  if (__this_00 != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *)0x0) {
    (__this_00->fields).r = __this_02;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).r);
    source = (__this->fields).List;
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_int);
    System_Func_object__int____ctor
              (__this_03,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0_Randomize_b__0,
               (MethodInfo_4F198F0 *)0x0);
    source_00 = System_Linq_Enumerable__OrderBy_object__int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TKey__o *)__this_03,
                           (MethodInfo_34F1DD0 *)MethodInfo_System_Linq_Enumerable_OrderBy_object_int);
    pSVar1 = System_Linq_Enumerable__ToList_object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_object);
    if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_01->fields).List = (System_Collections_Generic_List_object__o *)pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).List);
      return __this_01;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$ToSet
// il2cpp: CustomLogic_CustomLogicSetBuiltin_o* CustomLogic_CustomLogicListBuiltin__ToSet (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b1c60
// eh: try 0x59b1d43..0x59b1dae -> pad 0x59b1db6 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59b1dce..0x59b1dd3 -> pad 0x59b1df2 cleanup
// eh: try 0x59b1df5..0x59b1dff -> pad 0x59b1e07 catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b1d25: lea r14, [rip + 0x18dc8f4]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext
// asm:   0x59b1d2c: mov rbx, rsp
// asm:   0x59b1d2f: lea r12, [rip + 0x18df77a]  ; MethodInfo_System_Collections_Generic_HashSet_object_Add
// asm:   0x59b1d36: nop word ptr cs:[rax + rax]
// asm:   0x59b1dae: jmp 0x59b1db6
// asm:   0x59b1db0: jmp 0x59b1db6
// asm:   0x59b1db2: jmp 0x59b1db6
// asm:   0x59b1db4: jmp 0x59b1db6
// asm:   0x59b1db6: mov r14, rax
// asm:   0x59b1db9: cmp edx, 1
// asm:   0x59b1dbc: jne 0x59b1df5
// asm:   0x59b1dbe: mov rdi, r14
// asm:   0x59b1dc1: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x59b1dc6: mov rbx, qword ptr [rax]
// asm:   0x59b1dc9: mov qword ptr [rsp + 0x18], rbx
// asm:   0x59b1dce: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59b1dd3: lea rax, [rip + 0x18dc83e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x59b1dda: mov rsi, qword ptr [rax]
// asm:   0x59b1ddd: mov rdi, rsp
// asm:   0x59b1de0: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x59b1de5: test rbx, rbx
// asm:   0x59b1de8: je 0x59b1d90
// asm:   0x59b1dea: mov rdi, rbx
// asm:   0x59b1ded: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59b1df2: mov r14, rax
// asm:   0x59b1df5: lea rdi, [rsp + 0x18]
// asm:   0x59b1dfa: call 0x2fd4e20  ; il2cpp_runtime_helper_02fd4e20()
// asm:   0x59b1dff: mov rdi, r14
// asm:   0x59b1e02: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59b1e07: mov rdi, rax
// asm:   0x59b1e0a: call 0x2ab61e0  ; __clang_call_terminate()

CustomLogic_CustomLogicSetBuiltin_o *
CustomLogic_CustomLogicListBuiltin__ToSet(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o *pSVar1;
  bool bVar2;
  CustomLogic_CustomLogicSetBuiltin_o *__this_02;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_30;
  undefined1 *local_28;
  
  if (Il2CppMethodInitialized_07545b43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    Il2CppMethodInitialized_07545b43 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin);
  CustomLogic_CustomLogicSetBuiltin___ctor(__this_02,method);
  local_28 = (undefined1 *)&local_48;
  __this_00 = (__this->fields).List;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___GetEnumerator
            (&local_48,__this_00,
             (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
  local_30 = 0;
  pSVar1 = &local_48;
  if (__this_02 == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    if (bVar2) {
      ThrowNullReferenceException();
    }
  }
  else {
    while (local_28 = (undefined1 *)pSVar1,
          bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                             (MethodInfo_4C45C50 *)
                             MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext), bVar2) {
      __this_01 = (__this_02->fields).Set;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (__this_01,local_48.fields._current,
                 (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_object_Add);
      pSVar1 = (System_Collections_Generic_List_Enumerator_T__o *)local_28;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
             (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
  return __this_02;
}


// CustomLogic.CustomLogicListBuiltin$$Copy
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Copy (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b1eb0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Copy(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  
  if (Il2CppMethodInitialized_07545b44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
    Il2CppMethodInitialized_07545b44 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,method);
  pSVar1 = System_Linq_Enumerable__ToList_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).List,
                      (MethodInfo_35011B0 *)MethodInfo_System_Linq_Enumerable_ToList_object);
  if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).List = (System_Collections_Generic_List_object__o *)pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).List);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicListBuiltin__ToString (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b1f40
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b1ffa: lea r12, [rip + 0x18e3c77]  ; MethodInfo_System_Collections_Generic_List_object_get_Item
// asm:   0x59b2001: lea r13, [rip + 0x191e480]  ; ", "
// asm:   0x59b2008: lea rbp, [rip + 0x1ba46b9]
// asm:   0x59b200f: jmp 0x59b202b
// asm:   0x59b207e: jmp 0x59b2119

System_String_o *
CustomLogic_CustomLogicListBuiltin__ToString(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar1;
  Il2CppObject *value;
  int32_t index;
  System_Collections_Generic_List_object__o *pSVar2;
  
  if (Il2CppMethodInitialized_07545b45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"\"");
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    il2cpp_codegen_initialize_runtime_metadata(&"]");
    Il2CppMethodInitialized_07545b45 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    index = 0;
    System_Text_StringBuilder__Append_530ed80(__this_00,"[",(MethodInfo *)0x0);
    pSVar2 = (__this->fields).List;
    while (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
      if ((pSVar2->fields)._size <= index) {
        System_Text_StringBuilder__Append_530ed80(__this_00,"]",(MethodInfo *)0x0);
        pSVar1 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        return pSVar1;
      }
      pSVar1 = (System_String_o *)
               System_Collections_Generic_List_object___get_Item
                         (pSVar2,index,
                          (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      if ((pSVar1 == (System_String_o *)0x0) || (pSVar1->klass != g_data_07556758)) {
        pSVar2 = (__this->fields).List;
        if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) break;
        value = System_Collections_Generic_List_object___get_Item
                          (pSVar2,index,
                           (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
        System_Text_StringBuilder__Append_530f7b0(__this_00,value,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).List;
      }
      else {
        pSVar1 = System_String__Concat_5301f10
                           ("\"",pSVar1,"\"",(MethodInfo *)0x0);
        System_Text_StringBuilder__Append_530ed80(__this_00,pSVar1,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).List;
      }
      if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) break;
      if (index != (pSVar2->fields)._size + -1) {
        System_Text_StringBuilder__Append_530ed80(__this_00,", ",(MethodInfo *)0x0);
        pSVar2 = (__this->fields).List;
      }
      index = index + 1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicListBuiltin__get_ClassName (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b2120

System_String_o *
CustomLogic_CustomLogicListBuiltin__get_ClassName
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545b46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"List");
    Il2CppMethodInitialized_07545b46 = '\x01';
  }
  return "List";
}


// CustomLogic.CustomLogicListBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_IsAbstract (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b2150

bool CustomLogic_CustomLogicListBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicListBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_IsStatic (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b2160

bool CustomLogic_CustomLogicListBuiltin__get_IsStatic
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicListBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x59b2170

bool CustomLogic_CustomLogicListBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


