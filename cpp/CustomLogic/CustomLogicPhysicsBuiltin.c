// Type: CustomLogic.CustomLogicPhysicsBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicPhysicsBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicPhysicsBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicPhysicsBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPhysicsBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5af40c0

CustomLogic_CustomLogicPhysicsBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546ecc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin);
    Il2CppMethodInitialized_07546ecc = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPhysicsBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin);
  if (Il2CppMethodInitialized_07546ebe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ebe = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicPhysicsBuiltin_o *)__this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5af58b0

void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546edb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546edb = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5af5920

void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPhysicsLayerMask>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__GetPhysicsLayerMask_b__2_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af5930

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__GetPhysicsLayerMask_b__2_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *layers;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  int32_t local_c;
  
  if (Il2CppMethodInitialized_07546edc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546edc = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin;
  layers = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
  local_c = CustomLogic_CustomLogicPhysicsBuiltin__GetPhysicsLayerMask(layers,method_00);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,&local_c);
  return pIVar1;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCast>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCast_b__3_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af59d0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCast_b__3_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  System_String_o *collideWith;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546edd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546edd = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_34BDE00 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[2],
                                 (MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__LineCast(start,end,collideWith,method);
        return (Il2CppObject *)pCVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCastWithMask>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCastWithMask_b__4_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af5aa0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCastWithMask_b__4_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t mask;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546ede == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ede = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_34BDE00 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        mask = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                         (__a->m_Items[2],
                          (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__LineCastWithMask(start,end,mask,method);
        return (Il2CppObject *)pCVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCastAll>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCastAll_b__5_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af5b70

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCastAll_b__5_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  System_String_o *collideWith;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546edf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546edf = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_34BDE00 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[2],
                                 (MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__LineCastAll(start,end,collideWith,method);
        return (Il2CppObject *)pCVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCast>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCast_b__6_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af5c40

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCast_b__6_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  System_String_o *collideWith;
  Il2CppObject *pIVar1;
  float radius;
  
  if (Il2CppMethodInitialized_07546ee0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ee0 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar1,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_34BDE00 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        radius = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[2],
                            (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
        ;
        if ((__a->max_length & 0xfffffffc) != 0) {
          collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[3],
                                   (MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          pIVar1 = CustomLogic_CustomLogicPhysicsBuiltin__SphereCast(start,end,radius,collideWith,method);
          return pIVar1;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCastWithMask>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCastWithMask_b__7_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af5d50

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCastWithMask_b__7_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t mask;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  Il2CppObject *pIVar1;
  float radius;
  
  if (Il2CppMethodInitialized_07546ee1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ee1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar1,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_34BDE00 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        radius = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[2],
                            (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
        ;
        if ((__a->max_length & 0xfffffffc) != 0) {
          mask = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (__a->m_Items[3],
                            (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
          pIVar1 = CustomLogic_CustomLogicPhysicsBuiltin__SphereCastWithMask(start,end,radius,mask,method);
          return pIVar1;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCastAll>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCastAll_b__8_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af5e60

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCastAll_b__8_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  System_String_o *collideWith;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  float radius;
  
  if (Il2CppMethodInitialized_07546ee2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ee2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_34BDE00 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        radius = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[2],
                            (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
        ;
        if ((__a->max_length & 0xfffffffc) != 0) {
          collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[3],
                                   (MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__SphereCastAll(start,end,radius,collideWith,method);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__BoxCast>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__BoxCast_b__9_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af5f70

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__BoxCast_b__9_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  CustomLogic_CustomLogicVector3Builtin_o *dimensions;
  CustomLogic_CustomLogicQuaternionBuiltin_o *orientation;
  System_String_o *collideWith;
  Il2CppObject *pIVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07546ee3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ee3 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar1,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_34BDE00 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        dimensions = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
        if ((__a->max_length & 0xfffffffc) != 0) {
          orientation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[3],
                                   (MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                                  );
          if (4 < (uint)__a->max_length) {
            collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    (__a->m_Items[4],
                                     (MethodInfo_34BDE00 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
            pIVar1 = CustomLogic_CustomLogicPhysicsBuiltin__BoxCast
                               (start,end,dimensions,orientation,collideWith,in_R9);
            return pIVar1;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__BoxCastAll>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__BoxCastAll_b__10_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af6090

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__BoxCastAll_b__10_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  CustomLogic_CustomLogicVector3Builtin_o *dimensions;
  CustomLogic_CustomLogicQuaternionBuiltin_o *orientation;
  System_String_o *collideWith;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07546ee4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ee4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_34BDE00 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        dimensions = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                               );
        if ((__a->max_length & 0xfffffffc) != 0) {
          orientation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[3],
                                   (MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                                  );
          if (4 < (uint)__a->max_length) {
            collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    (__a->m_Items[4],
                                     (MethodInfo_34BDE00 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
            pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__BoxCastAll
                               (start,end,dimensions,orientation,collideWith,in_R9);
            return (Il2CppObject *)pCVar1;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPoint>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__ClosestPoint_b__11_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af61b0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__ClosestPoint_b__11_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *collider;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicQuaternionBuiltin_o *rotation;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07546ee5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ee5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      collider = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin);
      if (2 < (uint)__a->max_length) {
        position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[2],
                              (MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
        ;
        if ((__a->max_length & 0xfffffffc) != 0) {
          rotation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[3],
                                (MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                               );
          pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__ClosestPoint
                             (pCVar1,collider,position,rotation,in_R8);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ComputePenetration>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__ComputePenetration_b__12_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af62c0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__ComputePenetration_b__12_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  MethodInfo *in_RAX;
  CustomLogic_CustomLogicColliderBuiltin_o *colliderA;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *rotationA;
  CustomLogic_CustomLogicColliderBuiltin_o *colliderB;
  CustomLogic_CustomLogicVector3Builtin_o *positionB;
  CustomLogic_CustomLogicQuaternionBuiltin_o *rotationB;
  
  if (Il2CppMethodInitialized_07546ee6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ee6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    colliderA = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (obj,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin
                          );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        rotationA = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[2],
                               (MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                              );
        if ((__a->max_length & 0xfffffffc) != 0) {
          colliderB = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[3],
                                 (MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin
                                );
          if (4 < (uint)__a->max_length) {
            positionB = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[4],
                                   (MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                  );
            if (5 < (uint)__a->max_length) {
              rotationB = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    (__a->m_Items[5],
                                     (MethodInfo_34BDE00 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                                    );
              pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__ComputePenetration
                                 (colliderA,pCVar1,rotationA,colliderB,positionB,rotationB,in_RAX);
              return (Il2CppObject *)pCVar1;
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__AreCollidersOverlapping>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__AreCollidersOverlapping_b__13_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5af6410

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__AreCollidersOverlapping_b__13_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicColliderBuiltin_o *colliderA;
  CustomLogic_CustomLogicVector3Builtin_o *positionA;
  CustomLogic_CustomLogicQuaternionBuiltin_o *rotationA;
  CustomLogic_CustomLogicColliderBuiltin_o *colliderB;
  CustomLogic_CustomLogicVector3Builtin_o *positionB;
  CustomLogic_CustomLogicQuaternionBuiltin_o *rotationB;
  Il2CppObject *pIVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  undefined1 uStack_31;
  
  if (Il2CppMethodInitialized_07546ee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ee7 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    colliderA = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin
                          );
    if ((__a->max_length & 0xfffffffe) != 0) {
      positionA = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[1],
                             (MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        rotationA = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[2],
                               (MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                              );
        if ((__a->max_length & 0xfffffffc) != 0) {
          colliderB = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[3],
                                 (MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin
                                );
          if (4 < (uint)__a->max_length) {
            positionB = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[4],
                                   (MethodInfo_34BDE00 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                  );
            if (5 < (uint)__a->max_length) {
              rotationB = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    (__a->m_Items[5],
                                     (MethodInfo_34BDE00 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                                    );
              uStack_31 = CustomLogic_CustomLogicPhysicsBuiltin__AreCollidersOverlapping
                                    (colliderA,positionA,rotationA,colliderB,positionB,rotationB,
                                     in_stack_ffffffffffffffb8);
              pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_31);
              return pIVar1;
            }
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5af41e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_07546ecd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"BoxCastAll");
    il2cpp_codegen_initialize_runtime_metadata(&"ClosestPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"SphereCastAll");
    il2cpp_codegen_initialize_runtime_metadata(&"AreCollidersOverlapping");
    il2cpp_codegen_initialize_runtime_metadata(&"SphereCast");
    il2cpp_codegen_initialize_runtime_metadata(&"LineCastAll");
    il2cpp_codegen_initialize_runtime_metadata(&"LineCastWithMask");
    il2cpp_codegen_initialize_runtime_metadata(&"ComputePenetration");
    il2cpp_codegen_initialize_runtime_metadata(&"BoxCast");
    il2cpp_codegen_initialize_runtime_metadata(&"LineCast");
    il2cpp_codegen_initialize_runtime_metadata(&"SphereCastWithMask");
    il2cpp_codegen_initialize_runtime_metadata(&"GetPhysicsLayerMask");
    Il2CppMethodInitialized_07546ecd = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x3ff74f8c) {
    if (uVar2 < 0x241c90a3) {
      if (uVar2 == 0x2607722) {
        bVar1 = System_String__op_Equality(name,"SphereCastAll",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastAll
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastAll
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x1ca4814b) {
        bVar1 = System_String__op_Equality(name,"LineCastAll",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastAll
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastAll
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x241c90a2) {
        bVar1 = System_String__op_Equality(name,"ClosestPoint",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ClosestPoint
                               ((MethodInfo *)pCVar5);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ClosestPoint
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x2f67c718) {
      bVar1 = System_String__op_Equality(name,"LineCastWithMask",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastWithMask
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastWithMask
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x347ce791) {
      bVar1 = System_String__op_Equality(name,"AreCollidersOverlapping",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__AreCollidersOverlapping
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__AreCollidersOverlapping
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x3ff74f8b) {
      bVar1 = System_String__op_Equality(name,"SphereCastWithMask",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastWithMask
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastWithMask
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xa5266d89) {
    if (uVar2 == 0x91aced38) {
      bVar1 = System_String__op_Equality(name,"BoxCastAll",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCastAll
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCastAll
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xa5266d88) {
      bVar1 = System_String__op_Equality(name,"LineCast",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCast
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCast
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x61cb0efd) {
      bVar1 = System_String__op_Equality(name,"GetPhysicsLayerMask",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__GetPhysicsLayerMask
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__GetPhysicsLayerMask
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xad368c07) {
    bVar1 = System_String__op_Equality(name,"SphereCast",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCast
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCast
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xe2eb52c1) {
    bVar1 = System_String__op_Equality(name,"BoxCast",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCast
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCast
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xe726f143) {
    bVar1 = System_String__op_Equality(name,"ComputePenetration",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ComputePenetration
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ComputePenetration
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPhysicsBuiltin not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__GetPhysicsLayerMask
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__GetPhysicsLayerMask (const MethodInfo* method);
// 0x5af4770
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af47a5: jmp 0x5af4815

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__GetPhysicsLayerMask(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ece == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__GetPhysicsLayerMask_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ece = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__GetPhysicsLayerMask_b__2
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCast (const MethodInfo* method);
// 0x5af48b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af48e5: jmp 0x5af4955

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCast(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ecf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCast_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ecf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCast_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCastWithMask
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastWithMask (const MethodInfo* method);
// 0x5af49f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af4a25: jmp 0x5af4a95

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastWithMask(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ed0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCastWithMask_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ed0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCastWithMask_b__4_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCastAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastAll (const MethodInfo* method);
// 0x5af4b30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af4b65: jmp 0x5af4bd5

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ed1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCastAll_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ed1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCastAll_b__5_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCast (const MethodInfo* method);
// 0x5af4c70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af4ca5: jmp 0x5af4d15

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCast(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ed2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCast_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ed2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCast_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCastWithMask
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastWithMask (const MethodInfo* method);
// 0x5af4db0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af4de5: jmp 0x5af4e55

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastWithMask(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ed3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCastWithMask_b__7
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ed3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCastWithMask_b__7
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCastAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastAll (const MethodInfo* method);
// 0x5af4ef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af4f25: jmp 0x5af4f95

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ed4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCastAll_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ed4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCastAll_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__BoxCast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCast (const MethodInfo* method);
// 0x5af5030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af5065: jmp 0x5af50d5

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCast(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ed5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__BoxCast_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ed5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__BoxCast_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__BoxCastAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCastAll (const MethodInfo* method);
// 0x5af5170
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af51a5: jmp 0x5af5215

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCastAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ed6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__BoxCastAll_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ed6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__BoxCastAll_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__ClosestPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ClosestPoint (const MethodInfo* method);
// 0x5af52b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af52e5: jmp 0x5af5355

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ClosestPoint(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ed7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__11_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ed7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__11_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__ComputePenetration
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ComputePenetration (const MethodInfo* method);
// 0x5af53f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af5425: jmp 0x5af5495

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ComputePenetration(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ed8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__ComputePenetration_b__12
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ed8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__ComputePenetration_b__12
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__AreCollidersOverlapping
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__AreCollidersOverlapping (const MethodInfo* method);
// 0x5af5530
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af5565: jmp 0x5af55d5

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__AreCollidersOverlapping
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546ed9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__AreCollidersOverlapping
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546ed9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__AreCollidersOverlapping
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5af5670

void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546eda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"BoxCastAll");
    il2cpp_codegen_initialize_runtime_metadata(&"ClosestPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"SphereCastAll");
    il2cpp_codegen_initialize_runtime_metadata(&"AreCollidersOverlapping");
    il2cpp_codegen_initialize_runtime_metadata(&"SphereCast");
    il2cpp_codegen_initialize_runtime_metadata(&"LineCastAll");
    il2cpp_codegen_initialize_runtime_metadata(&"LineCastWithMask");
    il2cpp_codegen_initialize_runtime_metadata(&"ComputePenetration");
    il2cpp_codegen_initialize_runtime_metadata(&"BoxCast");
    il2cpp_codegen_initialize_runtime_metadata(&"LineCast");
    il2cpp_codegen_initialize_runtime_metadata(&"SphereCastWithMask");
    il2cpp_codegen_initialize_runtime_metadata(&"GetPhysicsLayerMask");
    Il2CppMethodInitialized_07546eda = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetPhysicsLayerMask",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LineCast",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LineCastWithMask",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LineCastAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SphereCast",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SphereCastWithMask",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SphereCastAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BoxCast",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BoxCastAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClosestPoint",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ComputePenetration",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AreCollidersOverlapping",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin___c___cctor (const MethodInfo* method);
// 0x5af6580

void CustomLogic_CustomLogicPhysicsBuiltin___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546ee8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
    Il2CppMethodInitialized_07546ee8 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9 =
       (CustomLogic_CustomLogicPhysicsBuiltin___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin___c___ctor (CustomLogic_CustomLogicPhysicsBuiltin___c_o* __this, const MethodInfo* method);
// 0x5af65f0

void CustomLogic_CustomLogicPhysicsBuiltin___c___ctor
               (CustomLogic_CustomLogicPhysicsBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$<GetPhysicsLayerMask>b__1_0
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsBuiltin___c___GetPhysicsLayerMask_b__1_0 (CustomLogic_CustomLogicPhysicsBuiltin___c_o* __this, Il2CppObject* v, const MethodInfo* method);
// 0x5af6600

int32_t CustomLogic_CustomLogicPhysicsBuiltin___c___GetPhysicsLayerMask_b__1_0
                  (CustomLogic_CustomLogicPhysicsBuiltin___c_o *__this,Il2CppObject *v,MethodInfo *method)

{
  int32_t *piVar1;
  
  if (v == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((v->klass->_1).element_class != *(Il2CppClass **)(g_data_07556710 + 0x40)) {
    il2cpp_codegen_raise_invalid_cast_exception(v,g_data_07556710);
  }
  piVar1 = il2cpp_vm_Object_Unbox(v);
  return *piVar1;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin___ctor (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x5af1180

void CustomLogic_CustomLogicPhysicsBuiltin___ctor
               (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546ebe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546ebe = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$GetPhysicsLayerMask
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsBuiltin__GetPhysicsLayerMask (CustomLogic_CustomLogicListBuiltin_o* layers, const MethodInfo* method);
// 0x5af11f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af1284: jmp 0x5af129f

int32_t CustomLogic_CustomLogicPhysicsBuiltin__GetPhysicsLayerMask
                  (CustomLogic_CustomLogicListBuiltin_o *layers,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  Il2CppObject *object;
  UnityEngine_LayerMask_o UVar1;
  int32_t iVar2;
  undefined8 in_RAX;
  CustomLogic_CustomLogicPhysicsBuiltin___c_StaticFields *pCVar3;
  System_Func_object__int__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Int32_array *layers_00;
  UnityEngine_LayerMask_o local_28;
  undefined4 uStack_24;
  
  uStack_24 = (undefined4)((ulong)in_RAX >> 0x20);
  if (Il2CppMethodInitialized_07546ebf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_object_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_c_GetPhysicsLayerMask_b__1_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
    Il2CppMethodInitialized_07546ebf = '\x01';
  }
  if (layers == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  source = (layers->fields).List;
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields;
    __this = pCVar3->__9__1_0;
  }
  else {
    pCVar3 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields;
    __this = pCVar3->__9__1_0;
  }
  if (__this == (System_Func_object__int__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c)->_2).cctor_finished_or_no_cctor ==
        0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
      pCVar3 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields;
    }
    object = (Il2CppObject *)pCVar3->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_int);
    System_Func_object__int____ctor
              (__this,object,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_c_GetPhysicsLayerMask_b__1_0,
               (MethodInfo_4F198F0 *)0x0);
    pCVar3 = TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields;
    pCVar3->__9__1_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar3->__9__1_0);
  }
  source_00 = System_Linq_Enumerable__Select_object__int_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__TResult__o *)__this,
                         (MethodInfo_34F5DF0 *)MethodInfo_System_Linq_Enumerable_Select_object_int);
  layers_00 = System_Linq_Enumerable__ToArray_int_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                         (MethodInfo_34FE980 *)MethodInfo_System_Linq_Enumerable_ToArray_int);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  UVar1 = Utility_PhysicsLayer__GetMask(layers_00,(MethodInfo *)0x0);
  _local_28 = CONCAT44(uStack_24,UVar1.fields.m_Mask);
  iVar2 = UnityEngine_LayerMask__get_value(&local_28,(MethodInfo *)0x0);
  return iVar2;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$LineCast
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__LineCast (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, System_String_o* collideWith, const MethodInfo* method);
// 0x5af1370

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__LineCast
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          System_String_o *collideWith,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  bool bVar4;
  int32_t iVar5;
  UnityEngine_Collider_o *pUVar6;
  CustomLogic_BuiltinClassInstance_o *pCVar7;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  System_Object_array *parameters;
  Il2CppObject *pIVar9;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  CustomLogic_BuiltinClassInstance_o *pCVar10;
  float fVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  UnityEngine_Vector3_o UVar12;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o end_00;
  UnityEngine_LayerMask_o local_80;
  float local_7c;
  undefined1 local_78 [16];
  UnityEngine_RaycastHit_o local_68;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_07546ec0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07546ec0 = '\x01';
  }
  local_68.fields.m_UV.fields.x = 0.0;
  local_68.fields.m_UV.fields.y = 0.0;
  local_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_68.fields.m_Normal.fields.y = 0.0;
  local_68.fields.m_Normal.fields.z = 0.0;
  local_68.fields.m_FaceID = 0;
  local_68.fields.m_Distance = 0.0;
  local_68.fields.m_Point.fields.x = 0.0;
  local_68.fields.m_Point.fields.y = 0.0;
  local_68.fields.m_Point.fields.z = 0.0;
  local_68.fields.m_Normal.fields.x = 0.0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
label_05af170f:
    ThrowNullReferenceException();
  }
  uVar1 = (start->fields).Value.fields.x;
  uVar2 = (start->fields).Value.fields.y;
  local_78._4_4_ = uVar2;
  local_78._0_4_ = uVar1;
  local_78._8_8_ = 0;
  fVar11 = (start->fields).Value.fields.z;
  local_38._0_4_ = (end->fields).Value.fields.x;
  local_38._4_4_ = (end->fields).Value.fields.y;
  uStack_30 = 0;
  local_7c = (end->fields).Value.fields.z;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar5 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  local_80 = Utility_PhysicsLayer__CopyMask(iVar5,(MethodInfo *)0x0);
  iVar5 = UnityEngine_LayerMask__get_value(&local_80,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  UVar12.fields.z = fVar11;
  UVar12.fields.x = (float)local_78._0_4_;
  UVar12.fields.y = (float)local_78._4_4_;
  end_00.fields.z = local_7c;
  end_00.fields.x = (float)(undefined4)local_38;
  end_00.fields.y = (float)local_38._4_4_;
  bVar4 = UnityEngine_Physics__Linecast_69da590(UVar12,end_00,&local_68,iVar5,(MethodInfo *)0x0);
  if (bVar4) {
    pUVar6 = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
    pCVar7 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar6,(MethodInfo *)0x0);
    if (pCVar7 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this,(MethodInfo *)0x0);
      bVar3 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
      pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0;
      if ((bVar3 <= (pCVar7->klass->_2).typeHierarchyDepth) &&
         (pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0,
         (pCVar7->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
        pCVar10 = pCVar7;
      }
      if (__this != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
        bVar4 = false;
        CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                  (__this,pCVar10 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
        bVar3 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
        if (bVar3 <= (pCVar7->klass->_2).typeHierarchyDepth) {
          bVar4 = (pCVar7->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin;
        }
        (__this->fields)._IsMapObject_k__BackingField = bVar4;
        UVar12 = UnityEngine_RaycastHit__get_point(&local_68,(MethodInfo *)0x0);
        value.fields.z = UVar12.fields.z;
        local_78._8_4_ = extraout_XMM0_Dc;
        local_78._0_8_ = UVar12.fields._0_8_;
        local_78._12_4_ = extraout_XMM0_Dd;
        pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        value.fields.x = (float)local_78._0_4_;
        value.fields.y = (float)local_78._4_4_;
        CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar8,value,(MethodInfo *)0x0);
        (__this->fields)._Point_k__BackingField = pCVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._Point_k__BackingField);
        UVar12 = UnityEngine_RaycastHit__get_normal(&local_68,(MethodInfo *)0x0);
        value_00.fields.z = UVar12.fields.z;
        local_78._8_4_ = extraout_XMM0_Dc_00;
        local_78._0_8_ = UVar12.fields._0_8_;
        local_78._12_4_ = extraout_XMM0_Dd_00;
        pCVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        value_00.fields.x = (float)local_78._0_4_;
        value_00.fields.y = (float)local_78._4_4_;
        CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar8,value_00,(MethodInfo *)0x0);
        (__this->fields)._Normal_k__BackingField = pCVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._Normal_k__BackingField);
        fVar11 = UnityEngine_RaycastHit__get_distance(&local_68,(MethodInfo *)0x0);
        (__this->fields)._Distance_k__BackingField = fVar11;
        (__this->fields)._Collider_k__BackingField = pCVar7;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._Collider_k__BackingField);
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        pUVar6 = UnityEngine_RaycastHit__get_collider(&local_68,(MethodInfo *)0x0);
        if (parameters != (System_Object_array *)0x0) {
          if ((pUVar6 != (UnityEngine_Collider_o *)0x0) &&
             (pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pUVar6,(((parameters->obj).klass)->_1).element_class),
             pIVar9 == (Il2CppObject *)0x0)) {
            pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pUVar6;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(__this_00,parameters,(MethodInfo *)0x0);
          (__this->fields)._ColliderInfo_k__BackingField = __this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._ColliderInfo_k__BackingField);
          return __this;
        }
      }
      goto label_05af170f;
    }
  }
  return (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$LineCastWithMask
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__LineCastWithMask (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, int32_t mask, const MethodInfo* method);
// 0x5af1730

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__LineCastWithMask
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          int32_t mask,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  UnityEngine_Vector3_Fields start_00;
  bool bVar3;
  UnityEngine_Collider_o *pUVar4;
  CustomLogic_BuiltinClassInstance_o *pCVar5;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  System_Object_array *parameters;
  Il2CppObject *pIVar7;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  bool bVar8;
  float fVar9;
  UnityEngine_Vector3_o UVar10;
  UnityEngine_RaycastHit_o UStack_68;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  if (Il2CppMethodInitialized_07546ec1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07546ec1 = '\x01';
  }
  UStack_68.fields.m_UV.fields.x = 0.0;
  UStack_68.fields.m_UV.fields.y = 0.0;
  UStack_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  UStack_68.fields.m_Normal.fields.y = 0.0;
  UStack_68.fields.m_Normal.fields.z = 0.0;
  UStack_68.fields.m_FaceID = 0;
  UStack_68.fields.m_Distance = 0.0;
  UStack_68.fields.m_Point.fields.x = 0.0;
  UStack_68.fields.m_Point.fields.y = 0.0;
  UStack_68.fields.m_Point.fields.z = 0.0;
  UStack_68.fields.m_Normal.fields.x = 0.0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
label_05af1a3a:
    ThrowNullReferenceException();
  }
  start_00 = (start->fields).Value.fields;
  uVar1._0_4_ = (end->fields).Value.fields.x;
  uVar1._4_4_ = (end->fields).Value.fields.y;
  fVar9 = (end->fields).Value.fields.z;
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    uStack_30 = 0;
    uStack_38 = uVar1;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    uVar1._0_4_ = (undefined4)uStack_38;
    uVar1._4_4_ = uStack_38._4_4_;
  }
  UVar10.fields.y = (float)uVar1._4_4_;
  UVar10.fields.x = (float)(undefined4)uVar1;
  UVar10.fields.z = fVar9;
  bVar3 = UnityEngine_Physics__Linecast_69da590
                    ((UnityEngine_Vector3_o)start_00,UVar10,&UStack_68,mask,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar4 = UnityEngine_RaycastHit__get_collider(&UStack_68,(MethodInfo *)0x0);
    pCVar5 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar4,(MethodInfo *)0x0);
    if (pCVar5 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
      CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this,(MethodInfo *)0x0);
      if (__this != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
        bVar2 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
        if ((pCVar5->klass->_2).typeHierarchyDepth < bVar2) {
          bVar3 = false;
        }
        else {
          bVar3 = (pCVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin;
        }
        bVar8 = false;
        CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter(__this,bVar3,(MethodInfo *)0x0);
        bVar2 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
        if (bVar2 <= (pCVar5->klass->_2).typeHierarchyDepth) {
          bVar8 = (pCVar5->klass->_2).typeHierarchy[(ulong)bVar2 - 1] ==
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin;
        }
        (__this->fields)._IsMapObject_k__BackingField = bVar8;
        UVar10 = UnityEngine_RaycastHit__get_point(&UStack_68,(MethodInfo *)0x0);
        pCVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar6,UVar10,(MethodInfo *)0x0);
        (__this->fields)._Point_k__BackingField = pCVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._Point_k__BackingField);
        UVar10 = UnityEngine_RaycastHit__get_normal(&UStack_68,(MethodInfo *)0x0);
        pCVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar6,UVar10,(MethodInfo *)0x0);
        (__this->fields)._Normal_k__BackingField = pCVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._Normal_k__BackingField);
        fVar9 = UnityEngine_RaycastHit__get_distance(&UStack_68,(MethodInfo *)0x0);
        (__this->fields)._Distance_k__BackingField = fVar9;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        pUVar4 = UnityEngine_RaycastHit__get_collider(&UStack_68,(MethodInfo *)0x0);
        if (parameters != (System_Object_array *)0x0) {
          if ((pUVar4 != (UnityEngine_Collider_o *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pUVar4,(((parameters->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) {
            pIVar7 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar7,(MethodInfo *)0x0);
          }
          if ((int)parameters->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          parameters->m_Items[0] = (Il2CppObject *)pUVar4;
          Il2CppCodeGenWriteBarrier(parameters->m_Items);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(__this_00,parameters,(MethodInfo *)0x0);
          (__this->fields)._Collider_k__BackingField = (CustomLogic_BuiltinClassInstance_o *)__this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._Collider_k__BackingField);
          return __this;
        }
      }
      goto label_05af1a3a;
    }
  }
  return (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$LineCastAll
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__LineCastAll (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, System_String_o* collideWith, const MethodInfo* method);
// 0x5af1a60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af213d: nop dword ptr [rax]

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__LineCastAll
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          System_String_o *collideWith,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  UnityEngine_Vector2_Fields UVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  MethodInfo *pMVar14;
  int32_t iVar15;
  UnityEngine_Vector3_StaticFields *pUVar16;
  UnityEngine_RaycastHit_array *pUVar17;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  ulong uVar18;
  UnityEngine_Collider_o *pUVar19;
  CustomLogic_BuiltinClassInstance_o *pCVar20;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar21;
  System_Object_array *pSVar22;
  Il2CppObject *pIVar23;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_01;
  int iVar24;
  ulong uVar25;
  UnityEngine_RaycastHit_o *pUVar26;
  CustomLogic_BuiltinClassInstance_o *pCVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o direction;
  UnityEngine_LayerMask_o aUStack_b0 [2];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  ulong uStack_90;
  UnityEngine_RaycastHit_array *pUStack_88;
  undefined1 auStack_80 [12];
  float fStack_74;
  undefined8 uStack_70;
  UnityEngine_RaycastHit_o UStack_68;
  
  if (Il2CppMethodInitialized_07546ec2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07546ec2 = '\x01';
  }
  aUStack_b0[0].fields.m_Mask = (UnityEngine_LayerMask_Fields)0;
  UStack_68.fields.m_UV.fields.x = 0.0;
  UStack_68.fields.m_UV.fields.y = 0.0;
  UStack_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0;
  UStack_68.fields.m_Normal.fields.y = 0.0;
  UStack_68.fields.m_Normal.fields.z = 0.0;
  UStack_68.fields.m_FaceID = 0;
  UStack_68.fields.m_Distance = 0.0;
  UStack_68.fields.m_Point.fields.x = 0.0;
  UStack_68.fields.m_Point.fields.y = 0.0;
  UStack_68.fields.m_Point.fields.z = 0.0;
  UStack_68.fields.m_Normal.fields.x = 0.0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) goto label_05af21b5;
  unique0x0000d400 = *(System_Collections_Generic_List_object__o **)&(start->fields).Value.fields;
  uStack_70._0_4_ = 0.0;
  uStack_70._4_4_ = 0.0;
  uStack_90 = CONCAT44(uStack_90._4_4_,(start->fields).Value.fields.z);
  uVar2 = (end->fields).Value.fields.x;
  uVar4 = (end->fields).Value.fields.y;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  fVar31 = (end->fields).Value.fields.z;
  fStack_a8 = (float)uVar2;
  fStack_a4 = (float)uVar4;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar15 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    auStack_80._0_4_ = 0.0;
    auStack_80._4_4_ = 0.0;
  }
  else {
    auStack_80._0_4_ = 0.0;
    auStack_80._4_4_ = 0.0;
  }
  auStack_80._0_4_ = 0.0;
  auStack_80._4_4_ = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    auStack_80._0_4_ = 0.0;
    auStack_80._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fStack_a8 = fStack_a8 - (float)auStack_80._8_4_;
  fStack_a4 = fStack_a4 - fStack_74;
  fStack_a0 = fStack_a0 - (float)uStack_70;
  fStack_9c = fStack_9c - uStack_70._4_4_;
  fVar31 = fVar31 - (float)uStack_90;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar32 = fVar31 * fVar31 + fStack_a4 * fStack_a4 + fStack_a8 * fStack_a8;
  if (fVar32 < 0.0) {
    fVar28 = sqrtf(fVar32);
    uVar29 = extraout_XMM0_Db;
    if (fVar28 <= 1e-05) goto label_05af1c31;
label_05af1c6c:
    fVar31 = fVar31 / fVar28;
    auVar13._4_4_ = fStack_a4;
    auVar13._0_4_ = fStack_a8;
    auVar13._8_4_ = fStack_a0;
    auVar13._12_4_ = fStack_9c;
    auVar30._4_4_ = fVar28;
    auVar30._0_4_ = fVar28;
    auVar30._8_4_ = uVar29;
    auVar30._12_4_ = uVar29;
    auVar30 = divps(auVar13,auVar30);
    auStack_80._0_4_ = auVar30._0_4_;
    auStack_80._4_4_ = auVar30._4_4_;
    pUVar16 = (UnityEngine_Vector3_StaticFields *)auStack_80;
  }
  else {
    uVar29 = 0;
    fVar28 = SQRT(fVar32);
    if (1e-05 < fVar28) goto label_05af1c6c;
label_05af1c31:
    pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar31 = (pUVar16->zeroVector).fields.z;
  }
  uVar3 = (pUVar16->zeroVector).fields.x;
  uVar5 = (pUVar16->zeroVector).fields.y;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  fStack_a8 = (float)uVar3;
  fStack_a4 = (float)uVar5;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05af1cae;
label_05af1d3d:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (0.0 <= fVar32) goto label_05af1cba;
label_05af1d54:
    fVar32 = sqrtf(fVar32);
  }
  else {
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05af1d3d;
label_05af1cae:
    if (fVar32 < 0.0) goto label_05af1d54;
label_05af1cba:
    fVar32 = SQRT(fVar32);
  }
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  aUStack_b0[0] = Utility_PhysicsLayer__CopyMask(iVar15,(MethodInfo *)0x0);
  iVar15 = UnityEngine_LayerMask__get_value(aUStack_b0,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  direction.fields.y = fStack_a4;
  direction.fields.x = fStack_a8;
  UVar33.fields.z = (float)uStack_90;
  UVar33.fields._0_8_ = stack0xffffffffffffff88;
  direction.fields.z = fVar31;
  pUVar17 = UnityEngine_Physics__RaycastAll_69db750(UVar33,direction,fVar32,iVar15,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this,(MethodInfo *)0x0);
  if (pUVar17 != (UnityEngine_RaycastHit_array *)0x0) {
    iVar24 = (int)pUVar17->max_length;
    uVar18 = pUVar17->max_length & 0xffffffff;
    if (__this == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (0 < iVar24) {
        pUVar26 = pUVar17->m_Items;
        uVar25 = 0;
        do {
          if (uVar18 <= uVar25) goto label_05af21ba;
          UStack_68.fields.m_Point.fields.x = (pUVar26->fields).m_Point.fields.x;
          UStack_68.fields.m_Point.fields.y = (pUVar26->fields).m_Point.fields.y;
          UStack_68.fields._8_8_ = *(undefined8 *)&(pUVar26->fields).m_Point.fields.z;
          UStack_68.fields.m_Normal.fields.y = (pUVar26->fields).m_Normal.fields.y;
          UStack_68.fields.m_Normal.fields.z = (pUVar26->fields).m_Normal.fields.z;
          uVar11 = (pUVar26->fields).m_FaceID;
          uVar12 = (pUVar26->fields).m_Distance;
          UVar8 = (pUVar26->fields).m_UV.fields;
          UStack_68.fields.m_Collider.fields.m_Data =
               (UnityEngine_EntityId_Fields)(pUVar26->fields).m_Collider.fields.m_Data;
          UStack_68.fields.m_UV.fields.x = UVar8.x;
          UStack_68.fields.m_UV.fields.y = UVar8.y;
          UStack_68.fields.m_FaceID = uVar11;
          UStack_68.fields.m_Distance = (float)uVar12;
          pUVar19 = UnityEngine_RaycastHit__get_collider(&UStack_68,(MethodInfo *)0x0);
          pCVar20 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar19,(MethodInfo *)0x0);
          if (pCVar20 != (CustomLogic_BuiltinClassInstance_o *)0x0) goto label_05af21b5;
          uVar25 = uVar25 + 1;
          uVar7 = (uint)pUVar17->max_length;
          uVar18 = (ulong)uVar7;
          pUVar26 = pUVar26 + 1;
        } while ((long)uVar25 < (long)(int)uVar7);
      }
    }
    else if (0 < iVar24) {
      pUVar26 = pUVar17->m_Items;
      uVar25 = 0;
      pUStack_88 = pUVar17;
      do {
        if (uVar18 <= uVar25) {
label_05af21ba:
          ThrowIndexOutOfRangeException();
        }
        UStack_68.fields.m_Point.fields.x = (pUVar26->fields).m_Point.fields.x;
        UStack_68.fields.m_Point.fields.y = (pUVar26->fields).m_Point.fields.y;
        UStack_68.fields._8_8_ = *(undefined8 *)&(pUVar26->fields).m_Point.fields.z;
        UStack_68.fields.m_Normal.fields.y = (pUVar26->fields).m_Normal.fields.y;
        UStack_68.fields.m_Normal.fields.z = (pUVar26->fields).m_Normal.fields.z;
        uVar9 = (pUVar26->fields).m_FaceID;
        uVar10 = (pUVar26->fields).m_Distance;
        UVar8 = (pUVar26->fields).m_UV.fields;
        UStack_68.fields.m_Collider.fields.m_Data =
             (UnityEngine_EntityId_Fields)(pUVar26->fields).m_Collider.fields.m_Data;
        UStack_68.fields.m_UV.fields.x = UVar8.x;
        UStack_68.fields.m_UV.fields.y = UVar8.y;
        UStack_68.fields.m_FaceID = uVar9;
        UStack_68.fields.m_Distance = (float)uVar10;
        pUVar19 = UnityEngine_RaycastHit__get_collider(&UStack_68,(MethodInfo *)0x0);
        pCVar20 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar19,(MethodInfo *)0x0);
        if (pCVar20 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
          unique0x00023d00 = (__this->fields).List;
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
          CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_00,(MethodInfo *)0x0);
          bVar6 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
          pCVar27 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar6 <= (pCVar20->klass->_2).typeHierarchyDepth) &&
             (pCVar27 = (CustomLogic_BuiltinClassInstance_o *)0x0,
             (pCVar20->klass->_2).typeHierarchy[(ulong)bVar6 - 1] ==
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
            pCVar27 = pCVar20;
          }
          if (__this_00 == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) goto label_05af21b5;
          uStack_90 = uVar25;
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_00,pCVar27 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
          bVar6 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
          pCVar27 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar6 <= (pCVar20->klass->_2).typeHierarchyDepth) &&
             (pCVar27 = pCVar20,
             (pCVar20->klass->_2).typeHierarchy[(ulong)bVar6 - 1] !=
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
            pCVar27 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          }
          (__this_00->fields)._IsMapObject_k__BackingField =
               pCVar27 != (CustomLogic_BuiltinClassInstance_o *)0x0;
          UVar33 = UnityEngine_RaycastHit__get_point(&UStack_68,(MethodInfo *)0x0);
          fStack_a8 = UVar33.fields.z;
          pCVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          value.fields.z = fStack_a8;
          value.fields.x = UVar33.fields.x;
          value.fields.y = UVar33.fields.y;
          CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar21,value,(MethodInfo *)0x0);
          (__this_00->fields)._Point_k__BackingField = pCVar21;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Point_k__BackingField);
          UVar33 = UnityEngine_RaycastHit__get_normal(&UStack_68,(MethodInfo *)0x0);
          fStack_a8 = UVar33.fields.z;
          pCVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          value_00.fields.z = fStack_a8;
          value_00.fields.x = UVar33.fields.x;
          value_00.fields.y = UVar33.fields.y;
          CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar21,value_00,(MethodInfo *)0x0);
          (__this_00->fields)._Normal_k__BackingField = pCVar21;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Normal_k__BackingField);
          fVar31 = UnityEngine_RaycastHit__get_distance(&UStack_68,(MethodInfo *)0x0);
          (__this_00->fields)._Distance_k__BackingField = fVar31;
          (__this_00->fields)._Collider_k__BackingField = pCVar20;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Collider_k__BackingField);
          pSVar22 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          pUVar19 = UnityEngine_RaycastHit__get_collider(&UStack_68,(MethodInfo *)0x0);
          if (pSVar22 == (System_Object_array *)0x0) goto label_05af21b5;
          if ((pUVar19 != (UnityEngine_Collider_o *)0x0) &&
             (pIVar23 = il2cpp_vm_Object_IsInst
                                  ((Il2CppObject *)pUVar19,(((pSVar22->obj).klass)->_1).element_class),
             pIVar23 == (Il2CppObject *)0x0)) {
            pIVar23 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar23,(MethodInfo *)0x0);
          }
          if ((int)pSVar22->max_length == 0) goto label_05af21ba;
          pSVar22->m_Items[0] = (Il2CppObject *)pUVar19;
          Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(__this_01,pSVar22,(MethodInfo *)0x0);
          (__this_00->fields)._ColliderInfo_k__BackingField = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._ColliderInfo_k__BackingField);
          uVar25 = uStack_90;
          pMVar14 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (stack0xffffffffffffff88 == (System_Collections_Generic_List_object__o *)0x0) goto label_05af21b5;
          piVar1 = &(stack0xffffffffffffff88->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar22 = (stack0xffffffffffffff88->fields)._items;
          if (pSVar22 == (System_Object_array *)0x0) goto label_05af21b5;
          uVar7 = (stack0xffffffffffffff88->fields)._size;
          if (uVar7 < (uint)pSVar22->max_length) {
            (stack0xffffffffffffff88->fields)._size = uVar7 + 1;
            pSVar22->m_Items[(int)uVar7] = (Il2CppObject *)__this_00;
            Il2CppCodeGenWriteBarrier(pSVar22->m_Items + (int)uVar7);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (stack0xffffffffffffff88,(Il2CppObject *)__this_00,
                       (MethodInfo_395D230 *)pMVar14->klass->rgctx_data[0xe].method);
          }
          pUVar17 = pUStack_88;
        }
        uVar25 = uVar25 + 1;
        uVar7 = (uint)pUVar17->max_length;
        uVar18 = (ulong)uVar7;
        pUVar26 = pUVar26 + 1;
      } while ((long)uVar25 < (long)(int)uVar7);
    }
    return __this;
  }
label_05af21b5:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$SphereCast
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin__SphereCast (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, float radius, System_String_o* collideWith, const MethodInfo* method);
// 0x5af21d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af23b8: xorps xmm0, xmm0
// asm:   0x5af23bb: ucomiss xmm3, xmm0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin__SphereCast
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          float radius,System_String_o *collideWith,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint32_t uVar5;
  undefined1 auVar6 [16];
  bool bVar7;
  int32_t iVar8;
  UnityEngine_Vector3_StaticFields *pUVar9;
  UnityEngine_Collider_o *other;
  CustomLogic_BuiltinClassInstance_o *pCVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  UnityEngine_LayerMask_o aUStack_98 [2];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  UnityEngine_Vector3_Fields UStack_70;
  float fStack_64;
  undefined8 uStack_60;
  undefined1 auStack_58 [56];
  
  fStack_8c = radius;
  if (Il2CppMethodInitialized_07546ec3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07546ec3 = '\x01';
  }
  auStack_58._32_4_ = 0.0;
  auStack_58._36_4_ = 0.0;
  auStack_58._40_4_ = 0.0;
  auStack_58._16_4_ = 0.0;
  auStack_58._20_4_ = 0.0;
  auStack_58._24_4_ = 0.0;
  auStack_58._28_4_ = 0.0;
  auStack_58._0_4_ = 0.0;
  auStack_58._4_4_ = 0.0;
  auStack_58._8_4_ = 0.0;
  auStack_58._12_4_ = 0.0;
  aUStack_98[0].fields.m_Mask = (UnityEngine_LayerMask_Fields)0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UStack_70.z = (start->fields).Value.fields.x;
  fStack_64 = (start->fields).Value.fields.y;
  uStack_60._0_4_ = 0.0;
  uStack_60._4_4_ = 0.0;
  fStack_90 = (start->fields).Value.fields.z;
  uVar1 = (end->fields).Value.fields.x;
  uVar3 = (end->fields).Value.fields.y;
  fStack_80 = 0.0;
  fStack_7c = 0.0;
  fVar14 = (end->fields).Value.fields.z;
  fStack_88 = (float)uVar1;
  fStack_84 = (float)uVar3;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar8 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    UStack_70.x = 0.0;
    UStack_70.y = 0.0;
  }
  else {
    UStack_70.x = 0.0;
    UStack_70.y = 0.0;
  }
  UStack_70.x = 0.0;
  UStack_70.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    UStack_70.x = 0.0;
    UStack_70.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fStack_88 = fStack_88 - UStack_70.z;
  fStack_84 = fStack_84 - fStack_64;
  fStack_80 = fStack_80 - (float)uStack_60;
  fStack_7c = fStack_7c - uStack_60._4_4_;
  fVar14 = fVar14 - fStack_90;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar15 = fVar14 * fVar14 + fStack_84 * fStack_84 + fStack_88 * fStack_88;
  if (fVar15 < 0.0) {
    fVar11 = sqrtf(fVar15);
    uVar12 = extraout_XMM0_Db;
  }
  else {
    uVar12 = 0;
    fVar11 = SQRT(fVar15);
  }
  if (1e-05 < fVar11) {
    fVar14 = fVar14 / fVar11;
    auVar6._4_4_ = fStack_84;
    auVar6._0_4_ = fStack_88;
    auVar6._8_4_ = fStack_80;
    auVar6._12_4_ = fStack_7c;
    auVar13._4_4_ = fVar11;
    auVar13._0_4_ = fVar11;
    auVar13._8_4_ = uVar12;
    auVar13._12_4_ = uVar12;
    auVar13 = divps(auVar6,auVar13);
    UStack_70.x = auVar13._0_4_;
    UStack_70.y = auVar13._4_4_;
    pUVar9 = (UnityEngine_Vector3_StaticFields *)&UStack_70;
  }
  else {
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar14 = (pUVar9->zeroVector).fields.z;
  }
  uVar2 = (pUVar9->zeroVector).fields.x;
  uVar4 = (pUVar9->zeroVector).fields.y;
  fStack_80 = 0.0;
  fStack_7c = 0.0;
  fStack_88 = (float)uVar2;
  fStack_84 = (float)uVar4;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar5 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  if (fVar15 < 0.0) {
    fVar15 = sqrtf(fVar15);
  }
  else {
    fVar15 = SQRT(fVar15);
  }
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  aUStack_98[0] = Utility_PhysicsLayer__CopyMask(iVar8,(MethodInfo *)0x0);
  iVar8 = UnityEngine_LayerMask__get_value(aUStack_98,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0;
  direction.fields.y = fStack_84;
  direction.fields.x = fStack_88;
  origin.fields.z = fStack_90;
  origin.fields.x = UStack_70.z;
  origin.fields.y = fStack_64;
  direction.fields.z = fVar14;
  bVar7 = UnityEngine_Physics__SphereCast_69daf70
                    (origin,fStack_8c,direction,(UnityEngine_RaycastHit_o *)auStack_58,fVar15,iVar8,
                     (MethodInfo *)0x0);
  if (bVar7) {
    other = UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)auStack_58,(MethodInfo *)0x0);
    pCVar10 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)pCVar10;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$SphereCastWithMask
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin__SphereCastWithMask (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, float radius, int32_t mask, const MethodInfo* method);
// 0x5af2520
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af26b1: xorps xmm0, xmm0
// asm:   0x5af26b4: ucomiss xmm3, xmm0
// asm:   0x5af26d8: jmp 0x5af27ba

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin__SphereCastWithMask
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          float radius,int32_t mask,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint32_t uVar5;
  undefined1 auVar6 [16];
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  UnityEngine_Collider_o *other;
  CustomLogic_BuiltinClassInstance_o *pCVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  float fStack_78;
  float fStack_74;
  UnityEngine_Vector3_Fields UStack_60;
  float fStack_54;
  undefined8 uStack_50;
  undefined1 auStack_48 [48];
  
  if (Il2CppMethodInitialized_07546ec4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07546ec4 = '\x01';
  }
  auStack_48._32_4_ = 0.0;
  auStack_48._36_4_ = 0.0;
  auStack_48._40_4_ = 0.0;
  auStack_48._16_4_ = 0.0;
  auStack_48._20_4_ = 0.0;
  auStack_48._24_4_ = 0.0;
  auStack_48._28_4_ = 0.0;
  auStack_48._0_4_ = 0.0;
  auStack_48._4_4_ = 0.0;
  auStack_48._8_4_ = 0.0;
  auStack_48._12_4_ = 0.0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UStack_60.z = (start->fields).Value.fields.x;
  fStack_54 = (start->fields).Value.fields.y;
  uStack_50._0_4_ = 0.0;
  uStack_50._4_4_ = 0.0;
  fVar2 = (start->fields).Value.fields.z;
  pUVar1 = &(end->fields).Value;
  fVar15 = (pUVar1->fields).x;
  fVar12 = (end->fields).Value.fields.y;
  uVar7 = (pUVar1->fields).x;
  uVar8 = (pUVar1->fields).y;
  fVar16 = (end->fields).Value.fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    UStack_60.x = 0.0;
    UStack_60.y = 0.0;
    fVar15 = (float)uVar7;
    fVar12 = (float)uVar8;
  }
  else {
    UStack_60.x = 0.0;
    UStack_60.y = 0.0;
  }
  UStack_60.x = 0.0;
  UStack_60.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    UStack_60.x = 0.0;
    UStack_60.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  auVar14._0_4_ = fVar15 - UStack_60.z;
  auVar14._4_4_ = fVar12 - fStack_54;
  auVar14._8_4_ = 0.0 - (float)uStack_50;
  auVar14._12_4_ = 0.0 - uStack_50._4_4_;
  fVar16 = fVar16 - fVar2;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar15 = fVar16 * fVar16 + auVar14._4_4_ * auVar14._4_4_ + auVar14._0_4_ * auVar14._0_4_;
  if (fVar15 < 0.0) {
    fVar12 = sqrtf(fVar15);
    uVar13 = extraout_XMM0_Db;
  }
  else {
    uVar13 = 0;
    fVar12 = SQRT(fVar15);
  }
  if (fVar12 <= 1e-05) {
    pUVar10 = *(UnityEngine_Vector3_StaticFields **)((long)TypeInfo_UnityEngine_Vector3 + 0xb8);
    fVar16 = (pUVar10->zeroVector).fields.z;
  }
  else {
    fVar16 = fVar16 / fVar12;
    auVar6._4_4_ = fVar12;
    auVar6._0_4_ = fVar12;
    auVar6._8_4_ = uVar13;
    auVar6._12_4_ = uVar13;
    auVar14 = divps(auVar14,auVar6);
    UStack_60.x = auVar14._0_4_;
    UStack_60.y = auVar14._4_4_;
    pUVar10 = (UnityEngine_Vector3_StaticFields *)&UStack_60;
  }
  uVar3 = (pUVar10->zeroVector).fields.x;
  uVar4 = (pUVar10->zeroVector).fields.y;
  direction.fields.y = (float)uVar4;
  direction.fields.x = (float)uVar3;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    uVar5 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar5 = *(uint32_t *)((long)TypeInfo_System_Math + 0xe4);
  }
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  if (fVar15 < 0.0) {
    fVar15 = sqrtf(fVar15);
    uVar5 = (TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor;
  }
  else {
    fVar15 = SQRT(fVar15);
    uVar5 = (((Il2CppClass *)TypeInfo_UnityEngine_Physics)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar5 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  pCVar11 = (CustomLogic_BuiltinClassInstance_o *)0x0;
  origin.fields.z = fVar2;
  origin.fields.x = UStack_60.z;
  origin.fields.y = fStack_54;
  direction.fields.z = fVar16;
  bVar9 = UnityEngine_Physics__SphereCast_69daf70
                    (origin,radius,direction,(UnityEngine_RaycastHit_o *)auStack_48,fVar15,mask,
                     (MethodInfo *)0x0);
  if (bVar9) {
    other = UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)auStack_48,(MethodInfo *)0x0);
    pCVar11 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)pCVar11;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$SphereCastAll
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__SphereCastAll (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, float radius, System_String_o* collideWith, const MethodInfo* method);
// 0x5af2830
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af2f1d: nop dword ptr [rax]

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__SphereCastAll
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          float radius,System_String_o *collideWith,MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  UnityEngine_Vector2_Fields UVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auVar13 [16];
  MethodInfo *pMVar14;
  int32_t iVar15;
  UnityEngine_Vector3_StaticFields *pUVar16;
  UnityEngine_RaycastHit_array *pUVar17;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  ulong uVar18;
  UnityEngine_Collider_o *pUVar19;
  CustomLogic_BuiltinClassInstance_o *pCVar20;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar21;
  System_Object_array *pSVar22;
  Il2CppObject *pIVar23;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_01;
  int iVar24;
  ulong uVar25;
  UnityEngine_RaycastHit_o *pUVar26;
  CustomLogic_BuiltinClassInstance_o *pCVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o direction;
  UnityEngine_LayerMask_o aUStack_b0 [2];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  UnityEngine_RaycastHit_array *pUStack_90;
  ulong uStack_88;
  undefined1 auStack_80 [12];
  float fStack_74;
  undefined8 uStack_70;
  UnityEngine_RaycastHit_o UStack_68;
  
  pUStack_90 = (UnityEngine_RaycastHit_array *)CONCAT44(pUStack_90._4_4_,radius);
  if (Il2CppMethodInitialized_07546ec5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07546ec5 = '\x01';
  }
  aUStack_b0[0].fields.m_Mask = (UnityEngine_LayerMask_Fields)0;
  UStack_68.fields.m_UV.fields.x = 0.0;
  UStack_68.fields.m_UV.fields.y = 0.0;
  UStack_68.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0;
  UStack_68.fields.m_Normal.fields.y = 0.0;
  UStack_68.fields.m_Normal.fields.z = 0.0;
  UStack_68.fields.m_FaceID = 0;
  UStack_68.fields.m_Distance = 0.0;
  UStack_68.fields.m_Point.fields.x = 0.0;
  UStack_68.fields.m_Point.fields.y = 0.0;
  UStack_68.fields.m_Point.fields.z = 0.0;
  UStack_68.fields.m_Normal.fields.x = 0.0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) goto label_05af2f95;
  unique0x0000d400 = *(System_Collections_Generic_List_object__o **)&(start->fields).Value.fields;
  uStack_70._0_4_ = 0.0;
  uStack_70._4_4_ = 0.0;
  uStack_88 = CONCAT44(uStack_88._4_4_,(start->fields).Value.fields.z);
  uVar2 = (end->fields).Value.fields.x;
  uVar4 = (end->fields).Value.fields.y;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  fVar31 = (end->fields).Value.fields.z;
  fStack_a8 = (float)uVar2;
  fStack_a4 = (float)uVar4;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar15 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    auStack_80._0_4_ = 0.0;
    auStack_80._4_4_ = 0.0;
  }
  else {
    auStack_80._0_4_ = 0.0;
    auStack_80._4_4_ = 0.0;
  }
  auStack_80._0_4_ = 0.0;
  auStack_80._4_4_ = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    auStack_80._0_4_ = 0.0;
    auStack_80._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fStack_a8 = fStack_a8 - (float)auStack_80._8_4_;
  fStack_a4 = fStack_a4 - fStack_74;
  fStack_a0 = fStack_a0 - (float)uStack_70;
  fStack_9c = fStack_9c - uStack_70._4_4_;
  fVar31 = fVar31 - (float)uStack_88;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar32 = fVar31 * fVar31 + fStack_a4 * fStack_a4 + fStack_a8 * fStack_a8;
  if (fVar32 < 0.0) {
    fVar28 = sqrtf(fVar32);
    uVar29 = extraout_XMM0_Db;
    if (fVar28 <= 1e-05) goto label_05af2a07;
label_05af2a42:
    fVar31 = fVar31 / fVar28;
    auVar13._4_4_ = fStack_a4;
    auVar13._0_4_ = fStack_a8;
    auVar13._8_4_ = fStack_a0;
    auVar13._12_4_ = fStack_9c;
    auVar30._4_4_ = fVar28;
    auVar30._0_4_ = fVar28;
    auVar30._8_4_ = uVar29;
    auVar30._12_4_ = uVar29;
    auVar30 = divps(auVar13,auVar30);
    auStack_80._0_4_ = auVar30._0_4_;
    auStack_80._4_4_ = auVar30._4_4_;
    pUVar16 = (UnityEngine_Vector3_StaticFields *)auStack_80;
  }
  else {
    uVar29 = 0;
    fVar28 = SQRT(fVar32);
    if (1e-05 < fVar28) goto label_05af2a42;
label_05af2a07:
    pUVar16 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar31 = (pUVar16->zeroVector).fields.z;
  }
  uVar3 = (pUVar16->zeroVector).fields.x;
  uVar5 = (pUVar16->zeroVector).fields.y;
  fStack_a0 = 0.0;
  fStack_9c = 0.0;
  fStack_a8 = (float)uVar3;
  fStack_a4 = (float)uVar5;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05af2a84;
label_05af2b13:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (0.0 <= fVar32) goto label_05af2a90;
label_05af2b2a:
    fVar32 = sqrtf(fVar32);
  }
  else {
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05af2b13;
label_05af2a84:
    if (fVar32 < 0.0) goto label_05af2b2a;
label_05af2a90:
    fVar32 = SQRT(fVar32);
  }
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  aUStack_b0[0] = Utility_PhysicsLayer__CopyMask(iVar15,(MethodInfo *)0x0);
  iVar15 = UnityEngine_LayerMask__get_value(aUStack_b0,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  direction.fields.y = fStack_a4;
  direction.fields.x = fStack_a8;
  UVar33.fields.z = (float)uStack_88;
  UVar33.fields._0_8_ = stack0xffffffffffffff88;
  direction.fields.z = fVar31;
  pUVar17 = UnityEngine_Physics__SphereCastAll_69dc8d0
                      (UVar33,pUStack_90._0_4_,direction,fVar32,iVar15,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this,(MethodInfo *)0x0);
  if (pUVar17 != (UnityEngine_RaycastHit_array *)0x0) {
    iVar24 = (int)pUVar17->max_length;
    uVar18 = pUVar17->max_length & 0xffffffff;
    if (__this == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (0 < iVar24) {
        pUVar26 = pUVar17->m_Items;
        uVar25 = 0;
        do {
          if (uVar18 <= uVar25) goto label_05af2f9a;
          UStack_68.fields.m_Point.fields.x = (pUVar26->fields).m_Point.fields.x;
          UStack_68.fields.m_Point.fields.y = (pUVar26->fields).m_Point.fields.y;
          UStack_68.fields._8_8_ = *(undefined8 *)&(pUVar26->fields).m_Point.fields.z;
          UStack_68.fields.m_Normal.fields.y = (pUVar26->fields).m_Normal.fields.y;
          UStack_68.fields.m_Normal.fields.z = (pUVar26->fields).m_Normal.fields.z;
          uVar11 = (pUVar26->fields).m_FaceID;
          uVar12 = (pUVar26->fields).m_Distance;
          UVar8 = (pUVar26->fields).m_UV.fields;
          UStack_68.fields.m_Collider.fields.m_Data =
               (UnityEngine_EntityId_Fields)(pUVar26->fields).m_Collider.fields.m_Data;
          UStack_68.fields.m_UV.fields.x = UVar8.x;
          UStack_68.fields.m_UV.fields.y = UVar8.y;
          UStack_68.fields.m_FaceID = uVar11;
          UStack_68.fields.m_Distance = (float)uVar12;
          pUVar19 = UnityEngine_RaycastHit__get_collider(&UStack_68,(MethodInfo *)0x0);
          pCVar20 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar19,(MethodInfo *)0x0);
          if (pCVar20 != (CustomLogic_BuiltinClassInstance_o *)0x0) goto label_05af2f95;
          uVar25 = uVar25 + 1;
          uVar7 = (uint)pUVar17->max_length;
          uVar18 = (ulong)uVar7;
          pUVar26 = pUVar26 + 1;
        } while ((long)uVar25 < (long)(int)uVar7);
      }
    }
    else if (0 < iVar24) {
      pUVar26 = pUVar17->m_Items;
      uVar25 = 0;
      pUStack_90 = pUVar17;
      do {
        if (uVar18 <= uVar25) {
label_05af2f9a:
          ThrowIndexOutOfRangeException();
        }
        UStack_68.fields.m_Point.fields.x = (pUVar26->fields).m_Point.fields.x;
        UStack_68.fields.m_Point.fields.y = (pUVar26->fields).m_Point.fields.y;
        UStack_68.fields._8_8_ = *(undefined8 *)&(pUVar26->fields).m_Point.fields.z;
        UStack_68.fields.m_Normal.fields.y = (pUVar26->fields).m_Normal.fields.y;
        UStack_68.fields.m_Normal.fields.z = (pUVar26->fields).m_Normal.fields.z;
        uVar9 = (pUVar26->fields).m_FaceID;
        uVar10 = (pUVar26->fields).m_Distance;
        UVar8 = (pUVar26->fields).m_UV.fields;
        UStack_68.fields.m_Collider.fields.m_Data =
             (UnityEngine_EntityId_Fields)(pUVar26->fields).m_Collider.fields.m_Data;
        UStack_68.fields.m_UV.fields.x = UVar8.x;
        UStack_68.fields.m_UV.fields.y = UVar8.y;
        UStack_68.fields.m_FaceID = uVar9;
        UStack_68.fields.m_Distance = (float)uVar10;
        pUVar19 = UnityEngine_RaycastHit__get_collider(&UStack_68,(MethodInfo *)0x0);
        pCVar20 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar19,(MethodInfo *)0x0);
        if (pCVar20 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
          unique0x00023d00 = (__this->fields).List;
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
          CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_00,(MethodInfo *)0x0);
          bVar6 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
          pCVar27 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar6 <= (pCVar20->klass->_2).typeHierarchyDepth) &&
             (pCVar27 = (CustomLogic_BuiltinClassInstance_o *)0x0,
             (pCVar20->klass->_2).typeHierarchy[(ulong)bVar6 - 1] ==
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
            pCVar27 = pCVar20;
          }
          if (__this_00 == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) goto label_05af2f95;
          uStack_88 = uVar25;
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_00,pCVar27 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
          bVar6 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
          pCVar27 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar6 <= (pCVar20->klass->_2).typeHierarchyDepth) &&
             (pCVar27 = pCVar20,
             (pCVar20->klass->_2).typeHierarchy[(ulong)bVar6 - 1] !=
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
            pCVar27 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          }
          (__this_00->fields)._IsMapObject_k__BackingField =
               pCVar27 != (CustomLogic_BuiltinClassInstance_o *)0x0;
          UVar33 = UnityEngine_RaycastHit__get_point(&UStack_68,(MethodInfo *)0x0);
          fStack_a8 = UVar33.fields.z;
          pCVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          value.fields.z = fStack_a8;
          value.fields.x = UVar33.fields.x;
          value.fields.y = UVar33.fields.y;
          CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar21,value,(MethodInfo *)0x0);
          (__this_00->fields)._Point_k__BackingField = pCVar21;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Point_k__BackingField);
          UVar33 = UnityEngine_RaycastHit__get_normal(&UStack_68,(MethodInfo *)0x0);
          fStack_a8 = UVar33.fields.z;
          pCVar21 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          value_00.fields.z = fStack_a8;
          value_00.fields.x = UVar33.fields.x;
          value_00.fields.y = UVar33.fields.y;
          CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar21,value_00,(MethodInfo *)0x0);
          (__this_00->fields)._Normal_k__BackingField = pCVar21;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Normal_k__BackingField);
          fVar31 = UnityEngine_RaycastHit__get_distance(&UStack_68,(MethodInfo *)0x0);
          (__this_00->fields)._Distance_k__BackingField = fVar31;
          (__this_00->fields)._Collider_k__BackingField = pCVar20;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Collider_k__BackingField);
          pSVar22 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          pUVar19 = UnityEngine_RaycastHit__get_collider(&UStack_68,(MethodInfo *)0x0);
          if (pSVar22 == (System_Object_array *)0x0) goto label_05af2f95;
          if ((pUVar19 != (UnityEngine_Collider_o *)0x0) &&
             (pIVar23 = il2cpp_vm_Object_IsInst
                                  ((Il2CppObject *)pUVar19,(((pSVar22->obj).klass)->_1).element_class),
             pIVar23 == (Il2CppObject *)0x0)) {
            pIVar23 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar23,(MethodInfo *)0x0);
          }
          if ((int)pSVar22->max_length == 0) goto label_05af2f9a;
          pSVar22->m_Items[0] = (Il2CppObject *)pUVar19;
          Il2CppCodeGenWriteBarrier(pSVar22->m_Items);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(__this_01,pSVar22,(MethodInfo *)0x0);
          (__this_00->fields)._ColliderInfo_k__BackingField = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._ColliderInfo_k__BackingField);
          uVar25 = uStack_88;
          pMVar14 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (stack0xffffffffffffff88 == (System_Collections_Generic_List_object__o *)0x0) goto label_05af2f95;
          piVar1 = &(stack0xffffffffffffff88->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar22 = (stack0xffffffffffffff88->fields)._items;
          if (pSVar22 == (System_Object_array *)0x0) goto label_05af2f95;
          uVar7 = (stack0xffffffffffffff88->fields)._size;
          if (uVar7 < (uint)pSVar22->max_length) {
            (stack0xffffffffffffff88->fields)._size = uVar7 + 1;
            pSVar22->m_Items[(int)uVar7] = (Il2CppObject *)__this_00;
            Il2CppCodeGenWriteBarrier(pSVar22->m_Items + (int)uVar7);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (stack0xffffffffffffff88,(Il2CppObject *)__this_00,
                       (MethodInfo_395D230 *)pMVar14->klass->rgctx_data[0xe].method);
          }
          pUVar17 = pUStack_90;
        }
        uVar25 = uVar25 + 1;
        uVar7 = (uint)pUVar17->max_length;
        uVar18 = (ulong)uVar7;
        pUVar26 = pUVar26 + 1;
      } while ((long)uVar25 < (long)(int)uVar7);
    }
    return __this;
  }
label_05af2f95:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$BoxCast
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin__BoxCast (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, CustomLogic_CustomLogicVector3Builtin_o* dimensions, CustomLogic_CustomLogicQuaternionBuiltin_o* orientation, System_String_o* collideWith, const MethodInfo* method);
// 0x5af2fb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af31e1: xorps xmm0, xmm0
// asm:   0x5af31e4: ucomiss xmm3, xmm0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin__BoxCast
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          CustomLogic_CustomLogicVector3Builtin_o *dimensions,
          CustomLogic_CustomLogicQuaternionBuiltin_o *orientation,System_String_o *collideWith,
          MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint32_t uVar6;
  undefined1 auVar7 [16];
  bool bVar8;
  int32_t iVar9;
  UnityEngine_Vector3_StaticFields *pUVar10;
  UnityEngine_Collider_o *other;
  CustomLogic_BuiltinClassInstance_o *pCVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  UnityEngine_Vector3_o center;
  UnityEngine_Vector3_o halfExtents;
  UnityEngine_Vector3_o direction;
  UnityEngine_Quaternion_o orientation_00;
  UnityEngine_LayerMask_o UStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  UnityEngine_Vector3_Fields UStack_90;
  float fStack_84;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
  UnityEngine_RaycastHit_o UStack_58;
  
  if (Il2CppMethodInitialized_07546ec6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07546ec6 = '\x01';
  }
  UStack_58.fields.m_UV.fields.x = 0.0;
  UStack_58.fields.m_UV.fields.y = 0.0;
  UStack_58.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  UStack_58.fields.m_Normal.fields.y = 0.0;
  UStack_58.fields.m_Normal.fields.z = 0.0;
  UStack_58.fields.m_FaceID = 0;
  UStack_58.fields.m_Distance = 0.0;
  UStack_58.fields.m_Point.fields.x = 0.0;
  UStack_58.fields.m_Point.fields.y = 0.0;
  UStack_58.fields.m_Point.fields.z = 0.0;
  UStack_58.fields.m_Normal.fields.x = 0.0;
  UStack_c0.fields.m_Mask = (UnityEngine_LayerMask_Fields)0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) goto label_05af338c;
  UStack_90.z = (start->fields).Value.fields.x;
  fStack_84 = (start->fields).Value.fields.y;
  uStack_80._0_4_ = 0.0;
  uStack_80._4_4_ = 0.0;
  fStack_bc = (start->fields).Value.fields.z;
  uVar2 = (end->fields).Value.fields.x;
  uVar4 = (end->fields).Value.fields.y;
  fStack_b0 = 0.0;
  fStack_ac = 0.0;
  fVar15 = (end->fields).Value.fields.z;
  fStack_b8 = (float)uVar2;
  fStack_b4 = (float)uVar4;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar9 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
  if (dimensions == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_05af338c;
  uStack_a8._0_4_ = (dimensions->fields).Value.fields.x;
  uStack_a8._4_4_ = (dimensions->fields).Value.fields.y;
  uStack_a0 = 0;
  fVar1 = (dimensions->fields).Value.fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    UStack_90.x = 0.0;
    UStack_90.y = 0.0;
  }
  else {
    UStack_90.x = 0.0;
    UStack_90.y = 0.0;
  }
  UStack_90.x = 0.0;
  UStack_90.y = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    UStack_90.x = 0.0;
    UStack_90.y = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fStack_b8 = fStack_b8 - UStack_90.z;
  fStack_b4 = fStack_b4 - fStack_84;
  fStack_b0 = fStack_b0 - (float)uStack_80;
  fStack_ac = fStack_ac - uStack_80._4_4_;
  fVar15 = fVar15 - fStack_bc;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar16 = fVar15 * fVar15 + fStack_b4 * fStack_b4 + fStack_b8 * fStack_b8;
  if (fVar16 < 0.0) {
    fVar12 = sqrtf(fVar16);
    uVar13 = extraout_XMM0_Db;
    if (fVar12 <= 1e-05) goto label_05af3146;
label_05af3181:
    fVar15 = fVar15 / fVar12;
    auVar7._4_4_ = fStack_b4;
    auVar7._0_4_ = fStack_b8;
    auVar7._8_4_ = fStack_b0;
    auVar7._12_4_ = fStack_ac;
    auVar14._4_4_ = fVar12;
    auVar14._0_4_ = fVar12;
    auVar14._8_4_ = uVar13;
    auVar14._12_4_ = uVar13;
    auVar14 = divps(auVar7,auVar14);
    UStack_90.x = auVar14._0_4_;
    UStack_90.y = auVar14._4_4_;
    pUVar10 = (UnityEngine_Vector3_StaticFields *)&UStack_90;
  }
  else {
    uVar13 = 0;
    fVar12 = SQRT(fVar16);
    if (1e-05 < fVar12) goto label_05af3181;
label_05af3146:
    pUVar10 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar15 = (pUVar10->zeroVector).fields.z;
  }
  if (orientation != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    auStack_78._0_4_ = (pUVar10->zeroVector).fields.x;
    auStack_78._4_4_ = (pUVar10->zeroVector).fields.y;
    auStack_78._8_4_ = 0.0;
    auStack_78._12_4_ = 0.0;
    uVar3 = (orientation->fields).Value.fields.x;
    uVar5 = (orientation->fields).Value.fields.y;
    fStack_b0 = 0.0;
    fStack_ac = 0.0;
    auStack_78._16_4_ = (orientation->fields).Value.fields.z;
    auStack_78._20_4_ = (orientation->fields).Value.fields.w;
    auStack_60._0_4_ = 0.0;
    auStack_60._4_4_ = 0.0;
    fStack_b8 = (float)uVar3;
    fStack_b4 = (float)uVar5;
    if (Il2CppMethodInitialized_0753e729 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_0753e729 = '\x01';
      uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar6 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    if (fVar16 < 0.0) {
      fVar16 = sqrtf(fVar16);
    }
    else {
      fVar16 = SQRT(fVar16);
    }
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    uStack_a8 = CONCAT44(uStack_a8._4_4_ * 0.5,(float)uStack_a8 * 0.5);
    uStack_a0 = CONCAT44(uStack_a0._4_4_ * 0.0,(float)uStack_a0 * 0.0);
    UStack_c0 = Utility_PhysicsLayer__CopyMask(iVar9,(MethodInfo *)0x0);
    iVar9 = UnityEngine_LayerMask__get_value(&UStack_c0,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    pCVar11 = (CustomLogic_BuiltinClassInstance_o *)0x0;
    orientation_00.fields.y = fStack_b4;
    orientation_00.fields.x = fStack_b8;
    center.fields.z = fStack_bc;
    center.fields.x = UStack_90.z;
    center.fields.y = fStack_84;
    halfExtents.fields.z = fVar1 * 0.5;
    halfExtents.fields.x = (float)uStack_a8;
    halfExtents.fields.y = uStack_a8._4_4_;
    direction.fields.z = fVar15;
    direction.fields.x = (float)auStack_78._0_4_;
    direction.fields.y = (float)auStack_78._4_4_;
    orientation_00.fields.z = (float)auStack_78._16_4_;
    orientation_00.fields.w = (float)auStack_78._20_4_;
    bVar8 = UnityEngine_Physics__BoxCast_69db1b0
                      (center,halfExtents,direction,&UStack_58,orientation_00,fVar16,iVar9,(MethodInfo *)0x0);
    if (bVar8) {
      other = UnityEngine_RaycastHit__get_collider(&UStack_58,(MethodInfo *)0x0);
      pCVar11 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)pCVar11;
  }
label_05af338c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$BoxCastAll
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__BoxCastAll (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, CustomLogic_CustomLogicVector3Builtin_o* dimensions, CustomLogic_CustomLogicQuaternionBuiltin_o* orientation, System_String_o* collideWith, const MethodInfo* method);
// 0x5af33a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5af3827: mov r15, qword ptr [rsp + 0x30]

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__BoxCastAll
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          CustomLogic_CustomLogicVector3Builtin_o *dimensions,
          CustomLogic_CustomLogicQuaternionBuiltin_o *orientation,System_String_o *collideWith,
          MethodInfo *method)

{
  int32_t *piVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  UnityEngine_Vector2_Fields UVar9;
  System_Collections_Generic_List_object__o *__this;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  MethodInfo *pMVar15;
  int32_t iVar16;
  UnityEngine_Vector3_StaticFields *pUVar17;
  UnityEngine_RaycastHit_array *pUVar18;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  ulong uVar19;
  UnityEngine_Collider_o *pUVar20;
  CustomLogic_BuiltinClassInstance_o *pCVar21;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar22;
  System_Object_array *pSVar23;
  Il2CppObject *pIVar24;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_02;
  int iVar25;
  ulong uVar26;
  UnityEngine_RaycastHit_o *pUVar27;
  CustomLogic_BuiltinClassInstance_o *pCVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  UnityEngine_Vector3_o UVar35;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o halfExtents;
  UnityEngine_Vector3_o direction;
  UnityEngine_Quaternion_o orientation_00;
  UnityEngine_LayerMask_o aUStack_d0 [2];
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_90 [8];
  UnityEngine_RaycastHit_o UStack_88;
  float fStack_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  if (Il2CppMethodInitialized_07546ec7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07546ec7 = '\x01';
  }
  aUStack_d0[0].fields.m_Mask = (UnityEngine_LayerMask_Fields)0;
  UStack_88.fields.m_UV.fields.x = 0.0;
  UStack_88.fields.m_UV.fields.y = 0.0;
  UStack_88.fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0;
  UStack_88.fields.m_Normal.fields.y = 0.0;
  UStack_88.fields.m_Normal.fields.z = 0.0;
  UStack_88.fields.m_FaceID = 0;
  UStack_88.fields.m_Distance = 0.0;
  UStack_88.fields.m_Point.fields.x = 0.0;
  UStack_88.fields.m_Point.fields.y = 0.0;
  UStack_88.fields.m_Point.fields.z = 0.0;
  UStack_88.fields.m_Normal.fields.x = 0.0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) goto label_05af3ba8;
  uStack_a8 = *(CustomLogic_CustomLogicListBuiltin_o **)&(start->fields).Value.fields;
  uStack_a0 = 0;
  fVar30 = (start->fields).Value.fields.z;
  uVar3 = (end->fields).Value.fields.x;
  uVar5 = (end->fields).Value.fields.y;
  fStack_b0 = 0.0;
  fStack_ac = 0.0;
  fVar33 = (end->fields).Value.fields.z;
  fStack_b8 = (float)uVar3;
  fStack_b4 = (float)uVar5;
  if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
  }
  iVar16 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
  if (dimensions == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_05af3ba8;
  uStack_c8._0_4_ = (dimensions->fields).Value.fields.x;
  uStack_c8._4_4_ = (dimensions->fields).Value.fields.y;
  uStack_c0 = 0;
  fVar2 = (dimensions->fields).Value.fields.z;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
    auStack_90._0_4_ = 0.0;
    auStack_90._4_4_ = 0.0;
  }
  else {
    auStack_90._0_4_ = 0.0;
    auStack_90._4_4_ = 0.0;
  }
  auStack_90._0_4_ = 0.0;
  auStack_90._4_4_ = 0.0;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    auStack_90._0_4_ = 0.0;
    auStack_90._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fStack_b8 = fStack_b8 - (float)uStack_a8;
  fStack_b4 = fStack_b4 - uStack_a8._4_4_;
  fStack_b0 = fStack_b0 - (float)uStack_a0;
  fStack_ac = fStack_ac - uStack_a0._4_4_;
  fVar33 = fVar33 - fVar30;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar34 = fVar33 * fVar33 + fStack_b4 * fStack_b4 + fStack_b8 * fStack_b8;
  if (fVar34 < 0.0) {
    fVar29 = sqrtf(fVar34);
    uVar31 = extraout_XMM0_Db;
    if (1e-05 < fVar29) goto label_05af35d7;
label_05af359c:
    pUVar17 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar33 = (pUVar17->zeroVector).fields.z;
  }
  else {
    uVar31 = 0;
    fVar29 = SQRT(fVar34);
    if (fVar29 <= 1e-05) goto label_05af359c;
label_05af35d7:
    fVar33 = fVar33 / fVar29;
    auVar14._4_4_ = fStack_b4;
    auVar14._0_4_ = fStack_b8;
    auVar14._8_4_ = fStack_b0;
    auVar14._12_4_ = fStack_ac;
    auVar32._4_4_ = fVar29;
    auVar32._0_4_ = fVar29;
    auVar32._8_4_ = uVar31;
    auVar32._12_4_ = uVar31;
    auVar32 = divps(auVar14,auVar32);
    auStack_90._0_4_ = auVar32._0_4_;
    auStack_90._4_4_ = auVar32._4_4_;
    pUVar17 = (UnityEngine_Vector3_StaticFields *)auStack_90;
  }
  if (orientation == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) goto label_05af3ba8;
  fStack_58 = (pUVar17->zeroVector).fields.x;
  fStack_54 = (pUVar17->zeroVector).fields.y;
  uStack_50._0_4_ = 0.0;
  uStack_50._4_4_ = 0.0;
  uVar4 = (orientation->fields).Value.fields.x;
  uVar6 = (orientation->fields).Value.fields.y;
  fStack_b0 = 0.0;
  fStack_ac = 0.0;
  auStack_48._0_4_ = (orientation->fields).Value.fields.z;
  auStack_48._4_4_ = (orientation->fields).Value.fields.w;
  auStack_48._8_4_ = 0.0;
  auStack_48._12_4_ = 0.0;
  fStack_b8 = (float)uVar4;
  fStack_b4 = (float)uVar6;
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) goto label_05af36cb;
label_05af363d:
    if (0.0 <= fVar34) goto label_05af3649;
label_05af36e2:
    fVar34 = sqrtf(fVar34);
  }
  else {
    if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor != 0) goto label_05af363d;
label_05af36cb:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (fVar34 < 0.0) goto label_05af36e2;
label_05af3649:
    fVar34 = SQRT(fVar34);
  }
  if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
  }
  uStack_c8 = CONCAT44(uStack_c8._4_4_ * 0.5,(float)uStack_c8 * 0.5);
  uStack_c0 = CONCAT44(uStack_c0._4_4_ * 0.0,(float)uStack_c0 * 0.0);
  aUStack_d0[0] = Utility_PhysicsLayer__CopyMask(iVar16,(MethodInfo *)0x0);
  iVar16 = UnityEngine_LayerMask__get_value(aUStack_d0,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  orientation_00.fields.y = fStack_b4;
  orientation_00.fields.x = fStack_b8;
  UVar35.fields.z = fVar30;
  UVar35.fields._0_8_ = uStack_a8;
  halfExtents.fields.z = fVar2 * 0.5;
  halfExtents.fields.x = (float)uStack_c8;
  halfExtents.fields.y = uStack_c8._4_4_;
  direction.fields.z = fVar33;
  direction.fields.x = fStack_58;
  direction.fields.y = fStack_54;
  orientation_00.fields.z = (float)auStack_48._0_4_;
  orientation_00.fields.w = (float)auStack_48._4_4_;
  pUVar18 = UnityEngine_Physics__BoxCastAll_69ddf50
                      (UVar35,halfExtents,direction,orientation_00,fVar34,iVar16,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  if (pUVar18 != (UnityEngine_RaycastHit_array *)0x0) {
    iVar25 = (int)pUVar18->max_length;
    uVar19 = pUVar18->max_length & 0xffffffff;
    uStack_a8 = __this_00;
    if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (0 < iVar25) {
        pUVar27 = pUVar18->m_Items;
        uVar26 = 0;
        do {
          if (uVar19 <= uVar26) goto label_05af3bad;
          UStack_88.fields.m_Point.fields.x = (pUVar27->fields).m_Point.fields.x;
          UStack_88.fields.m_Point.fields.y = (pUVar27->fields).m_Point.fields.y;
          UStack_88.fields._8_8_ = *(undefined8 *)&(pUVar27->fields).m_Point.fields.z;
          UStack_88.fields.m_Normal.fields.y = (pUVar27->fields).m_Normal.fields.y;
          UStack_88.fields.m_Normal.fields.z = (pUVar27->fields).m_Normal.fields.z;
          uVar12 = (pUVar27->fields).m_FaceID;
          uVar13 = (pUVar27->fields).m_Distance;
          UVar9 = (pUVar27->fields).m_UV.fields;
          UStack_88.fields.m_Collider.fields.m_Data =
               (UnityEngine_EntityId_Fields)(pUVar27->fields).m_Collider.fields.m_Data;
          UStack_88.fields.m_UV.fields.x = UVar9.x;
          UStack_88.fields.m_UV.fields.y = UVar9.y;
          UStack_88.fields.m_FaceID = uVar12;
          UStack_88.fields.m_Distance = (float)uVar13;
          pUVar20 = UnityEngine_RaycastHit__get_collider(&UStack_88,(MethodInfo *)0x0);
          pCVar21 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar20,(MethodInfo *)0x0);
          if (pCVar21 != (CustomLogic_BuiltinClassInstance_o *)0x0) goto label_05af3ba8;
          uVar26 = uVar26 + 1;
          uVar8 = (uint)pUVar18->max_length;
          uVar19 = (ulong)uVar8;
          pUVar27 = pUVar27 + 1;
        } while ((long)uVar26 < (long)(int)uVar8);
      }
    }
    else if (0 < iVar25) {
      pUVar27 = pUVar18->m_Items;
      uVar26 = 0;
      do {
        if (uVar19 <= uVar26) {
label_05af3bad:
          ThrowIndexOutOfRangeException();
        }
        UStack_88.fields.m_Point.fields.x = (pUVar27->fields).m_Point.fields.x;
        UStack_88.fields.m_Point.fields.y = (pUVar27->fields).m_Point.fields.y;
        UStack_88.fields._8_8_ = *(undefined8 *)&(pUVar27->fields).m_Point.fields.z;
        UStack_88.fields.m_Normal.fields.y = (pUVar27->fields).m_Normal.fields.y;
        UStack_88.fields.m_Normal.fields.z = (pUVar27->fields).m_Normal.fields.z;
        uVar10 = (pUVar27->fields).m_FaceID;
        uVar11 = (pUVar27->fields).m_Distance;
        UVar9 = (pUVar27->fields).m_UV.fields;
        UStack_88.fields.m_Collider.fields.m_Data =
             (UnityEngine_EntityId_Fields)(pUVar27->fields).m_Collider.fields.m_Data;
        UStack_88.fields.m_UV.fields.x = UVar9.x;
        UStack_88.fields.m_UV.fields.y = UVar9.y;
        UStack_88.fields.m_FaceID = uVar10;
        UStack_88.fields.m_Distance = (float)uVar11;
        pUVar20 = UnityEngine_RaycastHit__get_collider(&UStack_88,(MethodInfo *)0x0);
        pCVar21 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar20,(MethodInfo *)0x0);
        if (pCVar21 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
          __this = (uStack_a8->fields).List;
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
          CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_01,(MethodInfo *)0x0);
          bVar7 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
          pCVar28 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar7 <= (pCVar21->klass->_2).typeHierarchyDepth) &&
             (pCVar28 = (CustomLogic_BuiltinClassInstance_o *)0x0,
             (pCVar21->klass->_2).typeHierarchy[(ulong)bVar7 - 1] ==
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
            pCVar28 = pCVar21;
          }
          if (__this_01 == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) goto label_05af3ba8;
          fStack_b8 = (float)uVar26;
          fStack_b4 = (float)(uVar26 >> 0x20);
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_01,pCVar28 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
          bVar7 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
          pCVar28 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar7 <= (pCVar21->klass->_2).typeHierarchyDepth) &&
             (pCVar28 = pCVar21,
             (pCVar21->klass->_2).typeHierarchy[(ulong)bVar7 - 1] !=
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
            pCVar28 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          }
          (__this_01->fields)._IsMapObject_k__BackingField =
               pCVar28 != (CustomLogic_BuiltinClassInstance_o *)0x0;
          UVar35 = UnityEngine_RaycastHit__get_point(&UStack_88,(MethodInfo *)0x0);
          uStack_c8._0_4_ = UVar35.fields.z;
          pCVar22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          value.fields.z = (float)uStack_c8;
          value.fields.x = UVar35.fields.x;
          value.fields.y = UVar35.fields.y;
          CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar22,value,(MethodInfo *)0x0);
          (__this_01->fields)._Point_k__BackingField = pCVar22;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Point_k__BackingField);
          UVar35 = UnityEngine_RaycastHit__get_normal(&UStack_88,(MethodInfo *)0x0);
          uStack_c8 = CONCAT44(uStack_c8._4_4_,UVar35.fields.z);
          pCVar22 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          value_00.fields.z = (float)uStack_c8;
          value_00.fields.x = UVar35.fields.x;
          value_00.fields.y = UVar35.fields.y;
          CustomLogic_CustomLogicVector3Builtin___ctor_58df850(pCVar22,value_00,(MethodInfo *)0x0);
          (__this_01->fields)._Normal_k__BackingField = pCVar22;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Normal_k__BackingField);
          fVar30 = UnityEngine_RaycastHit__get_distance(&UStack_88,(MethodInfo *)0x0);
          (__this_01->fields)._Distance_k__BackingField = fVar30;
          (__this_01->fields)._Collider_k__BackingField = pCVar21;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Collider_k__BackingField);
          pSVar23 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          pUVar20 = UnityEngine_RaycastHit__get_collider(&UStack_88,(MethodInfo *)0x0);
          if (pSVar23 == (System_Object_array *)0x0) goto label_05af3ba8;
          if ((pUVar20 != (UnityEngine_Collider_o *)0x0) &&
             (pIVar24 = il2cpp_vm_Object_IsInst
                                  ((Il2CppObject *)pUVar20,(((pSVar23->obj).klass)->_1).element_class),
             pIVar24 == (Il2CppObject *)0x0)) {
            pIVar24 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar24,(MethodInfo *)0x0);
          }
          if ((int)pSVar23->max_length == 0) goto label_05af3bad;
          pSVar23->m_Items[0] = (Il2CppObject *)pUVar20;
          Il2CppCodeGenWriteBarrier(pSVar23->m_Items);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_58f2270(__this_02,pSVar23,(MethodInfo *)0x0);
          (__this_01->fields)._ColliderInfo_k__BackingField = __this_02;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._ColliderInfo_k__BackingField);
          pMVar15 = MethodInfo_System_Collections_Generic_List_object_Add;
          if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_05af3ba8;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar23 = (__this->fields)._items;
          if (pSVar23 == (System_Object_array *)0x0) goto label_05af3ba8;
          uVar8 = (__this->fields)._size;
          uVar26 = CONCAT44(fStack_b4,fStack_b8);
          if (uVar8 < (uint)pSVar23->max_length) {
            (__this->fields)._size = uVar8 + 1;
            pSVar23->m_Items[(int)uVar8] = (Il2CppObject *)__this_01;
            Il2CppCodeGenWriteBarrier(pSVar23->m_Items + (int)uVar8);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (__this,(Il2CppObject *)__this_01,
                       (MethodInfo_395D230 *)pMVar15->klass->rgctx_data[0xe].method);
          }
        }
        uVar26 = uVar26 + 1;
        uVar8 = (uint)pUVar18->max_length;
        uVar19 = (ulong)uVar8;
        pUVar27 = pUVar27 + 1;
      } while ((long)uVar26 < (long)(int)uVar8);
    }
    return uStack_a8;
  }
label_05af3ba8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$ClosestPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPhysicsBuiltin__ClosestPoint (CustomLogic_CustomLogicVector3Builtin_o* point, CustomLogic_CustomLogicColliderBuiltin_o* collider, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicQuaternionBuiltin_o* rotation, const MethodInfo* method);
// 0x5af3bd0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPhysicsBuiltin__ClosestPoint
          (CustomLogic_CustomLogicVector3Builtin_o *point,CustomLogic_CustomLogicColliderBuiltin_o *collider,
          CustomLogic_CustomLogicVector3Builtin_o *position,
          CustomLogic_CustomLogicQuaternionBuiltin_o *rotation,MethodInfo *method)

{
  UnityEngine_Collider_o *collider_00;
  UnityEngine_Vector3_Fields position_00;
  UnityEngine_Quaternion_Fields rotation_00;
  UnityEngine_Vector3_Fields point_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546ec8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07546ec8 = '\x01';
  }
  if ((((point == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
       (collider == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0)) ||
      (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (rotation == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  point_00 = (point->fields).Value.fields;
  collider_00 = (collider->fields).collider;
  position_00 = (position->fields).Value.fields;
  rotation_00 = (rotation->fields).Value.fields;
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
  }
  value = UnityEngine_Physics__ClosestPoint
                    ((UnityEngine_Vector3_o)point_00,collider_00,(UnityEngine_Vector3_o)position_00,
                     (UnityEngine_Quaternion_o)rotation_00,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this,value,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$ComputePenetration
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPhysicsBuiltin__ComputePenetration (CustomLogic_CustomLogicColliderBuiltin_o* colliderA, CustomLogic_CustomLogicVector3Builtin_o* positionA, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationA, CustomLogic_CustomLogicColliderBuiltin_o* colliderB, CustomLogic_CustomLogicVector3Builtin_o* positionB, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationB, const MethodInfo* method);
// 0x5af3d10

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPhysicsBuiltin__ComputePenetration
          (CustomLogic_CustomLogicColliderBuiltin_o *colliderA,
          CustomLogic_CustomLogicVector3Builtin_o *positionA,
          CustomLogic_CustomLogicQuaternionBuiltin_o *rotationA,
          CustomLogic_CustomLogicColliderBuiltin_o *colliderB,
          CustomLogic_CustomLogicVector3Builtin_o *positionB,
          CustomLogic_CustomLogicQuaternionBuiltin_o *rotationB,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UnityEngine_Collider_o *colliderA_00;
  UnityEngine_Collider_o *colliderB_00;
  bool bVar7;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar8;
  float fVar9;
  UnityEngine_Quaternion_o rotationA_00;
  UnityEngine_Vector3_o positionA_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o positionB_00;
  UnityEngine_Quaternion_o rotationB_00;
  float local_c0;
  float local_bc;
  UnityEngine_Vector3_Fields local_b8;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_07546ec9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07546ec9 = '\x01';
  }
  local_b8.z = 0.0;
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_c0 = 0.0;
  if ((((colliderA == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
       (positionA == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
      (rotationA == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) ||
     (((colliderB == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0 ||
       (positionB == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
      (rotationB == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)))) {
    ThrowNullReferenceException();
  }
  colliderA_00 = (colliderA->fields).collider;
  uVar1._0_4_ = (positionA->fields).Value.fields.x;
  uVar1._4_4_ = (positionA->fields).Value.fields.y;
  fVar8 = (positionA->fields).Value.fields.z;
  uVar2._0_4_ = (rotationA->fields).Value.fields.x;
  uVar2._4_4_ = (rotationA->fields).Value.fields.y;
  uVar3._0_4_ = (rotationA->fields).Value.fields.z;
  uVar3._4_4_ = (rotationA->fields).Value.fields.w;
  colliderB_00 = (colliderB->fields).collider;
  uVar4._0_4_ = (positionB->fields).Value.fields.x;
  uVar4._4_4_ = (positionB->fields).Value.fields.y;
  fVar9 = (positionB->fields).Value.fields.z;
  uVar5._0_4_ = (rotationB->fields).Value.fields.x;
  uVar5._4_4_ = (rotationB->fields).Value.fields.y;
  uVar6._0_4_ = (rotationB->fields).Value.fields.z;
  uVar6._4_4_ = (rotationB->fields).Value.fields.w;
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    uStack_90 = 0;
    local_a8._0_4_ = fVar8;
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    local_bc = fVar9;
    local_98 = uVar1;
    local_88 = uVar6;
    local_78 = uVar5;
    local_68 = uVar4;
    local_58 = uVar3;
    local_48 = uVar2;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    uVar1._0_4_ = (undefined4)local_98;
    uVar1._4_4_ = local_98._4_4_;
    fVar8 = (float)local_a8._0_4_;
    uVar2._0_4_ = (undefined4)local_48;
    uVar2._4_4_ = local_48._4_4_;
    uVar3._0_4_ = (undefined4)local_58;
    uVar3._4_4_ = local_58._4_4_;
    uVar4._0_4_ = (undefined4)local_68;
    uVar4._4_4_ = local_68._4_4_;
    fVar9 = local_bc;
    uVar5._0_4_ = (undefined4)local_78;
    uVar5._4_4_ = local_78._4_4_;
    uVar6._0_4_ = (undefined4)local_88;
    uVar6._4_4_ = local_88._4_4_;
  }
  rotationA_00.fields.y = (float)uVar2._4_4_;
  rotationA_00.fields.x = (float)(undefined4)uVar2;
  rotationA_00.fields.w = (float)uVar3._4_4_;
  rotationA_00.fields.z = (float)(undefined4)uVar3;
  positionA_00.fields.y = (float)uVar1._4_4_;
  positionA_00.fields.x = (float)(undefined4)uVar1;
  positionA_00.fields.z = fVar8;
  positionB_00.fields.y = (float)uVar4._4_4_;
  positionB_00.fields.x = (float)(undefined4)uVar4;
  positionB_00.fields.z = fVar9;
  rotationB_00.fields.y = (float)uVar5._4_4_;
  rotationB_00.fields.x = (float)(undefined4)uVar5;
  rotationB_00.fields.w = (float)uVar6._4_4_;
  rotationB_00.fields.z = (float)(undefined4)uVar6;
  bVar7 = UnityEngine_Physics__ComputePenetration
                    (colliderA_00,positionA_00,rotationA_00,colliderB_00,positionB_00,rotationB_00,
                     (UnityEngine_Vector3_o *)&local_b8,&local_c0,(MethodInfo *)0x0);
  if (bVar7) {
    local_98 = CONCAT44(local_c0 * local_b8.y,local_c0 * local_b8.x);
    uStack_90 = CONCAT44(local_c0 * 0.0,local_c0 * 0.0);
    local_a8 = ZEXT416((uint)(local_c0 * local_b8.z));
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    value.fields.z = (float)local_a8._0_4_;
    value.fields.x = (float)(undefined4)local_98;
    value.fields.y = (float)local_98._4_4_;
    CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this,value,(MethodInfo *)0x0);
  }
  else {
    __this = CustomLogic_CustomLogicVector3Builtin__get_Zero((MethodInfo *)0x0);
  }
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$AreCollidersOverlapping
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__AreCollidersOverlapping (CustomLogic_CustomLogicColliderBuiltin_o* colliderA, CustomLogic_CustomLogicVector3Builtin_o* positionA, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationA, CustomLogic_CustomLogicColliderBuiltin_o* colliderB, CustomLogic_CustomLogicVector3Builtin_o* positionB, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationB, const MethodInfo* method);
// 0x5af3ef0

bool CustomLogic_CustomLogicPhysicsBuiltin__AreCollidersOverlapping
               (CustomLogic_CustomLogicColliderBuiltin_o *colliderA,
               CustomLogic_CustomLogicVector3Builtin_o *positionA,
               CustomLogic_CustomLogicQuaternionBuiltin_o *rotationA,
               CustomLogic_CustomLogicColliderBuiltin_o *colliderB,
               CustomLogic_CustomLogicVector3Builtin_o *positionB,
               CustomLogic_CustomLogicQuaternionBuiltin_o *rotationB,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  UnityEngine_Collider_o *colliderA_00;
  UnityEngine_Collider_o *colliderB_00;
  bool bVar9;
  UnityEngine_Quaternion_o rotationA_00;
  UnityEngine_Vector3_o positionA_00;
  UnityEngine_Quaternion_o rotationB_00;
  UnityEngine_Vector3_o positionB_00;
  float local_ac;
  UnityEngine_Vector3_Fields local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_07546eca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_07546eca = '\x01';
  }
  local_a8.z = 0.0;
  local_a8.x = 0.0;
  local_a8.y = 0.0;
  local_ac = 0.0;
  if ((((colliderA == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) ||
       (positionA == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
      (rotationA == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) ||
     (((colliderB == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0 ||
       (positionB == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
      (rotationB == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)))) {
    ThrowNullReferenceException();
  }
  colliderA_00 = (colliderA->fields).collider;
  uVar3._0_4_ = (positionA->fields).Value.fields.x;
  uVar3._4_4_ = (positionA->fields).Value.fields.y;
  fVar1 = (positionA->fields).Value.fields.z;
  uVar4._0_4_ = (rotationA->fields).Value.fields.x;
  uVar4._4_4_ = (rotationA->fields).Value.fields.y;
  uVar5._0_4_ = (rotationA->fields).Value.fields.z;
  uVar5._4_4_ = (rotationA->fields).Value.fields.w;
  colliderB_00 = (colliderB->fields).collider;
  uVar6._0_4_ = (positionB->fields).Value.fields.x;
  uVar6._4_4_ = (positionB->fields).Value.fields.y;
  fVar2 = (positionB->fields).Value.fields.z;
  uVar7._0_4_ = (rotationB->fields).Value.fields.x;
  uVar7._4_4_ = (rotationB->fields).Value.fields.y;
  uVar8._0_4_ = (rotationB->fields).Value.fields.z;
  uVar8._4_4_ = (rotationB->fields).Value.fields.w;
  if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
    uStack_40 = 0;
    uStack_50 = 0;
    uStack_60 = 0;
    uStack_70 = 0;
    uStack_80 = 0;
    uStack_90 = 0;
    local_98 = uVar8;
    local_88 = uVar7;
    local_78 = uVar6;
    local_68 = uVar5;
    local_58 = uVar4;
    local_48 = uVar3;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    uVar3._0_4_ = (undefined4)local_48;
    uVar3._4_4_ = local_48._4_4_;
    uVar4._0_4_ = (undefined4)local_58;
    uVar4._4_4_ = local_58._4_4_;
    uVar5._0_4_ = (undefined4)local_68;
    uVar5._4_4_ = local_68._4_4_;
    uVar6._0_4_ = (undefined4)local_78;
    uVar6._4_4_ = local_78._4_4_;
    uVar7._0_4_ = (undefined4)local_88;
    uVar7._4_4_ = local_88._4_4_;
    uVar8._0_4_ = (undefined4)local_98;
    uVar8._4_4_ = local_98._4_4_;
  }
  rotationA_00.fields.y = (float)uVar4._4_4_;
  rotationA_00.fields.x = (float)(undefined4)uVar4;
  rotationA_00.fields.w = (float)uVar5._4_4_;
  rotationA_00.fields.z = (float)(undefined4)uVar5;
  positionA_00.fields.y = (float)uVar3._4_4_;
  positionA_00.fields.x = (float)(undefined4)uVar3;
  positionA_00.fields.z = fVar1;
  rotationB_00.fields.y = (float)uVar7._4_4_;
  rotationB_00.fields.x = (float)(undefined4)uVar7;
  rotationB_00.fields.w = (float)uVar8._4_4_;
  rotationB_00.fields.z = (float)(undefined4)uVar8;
  positionB_00.fields.y = (float)uVar6._4_4_;
  positionB_00.fields.x = (float)(undefined4)uVar6;
  positionB_00.fields.z = fVar2;
  bVar9 = UnityEngine_Physics__ComputePenetration
                    (colliderA_00,positionA_00,rotationA_00,colliderB_00,positionB_00,rotationB_00,
                     (UnityEngine_Vector3_o *)&local_a8,&local_ac,(MethodInfo *)0x0);
  return bVar9;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPhysicsBuiltin__get_ClassName (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x5af4060

System_String_o *
CustomLogic_CustomLogicPhysicsBuiltin__get_ClassName
          (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546ecb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Physics");
    Il2CppMethodInitialized_07546ecb = '\x01';
  }
  return "Physics";
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__get_IsAbstract (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x5af4090

bool CustomLogic_CustomLogicPhysicsBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__get_IsStatic (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x5af40a0

bool CustomLogic_CustomLogicPhysicsBuiltin__get_IsStatic
               (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x5af40b0

bool CustomLogic_CustomLogicPhysicsBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


