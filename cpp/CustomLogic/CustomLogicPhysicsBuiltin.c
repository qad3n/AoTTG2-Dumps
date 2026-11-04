// Type: CustomLogic.CustomLogicPhysicsBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhysicsBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicPhysicsBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicPhysicsBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPhysicsBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x18203c390

CustomLogic_CustomLogicPhysicsBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346505 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin);
    Il2CppMethodInitialized_184346505 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin);
      if (Il2CppMethodInitialized_1843464f7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843464f7 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicPhysicsBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPhysicsBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x182044a40

void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346514 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346514 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPhysicsLayerMask>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__GetPhysicsLayerMask_b__2_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203fb70

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__GetPhysicsLayerMask_b__2_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_00;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Int32_array *layers;
  Il2CppObject *pIVar2;
  UnityEngine_LayerMask_Fields local_res18;
  int32_t local_18 [4];
  
  if (Il2CppMethodInitialized_184346515 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346515 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar2 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
  if (Il2CppMethodInitialized_1843464f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_object_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_c_GetPhysicsLayerMask_b__1_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
    Il2CppMethodInitialized_1843464f8 = '\x01';
  }
  local_res18.m_Mask = 0;
  if (pCVar1 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    source = (pCVar1->fields).List;
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
    }
    __this_00 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9__1_0;
    if (__this_00 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
      }
      pIVar2 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9;
      __this_00 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_int);
      System_Func_object__int____ctor
                (__this_00,pIVar2,
                 (intptr_t)MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_c_GetPhysicsLayerMask_b__1_0,
                 (MethodInfo_AF4D50 *)0x0);
      TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9__1_0 =
           (System_Func_object__int__o *)__this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9__1_0,__this_00);
    }
    source_00 = System_Linq_Enumerable__Select_Vector3__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)__this_00,
                           (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_object_int);
    layers = System_Linq_Enumerable__ToArray_int_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                        (MethodInfo_6C7C70 *)MethodInfo_System_Linq_Enumerable_ToArray_int);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    local_res18.m_Mask = (int32_t)Utility_PhysicsLayer__GetMask(layers,(MethodInfo *)0x0);
    local_18[0] = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res18,(MethodInfo *)0x0);
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_18);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCast>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCast_b__3_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040550

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
  
  if (Il2CppMethodInitialized_184346516 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346516 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (1 < (uint)__a->max_length) {
        end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[2],
                                   (MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__LineCast(start,end,collideWith,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCastWithMask>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCastWithMask_b__4_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040630

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
  
  if (Il2CppMethodInitialized_184346517 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346517 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (1 < (uint)__a->max_length) {
        end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          mask = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                           (__a->m_Items[2],
                            (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
          pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__LineCastWithMask(start,end,mask,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCastAll>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCastAll_b__5_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182040470

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
  
  if (Il2CppMethodInitialized_184346518 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346518 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (1 < (uint)__a->max_length) {
        end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[2],
                                   (MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__LineCastAll(start,end,collideWith,(MethodInfo *)0x0)
          ;
          return (Il2CppObject *)pCVar1;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCast>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCast_b__6_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820443d0

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
  
  if (Il2CppMethodInitialized_184346519 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346519 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar1,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                        );
      if (1 < (uint)__a->max_length) {
        end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          radius = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             (__a->m_Items[2],
                              (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                             );
          if (3 < (uint)__a->max_length) {
            collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    (__a->m_Items[3],
                                     (MethodInfo_66EB70 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
            pIVar1 = CustomLogic_CustomLogicPhysicsBuiltin__SphereCast
                               (start,end,radius,collideWith,(MethodInfo *)0x0);
            return pIVar1;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCastWithMask>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCastWithMask_b__7_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820444f0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCastWithMask_b__7_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  Il2CppObject *obj;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  int32_t layerMask;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  UnityEngine_Collider_o *other;
  CustomLogic_BuiltinClassInstance_o *pCVar9;
  float radius;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_RaycastHit_o local_98 [3];
  
  if (Il2CppMethodInitialized_18434651a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434651a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      pCVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        radius = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[2],
                            (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (3 < (uint)__a->max_length) {
          layerMask = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                                (__a->m_Items[3],
                                 (MethodInfo_66E9A0 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
          if (Il2CppMethodInitialized_1843464fd == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
            Il2CppMethodInitialized_1843464fd = '\x01';
          }
          local_98[0].fields.m_Normal.fields.y = 0.0;
          local_98[0].fields.m_Normal.fields.z = 0.0;
          local_98[0].fields.m_FaceID = 0;
          local_98[0].fields.m_Distance = 0.0;
          local_98[0].fields.m_UV.fields.x = 0.0;
          local_98[0].fields.m_UV.fields.y = 0.0;
          local_98[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
          local_98[0].fields.m_Point.fields.x = 0.0;
          local_98[0].fields.m_Point.fields.y = 0.0;
          local_98[0].fields.m_Point.fields.z = 0.0;
          local_98[0].fields.m_Normal.fields.x = 0.0;
          if ((pCVar7 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
             (pCVar8 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
            uVar2 = (pCVar8->fields).Value.fields.x;
            uVar4 = (pCVar8->fields).Value.fields.y;
            uVar3._0_4_ = (pCVar7->fields).Value.fields.x;
            uVar3._4_4_ = (pCVar7->fields).Value.fields.y;
            fVar1 = (pCVar7->fields).Value.fields.z;
            fVar12 = (pCVar8->fields).Value.fields.z - fVar1;
            local_b8.y = (float)uVar4 - uVar3._4_4_;
            local_b8.x = (float)uVar2 - (float)uVar3;
            local_b8.z = fVar12;
            if (Il2CppMethodInitialized_18433de5f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_18433de5f = '\x01';
            }
            fVar10 = (float)il2cpp_runtime_helper_180546a40(&local_b8);
            if (fVar10 <= 1e-05) {
              pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
              fVar11 = (pUVar5->zeroVector).fields.x;
              fVar13 = (pUVar5->zeroVector).fields.y;
              fVar12 = (pUVar5->zeroVector).fields.z;
            }
            else {
              fVar11 = ((float)uVar2 - (float)uVar3) / fVar10;
              fVar13 = ((float)uVar4 - uVar3._4_4_) / fVar10;
              fVar12 = fVar12 / fVar10;
            }
            fVar10 = (float)il2cpp_runtime_helper_180546a40(&local_b8);
            if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
            }
            local_b8.y = fVar13;
            local_b8.x = fVar11;
            local_b8.z = fVar12;
            local_a8._0_8_ = uVar3;
            local_a8.z = fVar1;
            bVar6 = UnityEngine_Physics__SphereCast_2fe64a0
                              ((UnityEngine_Vector3_o *)&local_a8,radius,(UnityEngine_Vector3_o *)&local_b8,
                               local_98,fVar10,layerMask,(MethodInfo *)0x0);
            if (bVar6) {
              other = UnityEngine_RaycastHit__get_collider(local_98,(MethodInfo *)0x0);
              pCVar9 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
            }
            else {
              pCVar9 = (CustomLogic_BuiltinClassInstance_o *)0x0;
            }
            return (Il2CppObject *)pCVar9;
          }
          ThrowNullReferenceException();
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCastAll>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCastAll_b__8_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820442b0

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
  
  if (Il2CppMethodInitialized_18434651b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434651b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (1 < (uint)__a->max_length) {
        end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          radius = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             (__a->m_Items[2],
                              (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                             );
          if (3 < (uint)__a->max_length) {
            collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    (__a->m_Items[3],
                                     (MethodInfo_66EB70 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
            pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__SphereCastAll
                               (start,end,radius,collideWith,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__BoxCast>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__BoxCast_b__9_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203d550

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
  
  if (Il2CppMethodInitialized_18434651c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434651c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar1,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                        );
      if (1 < (uint)__a->max_length) {
        end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          dimensions = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                 (__a->m_Items[2],
                                  (MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                 );
          if (3 < (uint)__a->max_length) {
            orientation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    (__a->m_Items[3],
                                     (MethodInfo_66EB70 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                                    );
            if (4 < (uint)__a->max_length) {
              collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                      (__a->m_Items[4],
                                       (MethodInfo_66EB70 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
              pIVar1 = CustomLogic_CustomLogicPhysicsBuiltin__BoxCast
                                 (start,end,dimensions,orientation,collideWith,(MethodInfo *)0x0);
              return pIVar1;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__BoxCastAll>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__BoxCastAll_b__10_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203d400

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
  
  if (Il2CppMethodInitialized_18434651d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434651d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (1 < (uint)__a->max_length) {
        end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          dimensions = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                 (__a->m_Items[2],
                                  (MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                 );
          if (3 < (uint)__a->max_length) {
            orientation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                    (__a->m_Items[3],
                                     (MethodInfo_66EB70 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                                    );
            if (4 < (uint)__a->max_length) {
              collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                      (__a->m_Items[4],
                                       (MethodInfo_66EB70 *)
                                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
              pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__BoxCastAll
                                 (start,end,dimensions,orientation,collideWith,(MethodInfo *)0x0);
              return (Il2CppObject *)pCVar1;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPoint>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__ClosestPoint_b__11_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203d7a0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__ClosestPoint_b__11_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  Il2CppObject *obj;
  UnityEngine_Collider_o *collider;
  undefined8 uVar6;
  undefined8 uVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  CustomLogic_CustomLogicColliderBuiltin_o *pCVar9;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar10;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar11;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_o local_58;
  UnityEngine_Quaternion_Fields local_48 [4];
  
  if (Il2CppMethodInitialized_18434651e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434651e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        pCVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin);
        if (2 < (uint)__a->max_length) {
          pCVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[2],
                               (MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                              );
          if (3 < (uint)__a->max_length) {
            pCVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[3],
                                 (MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                                );
            if (Il2CppMethodInitialized_184346501 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
              Il2CppMethodInitialized_184346501 = '\x01';
            }
            if ((((pCVar8 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
                 (pCVar9 != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0)) &&
                (pCVar10 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
               (pCVar11 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
              collider = (pCVar9->fields).collider;
              uVar1._0_4_ = (pCVar8->fields).Value.fields.x;
              uVar1._4_4_ = (pCVar8->fields).Value.fields.y;
              fVar4 = (pCVar8->fields).Value.fields.z;
              uVar2._0_4_ = (pCVar10->fields).Value.fields.x;
              uVar2._4_4_ = (pCVar10->fields).Value.fields.y;
              fVar5 = (pCVar10->fields).Value.fields.z;
              uVar6._0_4_ = (pCVar11->fields).Value.fields.x;
              uVar6._4_4_ = (pCVar11->fields).Value.fields.y;
              uVar7._0_4_ = (pCVar11->fields).Value.fields.z;
              uVar7._4_4_ = (pCVar11->fields).Value.fields.w;
              if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
              }
              local_78._0_8_ = uVar2;
              local_78.z = fVar5;
              local_68._0_8_ = uVar1;
              local_68.z = fVar4;
              local_48[0]._0_8_ = uVar6;
              local_48[0]._8_8_ = uVar7;
              pUVar12 = UnityEngine_Physics__ClosestPoint
                                  (&local_58,(UnityEngine_Vector3_o *)&local_68,collider,
                                   (UnityEngine_Vector3_o *)&local_78,(UnityEngine_Quaternion_o *)local_48,
                                   (MethodInfo *)0x0);
              uVar3._0_4_ = (pUVar12->fields).x;
              uVar3._4_4_ = (pUVar12->fields).y;
              fVar4 = (pUVar12->fields).z;
              pCVar8 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
              local_68._0_8_ = uVar3;
              local_68.z = fVar4;
              CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                        (pCVar8,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
              return (Il2CppObject *)pCVar8;
            }
            goto label_18203d9d8;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_18203d9d8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ComputePenetration>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__ComputePenetration_b__12_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203d9f0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__ComputePenetration_b__12_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  Il2CppObject *obj;
  UnityEngine_Collider_o *colliderA;
  UnityEngine_Collider_o *colliderB;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  CustomLogic_CustomLogicColliderBuiltin_o *pCVar12;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar13;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar14;
  CustomLogic_CustomLogicColliderBuiltin_o *pCVar15;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar16;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar17;
  float local_res18 [2];
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_Fields local_68 [5];
  
  if (Il2CppMethodInitialized_18434651f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434651f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin)
    ;
    if (1 < (uint)__a->max_length) {
      pCVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        pCVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[2],
                             (MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                            );
        if (3 < (uint)__a->max_length) {
          pCVar15 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[3],
                               (MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin
                              );
          if (4 < (uint)__a->max_length) {
            pCVar16 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[4],
                                 (MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                );
            if (5 < (uint)__a->max_length) {
              pCVar17 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[5],
                                   (MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                                  );
              if (Il2CppMethodInitialized_184346502 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
                Il2CppMethodInitialized_184346502 = '\x01';
              }
              local_a8.x = 0.0;
              local_a8.y = 0.0;
              local_a8.z = 0.0;
              local_res18[0] = 0.0;
              if ((((pCVar12 != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
                   (pCVar13 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
                  (pCVar14 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
                 (((pCVar15 != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0 &&
                   (pCVar16 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
                  (pCVar17 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)))) {
                colliderA = (pCVar12->fields).collider;
                uVar1._0_4_ = (pCVar13->fields).Value.fields.x;
                uVar1._4_4_ = (pCVar13->fields).Value.fields.y;
                fVar3 = (pCVar13->fields).Value.fields.z;
                uVar5._0_4_ = (pCVar14->fields).Value.fields.x;
                uVar5._4_4_ = (pCVar14->fields).Value.fields.y;
                uVar6._0_4_ = (pCVar14->fields).Value.fields.z;
                uVar6._4_4_ = (pCVar14->fields).Value.fields.w;
                colliderB = (pCVar15->fields).collider;
                uVar2._0_4_ = (pCVar16->fields).Value.fields.x;
                uVar2._4_4_ = (pCVar16->fields).Value.fields.y;
                fVar4 = (pCVar16->fields).Value.fields.z;
                uVar7._0_4_ = (pCVar17->fields).Value.fields.x;
                uVar7._4_4_ = (pCVar17->fields).Value.fields.y;
                uVar8._0_4_ = (pCVar17->fields).Value.fields.z;
                uVar8._4_4_ = (pCVar17->fields).Value.fields.w;
                if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
                }
                local_98._0_8_ = uVar2;
                local_98.z = fVar4;
                local_88._0_8_ = uVar1;
                local_88.z = fVar3;
                local_78._0_8_ = uVar7;
                local_78._8_8_ = uVar8;
                local_68[0]._0_8_ = uVar5;
                local_68[0]._8_8_ = uVar6;
                bVar11 = UnityEngine_Physics__ComputePenetration
                                   (colliderA,(UnityEngine_Vector3_o *)&local_88,
                                    (UnityEngine_Quaternion_o *)local_68,colliderB,
                                    (UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)&local_78,
                                    (UnityEngine_Vector3_o *)&local_a8,local_res18,(MethodInfo *)0x0);
                fVar4 = local_a8.z;
                fVar3 = local_res18[0];
                if (bVar11) {
                  fVar9 = local_a8.x;
                  fVar10 = local_a8.y;
                  pCVar13 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
                  local_98.z = fVar3 * fVar4;
                  local_98.y = fVar10 * fVar3;
                  local_98.x = fVar3 * fVar9;
                  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                            (pCVar13,(UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
                }
                else {
                  pCVar13 = CustomLogic_CustomLogicVector3Builtin__get_Zero((MethodInfo *)0x0);
                }
                return (Il2CppObject *)pCVar13;
              }
              ThrowNullReferenceException();
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
// 0x18203d100

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__AreCollidersOverlapping_b__13_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Collider_o *colliderA;
  UnityEngine_Collider_o *colliderB;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  CustomLogic_CustomLogicColliderBuiltin_o *pCVar9;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar10;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar11;
  CustomLogic_CustomLogicColliderBuiltin_o *pCVar12;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar13;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar14;
  Il2CppObject *pIVar15;
  undefined1 local_res18 [8];
  float local_b8 [2];
  UnityEngine_Vector3_Fields local_b0 [2];
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Quaternion_Fields local_78;
  UnityEngine_Quaternion_Fields local_68 [5];
  
  if (Il2CppMethodInitialized_184346520 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346520 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar15 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar15,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin
                       );
    if (1 < (uint)__a->max_length) {
      pCVar10 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        pCVar11 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                            (__a->m_Items[2],
                             (MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                            );
        if (3 < (uint)__a->max_length) {
          pCVar12 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                              (__a->m_Items[3],
                               (MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColliderBuiltin
                              );
          if (4 < (uint)__a->max_length) {
            pCVar13 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                (__a->m_Items[4],
                                 (MethodInfo_66EB70 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                                );
            if (5 < (uint)__a->max_length) {
              pCVar14 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[5],
                                   (MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin
                                  );
              if (Il2CppMethodInitialized_184346503 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
                Il2CppMethodInitialized_184346503 = '\x01';
              }
              local_b0[0].x = 0.0;
              local_b0[0].y = 0.0;
              local_b0[0].z = 0.0;
              local_b8[0] = 0.0;
              if ((((pCVar9 != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
                   (pCVar10 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
                  (pCVar11 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
                 (((pCVar12 != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0 &&
                   (pCVar13 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
                  (pCVar14 != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)))) {
                colliderA = (pCVar9->fields).collider;
                uVar1._0_4_ = (pCVar10->fields).Value.fields.x;
                uVar1._4_4_ = (pCVar10->fields).Value.fields.y;
                fVar3 = (pCVar10->fields).Value.fields.z;
                uVar5._0_4_ = (pCVar11->fields).Value.fields.x;
                uVar5._4_4_ = (pCVar11->fields).Value.fields.y;
                uVar6._0_4_ = (pCVar11->fields).Value.fields.z;
                uVar6._4_4_ = (pCVar11->fields).Value.fields.w;
                colliderB = (pCVar12->fields).collider;
                uVar2._0_4_ = (pCVar13->fields).Value.fields.x;
                uVar2._4_4_ = (pCVar13->fields).Value.fields.y;
                fVar4 = (pCVar13->fields).Value.fields.z;
                uVar7._0_4_ = (pCVar14->fields).Value.fields.x;
                uVar7._4_4_ = (pCVar14->fields).Value.fields.y;
                uVar8._0_4_ = (pCVar14->fields).Value.fields.z;
                uVar8._4_4_ = (pCVar14->fields).Value.fields.w;
                if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
                }
                local_98._0_8_ = uVar2;
                local_98.z = fVar4;
                local_88._0_8_ = uVar1;
                local_88.z = fVar3;
                local_78._0_8_ = uVar7;
                local_78._8_8_ = uVar8;
                local_68[0]._0_8_ = uVar5;
                local_68[0]._8_8_ = uVar6;
                local_res18[0] =
                     UnityEngine_Physics__ComputePenetration
                               (colliderA,(UnityEngine_Vector3_o *)&local_88,
                                (UnityEngine_Quaternion_o *)local_68,colliderB,
                                (UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)&local_78,
                                (UnityEngine_Vector3_o *)local_b0,local_b8,(MethodInfo *)0x0);
                pIVar15 = il2cpp_value_box(g_data_184354de8,local_res18);
                return pIVar15;
              }
              ThrowNullReferenceException();
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
// 0x1820208f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicPhysicsBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184346506 == '\0') {
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
    Il2CppMethodInitialized_184346506 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x3ff74f8c) {
    if (uVar3 < 0x241c90a3) {
      if (uVar3 == 0x2607722) {
        bVar2 = System_String__op_Equality(name,"SphereCastAll",(MethodInfo *)0x0);
        if (!bVar2) goto label_182021793;
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434650d == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434650d = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__8_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9
        ;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCastAll_b__8_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__8_0 =
             (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__8_0;
      }
      else if (uVar3 == 0x1ca4814b) {
        bVar2 = System_String__op_Equality(name,"LineCastAll",(MethodInfo *)0x0);
        if (!bVar2) goto label_182021793;
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434650a == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434650a = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__5_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9
        ;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCastAll_b__5_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__5_0 =
             (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__5_0;
      }
      else {
        if (uVar3 != 0x241c90a2) goto label_182021793;
        bVar2 = System_String__op_Equality(name,"ClosestPoint",(MethodInfo *)0x0);
        if (!bVar2) goto label_182021793;
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346510 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346510 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__11_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
        if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9
        ;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__11_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__11_0 =
             (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__11_0;
      }
    }
    else if (uVar3 == 0x2f67c718) {
      bVar2 = System_String__op_Equality(name,"LineCastWithMask",(MethodInfo *)0x0);
      if (!bVar2) goto label_182021793;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346509 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_184346509 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__4_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCastWithMask_b__4_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__4_0 =
           (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__4_0;
    }
    else if (uVar3 == 0x347ce791) {
      bVar2 = System_String__op_Equality(name,"AreCollidersOverlapping",(MethodInfo *)0x0);
      if (!bVar2) goto label_182021793;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346512 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_184346512 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__13_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__AreCollidersOverlapping
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__13_0 =
           (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__13_0;
    }
    else {
      if (uVar3 != 0x3ff74f8b) goto label_182021793;
      bVar2 = System_String__op_Equality(name,"SphereCastWithMask",(MethodInfo *)0x0);
      if (!bVar2) goto label_182021793;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434650c == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_18434650c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__7_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCastWithMask_b__7
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__7_0 =
           (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__7_0;
    }
  }
  else if (uVar3 < 0xa5266d89) {
    if (uVar3 == 0x61cb0efd) {
      bVar2 = System_String__op_Equality(name,"GetPhysicsLayerMask",(MethodInfo *)0x0);
      if (!bVar2) goto label_182021793;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346507 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_184346507 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__2_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__GetPhysicsLayerMask_b__2
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__2_0 =
           (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__2_0;
    }
    else if (uVar3 == 0x91aced38) {
      bVar2 = System_String__op_Equality(name,"BoxCastAll",(MethodInfo *)0x0);
      if (!bVar2) goto label_182021793;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434650f == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_18434650f = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__10_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__BoxCastAll_b__10_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__10_0 =
           (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__10_0;
    }
    else {
      if (uVar3 != 0xa5266d88) goto label_182021793;
      bVar2 = System_String__op_Equality(name,"LineCast",(MethodInfo *)0x0);
      if (!bVar2) goto label_182021793;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346508 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_184346508 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__3_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCast_b__3_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__3_0 =
           (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__3_0;
    }
  }
  else if (uVar3 == 0xad368c07) {
    bVar2 = System_String__op_Equality(name,"SphereCast",(MethodInfo *)0x0);
    if (!bVar2) goto label_182021793;
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434650b == '\0') {
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
      Il2CppMethodInitialized_18434650b = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__6_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCast_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__6_0;
  }
  else if (uVar3 == 0xe2eb52c1) {
    bVar2 = System_String__op_Equality(name,"BoxCast",(MethodInfo *)0x0);
    if (!bVar2) goto label_182021793;
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434650e == '\0') {
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
      Il2CppMethodInitialized_18434650e = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__9_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__BoxCast_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__9_0;
  }
  else {
    if (uVar3 != 0xe726f143) {
label_182021793:
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPhysicsBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    bVar2 = System_String__op_Equality(name,"ComputePenetration",(MethodInfo *)0x0);
    if (!bVar2) goto label_182021793;
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346511 == '\0') {
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
      Il2CppMethodInitialized_184346511 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__12_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182021764;
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__ComputePenetration_b__12
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__12_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_182021764:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__GetPhysicsLayerMask
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__GetPhysicsLayerMask (const MethodInfo* method);
// 0x1820282f0

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__GetPhysicsLayerMask(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346507 == '\0') {
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
    Il2CppMethodInitialized_184346507 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__GetPhysicsLayerMask_b__2
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__2_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCast (const MethodInfo* method);
// 0x182029190

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCast(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346508 == '\0') {
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
    Il2CppMethodInitialized_184346508 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCast_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCastWithMask
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastWithMask (const MethodInfo* method);
// 0x182029070

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastWithMask(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346509 == '\0') {
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
    Il2CppMethodInitialized_184346509 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCastWithMask_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCastAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastAll (const MethodInfo* method);
// 0x182028f50

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434650a == '\0') {
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
    Il2CppMethodInitialized_18434650a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__LineCastAll_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCast (const MethodInfo* method);
// 0x18202d7e0

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCast(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434650b == '\0') {
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
    Il2CppMethodInitialized_18434650b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCast_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCastWithMask
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastWithMask (const MethodInfo* method);
// 0x18202d6c0

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastWithMask(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434650c == '\0') {
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
    Il2CppMethodInitialized_18434650c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCastWithMask_b__7
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCastAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastAll (const MethodInfo* method);
// 0x18202d5a0

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434650d == '\0') {
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
    Il2CppMethodInitialized_18434650d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__SphereCastAll_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__BoxCast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCast (const MethodInfo* method);
// 0x1820256d0

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCast(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434650e == '\0') {
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
    Il2CppMethodInitialized_18434650e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__BoxCast_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__BoxCastAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCastAll (const MethodInfo* method);
// 0x1820255b0

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCastAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434650f == '\0') {
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
    Il2CppMethodInitialized_18434650f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__BoxCastAll_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__ClosestPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ClosestPoint (const MethodInfo* method);
// 0x182025b50

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ClosestPoint(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346510 == '\0') {
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
    Il2CppMethodInitialized_184346510 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__11_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__ComputePenetration
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ComputePenetration (const MethodInfo* method);
// 0x182025c70

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ComputePenetration(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346511 == '\0') {
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
    Il2CppMethodInitialized_184346511 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__ComputePenetration_b__12
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__AreCollidersOverlapping
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__AreCollidersOverlapping (const MethodInfo* method);
// 0x182025490

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__AreCollidersOverlapping
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346512 == '\0') {
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
    Il2CppMethodInitialized_184346512 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPhysicsBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c___CreateMethodBinding__AreCollidersOverlapping
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicPhysicsBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182030720

void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346513 == '\0') {
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
    Il2CppMethodInitialized_184346513 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetPhysicsLayerMask",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LineCast",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LineCastWithMask",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LineCastAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SphereCast",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SphereCastWithMask",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SphereCastAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BoxCast",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BoxCastAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClosestPoint",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ComputePenetration",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AreCollidersOverlapping",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin___c___cctor (const MethodInfo* method);
// 0x1820448f0

void CustomLogic_CustomLogicPhysicsBuiltin___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicPhysicsBuiltin___c_o *__this;
  
  if (Il2CppMethodInitialized_184346521 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
    Il2CppMethodInitialized_184346521 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin___c___ctor (CustomLogic_CustomLogicPhysicsBuiltin___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicPhysicsBuiltin___c___ctor(CustomLogic_CustomLogicPhysicsBuiltin___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$<GetPhysicsLayerMask>b__1_0
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsBuiltin___c___GetPhysicsLayerMask_b__1_0 (CustomLogic_CustomLogicPhysicsBuiltin___c_o* __this, Il2CppObject* v, const MethodInfo* method);
// 0x18203d0a0

int32_t CustomLogic_CustomLogicPhysicsBuiltin___c___GetPhysicsLayerMask_b__1_0
                  (CustomLogic_CustomLogicPhysicsBuiltin___c_o *__this,Il2CppObject *v,MethodInfo *method)

{
  int32_t *piVar1;
  
  if (v == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if ((v->klass->_1).element_class == *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
    piVar1 = il2cpp_object_unbox(v);
    return *piVar1;
  }
  il2cpp_codegen_raise_invalid_cast_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin___ctor (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x18203ac90

void CustomLogic_CustomLogicPhysicsBuiltin___ctor
               (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843464f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843464f7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$GetPhysicsLayerMask
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsBuiltin__GetPhysicsLayerMask (CustomLogic_CustomLogicListBuiltin_o* layers, const MethodInfo* method);
// 0x182039350

int32_t CustomLogic_CustomLogicPhysicsBuiltin__GetPhysicsLayerMask
                  (CustomLogic_CustomLogicListBuiltin_o *layers,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  Il2CppObject *object;
  int32_t iVar1;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Int32_array *layers_00;
  UnityEngine_LayerMask_Fields local_res8;
  
  if (Il2CppMethodInitialized_1843464f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_object_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_c_GetPhysicsLayerMask_b__1_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
    Il2CppMethodInitialized_1843464f8 = '\x01';
  }
  local_res8.m_Mask = 0;
  if (layers != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    source = (layers->fields).List;
    if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
    }
    __this = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
             TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9__1_0;
    if (__this == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
      if ((TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c);
      }
      object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9;
      __this = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_int);
      System_Func_object__int____ctor
                (__this,object,
                 (intptr_t)MethodInfo_CustomLogic_CustomLogicPhysicsBuiltin_c_GetPhysicsLayerMask_b__1_0,
                 (MethodInfo_AF4D50 *)0x0);
      TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9__1_0 =
           (System_Func_object__int__o *)__this;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_CustomLogic_CustomLogicPhysicsBuiltin_c->static_fields->__9__1_0,__this);
    }
    source_00 = System_Linq_Enumerable__Select_Vector3__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)__this,
                           (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_object_int);
    layers_00 = System_Linq_Enumerable__ToArray_int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           (MethodInfo_6C7C70 *)MethodInfo_System_Linq_Enumerable_ToArray_int);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    local_res8.m_Mask = (int32_t)Utility_PhysicsLayer__GetMask(layers_00,(MethodInfo *)0x0);
    iVar1 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$LineCast
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__LineCast (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, System_String_o* collideWith, const MethodInfo* method);
// 0x182039e20

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__LineCast
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          System_String_o *collideWith,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  float fVar6;
  bool bVar7;
  int32_t iVar8;
  UnityEngine_Collider_o *pUVar9;
  CustomLogic_BuiltinClassInstance_o *value;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this;
  CustomLogic_BuiltinClassInstance_o *pCVar10;
  UnityEngine_Vector3_o *pUVar11;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar12;
  System_Object_array *parameters;
  Il2CppObject *pIVar13;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  float fVar14;
  UnityEngine_LayerMask_Fields local_res8;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Touch_Fields local_68;
  
  if (Il2CppMethodInitialized_1843464f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_1843464f9 = '\x01';
  }
  local_res8.m_Mask = 0;
  local_68.m_RawPosition.fields.y = 0.0;
  local_68.m_PositionDelta.fields.x = 0.0;
  local_68.m_PositionDelta.fields.y = 0.0;
  local_68.m_TimeDelta = 0.0;
  local_68.m_TapCount = 0;
  local_68.m_Phase = 0;
  local_68.m_Type = 0;
  local_68.m_FingerId = 0;
  local_68.m_Position.fields.x = 0.0;
  local_68.m_Position.fields.y = 0.0;
  local_68.m_RawPosition.fields.x = 0.0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1._0_4_ = (start->fields).Value.fields.x;
    uVar1._4_4_ = (start->fields).Value.fields.y;
    fVar14 = (start->fields).Value.fields.z;
    fVar6 = (end->fields).Value.fields.z;
    uVar2._0_4_ = (end->fields).Value.fields.x;
    uVar2._4_4_ = (end->fields).Value.fields.y;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    iVar8 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    local_res8.m_Mask = (int32_t)Utility_PhysicsLayer__CopyMask(iVar8,(MethodInfo *)0x0);
    iVar8 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_88._0_8_ = uVar2;
    local_88.z = fVar6;
    local_78._0_8_ = uVar1;
    local_78.z = fVar14;
    bVar7 = UnityEngine_Physics__Linecast_2fe2eb0
                      ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_Vector3_o *)&local_88,
                       (UnityEngine_RaycastHit_o *)&local_68,iVar8,(MethodInfo *)0x0);
    if (bVar7) {
      pUVar9 = UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)&local_68,(MethodInfo *)0x0);
      value = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar9,(MethodInfo *)0x0);
      if (value != (CustomLogic_BuiltinClassInstance_o *)0x0) {
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this,(MethodInfo *)0x0);
        bVar5 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar5) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0;
        if (bVar7) {
          pCVar10 = value;
        }
        if (__this != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this,pCVar10 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
          bVar5 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar5) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if (bVar7) {
            pCVar10 = value;
          }
          (__this->fields)._IsMapObject_k__BackingField = pCVar10 != (CustomLogic_BuiltinClassInstance_o *)0x0
          ;
          pUVar11 = UnityEngine_RaycastHit__get_point
                              ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_RaycastHit_o *)&local_68,
                               (MethodInfo *)0x0);
          uVar3._0_4_ = (pUVar11->fields).x;
          uVar3._4_4_ = (pUVar11->fields).y;
          fVar14 = (pUVar11->fields).z;
          pCVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_78._0_8_ = uVar3;
          local_78.z = fVar14;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar12,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
          (__this->fields)._Point_k__BackingField = pCVar12;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._Point_k__BackingField,pCVar12);
          pUVar11 = UnityEngine_RaycastHit__get_normal
                              ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_RaycastHit_o *)&local_68,
                               (MethodInfo *)0x0);
          uVar4._0_4_ = (pUVar11->fields).x;
          uVar4._4_4_ = (pUVar11->fields).y;
          fVar14 = (pUVar11->fields).z;
          pCVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_78._0_8_ = uVar4;
          local_78.z = fVar14;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar12,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
          (__this->fields)._Normal_k__BackingField = pCVar12;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._Normal_k__BackingField,pCVar12);
          fVar14 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)&local_68,(MethodInfo *)0x0);
          (__this->fields)._Distance_k__BackingField = fVar14;
          (__this->fields)._Collider_k__BackingField = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._Collider_k__BackingField,value);
          parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          pUVar9 = UnityEngine_RaycastHit__get_collider
                             ((UnityEngine_RaycastHit_o *)&local_68,(MethodInfo *)0x0);
          if (parameters != (System_Object_array *)0x0) {
            if ((pUVar9 != (UnityEngine_Collider_o *)0x0) &&
               (pIVar13 = il2cpp_vm_Object_IsInst
                                    ((Il2CppObject *)pUVar9,(((parameters->obj).klass)->_1).element_class),
               pIVar13 == (Il2CppObject *)0x0)) {
              pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
            }
            if ((int)parameters->max_length != 0) {
              parameters->m_Items[0] = (Il2CppObject *)pUVar9;
              Il2CppCodeGenWriteBarrier(parameters->m_Items,pUVar9);
              __this_00 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
              CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_00,parameters,(MethodInfo *)0x0);
              (__this->fields)._ColliderInfo_k__BackingField = __this_00;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._ColliderInfo_k__BackingField,__this_00);
              return __this;
            }
            ThrowIndexOutOfRangeException();
          }
        }
        goto label_18203a1e9;
      }
    }
    return (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0;
  }
label_18203a1e9:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$LineCastWithMask
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__LineCastWithMask (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, int32_t mask, const MethodInfo* method);
// 0x182039ab0

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__LineCastWithMask
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          int32_t mask,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  float fVar6;
  bool bVar7;
  UnityEngine_Collider_o *pUVar8;
  CustomLogic_BuiltinClassInstance_o *pCVar9;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this;
  CustomLogic_BuiltinClassInstance_o *pCVar10;
  UnityEngine_Vector3_o *pUVar11;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar12;
  System_Object_array *parameters;
  Il2CppObject *pIVar13;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  float fVar14;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Touch_Fields local_58;
  
  if (Il2CppMethodInitialized_1843464fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_1843464fa = '\x01';
  }
  local_58.m_RawPosition.fields.y = 0.0;
  local_58.m_PositionDelta.fields.x = 0.0;
  local_58.m_PositionDelta.fields.y = 0.0;
  local_58.m_TimeDelta = 0.0;
  local_58.m_TapCount = 0;
  local_58.m_Phase = 0;
  local_58.m_Type = 0;
  local_58.m_FingerId = 0;
  local_58.m_Position.fields.x = 0.0;
  local_58.m_Position.fields.y = 0.0;
  local_58.m_RawPosition.fields.x = 0.0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1._0_4_ = (start->fields).Value.fields.x;
    uVar1._4_4_ = (start->fields).Value.fields.y;
    fVar14 = (start->fields).Value.fields.z;
    uVar2._0_4_ = (end->fields).Value.fields.x;
    uVar2._4_4_ = (end->fields).Value.fields.y;
    fVar6 = (end->fields).Value.fields.z;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_78._0_8_ = uVar2;
    local_78.z = fVar6;
    local_68._0_8_ = uVar1;
    local_68.z = fVar14;
    bVar7 = UnityEngine_Physics__Linecast_2fe2eb0
                      ((UnityEngine_Vector3_o *)&local_68,(UnityEngine_Vector3_o *)&local_78,
                       (UnityEngine_RaycastHit_o *)&local_58,mask,(MethodInfo *)0x0);
    if (bVar7) {
      pUVar8 = UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)&local_58,(MethodInfo *)0x0);
      pCVar9 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar8,(MethodInfo *)0x0);
      if (pCVar9 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this,(MethodInfo *)0x0);
        if (__this != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
          bVar5 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
          if (((pCVar9->klass->_2).typeHierarchyDepth < bVar5) ||
             ((pCVar9->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if (bVar7) {
            pCVar10 = pCVar9;
          }
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this,pCVar10 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
          bVar5 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
          if (((pCVar9->klass->_2).typeHierarchyDepth < bVar5) ||
             ((pCVar9->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if (bVar7) {
            pCVar10 = pCVar9;
          }
          (__this->fields)._IsMapObject_k__BackingField = pCVar10 != (CustomLogic_BuiltinClassInstance_o *)0x0
          ;
          pUVar11 = UnityEngine_RaycastHit__get_point
                              ((UnityEngine_Vector3_o *)&local_68,(UnityEngine_RaycastHit_o *)&local_58,
                               (MethodInfo *)0x0);
          uVar3._0_4_ = (pUVar11->fields).x;
          uVar3._4_4_ = (pUVar11->fields).y;
          fVar14 = (pUVar11->fields).z;
          pCVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_68._0_8_ = uVar3;
          local_68.z = fVar14;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar12,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
          (__this->fields)._Point_k__BackingField = pCVar12;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._Point_k__BackingField,pCVar12);
          pUVar11 = UnityEngine_RaycastHit__get_normal
                              ((UnityEngine_Vector3_o *)&local_68,(UnityEngine_RaycastHit_o *)&local_58,
                               (MethodInfo *)0x0);
          uVar4._0_4_ = (pUVar11->fields).x;
          uVar4._4_4_ = (pUVar11->fields).y;
          fVar14 = (pUVar11->fields).z;
          pCVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_68._0_8_ = uVar4;
          local_68.z = fVar14;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar12,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
          (__this->fields)._Normal_k__BackingField = pCVar12;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._Normal_k__BackingField,pCVar12);
          fVar14 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)&local_58,(MethodInfo *)0x0);
          (__this->fields)._Distance_k__BackingField = fVar14;
          parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          pUVar8 = UnityEngine_RaycastHit__get_collider
                             ((UnityEngine_RaycastHit_o *)&local_58,(MethodInfo *)0x0);
          if (parameters != (System_Object_array *)0x0) {
            if ((pUVar8 != (UnityEngine_Collider_o *)0x0) &&
               (pIVar13 = il2cpp_vm_Object_IsInst
                                    ((Il2CppObject *)pUVar8,(((parameters->obj).klass)->_1).element_class),
               pIVar13 == (Il2CppObject *)0x0)) {
              pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
            }
            if ((int)parameters->max_length != 0) {
              parameters->m_Items[0] = (Il2CppObject *)pUVar8;
              Il2CppCodeGenWriteBarrier(parameters->m_Items,pUVar8);
              __this_00 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
              CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_00,parameters,(MethodInfo *)0x0);
              (__this->fields)._Collider_k__BackingField = (CustomLogic_BuiltinClassInstance_o *)__this_00;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._Collider_k__BackingField,__this_00);
              return __this;
            }
            ThrowIndexOutOfRangeException();
          }
        }
        goto label_182039e03;
      }
    }
    return (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0;
  }
label_182039e03:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$LineCastAll
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__LineCastAll (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, System_String_o* collideWith, const MethodInfo* method);
// 0x1820394e0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__LineCastAll
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          System_String_o *collideWith,MethodInfo *method)

{
  UnityEngine_RaycastHit_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  UnityEngine_RaycastHit_Fields *pUVar14;
  int32_t iVar15;
  UnityEngine_RaycastHit_array *pUVar16;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  UnityEngine_Collider_o *pUVar17;
  CustomLogic_BuiltinClassInstance_o *value;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_00;
  CustomLogic_BuiltinClassInstance_o *pCVar18;
  UnityEngine_Vector3_o *pUVar19;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar20;
  System_Object_array *parameters;
  Il2CppObject *pIVar21;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_01;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  UnityEngine_LayerMask_Fields local_res8;
  UnityEngine_Vector3_o local_108;
  UnityEngine_Vector3_Fields local_f8;
  UnityEngine_Vector3_Fields local_e8;
  undefined1 local_d8 [64];
  UnityEngine_Vector3_o local_98 [9];
  
  if (Il2CppMethodInitialized_1843464fb == '\0') {
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
    Il2CppMethodInitialized_1843464fb = '\x01';
  }
  local_res8.m_Mask = 0;
  local_d8._16_4_ = 0.0;
  local_d8._20_4_ = 0.0;
  local_d8._24_4_ = 0.0;
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0.0;
  local_d8._8_4_ = 0.0;
  local_d8._12_4_ = 0.0;
  local_d8._28_4_ = 0.0;
  local_d8._32_4_ = 0.0;
  local_d8._36_4_ = 0;
  local_d8._40_4_ = 0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar26 = (end->fields).Value.fields.z;
    uVar2 = (end->fields).Value.fields.x;
    uVar6 = (end->fields).Value.fields.y;
    uVar3._0_4_ = (start->fields).Value.fields.x;
    uVar3._4_4_ = (start->fields).Value.fields.y;
    fVar24 = (start->fields).Value.fields.z;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    iVar15 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    fVar26 = fVar26 - fVar24;
    local_108.fields._0_8_ = CONCAT44((float)uVar6 - uVar3._4_4_,(float)uVar2 - (float)uVar3);
    local_108.fields.z = fVar26;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar23 = (float)il2cpp_runtime_helper_180546a40(&local_108);
    if (fVar23 <= 1e-05) {
      pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar25 = (pUVar8->zeroVector).fields.x;
      fVar27 = (pUVar8->zeroVector).fields.y;
      fVar26 = (pUVar8->zeroVector).fields.z;
    }
    else {
      fVar25 = ((float)uVar2 - (float)uVar3) / fVar23;
      fVar27 = ((float)uVar6 - uVar3._4_4_) / fVar23;
      fVar26 = fVar26 / fVar23;
    }
    fVar23 = (float)il2cpp_runtime_helper_180546a40(&local_108);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    local_res8.m_Mask = (int32_t)Utility_PhysicsLayer__CopyMask(iVar15,(MethodInfo *)0x0);
    iVar15 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_108.fields._0_8_ = CONCAT44(fVar27,fVar25);
    local_108.fields.z = fVar26;
    local_f8._0_8_ = uVar3;
    local_f8.z = fVar24;
    pUVar16 = UnityEngine_Physics__RaycastAll_2fe4290
                        ((UnityEngine_Vector3_o *)&local_f8,&local_108,fVar23,iVar15,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    local_108.fields._0_8_ = __this;
    CustomLogic_CustomLogicListBuiltin___ctor(__this,(MethodInfo *)0x0);
    if (pUVar16 != (UnityEngine_RaycastHit_array *)0x0) {
      uVar22 = 0;
      do {
        if ((int)pUVar16->max_length <= (int)uVar22) {
          return __this;
        }
        if ((uint)pUVar16->max_length <= uVar22) {
label_182039aa8:
          ThrowIndexOutOfRangeException();
        }
        pUVar1 = pUVar16->m_Items + (int)uVar22;
        local_d8._0_4_ = (pUVar1->fields).m_Point.fields.x;
        local_d8._4_4_ = (pUVar1->fields).m_Point.fields.y;
        local_d8._8_8_ = *(undefined8 *)&(pUVar1->fields).m_Point.fields.z;
        pUVar14 = &pUVar16->m_Items[(int)uVar22].fields;
        local_d8._16_4_ = (pUVar14->m_Normal).fields.y;
        local_d8._20_4_ = (pUVar14->m_Normal).fields.z;
        uVar10 = pUVar14->m_FaceID;
        pUVar14 = &pUVar16->m_Items[(int)uVar22].fields;
        uVar11 = pUVar14->m_Distance;
        uVar12 = (pUVar14->m_UV).fields.x;
        local_d8._36_8_ = *(undefined8 *)&(pUVar14->m_UV).fields.y;
        local_d8._24_4_ = uVar10;
        local_d8._28_4_ = uVar11;
        local_d8._32_4_ = uVar12;
        pUVar17 = UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)local_d8,(MethodInfo *)0x0)
        ;
        value = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar17,(MethodInfo *)0x0);
        if (value != (CustomLogic_BuiltinClassInstance_o *)0x0) {
          if (__this == (CustomLogic_CustomLogicListBuiltin_o *)0x0) break;
          pSVar9 = (__this->fields).List;
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
          CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_00,(MethodInfo *)0x0);
          bVar7 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar7) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar7 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          pCVar18 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if (bVar13) {
            pCVar18 = value;
          }
          if (__this_00 == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) break;
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_00,pCVar18 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
          bVar7 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar7) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar7 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          pCVar18 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if (bVar13) {
            pCVar18 = value;
          }
          (__this_00->fields)._IsMapObject_k__BackingField =
               pCVar18 != (CustomLogic_BuiltinClassInstance_o *)0x0;
          pUVar19 = UnityEngine_RaycastHit__get_point
                              ((UnityEngine_Vector3_o *)(local_d8 + 0x30),(UnityEngine_RaycastHit_o *)local_d8
                               ,(MethodInfo *)0x0);
          uVar4._0_4_ = (pUVar19->fields).x;
          uVar4._4_4_ = (pUVar19->fields).y;
          fVar24 = (pUVar19->fields).z;
          pCVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_f8._0_8_ = uVar4;
          local_f8.z = fVar24;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar20,(UnityEngine_Vector3_o *)&local_f8,(MethodInfo *)0x0);
          (__this_00->fields)._Point_k__BackingField = pCVar20;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Point_k__BackingField,pCVar20);
          pUVar19 = UnityEngine_RaycastHit__get_normal
                              (local_98,(UnityEngine_RaycastHit_o *)local_d8,(MethodInfo *)0x0);
          uVar5._0_4_ = (pUVar19->fields).x;
          uVar5._4_4_ = (pUVar19->fields).y;
          fVar24 = (pUVar19->fields).z;
          pCVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_e8._0_8_ = uVar5;
          local_e8.z = fVar24;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar20,(UnityEngine_Vector3_o *)&local_e8,(MethodInfo *)0x0);
          (__this_00->fields)._Normal_k__BackingField = pCVar20;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Normal_k__BackingField,pCVar20);
          fVar24 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)local_d8,(MethodInfo *)0x0);
          (__this_00->fields)._Distance_k__BackingField = fVar24;
          (__this_00->fields)._Collider_k__BackingField = value;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Collider_k__BackingField,value);
          parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          pUVar17 = UnityEngine_RaycastHit__get_collider
                              ((UnityEngine_RaycastHit_o *)local_d8,(MethodInfo *)0x0);
          if (parameters == (System_Object_array *)0x0) break;
          if (pUVar17 != (UnityEngine_Collider_o *)0x0) {
            pIVar21 = il2cpp_vm_Object_IsInst
                                ((Il2CppObject *)pUVar17,(((parameters->obj).klass)->_1).element_class);
            if (pIVar21 == (Il2CppObject *)0x0) {
              pIVar21 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar21,(MethodInfo *)0x0);
            }
          }
          if ((int)parameters->max_length == 0) goto label_182039aa8;
          parameters->m_Items[0] = (Il2CppObject *)pUVar17;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pUVar17);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_01,parameters,(MethodInfo *)0x0);
          (__this_00->fields)._ColliderInfo_k__BackingField = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._ColliderInfo_k__BackingField,__this_01);
          if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) break;
          il2cpp_runtime_helper_180012890(pSVar9,__this_00,MethodInfo_System_Collections_Generic_List_object_Add);
          __this = (CustomLogic_CustomLogicListBuiltin_o *)local_108.fields._0_8_;
        }
        uVar22 = uVar22 + 1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$SphereCast
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin__SphereCast (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, float radius, System_String_o* collideWith, const MethodInfo* method);
// 0x18203aa00

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin__SphereCast
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          float radius,System_String_o *collideWith,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  int32_t iVar7;
  UnityEngine_Collider_o *other;
  CustomLogic_BuiltinClassInstance_o *pCVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_LayerMask_Fields local_res8;
  UnityEngine_Vector3_Fields local_c8;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_RaycastHit_o local_a8 [3];
  
  if (Il2CppMethodInitialized_1843464fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_1843464fc = '\x01';
  }
  local_res8.m_Mask = 0;
  local_a8[0].fields.m_Normal.fields.y = 0.0;
  local_a8[0].fields.m_Normal.fields.z = 0.0;
  local_a8[0].fields.m_FaceID = 0;
  local_a8[0].fields.m_Distance = 0.0;
  local_a8[0].fields.m_UV.fields.x = 0.0;
  local_a8[0].fields.m_UV.fields.y = 0.0;
  local_a8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_a8[0].fields.m_Point.fields.x = 0.0;
  local_a8[0].fields.m_Point.fields.y = 0.0;
  local_a8[0].fields.m_Point.fields.z = 0.0;
  local_a8[0].fields.m_Normal.fields.x = 0.0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar11 = (end->fields).Value.fields.z;
    uVar2 = (end->fields).Value.fields.x;
    uVar4 = (end->fields).Value.fields.y;
    uVar3._0_4_ = (start->fields).Value.fields.x;
    uVar3._4_4_ = (start->fields).Value.fields.y;
    fVar1 = (start->fields).Value.fields.z;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    iVar7 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    fVar11 = fVar11 - fVar1;
    local_c8.y = (float)uVar4 - uVar3._4_4_;
    local_c8.x = (float)uVar2 - (float)uVar3;
    local_c8.z = fVar11;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar9 = (float)il2cpp_runtime_helper_180546a40(&local_c8);
    if (fVar9 <= 1e-05) {
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar10 = (pUVar5->zeroVector).fields.x;
      fVar12 = (pUVar5->zeroVector).fields.y;
      fVar11 = (pUVar5->zeroVector).fields.z;
    }
    else {
      fVar10 = ((float)uVar2 - (float)uVar3) / fVar9;
      fVar12 = ((float)uVar4 - uVar3._4_4_) / fVar9;
      fVar11 = fVar11 / fVar9;
    }
    fVar9 = (float)il2cpp_runtime_helper_180546a40(&local_c8);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    local_res8.m_Mask = (int32_t)Utility_PhysicsLayer__CopyMask(iVar7,(MethodInfo *)0x0);
    iVar7 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_c8.y = fVar12;
    local_c8.x = fVar10;
    local_c8.z = fVar11;
    local_b8._0_8_ = uVar3;
    local_b8.z = fVar1;
    bVar6 = UnityEngine_Physics__SphereCast_2fe64a0
                      ((UnityEngine_Vector3_o *)&local_b8,radius,(UnityEngine_Vector3_o *)&local_c8,local_a8,
                       fVar9,iVar7,(MethodInfo *)0x0);
    if (bVar6) {
      other = UnityEngine_RaycastHit__get_collider(local_a8,(MethodInfo *)0x0);
      pCVar8 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
    }
    else {
      pCVar8 = (CustomLogic_BuiltinClassInstance_o *)0x0;
    }
    return (Il2CppObject *)pCVar8;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$SphereCastWithMask
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin__SphereCastWithMask (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, float radius, int32_t mask, const MethodInfo* method);
// 0x18203a800

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin__SphereCastWithMask
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          float radius,int32_t mask,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar5;
  bool bVar6;
  UnityEngine_Collider_o *other;
  CustomLogic_BuiltinClassInstance_o *pCVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_RaycastHit_o local_98 [3];
  
  if (Il2CppMethodInitialized_1843464fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_1843464fd = '\x01';
  }
  local_98[0].fields.m_Normal.fields.y = 0.0;
  local_98[0].fields.m_Normal.fields.z = 0.0;
  local_98[0].fields.m_FaceID = 0;
  local_98[0].fields.m_Distance = 0.0;
  local_98[0].fields.m_UV.fields.x = 0.0;
  local_98[0].fields.m_UV.fields.y = 0.0;
  local_98[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_98[0].fields.m_Point.fields.x = 0.0;
  local_98[0].fields.m_Point.fields.y = 0.0;
  local_98[0].fields.m_Point.fields.z = 0.0;
  local_98[0].fields.m_Normal.fields.x = 0.0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar2 = (end->fields).Value.fields.x;
    uVar4 = (end->fields).Value.fields.y;
    uVar3._0_4_ = (start->fields).Value.fields.x;
    uVar3._4_4_ = (start->fields).Value.fields.y;
    fVar1 = (start->fields).Value.fields.z;
    fVar10 = (end->fields).Value.fields.z - fVar1;
    local_b8.y = (float)uVar4 - uVar3._4_4_;
    local_b8.x = (float)uVar2 - (float)uVar3;
    local_b8.z = fVar10;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar8 = (float)il2cpp_runtime_helper_180546a40(&local_b8);
    if (fVar8 <= 1e-05) {
      pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar9 = (pUVar5->zeroVector).fields.x;
      fVar11 = (pUVar5->zeroVector).fields.y;
      fVar10 = (pUVar5->zeroVector).fields.z;
    }
    else {
      fVar9 = ((float)uVar2 - (float)uVar3) / fVar8;
      fVar11 = ((float)uVar4 - uVar3._4_4_) / fVar8;
      fVar10 = fVar10 / fVar8;
    }
    fVar8 = (float)il2cpp_runtime_helper_180546a40(&local_b8);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_b8.y = fVar11;
    local_b8.x = fVar9;
    local_b8.z = fVar10;
    local_a8._0_8_ = uVar3;
    local_a8.z = fVar1;
    bVar6 = UnityEngine_Physics__SphereCast_2fe64a0
                      ((UnityEngine_Vector3_o *)&local_a8,radius,(UnityEngine_Vector3_o *)&local_b8,local_98,
                       fVar8,mask,(MethodInfo *)0x0);
    if (bVar6) {
      other = UnityEngine_RaycastHit__get_collider(local_98,(MethodInfo *)0x0);
      pCVar7 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
    }
    else {
      pCVar7 = (CustomLogic_BuiltinClassInstance_o *)0x0;
    }
    return (Il2CppObject *)pCVar7;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$SphereCastAll
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__SphereCastAll (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, float radius, System_String_o* collideWith, const MethodInfo* method);
// 0x18203a210

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__SphereCastAll
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          float radius,System_String_o *collideWith,MethodInfo *method)

{
  UnityEngine_RaycastHit_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar6;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  UnityEngine_RaycastHit_Fields *pUVar14;
  int32_t iVar15;
  UnityEngine_RaycastHit_array *pUVar16;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  UnityEngine_Collider_o *pUVar17;
  CustomLogic_BuiltinClassInstance_o *value;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_00;
  CustomLogic_BuiltinClassInstance_o *pCVar18;
  UnityEngine_Vector3_o *pUVar19;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar20;
  System_Object_array *parameters;
  Il2CppObject *pIVar21;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_01;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  UnityEngine_LayerMask_Fields local_res8;
  UnityEngine_Vector3_o local_118;
  UnityEngine_Vector3_Fields local_108;
  UnityEngine_Vector3_Fields local_f8;
  undefined1 local_e8 [64];
  UnityEngine_Vector3_o local_a8 [10];
  
  if (Il2CppMethodInitialized_1843464fe == '\0') {
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
    Il2CppMethodInitialized_1843464fe = '\x01';
  }
  local_res8.m_Mask = 0;
  local_e8._16_4_ = 0.0;
  local_e8._20_4_ = 0.0;
  local_e8._24_4_ = 0.0;
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 0.0;
  local_e8._8_4_ = 0.0;
  local_e8._12_4_ = 0.0;
  local_e8._28_4_ = 0.0;
  local_e8._32_4_ = 0.0;
  local_e8._36_4_ = 0;
  local_e8._40_4_ = 0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar26 = (end->fields).Value.fields.z;
    uVar2 = (end->fields).Value.fields.x;
    uVar6 = (end->fields).Value.fields.y;
    uVar3._0_4_ = (start->fields).Value.fields.x;
    uVar3._4_4_ = (start->fields).Value.fields.y;
    fVar24 = (start->fields).Value.fields.z;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    iVar15 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    fVar26 = fVar26 - fVar24;
    local_118.fields._0_8_ = CONCAT44((float)uVar6 - uVar3._4_4_,(float)uVar2 - (float)uVar3);
    local_118.fields.z = fVar26;
    if (Il2CppMethodInitialized_18433de5f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5f = '\x01';
    }
    fVar23 = (float)il2cpp_runtime_helper_180546a40(&local_118);
    if (fVar23 <= 1e-05) {
      pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar25 = (pUVar8->zeroVector).fields.x;
      fVar27 = (pUVar8->zeroVector).fields.y;
      fVar26 = (pUVar8->zeroVector).fields.z;
    }
    else {
      fVar25 = ((float)uVar2 - (float)uVar3) / fVar23;
      fVar27 = ((float)uVar6 - uVar3._4_4_) / fVar23;
      fVar26 = fVar26 / fVar23;
    }
    fVar23 = (float)il2cpp_runtime_helper_180546a40(&local_118);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    local_res8.m_Mask = (int32_t)Utility_PhysicsLayer__CopyMask(iVar15,(MethodInfo *)0x0);
    iVar15 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_118.fields._0_8_ = CONCAT44(fVar27,fVar25);
    local_118.fields.z = fVar26;
    local_108._0_8_ = uVar3;
    local_108.z = fVar24;
    pUVar16 = UnityEngine_Physics__SphereCastAll_2fe61b0
                        ((UnityEngine_Vector3_o *)&local_108,radius,&local_118,fVar23,iVar15,(MethodInfo *)0x0
                        );
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    local_118.fields._0_8_ = __this;
    CustomLogic_CustomLogicListBuiltin___ctor(__this,(MethodInfo *)0x0);
    if (pUVar16 != (UnityEngine_RaycastHit_array *)0x0) {
      uVar22 = 0;
      do {
        if ((int)pUVar16->max_length <= (int)uVar22) {
          return __this;
        }
        if ((uint)pUVar16->max_length <= uVar22) {
label_18203a7f1:
          ThrowIndexOutOfRangeException();
        }
        pUVar1 = pUVar16->m_Items + (int)uVar22;
        local_e8._0_4_ = (pUVar1->fields).m_Point.fields.x;
        local_e8._4_4_ = (pUVar1->fields).m_Point.fields.y;
        local_e8._8_8_ = *(undefined8 *)&(pUVar1->fields).m_Point.fields.z;
        pUVar14 = &pUVar16->m_Items[(int)uVar22].fields;
        local_e8._16_4_ = (pUVar14->m_Normal).fields.y;
        local_e8._20_4_ = (pUVar14->m_Normal).fields.z;
        uVar10 = pUVar14->m_FaceID;
        pUVar14 = &pUVar16->m_Items[(int)uVar22].fields;
        uVar11 = pUVar14->m_Distance;
        uVar12 = (pUVar14->m_UV).fields.x;
        local_e8._36_8_ = *(undefined8 *)&(pUVar14->m_UV).fields.y;
        local_e8._24_4_ = uVar10;
        local_e8._28_4_ = uVar11;
        local_e8._32_4_ = uVar12;
        pUVar17 = UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)local_e8,(MethodInfo *)0x0)
        ;
        value = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar17,(MethodInfo *)0x0);
        if (value != (CustomLogic_BuiltinClassInstance_o *)0x0) {
          if (__this == (CustomLogic_CustomLogicListBuiltin_o *)0x0) break;
          pSVar9 = (__this->fields).List;
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
          CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_00,(MethodInfo *)0x0);
          bVar7 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar7) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar7 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          pCVar18 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if (bVar13) {
            pCVar18 = value;
          }
          if (__this_00 == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) break;
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_00,pCVar18 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
          bVar7 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar7) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar7 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
            bVar13 = false;
          }
          else {
            bVar13 = true;
          }
          pCVar18 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if (bVar13) {
            pCVar18 = value;
          }
          (__this_00->fields)._IsMapObject_k__BackingField =
               pCVar18 != (CustomLogic_BuiltinClassInstance_o *)0x0;
          pUVar19 = UnityEngine_RaycastHit__get_point
                              ((UnityEngine_Vector3_o *)(local_e8 + 0x30),(UnityEngine_RaycastHit_o *)local_e8
                               ,(MethodInfo *)0x0);
          uVar4._0_4_ = (pUVar19->fields).x;
          uVar4._4_4_ = (pUVar19->fields).y;
          fVar24 = (pUVar19->fields).z;
          pCVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_108._0_8_ = uVar4;
          local_108.z = fVar24;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar20,(UnityEngine_Vector3_o *)&local_108,(MethodInfo *)0x0);
          (__this_00->fields)._Point_k__BackingField = pCVar20;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Point_k__BackingField,pCVar20);
          pUVar19 = UnityEngine_RaycastHit__get_normal
                              (local_a8,(UnityEngine_RaycastHit_o *)local_e8,(MethodInfo *)0x0);
          uVar5._0_4_ = (pUVar19->fields).x;
          uVar5._4_4_ = (pUVar19->fields).y;
          fVar24 = (pUVar19->fields).z;
          pCVar20 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_f8._0_8_ = uVar5;
          local_f8.z = fVar24;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar20,(UnityEngine_Vector3_o *)&local_f8,(MethodInfo *)0x0);
          (__this_00->fields)._Normal_k__BackingField = pCVar20;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Normal_k__BackingField,pCVar20);
          fVar24 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)local_e8,(MethodInfo *)0x0);
          (__this_00->fields)._Distance_k__BackingField = fVar24;
          (__this_00->fields)._Collider_k__BackingField = value;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Collider_k__BackingField,value);
          parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          pUVar17 = UnityEngine_RaycastHit__get_collider
                              ((UnityEngine_RaycastHit_o *)local_e8,(MethodInfo *)0x0);
          if (parameters == (System_Object_array *)0x0) break;
          if (pUVar17 != (UnityEngine_Collider_o *)0x0) {
            pIVar21 = il2cpp_vm_Object_IsInst
                                ((Il2CppObject *)pUVar17,(((parameters->obj).klass)->_1).element_class);
            if (pIVar21 == (Il2CppObject *)0x0) {
              pIVar21 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar21,(MethodInfo *)0x0);
            }
          }
          if ((int)parameters->max_length == 0) goto label_18203a7f1;
          parameters->m_Items[0] = (Il2CppObject *)pUVar17;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,pUVar17);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_01,parameters,(MethodInfo *)0x0);
          (__this_00->fields)._ColliderInfo_k__BackingField = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._ColliderInfo_k__BackingField,__this_01);
          if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) break;
          il2cpp_runtime_helper_180012890(pSVar9,__this_00,MethodInfo_System_Collections_Generic_List_object_Add);
          __this = (CustomLogic_CustomLogicListBuiltin_o *)local_118.fields._0_8_;
        }
        uVar22 = uVar22 + 1;
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$BoxCast
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin__BoxCast (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, CustomLogic_CustomLogicVector3Builtin_o* dimensions, CustomLogic_CustomLogicQuaternionBuiltin_o* orientation, System_String_o* collideWith, const MethodInfo* method);
// 0x182038cc0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin__BoxCast
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          CustomLogic_CustomLogicVector3Builtin_o *dimensions,
          CustomLogic_CustomLogicQuaternionBuiltin_o *orientation,System_String_o *collideWith,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  UnityEngine_Vector3_StaticFields *pUVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int32_t iVar12;
  UnityEngine_Collider_o *other;
  CustomLogic_BuiltinClassInstance_o *pCVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_LayerMask_Fields local_res8;
  UnityEngine_Vector3_Fields local_138;
  UnityEngine_Vector3_Fields local_128;
  UnityEngine_Vector3_Fields local_118;
  UnityEngine_Quaternion_Fields local_108;
  UnityEngine_RaycastHit_o local_f8 [4];
  
  if (Il2CppMethodInitialized_1843464ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_1843464ff = '\x01';
  }
  local_res8.m_Mask = 0;
  local_f8[0].fields.m_Normal.fields.y = 0.0;
  local_f8[0].fields.m_Normal.fields.z = 0.0;
  local_f8[0].fields.m_FaceID = 0;
  local_f8[0].fields.m_Point.fields.x = 0.0;
  local_f8[0].fields.m_Point.fields.y = 0.0;
  local_f8[0].fields.m_Point.fields.z = 0.0;
  local_f8[0].fields.m_Normal.fields.x = 0.0;
  local_f8[0].fields.m_Distance = 0.0;
  local_f8[0].fields.m_UV.fields.x = 0.0;
  local_f8[0].fields.m_UV.fields.y = 0.0;
  local_f8[0].fields.m_Collider.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar6._0_4_ = (start->fields).Value.fields.x;
    uVar6._4_4_ = (start->fields).Value.fields.y;
    fVar1 = (start->fields).Value.fields.z;
    uVar5 = (end->fields).Value.fields.x;
    uVar7 = (end->fields).Value.fields.y;
    fVar16 = (end->fields).Value.fields.z;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    iVar12 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    fVar16 = fVar16 - fVar1;
    local_138.y = (float)uVar7 - uVar6._4_4_;
    local_138.x = (float)uVar5 - (float)uVar6;
    local_138.z = fVar16;
    if (dimensions != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      fVar2 = (dimensions->fields).Value.fields.x;
      fVar3 = (dimensions->fields).Value.fields.y;
      fVar4 = (dimensions->fields).Value.fields.z;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar14 = (float)il2cpp_runtime_helper_180546a40(&local_138);
      if (fVar14 <= 1e-05) {
        pUVar8 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar15 = (pUVar8->zeroVector).fields.x;
        fVar17 = (pUVar8->zeroVector).fields.y;
        fVar16 = (pUVar8->zeroVector).fields.z;
      }
      else {
        fVar15 = ((float)uVar5 - (float)uVar6) / fVar14;
        fVar17 = ((float)uVar7 - uVar6._4_4_) / fVar14;
        fVar16 = fVar16 / fVar14;
      }
      if (orientation != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
        uVar9._0_4_ = (orientation->fields).Value.fields.x;
        uVar9._4_4_ = (orientation->fields).Value.fields.y;
        uVar10._0_4_ = (orientation->fields).Value.fields.z;
        uVar10._4_4_ = (orientation->fields).Value.fields.w;
        fVar14 = (float)il2cpp_runtime_helper_180546a40(&local_138);
        if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        }
        local_res8.m_Mask = (int32_t)Utility_PhysicsLayer__CopyMask(iVar12,(MethodInfo *)0x0);
        iVar12 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        local_138.y = fVar17;
        local_138.x = fVar15;
        local_128.y = fVar3 * 0.5;
        local_128.x = fVar2 * 0.5;
        local_138.z = fVar16;
        local_128.z = fVar4 * 0.5;
        local_118._0_8_ = uVar6;
        local_118.z = fVar1;
        local_108._0_8_ = uVar9;
        local_108._8_8_ = uVar10;
        bVar11 = UnityEngine_Physics__BoxCast_2fe1780
                           ((UnityEngine_Vector3_o *)&local_118,(UnityEngine_Vector3_o *)&local_128,
                            (UnityEngine_Vector3_o *)&local_138,local_f8,
                            (UnityEngine_Quaternion_o *)&local_108,fVar14,iVar12,(MethodInfo *)0x0);
        if (bVar11) {
          other = UnityEngine_RaycastHit__get_collider(local_f8,(MethodInfo *)0x0);
          pCVar13 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
        }
        else {
          pCVar13 = (CustomLogic_BuiltinClassInstance_o *)0x0;
        }
        return (Il2CppObject *)pCVar13;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$BoxCastAll
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__BoxCastAll (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, CustomLogic_CustomLogicVector3Builtin_o* dimensions, CustomLogic_CustomLogicQuaternionBuiltin_o* orientation, System_String_o* collideWith, const MethodInfo* method);
// 0x182038640
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18203898f: nop 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__BoxCastAll
          (CustomLogic_CustomLogicVector3Builtin_o *start,CustomLogic_CustomLogicVector3Builtin_o *end,
          CustomLogic_CustomLogicVector3Builtin_o *dimensions,
          CustomLogic_CustomLogicQuaternionBuiltin_o *orientation,System_String_o *collideWith,
          MethodInfo *method)

{
  UnityEngine_RaycastHit_o *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 uVar9;
  undefined8 uVar7;
  undefined8 uVar8;
  byte bVar10;
  UnityEngine_Vector3_StaticFields *pUVar11;
  System_Collections_Generic_List_object__o *pSVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  UnityEngine_RaycastHit_Fields *pUVar19;
  int32_t iVar20;
  UnityEngine_RaycastHit_array *pUVar21;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  UnityEngine_Collider_o *pUVar22;
  CustomLogic_BuiltinClassInstance_o *value;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_00;
  CustomLogic_BuiltinClassInstance_o *pCVar23;
  UnityEngine_Vector3_o *pUVar24;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar25;
  System_Object_array *parameters;
  Il2CppObject *pIVar26;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_01;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  UnityEngine_LayerMask_Fields local_res8;
  UnityEngine_Vector3_o local_148;
  UnityEngine_Vector3_Fields local_138;
  UnityEngine_Vector3_Fields local_128;
  undefined1 local_118 [48];
  UnityEngine_Quaternion_o local_e8;
  UnityEngine_Vector3_o local_d8 [14];
  
  if (Il2CppMethodInitialized_184346500 == '\0') {
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
    Il2CppMethodInitialized_184346500 = '\x01';
  }
  local_res8.m_Mask = 0;
  local_118._16_4_ = 0.0;
  local_118._20_4_ = 0.0;
  local_118._24_4_ = 0.0;
  local_118._0_4_ = 0;
  local_118._4_4_ = 0.0;
  local_118._8_4_ = 0.0;
  local_118._12_4_ = 0.0;
  local_118._28_4_ = 0.0;
  local_118._32_4_ = 0.0;
  local_118._36_4_ = 0;
  local_118._40_4_ = 0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar6._0_4_ = (start->fields).Value.fields.x;
    uVar6._4_4_ = (start->fields).Value.fields.y;
    fVar29 = (start->fields).Value.fields.z;
    uVar5 = (end->fields).Value.fields.x;
    uVar9 = (end->fields).Value.fields.y;
    fVar31 = (end->fields).Value.fields.z;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    iVar20 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    fVar31 = fVar31 - fVar29;
    local_148.fields._0_8_ = CONCAT44((float)uVar9 - uVar6._4_4_,(float)uVar5 - (float)uVar6);
    local_148.fields.z = fVar31;
    if (dimensions != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      fVar2 = (dimensions->fields).Value.fields.x;
      fVar3 = (dimensions->fields).Value.fields.y;
      fVar4 = (dimensions->fields).Value.fields.z;
      if (Il2CppMethodInitialized_18433de5f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5f = '\x01';
      }
      fVar28 = (float)il2cpp_runtime_helper_180546a40(&local_148);
      if (fVar28 <= 1e-05) {
        pUVar11 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar30 = (pUVar11->zeroVector).fields.x;
        fVar32 = (pUVar11->zeroVector).fields.y;
        fVar31 = (pUVar11->zeroVector).fields.z;
      }
      else {
        fVar30 = ((float)uVar5 - (float)uVar6) / fVar28;
        fVar32 = ((float)uVar9 - uVar6._4_4_) / fVar28;
        fVar31 = fVar31 / fVar28;
      }
      if (orientation != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
        uVar13._0_4_ = (orientation->fields).Value.fields.x;
        uVar13._4_4_ = (orientation->fields).Value.fields.y;
        uVar14._0_4_ = (orientation->fields).Value.fields.z;
        uVar14._4_4_ = (orientation->fields).Value.fields.w;
        fVar28 = (float)il2cpp_runtime_helper_180546a40(&local_148);
        if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
        }
        local_res8.m_Mask = (int32_t)Utility_PhysicsLayer__CopyMask(iVar20,(MethodInfo *)0x0);
        iVar20 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
        }
        local_148.fields._0_8_ = CONCAT44(fVar32,fVar30);
        local_138.y = fVar3 * 0.5;
        local_138.x = fVar2 * 0.5;
        local_148.fields.z = fVar31;
        local_138.z = fVar4 * 0.5;
        local_128._0_8_ = uVar6;
        local_128.z = fVar29;
        local_e8.fields._0_8_ = uVar13;
        local_e8.fields._8_8_ = uVar14;
        pUVar21 = UnityEngine_Physics__BoxCastAll_2fe15d0
                            ((UnityEngine_Vector3_o *)&local_128,(UnityEngine_Vector3_o *)&local_138,
                             &local_148,(UnityEngine_Quaternion_o *)(local_118 + 0x30),fVar28,iVar20,
                             (MethodInfo *)0x0);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
        local_148.fields._0_8_ = __this;
        CustomLogic_CustomLogicListBuiltin___ctor(__this,(MethodInfo *)0x0);
        if (pUVar21 != (UnityEngine_RaycastHit_array *)0x0) {
          uVar27 = 0;
          do {
            if ((int)pUVar21->max_length <= (int)uVar27) {
              return __this;
            }
            if ((uint)pUVar21->max_length <= uVar27) {
label_182038cb2:
              ThrowIndexOutOfRangeException();
            }
            pUVar1 = pUVar21->m_Items + (int)uVar27;
            local_118._0_4_ = (pUVar1->fields).m_Point.fields.x;
            local_118._4_4_ = (pUVar1->fields).m_Point.fields.y;
            local_118._8_8_ = *(undefined8 *)&(pUVar1->fields).m_Point.fields.z;
            pUVar19 = &pUVar21->m_Items[(int)uVar27].fields;
            local_118._16_4_ = (pUVar19->m_Normal).fields.y;
            local_118._20_4_ = (pUVar19->m_Normal).fields.z;
            uVar15 = pUVar19->m_FaceID;
            pUVar19 = &pUVar21->m_Items[(int)uVar27].fields;
            uVar16 = pUVar19->m_Distance;
            uVar17 = (pUVar19->m_UV).fields.x;
            local_118._36_8_ = *(undefined8 *)&(pUVar19->m_UV).fields.y;
            local_118._24_4_ = uVar15;
            local_118._28_4_ = uVar16;
            local_118._32_4_ = uVar17;
            pUVar22 = UnityEngine_RaycastHit__get_collider
                                ((UnityEngine_RaycastHit_o *)local_118,(MethodInfo *)0x0);
            value = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar22,(MethodInfo *)0x0);
            if (value != (CustomLogic_BuiltinClassInstance_o *)0x0) {
              if (__this == (CustomLogic_CustomLogicListBuiltin_o *)0x0) break;
              pSVar12 = (__this->fields).List;
              __this_00 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
              CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_00,(MethodInfo *)0x0);
              bVar10 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
              if (((value->klass->_2).typeHierarchyDepth < bVar10) ||
                 ((value->klass->_2).typeHierarchy[(ulonglong)bVar10 - 1] !=
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              pCVar23 = (CustomLogic_BuiltinClassInstance_o *)0x0;
              if (bVar18) {
                pCVar23 = value;
              }
              if (__this_00 == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) break;
              CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                        (__this_00,pCVar23 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
              bVar10 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
              if (((value->klass->_2).typeHierarchyDepth < bVar10) ||
                 ((value->klass->_2).typeHierarchy[(ulonglong)bVar10 - 1] !=
                  (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
                bVar18 = false;
              }
              else {
                bVar18 = true;
              }
              pCVar23 = (CustomLogic_BuiltinClassInstance_o *)0x0;
              if (bVar18) {
                pCVar23 = value;
              }
              (__this_00->fields)._IsMapObject_k__BackingField =
                   pCVar23 != (CustomLogic_BuiltinClassInstance_o *)0x0;
              pUVar24 = UnityEngine_RaycastHit__get_point
                                  (local_d8,(UnityEngine_RaycastHit_o *)local_118,(MethodInfo *)0x0);
              uVar7._0_4_ = (pUVar24->fields).x;
              uVar7._4_4_ = (pUVar24->fields).y;
              fVar29 = (pUVar24->fields).z;
              pCVar25 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
              local_128._0_8_ = uVar7;
              local_128.z = fVar29;
              CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                        (pCVar25,(UnityEngine_Vector3_o *)&local_128,(MethodInfo *)0x0);
              (__this_00->fields)._Point_k__BackingField = pCVar25;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Point_k__BackingField,pCVar25);
              pUVar24 = UnityEngine_RaycastHit__get_normal
                                  ((UnityEngine_Vector3_o *)(local_118 + 0x30),
                                   (UnityEngine_RaycastHit_o *)local_118,(MethodInfo *)0x0);
              uVar8._0_4_ = (pUVar24->fields).x;
              uVar8._4_4_ = (pUVar24->fields).y;
              fVar29 = (pUVar24->fields).z;
              pCVar25 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
              local_138._0_8_ = uVar8;
              local_138.z = fVar29;
              CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                        (pCVar25,(UnityEngine_Vector3_o *)&local_138,(MethodInfo *)0x0);
              (__this_00->fields)._Normal_k__BackingField = pCVar25;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Normal_k__BackingField,pCVar25);
              fVar29 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)local_118,(MethodInfo *)0x0);
              (__this_00->fields)._Distance_k__BackingField = fVar29;
              (__this_00->fields)._Collider_k__BackingField = value;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Collider_k__BackingField,value);
              parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
              pUVar22 = UnityEngine_RaycastHit__get_collider
                                  ((UnityEngine_RaycastHit_o *)local_118,(MethodInfo *)0x0);
              if (parameters == (System_Object_array *)0x0) break;
              if (pUVar22 != (UnityEngine_Collider_o *)0x0) {
                pIVar26 = il2cpp_vm_Object_IsInst
                                    ((Il2CppObject *)pUVar22,(((parameters->obj).klass)->_1).element_class);
                if (pIVar26 == (Il2CppObject *)0x0) {
                  pIVar26 = il2cpp_codegen_get_array_type_mismatch_exception();
                  il2cpp_codegen_raise_exception(pIVar26,(MethodInfo *)0x0);
                }
              }
              if ((int)parameters->max_length == 0) goto label_182038cb2;
              parameters->m_Items[0] = (Il2CppObject *)pUVar22;
              Il2CppCodeGenWriteBarrier(parameters->m_Items,pUVar22);
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
              CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_01,parameters,(MethodInfo *)0x0);
              (__this_00->fields)._ColliderInfo_k__BackingField = __this_01;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._ColliderInfo_k__BackingField,__this_01);
              if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) break;
              il2cpp_runtime_helper_180012890(pSVar12,__this_00,MethodInfo_System_Collections_Generic_List_object_Add);
              __this = (CustomLogic_CustomLogicListBuiltin_o *)local_148.fields._0_8_;
            }
            uVar27 = uVar27 + 1;
          } while( true );
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$ClosestPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPhysicsBuiltin__ClosestPoint (CustomLogic_CustomLogicVector3Builtin_o* point, CustomLogic_CustomLogicColliderBuiltin_o* collider, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicQuaternionBuiltin_o* rotation, const MethodInfo* method);
// 0x182038ff0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPhysicsBuiltin__ClosestPoint
          (CustomLogic_CustomLogicVector3Builtin_o *point,CustomLogic_CustomLogicColliderBuiltin_o *collider,
          CustomLogic_CustomLogicVector3Builtin_o *position,
          CustomLogic_CustomLogicQuaternionBuiltin_o *rotation,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Collider_o *collider_00;
  undefined8 uVar6;
  undefined8 uVar7;
  UnityEngine_Vector3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_o local_78;
  UnityEngine_Quaternion_Fields local_68 [4];
  
  if (Il2CppMethodInitialized_184346501 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346501 = '\x01';
  }
  if ((((point != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (collider != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0)) &&
      (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (rotation != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    collider_00 = (collider->fields).collider;
    uVar1._0_4_ = (point->fields).Value.fields.x;
    uVar1._4_4_ = (point->fields).Value.fields.y;
    fVar4 = (point->fields).Value.fields.z;
    uVar2._0_4_ = (position->fields).Value.fields.x;
    uVar2._4_4_ = (position->fields).Value.fields.y;
    fVar5 = (position->fields).Value.fields.z;
    uVar6._0_4_ = (rotation->fields).Value.fields.x;
    uVar6._4_4_ = (rotation->fields).Value.fields.y;
    uVar7._0_4_ = (rotation->fields).Value.fields.z;
    uVar7._4_4_ = (rotation->fields).Value.fields.w;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_98._0_8_ = uVar2;
    local_98.z = fVar5;
    local_88._0_8_ = uVar1;
    local_88.z = fVar4;
    local_68[0]._0_8_ = uVar6;
    local_68[0]._8_8_ = uVar7;
    pUVar8 = UnityEngine_Physics__ClosestPoint
                       (&local_78,(UnityEngine_Vector3_o *)&local_88,collider_00,
                        (UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)local_68,
                        (MethodInfo *)0x0);
    uVar3._0_4_ = (pUVar8->fields).x;
    uVar3._4_4_ = (pUVar8->fields).y;
    fVar4 = (pUVar8->fields).z;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_88._0_8_ = uVar3;
    local_88.z = fVar4;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$ComputePenetration
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPhysicsBuiltin__ComputePenetration (CustomLogic_CustomLogicColliderBuiltin_o* colliderA, CustomLogic_CustomLogicVector3Builtin_o* positionA, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationA, CustomLogic_CustomLogicColliderBuiltin_o* colliderB, CustomLogic_CustomLogicVector3Builtin_o* positionB, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationB, const MethodInfo* method);
// 0x182039140

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
  float fVar3;
  float fVar4;
  UnityEngine_Collider_o *colliderA_00;
  UnityEngine_Collider_o *colliderB_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float local_res8 [8];
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Quaternion_Fields local_88;
  UnityEngine_Quaternion_Fields local_78 [5];
  
  if (Il2CppMethodInitialized_184346502 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346502 = '\x01';
  }
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_b8.z = 0.0;
  local_res8[0] = 0.0;
  if ((((colliderA != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
       (positionA != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
      (rotationA != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
     (((colliderB != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0 &&
       (positionB != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
      (rotationB != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)))) {
    colliderA_00 = (colliderA->fields).collider;
    colliderB_00 = (colliderB->fields).collider;
    uVar1._0_4_ = (positionA->fields).Value.fields.x;
    uVar1._4_4_ = (positionA->fields).Value.fields.y;
    fVar3 = (positionA->fields).Value.fields.z;
    uVar5._0_4_ = (rotationA->fields).Value.fields.x;
    uVar5._4_4_ = (rotationA->fields).Value.fields.y;
    uVar6._0_4_ = (rotationA->fields).Value.fields.z;
    uVar6._4_4_ = (rotationA->fields).Value.fields.w;
    fVar4 = (positionB->fields).Value.fields.z;
    uVar2._0_4_ = (positionB->fields).Value.fields.x;
    uVar2._4_4_ = (positionB->fields).Value.fields.y;
    uVar7._0_4_ = (rotationB->fields).Value.fields.x;
    uVar7._4_4_ = (rotationB->fields).Value.fields.y;
    uVar8._0_4_ = (rotationB->fields).Value.fields.z;
    uVar8._4_4_ = (rotationB->fields).Value.fields.w;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_a8._0_8_ = uVar2;
    local_a8.z = fVar4;
    local_98._0_8_ = uVar1;
    local_98.z = fVar3;
    local_88._0_8_ = uVar7;
    local_88._8_8_ = uVar8;
    local_78[0]._0_8_ = uVar5;
    local_78[0]._8_8_ = uVar6;
    bVar11 = UnityEngine_Physics__ComputePenetration
                       (colliderA_00,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)local_78,
                        colliderB_00,(UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Quaternion_o *)&local_88,
                        (UnityEngine_Vector3_o *)&local_b8,local_res8,(MethodInfo *)0x0);
    fVar4 = local_b8.z;
    fVar3 = local_res8[0];
    if (bVar11) {
      fVar9 = local_b8.x;
      fVar10 = local_b8.y;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_a8.z = fVar4 * fVar3;
      local_a8.y = fVar10 * fVar3;
      local_a8.x = fVar9 * fVar3;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
    }
    else {
      __this = CustomLogic_CustomLogicVector3Builtin__get_Zero((MethodInfo *)0x0);
    }
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$AreCollidersOverlapping
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__AreCollidersOverlapping (CustomLogic_CustomLogicColliderBuiltin_o* colliderA, CustomLogic_CustomLogicVector3Builtin_o* positionA, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationA, CustomLogic_CustomLogicColliderBuiltin_o* colliderB, CustomLogic_CustomLogicVector3Builtin_o* positionB, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationB, const MethodInfo* method);
// 0x1820384b0

bool CustomLogic_CustomLogicPhysicsBuiltin__AreCollidersOverlapping
               (CustomLogic_CustomLogicColliderBuiltin_o *colliderA,
               CustomLogic_CustomLogicVector3Builtin_o *positionA,
               CustomLogic_CustomLogicQuaternionBuiltin_o *rotationA,
               CustomLogic_CustomLogicColliderBuiltin_o *colliderB,
               CustomLogic_CustomLogicVector3Builtin_o *positionB,
               CustomLogic_CustomLogicQuaternionBuiltin_o *rotationB,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Collider_o *colliderA_00;
  UnityEngine_Collider_o *colliderB_00;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  float local_res8 [8];
  UnityEngine_Vector3_Fields local_b8;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Quaternion_Fields local_88;
  UnityEngine_Quaternion_Fields local_78 [5];
  
  if (Il2CppMethodInitialized_184346503 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_184346503 = '\x01';
  }
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_b8.z = 0.0;
  local_res8[0] = 0.0;
  if ((((colliderA != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
       (positionA != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
      (rotationA != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
     (((colliderB != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0 &&
       (positionB != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
      (rotationB != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)))) {
    colliderA_00 = (colliderA->fields).collider;
    colliderB_00 = (colliderB->fields).collider;
    uVar1._0_4_ = (positionA->fields).Value.fields.x;
    uVar1._4_4_ = (positionA->fields).Value.fields.y;
    fVar3 = (positionA->fields).Value.fields.z;
    uVar5._0_4_ = (rotationA->fields).Value.fields.x;
    uVar5._4_4_ = (rotationA->fields).Value.fields.y;
    uVar6._0_4_ = (rotationA->fields).Value.fields.z;
    uVar6._4_4_ = (rotationA->fields).Value.fields.w;
    fVar4 = (positionB->fields).Value.fields.z;
    uVar2._0_4_ = (positionB->fields).Value.fields.x;
    uVar2._4_4_ = (positionB->fields).Value.fields.y;
    uVar7._0_4_ = (rotationB->fields).Value.fields.x;
    uVar7._4_4_ = (rotationB->fields).Value.fields.y;
    uVar8._0_4_ = (rotationB->fields).Value.fields.z;
    uVar8._4_4_ = (rotationB->fields).Value.fields.w;
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_a8._0_8_ = uVar2;
    local_a8.z = fVar4;
    local_98._0_8_ = uVar1;
    local_98.z = fVar3;
    local_88._0_8_ = uVar7;
    local_88._8_8_ = uVar8;
    local_78[0]._0_8_ = uVar5;
    local_78[0]._8_8_ = uVar6;
    bVar9 = UnityEngine_Physics__ComputePenetration
                      (colliderA_00,(UnityEngine_Vector3_o *)&local_98,(UnityEngine_Quaternion_o *)local_78,
                       colliderB_00,(UnityEngine_Vector3_o *)&local_a8,(UnityEngine_Quaternion_o *)&local_88,
                       (UnityEngine_Vector3_o *)&local_b8,local_res8,(MethodInfo *)0x0);
    return bVar9;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPhysicsBuiltin__get_ClassName (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x18203ace0

System_String_o *
CustomLogic_CustomLogicPhysicsBuiltin__get_ClassName
          (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346504 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Physics");
    Il2CppMethodInitialized_184346504 = '\x01';
  }
  return "Physics";
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__get_IsAbstract (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPhysicsBuiltin__get_IsAbstract(CustomLogic_CustomLogicPhysicsBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__get_IsStatic (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPhysicsBuiltin__get_IsStatic(CustomLogic_CustomLogicPhysicsBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPhysicsBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicPhysicsBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


