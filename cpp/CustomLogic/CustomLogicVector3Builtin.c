// Type: CustomLogic.CustomLogicVector3Builtin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicVector3Builtin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicVector3Builtin.cs
// --------------------------------

// CustomLogic.CustomLogicVector3Builtin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f07d60
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f07ed9: mov rdx, qword ptr [rip + 0x21bb650]  ; MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
// asm:   0x181f07ee0: mov rcx, qword ptr [rbx + 0x28]
// asm:   0x181f07ee4: call 0x18066ed40  ; CustomLogic_CustomLogicEvaluator__ConvertTo_float_()
// asm:   0x181f07ee9: mov rcx, qword ptr [rip + 0x21eae60]  ; TypeInfo_CustomLogic_CustomLogicVector3Builtin
// asm:   0x181f07ef0: movaps xmm6, xmm0
// asm:   0x181f07ef3: call 0x1804170d0  ; il2cpp_runtime_helper_1804170d0()
// asm:   0x181f07ef8: xor r9d, r9d
// asm:   0x181f07efb: movaps xmm2, xmm6
// asm:   0x181f07efe: movaps xmm1, xmm7
// asm:   0x181f07f01: mov rcx, rax
// asm:   0x181f07f04: mov rbx, rax
// asm:   0x181f07f07: call 0x181ed7d30  ; CustomLogic_CustomLogicVector3Builtin___ctor()
// asm:   0x181f07f0c: jmp 0x181f07e86

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  float fVar4;
  float fVar5;
  float z;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434528f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_18434528f = '\x01';
  }
  local_res8[0] = 0;
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(pCVar2,(MethodInfo *)0x0);
    return pCVar2;
  }
  if ((int)args->max_length != 1) {
    if ((int)args->max_length == 2) {
      pIVar1 = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (1 < (uint)args->max_length) {
        fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (args->m_Items[1],
                           (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7d30(pCVar2,fVar4,fVar5,(MethodInfo *)0x0);
        return pCVar2;
      }
    }
    else {
      if ((int)args->max_length != 3) {
        NullCheck(args);
        local_res8[0] = (int32_t)args->max_length;
        pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
        str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
        str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicVector3Builtin constructor found that takes ");
        pSVar3 = System_String__Concat_1969b70(str0,pSVar3,str2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
        System_ArgumentException___ctor_1a77cc0(__this,pSVar3,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Factory_CreateInstance);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
      }
      if ((int)args->max_length != 0) {
        pIVar1 = args->m_Items[0];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (pIVar1,(MethodInfo_66ED40 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((1 < (uint)args->max_length) &&
           (fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              (args->m_Items[1],
                               (MethodInfo_66ED40 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float),
           2 < (uint)args->max_length)) {
          z = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (args->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7db0(pCVar2,fVar4,fVar5,z,(MethodInfo *)0x0);
          return pCVar2;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  pIVar1 = args->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7ea0(pCVar2,fVar4,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f0ca90

void CustomLogic_CustomLogicVector3Builtin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843452c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452c5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings___c___ctor (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicVector3Builtin_Bindings___c___ctor(CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Angle_b__18_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08460

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Angle_b__18_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *from;
  CustomLogic_CustomLogicVector3Builtin_o *to;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_1843452c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452c6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    from = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar1,(MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      to = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__a->m_Items[1],
                      (MethodInfo_66EB70 *)
                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      local_res18[0] = CustomLogic_CustomLogicVector3Builtin__Angle(from,to,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__ClampMagnitude>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__ClampMagnitude_b__19_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08620

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__ClampMagnitude_b__19_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  float maxLength;
  
  if (Il2CppMethodInitialized_1843452c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452c7 = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      maxLength = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[1],
                             (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__ClampMagnitude(pCVar1,maxLength,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Cross>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Cross_b__20_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f088a0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Cross_b__20_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  
  if (Il2CppMethodInitialized_1843452c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452c8 = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_66EB70 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Cross(pCVar1,b,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Distance>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Distance_b__21_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08980

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Distance_b__21_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *a;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_1843452c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452c9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    a = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (pIVar1,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_66EB70 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      local_res18[0] = CustomLogic_CustomLogicVector3Builtin__Distance(a,b,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Dot>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Dot_b__22_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08af0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Dot_b__22_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *a;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_1843452ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452ca = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    a = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                  (pIVar1,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_66EB70 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      local_res18[0] = CustomLogic_CustomLogicVector3Builtin__Dot(a,b,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Lerp_b__23_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0a150

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Lerp_b__23_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  float t;
  
  if (Il2CppMethodInitialized_1843452cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452cb = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_66EB70 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          pCVar1 = CustomLogic_CustomLogicVector3Builtin__Lerp(pCVar1,b,t,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__24_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0a230

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__24_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  float t;
  
  if (Il2CppMethodInitialized_1843452cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452cc = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_66EB70 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          pCVar1 = CustomLogic_CustomLogicVector3Builtin__LerpUnclamped(pCVar1,b,t,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Max>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Max_b__25_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0a310

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Max_b__25_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  
  if (Il2CppMethodInitialized_1843452cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452cd = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_66EB70 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Max(pCVar1,b,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Min>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Min_b__26_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0a3c0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Min_b__26_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  
  if (Il2CppMethodInitialized_1843452ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452ce = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_66EB70 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Min(pCVar1,b,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__MoveTowards_b__27_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0a470

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__MoveTowards_b__27_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *target;
  float maxDistanceDelta;
  
  if (Il2CppMethodInitialized_1843452cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452cf = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        target = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          maxDistanceDelta =
               CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (__a->m_Items[2],
                          (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          pCVar1 = CustomLogic_CustomLogicVector3Builtin__MoveTowards
                             (pCVar1,target,maxDistanceDelta,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Normalize>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Normalize_b__28_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0a600

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Normalize_b__28_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843452d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452d0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
      ;
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Normalize(pCVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__OrthoNormalize>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__OrthoNormalize_b__29_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0a680

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__OrthoNormalize_b__29_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *normal;
  CustomLogic_CustomLogicVector3Builtin_o *tangent;
  
  if (Il2CppMethodInitialized_1843452d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452d1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    normal = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      tangent = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin__OrthoNormalize(normal,tangent,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Project>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Project_b__30_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0afd0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Project_b__30_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  
  if (Il2CppMethodInitialized_1843452d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452d2 = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_66EB70 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Project(pCVar1,b,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__ProjectOnPlane>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__ProjectOnPlane_b__31_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0af20

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__ProjectOnPlane_b__31_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *plane;
  
  if (Il2CppMethodInitialized_1843452d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452d3 = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      plane = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__ProjectOnPlane(pCVar1,plane,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Reflect>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Reflect_b__32_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b180

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Reflect_b__32_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *inNormal;
  
  if (Il2CppMethodInitialized_1843452d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452d4 = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      inNormal = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Reflect(pCVar1,inNormal,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__RotateTowards>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__RotateTowards_b__33_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b2d0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__RotateTowards_b__33_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *target;
  float maxRadiansDelta;
  float maxMagnitudeDelta;
  
  if (Il2CppMethodInitialized_1843452d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452d5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        target = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          maxRadiansDelta =
               CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (__a->m_Items[2],
                          (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if (3 < (uint)__a->max_length) {
            maxMagnitudeDelta =
                 CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (__a->m_Items[3],
                            (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
            pCVar1 = CustomLogic_CustomLogicVector3Builtin__RotateTowards
                               (pCVar1,target,maxRadiansDelta,maxMagnitudeDelta,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SignedAngle>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SignedAngle_b__34_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0bd90

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SignedAngle_b__34_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *from;
  CustomLogic_CustomLogicVector3Builtin_o *to;
  CustomLogic_CustomLogicVector3Builtin_o *axis;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_1843452d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452d6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      from = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                       );
      if (1 < (uint)__a->max_length) {
        to = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[1],
                        (MethodInfo_66EB70 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          axis = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[2],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
          local_res18[0] = CustomLogic_CustomLogicVector3Builtin__SignedAngle(from,to,axis,(MethodInfo *)0x0);
          pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
          return pIVar1;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Slerp>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Slerp_b__35_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0be80

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Slerp_b__35_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  float t;
  
  if (Il2CppMethodInitialized_1843452d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452d7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_66EB70 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          pCVar1 = CustomLogic_CustomLogicVector3Builtin__Slerp(pCVar1,b,t,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SlerpUnclamped>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__36_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0bf60

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__36_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  float t;
  
  if (Il2CppMethodInitialized_1843452d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452d8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_66EB70 *)
                       MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          pCVar1 = CustomLogic_CustomLogicVector3Builtin__SlerpUnclamped(pCVar1,b,t,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SmoothDamp>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SmoothDamp_b__37_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c040

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SmoothDamp_b__37_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *target;
  CustomLogic_CustomLogicVector3Builtin_o *currentVelocity;
  float smoothTime;
  float maxSpeed;
  
  if (Il2CppMethodInitialized_1843452d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452d9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        target = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          currentVelocity =
               CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[2],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
          if (3 < (uint)__a->max_length) {
            smoothTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                   (__a->m_Items[3],
                                    (MethodInfo_66ED40 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
            if (4 < (uint)__a->max_length) {
              maxSpeed = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                   (__a->m_Items[4],
                                    (MethodInfo_66ED40 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
              pCVar1 = CustomLogic_CustomLogicVector3Builtin__SmoothDamp
                                 (pCVar1,target,currentVelocity,smoothTime,maxSpeed,(MethodInfo *)0x0);
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


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Set>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Set_b__38_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0bb90

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Set_b__38_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float x;
  float y;
  float z;
  
  if (Il2CppMethodInitialized_1843452da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452da = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      x = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (1 < (uint)__a->max_length) {
        y = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (__a->m_Items[1],
                       (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (2 < (uint)__a->max_length) {
          z = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
            CustomLogic_CustomLogicVector3Builtin__Set(__c,x,y,z,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
          goto label_181f0bc7f;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181f0bc7f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Scale>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Scale_b__39_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b3e0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Scale_b__39_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Scale(__c,__a->m_Items[0],(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Multiply>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Multiply_b__40_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0a550

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Multiply_b__40_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  
  if (Il2CppMethodInitialized_1843452db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452db = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_66EB70 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Multiply(pCVar1,b,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Divide>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Divide_b__41_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f08a40

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Divide_b__41_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  
  if (Il2CppMethodInitialized_1843452dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452dc = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_66EB70 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Divide(pCVar1,b,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__GetRotationDirection>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__GetRotationDirection_b__42_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f099c0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__GetRotationDirection_b__42_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  
  if (Il2CppMethodInitialized_1843452dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452dd = '\x01';
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
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_66EB70 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__GetRotationDirection(pCVar1,b,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Copy___b__43_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c470

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Copy___b__43_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicVector3Builtin____Copy__(__c,(MethodInfo *)0x0);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Add___b__44_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c340

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Add___b__44_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicVector3Builtin____Add__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Sub___b__45_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c7a0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Sub___b__45_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicVector3Builtin____Sub__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Mul___b__46_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c750

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Mul___b__46_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicVector3Builtin____Mul__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Div___b__47_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c490

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Div___b__47_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicVector3Builtin____Div__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Eq___b__48_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c610

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Eq___b__48_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      local_res18[0] =
           CustomLogic_CustomLogicVector3Builtin____Eq__
                     (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Hash___b__49_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c710

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Hash___b__49_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t local_res10 [6];
  
  if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_res10[0] = CustomLogic_CustomLogicVector3Builtin____Hash__(__c,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res10);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVector3Builtin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ee51c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_01;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar5;
  System_Func_CustomLogicVector3Builtin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184345290 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"__Sub__");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Slerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Normalize");
    il2cpp_codegen_initialize_runtime_metadata(&"Down");
    il2cpp_codegen_initialize_runtime_metadata(&"SignedAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"GetRotationDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Reflect");
    il2cpp_codegen_initialize_runtime_metadata(&"OrthoNormalize");
    il2cpp_codegen_initialize_runtime_metadata(&"Max");
    il2cpp_codegen_initialize_runtime_metadata(&"SmoothDamp");
    il2cpp_codegen_initialize_runtime_metadata(&"Multiply");
    il2cpp_codegen_initialize_runtime_metadata(&"Divide");
    il2cpp_codegen_initialize_runtime_metadata(&"LerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Project");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTowards");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Dot");
    il2cpp_codegen_initialize_runtime_metadata(&"Distance");
    il2cpp_codegen_initialize_runtime_metadata(&"__Div__");
    il2cpp_codegen_initialize_runtime_metadata(&"One");
    il2cpp_codegen_initialize_runtime_metadata(&"SqrMagnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"ClampMagnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"Cross");
    il2cpp_codegen_initialize_runtime_metadata(&"PositiveInfinity");
    il2cpp_codegen_initialize_runtime_metadata(&"Left");
    il2cpp_codegen_initialize_runtime_metadata(&"Min");
    il2cpp_codegen_initialize_runtime_metadata(&"Magnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"NegativeInfinity");
    il2cpp_codegen_initialize_runtime_metadata(&"SlerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"__Add__");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateTowards");
    il2cpp_codegen_initialize_runtime_metadata(&"Zero");
    il2cpp_codegen_initialize_runtime_metadata(&"ProjectOnPlane");
    il2cpp_codegen_initialize_runtime_metadata(&"Normalized");
    il2cpp_codegen_initialize_runtime_metadata(&"Angle");
    Il2CppMethodInitialized_184345290 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7b5fea5f) {
    if (uVar3 < 0x39907618) {
      if (uVar3 < 0x1e9e9f86) {
        if (uVar3 < 0x18c37b42) {
          if (uVar3 != 0xb9c3383) {
            if (uVar3 == 0xdc1f3cc) {
              bVar2 = System_String__op_Equality(name,"__Add__",(MethodInfo *)0x0);
              if (!bVar2) goto label_181ee8400;
              if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
              }
              if (Il2CppMethodInitialized_1843452bb == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Add___b__44_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
                Il2CppMethodInitialized_1843452bb = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
              }
              __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__44_0;
              if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
              if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
              __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
              System_Func_object__object__object____ctor
                        (__this_01,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Add___b__44_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__44_0 =
                   (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
              targetAddress =
                   &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__44_0;
            }
            else {
              if (uVar3 != 0x18c37b41) goto label_181ee8400;
              bVar2 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0);
              if (!bVar2) goto label_181ee8400;
              if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
              }
              if (Il2CppMethodInitialized_1843452bd == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Mul___b__46_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
                Il2CppMethodInitialized_1843452bd = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
              }
              __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__46_0;
              if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
              if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
              __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
              System_Func_object__object__object____ctor
                        (__this_01,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Mul___b__46_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__46_0 =
                   (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
              targetAddress =
                   &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__46_0;
            }
            goto label_181ee83c4;
          }
          bVar2 = System_String__op_Equality(name,"Zero",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345297 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_8_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object)
            ;
            Il2CppMethodInitialized_184345297 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_8_0
          ;
        }
        else if (uVar3 == 0x1cb1b18f) {
          bVar2 = System_String__op_Equality(name,"One",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345298 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__One_g____getter_9_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object)
            ;
            Il2CppMethodInitialized_184345298 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__One_g____getter_9_0
          ;
        }
        else {
          if (uVar3 == 0x1e7a6f6f) {
            bVar2 = System_String__op_Equality(name,"ProjectOnPlane",(MethodInfo *)0x0);
            if (!bVar2) goto label_181ee8400;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            if (Il2CppMethodInitialized_1843452ae == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ProjectOnPlane_b__31_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
              Il2CppMethodInitialized_1843452ae = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__31_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ProjectOnPlane_b__31_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__31_0 =
                 (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__31_0;
            goto label_181ee83c4;
          }
          if (uVar3 != 0x1e9e9f85) goto label_181ee8400;
          bVar2 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_18434529c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Right_g____getter_13_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object)
            ;
            Il2CppMethodInitialized_18434529c = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Right_g____getter_13_0
          ;
        }
        goto label_181ee54f6;
      }
      if (uVar3 < 0x28b19ea4) {
        if (uVar3 == 0x21ed379a) {
          bVar2 = System_String__op_Equality(name,"ClampMagnitude",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_1843452a2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ClampMagnitude_b__19_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            Il2CppMethodInitialized_1843452a2 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__19_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ClampMagnitude_b__19_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__19_0 =
               (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__19_0
          ;
        }
        else if (uVar3 == 0x28528e11) {
          bVar2 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_1843452b6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Scale_b__39_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            Il2CppMethodInitialized_1843452b6 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__39_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Scale_b__39_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__39_0 =
               (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__39_0
          ;
        }
        else {
          if (uVar3 != 0x28b19ea3) goto label_181ee8400;
          bVar2 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_1843452b5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Set_b__38_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            Il2CppMethodInitialized_1843452b5 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__38_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Set_b__38_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__38_0 =
               (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__38_0
          ;
        }
      }
      else if (uVar3 == 0x2e9445f7) {
        bVar2 = System_String__op_Equality(name,"Min",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452a9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Min_b__26_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452a9 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__26_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Min_b__26_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__26_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__26_0;
      }
      else if (uVar3 == 0x386d9fc0) {
        bVar2 = System_String__op_Equality(name,"Dot",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452a5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Dot_b__22_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452a5 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__22_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Dot_b__22_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__22_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__22_0;
      }
      else {
        if (uVar3 != 0x39907617) goto label_181ee8400;
        bVar2 = System_String__op_Equality(name,"Slerp",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452b2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Slerp_b__35_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452b2 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__35_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Slerp_b__35_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__35_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__35_0;
      }
    }
    else if (uVar3 < 0x441a7ddf) {
      if (0x3ca7e3b9 < uVar3) {
        if (uVar3 == 0x42f35940) {
          bVar2 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345299 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object)
            ;
            Il2CppMethodInitialized_184345299 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
          ;
        }
        else {
          if (uVar3 != 0x434cfcb8) {
            if (uVar3 != 0x441a7dde) goto label_181ee8400;
            bVar2 = System_String__op_Equality(name,"GetRotationDirection",(MethodInfo *)0x0);
            if (!bVar2) goto label_181ee8400;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            if (Il2CppMethodInitialized_1843452b9 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__GetRotationDirection_b
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
              Il2CppMethodInitialized_1843452b9 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__42_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__GetRotationDirection_b
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__42_0 =
                 (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__42_0;
            goto label_181ee83c4;
          }
          bVar2 = System_String__op_Equality(name,"Normalized",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345294 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_5
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object)
            ;
            Il2CppMethodInitialized_184345294 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_5
          ;
        }
        goto label_181ee54f6;
      }
      if (uVar3 == 0x39c493b8) {
        bVar2 = System_String__op_Equality(name,"Angle",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452a1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Angle_b__18_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452a1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__18_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Angle_b__18_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__18_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__18_0;
      }
      else if (uVar3 == 0x3c0ea91a) {
        bVar2 = System_String__op_Equality(name,"RotateTowards",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452b0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__RotateTowards_b__33_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452b0 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__33_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__RotateTowards_b__33_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__33_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__33_0;
      }
      else {
        if (uVar3 != 0x3ca7e3b9) goto label_181ee8400;
        bVar2 = System_String__op_Equality(name,"Max",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452a8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Max_b__25_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452a8 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__25_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Max_b__25_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__25_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__25_0;
      }
    }
    else if (uVar3 < 0x6a4c91d7) {
      if (uVar3 == 0x4adde30c) {
        bVar2 = System_String__op_Equality(name,"Normalize",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452ab == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Normalize_b__28_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452ab = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__28_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Normalize_b__28_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__28_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__28_0;
      }
      else if (uVar3 == 0x549f4d10) {
        bVar2 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452ba == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Copy___b__43_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452ba = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__43_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Copy___b__43_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__43_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__43_0;
      }
      else {
        if (uVar3 != 0x6a4c91d6) goto label_181ee8400;
        bVar2 = System_String__op_Equality(name,"SlerpUnclamped",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452b3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__36_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452b3 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__36_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__36_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__36_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__36_0;
      }
    }
    else if (uVar3 == 0x74ee9015) {
      bVar2 = System_String__op_Equality(name,"SmoothDamp",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee8400;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SmoothDamp_b__37_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843452b4 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__37_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object
                            );
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SmoothDamp_b__37_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__37_0 =
           (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__37_0;
    }
    else if (uVar3 == 0x792a6491) {
      bVar2 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee8400;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452c0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Hash___b__49_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843452c0 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__49_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object
                            );
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Hash___b__49_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__49_0 =
           (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__49_0;
    }
    else {
      if (uVar3 != 0x7b5fea5e) goto label_181ee8400;
      bVar2 = System_String__op_Equality(name,"Project",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee8400;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452ad == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Project_b__30_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843452ad = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__30_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object
                            );
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Project_b__30_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__30_0 =
           (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__30_0;
    }
  }
  else if (uVar3 < 0xc370544b) {
    if (uVar3 < 0xa4995036) {
      if (uVar3 < 0x91efe6d8) {
        if (uVar3 != 0x7bdb45c1) {
          if (uVar3 == 0x7d671990) {
            bVar2 = System_String__op_Equality(name,"Divide",(MethodInfo *)0x0);
            if (!bVar2) goto label_181ee8400;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            if (Il2CppMethodInitialized_1843452b8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Divide_b__41_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
              Il2CppMethodInitialized_1843452b8 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__41_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Divide_b__41_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__41_0 =
                 (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__41_0;
          }
          else {
            if (uVar3 != 0x91efe6d7) goto label_181ee8400;
            bVar2 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
            if (!bVar2) goto label_181ee8400;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            if (Il2CppMethodInitialized_1843452bf == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Eq___b__48_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
              Il2CppMethodInitialized_1843452bf = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__48_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Eq___b__48_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__48_0 =
                 (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__48_0;
          }
          goto label_181ee83c4;
        }
        bVar2 = System_String__op_Equality(name,"SqrMagnitude",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_184345296 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          Il2CppMethodInitialized_184345296 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
        ;
      }
      else if (uVar3 == 0x92773890) {
        bVar2 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_18434529b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Left_g____getter_12_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          Il2CppMethodInitialized_18434529b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Left_g____getter_12_0
        ;
      }
      else {
        if (uVar3 == 0x9e956088) {
          bVar2 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_1843452a6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Lerp_b__23_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            Il2CppMethodInitialized_1843452a6 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__23_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Lerp_b__23_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__23_0 =
               (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__23_0
          ;
          goto label_181ee83c4;
        }
        if (uVar3 != 0xa4995035) goto label_181ee8400;
        bVar2 = System_String__op_Equality(name,"Down",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_18434529a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Down_g____getter_11_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          Il2CppMethodInitialized_18434529a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Down_g____getter_11_0
        ;
      }
      goto label_181ee54f6;
    }
    if (uVar3 < 0xb127a616) {
      if (uVar3 == 0xa734d965) {
        bVar2 = System_String__op_Equality(name,"Multiply",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Multiply_b__40_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452b7 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__40_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Multiply_b__40_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__40_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__40_0;
      }
      else {
        if (uVar3 != 0xacfe0068) {
          if (uVar3 != 0xb127a615) goto label_181ee8400;
          bVar2 = System_String__op_Equality(name,"Magnitude",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345295 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_6
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object)
            ;
            Il2CppMethodInitialized_184345295 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_6
          ;
          goto label_181ee54f6;
        }
        bVar2 = System_String__op_Equality(name,"MoveTowards",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452aa == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__MoveTowards_b__27_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452aa = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__27_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__MoveTowards_b__27_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__27_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__27_0;
      }
    }
    else if (uVar3 == 0xb663d53b) {
      bVar2 = System_String__op_Equality(name,"Cross",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee8400;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452a3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Cross_b__20_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843452a3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__20_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object
                            );
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Cross_b__20_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__20_0 =
           (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__20_0;
    }
    else {
      if (uVar3 == 0xc2954bc2) {
        bVar2 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_18434529e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Back_g____getter_15_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          Il2CppMethodInitialized_18434529e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Back_g____getter_15_0
        ;
        goto label_181ee54f6;
      }
      if (uVar3 != 0xc370544a) goto label_181ee8400;
      bVar2 = System_String__op_Equality(name,"Reflect",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee8400;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452af == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Reflect_b__32_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843452af = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__32_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object
                            );
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Reflect_b__32_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__32_0 =
           (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__32_0;
    }
  }
  else {
    if (0xdd0c1e27 < uVar3) {
      if (uVar3 < 0xe0993adb) {
        if (uVar3 == 0xdf0c214d) {
          bVar2 = System_String__op_Equality(name,"Z",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345293 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicVector3Builtin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____getter_4_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____setter_4_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object)
            ;
            Il2CppMethodInitialized_184345293 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____getter_4_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector3Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____setter_4_1
          ;
label_181ee5cb2:
          System_Action_object__object____ctor
                    (__this_02,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
          goto label_181ee5cd4;
        }
        if (uVar3 == 0xdfeb0948) {
          bVar2 = System_String__op_Equality(name,"SignedAngle",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_1843452b1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SignedAngle_b__34_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            Il2CppMethodInitialized_1843452b1 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__34_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SignedAngle_b__34_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__34_0 =
               (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__34_0
          ;
          goto label_181ee83c4;
        }
        if (uVar3 != 0xe0993ada) goto label_181ee8400;
        bVar2 = System_String__op_Equality(name,"NegativeInfinity",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_18434529f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          Il2CppMethodInitialized_18434529f = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
        ;
      }
      else {
        if (uVar3 != 0xe50883ba) {
          if (uVar3 == 0xf4248f7b) {
            bVar2 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
            if (!bVar2) goto label_181ee8400;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            if (Il2CppMethodInitialized_1843452a7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__24_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
              Il2CppMethodInitialized_1843452a7 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__24_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__24_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__24_0 =
                 (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__24_0;
          }
          else {
            if (uVar3 != 0xff76b6dc) {
label_181ee8400:
              pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicVector3Builtin not found");
              str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
              pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
              klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
              __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
              System_Exception___ctor_1b6abf0(__this_04,pSVar4,(MethodInfo *)0x0);
              pMVar5 = il2cpp_codegen_get_runtime_metadata
                                 (&
                                  MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_CreateMemberBinding
                                 );
              il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar5);
            }
            bVar2 = System_String__op_Equality(name,"__Div__",(MethodInfo *)0x0);
            if (!bVar2) goto label_181ee8400;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            if (Il2CppMethodInitialized_1843452be == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Div___b__47_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
              Il2CppMethodInitialized_1843452be = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__47_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Div___b__47_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__47_0 =
                 (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__47_0;
          }
          goto label_181ee83c4;
        }
        bVar2 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_18434529d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Forward_g____getter_14_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          Il2CppMethodInitialized_18434529d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Forward_g____getter_14_0
        ;
      }
label_181ee54f6:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
      __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
label_181ee5cd4:
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)__this_02,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor
                );
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
    if (uVar3 < 0xd7cecb56) {
      if (uVar3 == 0xd3d96082) {
        bVar2 = System_String__op_Equality(name,"Distance",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452a4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Distance_b__21_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452a4 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__21_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Distance_b__21_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__21_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__21_0;
      }
      else {
        if (uVar3 == 0xd6c0fe1a) {
          bVar2 = System_String__op_Equality(name,"PositiveInfinity",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_1843452a0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object)
            ;
            Il2CppMethodInitialized_1843452a0 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
          ;
          goto label_181ee54f6;
        }
        if (uVar3 != 0xd7cecb55) goto label_181ee8400;
        bVar2 = System_String__op_Equality(name,"__Sub__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee8400;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_1843452bc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Sub___b__45_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
          Il2CppMethodInitialized_1843452bc = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__45_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Sub___b__45_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__45_0 =
             (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__45_0;
      }
    }
    else {
      if (uVar3 != 0xd80ed56c) {
        if (uVar3 == 0xdc0c1c94) {
          bVar2 = System_String__op_Equality(name,"Y",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345292 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicVector3Builtin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object)
            ;
            Il2CppMethodInitialized_184345292 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector3Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
          ;
        }
        else {
          if (uVar3 != 0xdd0c1e27) goto label_181ee8400;
          bVar2 = System_String__op_Equality(name,"X",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee8400;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345291 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicVector3Builtin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____getter_2_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____setter_2_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object)
            ;
            Il2CppMethodInitialized_184345291 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____getter_2_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector3Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____setter_2_1
          ;
        }
        goto label_181ee5cb2;
      }
      bVar2 = System_String__op_Equality(name,"OrthoNormalize",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee8400;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
      }
      if (Il2CppMethodInitialized_1843452ac == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__OrthoNormalize_b__29_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843452ac = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__29_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee83cc;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object
                            );
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__OrthoNormalize_b__29_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__29_0 =
           (System_Func_CustomLogicVector3Builtin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__29_0;
    }
  }
label_181ee83c4:
  Il2CppCodeGenWriteBarrier(targetAddress,__this_01);
label_181ee83cc:
  __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_03,(System_String_o *)__this_01,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__X
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__X (const MethodInfo* method);
// 0x181efee00

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__X(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  System_Action_CustomLogicVector3Builtin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345291 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicVector3Builtin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_184345291 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector3Builtin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Y
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Y (const MethodInfo* method);
// 0x181efeef0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Y(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  System_Action_CustomLogicVector3Builtin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345292 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicVector3Builtin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_184345292 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector3Builtin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Z
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Z (const MethodInfo* method);
// 0x181efefe0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Z(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  System_Action_CustomLogicVector3Builtin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345293 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicVector3Builtin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_184345293 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector3Builtin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____setter_4_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Normalized
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Normalized (const MethodInfo* method);
// 0x181efcd30

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Normalized(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345294 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_184345294 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Magnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Magnitude (const MethodInfo* method);
// 0x181efcb50

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Magnitude(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345295 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_184345295 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_6
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__SqrMagnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__SqrMagnitude (const MethodInfo* method);
// 0x181efe1d0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__SqrMagnitude(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345296 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_184345296 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Zero
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Zero (const MethodInfo* method);
// 0x181eff0d0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Zero(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345297 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_184345297 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__One
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__One (const MethodInfo* method);
// 0x181efcfb0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__One(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345298 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__One_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_184345298 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__One_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x181efe8b0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345299 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_184345299 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Down
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Down (const MethodInfo* method);
// 0x181efb840

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Down(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434529a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Down_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_18434529a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Down_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Left (const MethodInfo* method);
// 0x181efc6f0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Left(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434529b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Left_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_18434529b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Left_g____getter_12_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x181efd7d0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434529c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Right_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_18434529c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Right_g____getter_13_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x181efbe80

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434529d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Forward_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_18434529d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Forward_g____getter_14_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Back
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Back (const MethodInfo* method);
// 0x181efa940

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Back(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434529e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Back_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_18434529e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Back_g____getter_15_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__NegativeInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__NegativeInfinity (const MethodInfo* method);
// 0x181efcc90

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__NegativeInfinity(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434529f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_18434529f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__PositiveInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__PositiveInfinity (const MethodInfo* method);
// 0x181efd2d0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__PositiveInfinity(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843452a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_1843452a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Angle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Angle (const MethodInfo* method);
// 0x181ef4280

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Angle(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Angle_b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452a1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__18_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Angle_b__18_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__18_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__ClampMagnitude
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ClampMagnitude (const MethodInfo* method);
// 0x181ef4700

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ClampMagnitude(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ClampMagnitude_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452a2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__19_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ClampMagnitude_b__19_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__19_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__19_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Cross
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Cross (const MethodInfo* method);
// 0x181ef4b80

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Cross(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Cross_b__20_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452a3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__20_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Cross_b__20_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__20_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__20_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Distance
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Distance (const MethodInfo* method);
// 0x181ef4dc0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Distance(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Distance_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452a4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__21_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Distance_b__21_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__21_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__21_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Dot
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Dot (const MethodInfo* method);
// 0x181ef5010

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Dot(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Dot_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452a5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__22_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Dot_b__22_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__22_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__22_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x181ef6a20

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Lerp_b__23_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452a6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__23_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Lerp_b__23_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__23_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__23_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x181ef6900

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__LerpUnclamped(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__24_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452a7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__24_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__24_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__24_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__24_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Max
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Max (const MethodInfo* method);
// 0x181ef6b40

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Max(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Max_b__25_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452a8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__25_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Max_b__25_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__25_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__25_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Min
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Min (const MethodInfo* method);
// 0x181ef6c60

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Min(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Min_b__26_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452a9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__26_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Min_b__26_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__26_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__26_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__MoveTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__MoveTowards (const MethodInfo* method);
// 0x181ef6d80

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__MoveTowards(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__MoveTowards_b__27_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452aa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__27_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__MoveTowards_b__27_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__27_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__27_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Normalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Normalize (const MethodInfo* method);
// 0x181ef6fd0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Normalize(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Normalize_b__28_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452ab = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__28_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Normalize_b__28_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__28_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__28_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__OrthoNormalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__OrthoNormalize (const MethodInfo* method);
// 0x181ef70f0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__OrthoNormalize(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__OrthoNormalize_b__29_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452ac = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__29_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__OrthoNormalize_b__29_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__29_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__29_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Project
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Project (const MethodInfo* method);
// 0x181ef7c30

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Project(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Project_b__30_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452ad = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__30_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Project_b__30_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__30_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__30_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__ProjectOnPlane
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ProjectOnPlane (const MethodInfo* method);
// 0x181ef7b10

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ProjectOnPlane(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ProjectOnPlane_b__31_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452ae = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__31_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ProjectOnPlane_b__31_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__31_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__31_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Reflect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Reflect (const MethodInfo* method);
// 0x181ef7e70

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Reflect(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Reflect_b__32_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452af = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__32_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Reflect_b__32_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__32_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__32_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__RotateTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__RotateTowards (const MethodInfo* method);
// 0x181ef80c0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__RotateTowards(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__RotateTowards_b__33_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452b0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__33_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__RotateTowards_b__33_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__33_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__33_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SignedAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SignedAngle (const MethodInfo* method);
// 0x181ef90e0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SignedAngle(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SignedAngle_b__34_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452b1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__34_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SignedAngle_b__34_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__34_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__34_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Slerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Slerp (const MethodInfo* method);
// 0x181ef9340

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Slerp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Slerp_b__35_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452b2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__35_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Slerp_b__35_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__35_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__35_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SlerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SlerpUnclamped (const MethodInfo* method);
// 0x181ef9210

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SlerpUnclamped(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__36_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452b3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__36_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__36_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__36_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__36_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SmoothDamp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SmoothDamp (const MethodInfo* method);
// 0x181ef9470

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SmoothDamp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SmoothDamp_b__37_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452b4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__37_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SmoothDamp_b__37_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__37_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__37_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x181ef8e90

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Set_b__38_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452b5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__38_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Set_b__38_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__38_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__38_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Scale
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Scale (const MethodInfo* method);
// 0x181ef81f0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Scale(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Scale_b__39_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452b6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__39_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Scale_b__39_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__39_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__39_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Multiply
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Multiply (const MethodInfo* method);
// 0x181ef6ea0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Multiply(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Multiply_b__40_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452b7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__40_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Multiply_b__40_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__40_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__40_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Divide
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Divide (const MethodInfo* method);
// 0x181ef4ee0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Divide(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Divide_b__41_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452b8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__41_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Divide_b__41_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__41_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__41_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__GetRotationDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__GetRotationDirection (const MethodInfo* method);
// 0x181ef6110

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__GetRotationDirection
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__GetRotationDirection_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452b9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__42_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__GetRotationDirection_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__42_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__42_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x181ef9b50

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Copy___b__43_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452ba = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__43_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Copy___b__43_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__43_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__43_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Add__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Add__ (const MethodInfo* method);
// 0x181ef9a20

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Add__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Add___b__44_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452bb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__44_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Add___b__44_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__44_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__44_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Sub__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Sub__ (const MethodInfo* method);
// 0x181efa4a0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Sub__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Sub___b__45_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452bc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__45_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Sub___b__45_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__45_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__45_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x181efa370

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Mul___b__46_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452bd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__46_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Mul___b__46_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__46_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__46_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Div__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Div__ (const MethodInfo* method);
// 0x181ef9da0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Div__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Div___b__47_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452be = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__47_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Div___b__47_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__47_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__47_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x181ef9ed0

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Eq___b__48_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452bf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__48_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Eq___b__48_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__48_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__48_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x181efa240

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843452c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Hash___b__49_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_1843452c0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__49_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Hash___b__49_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__49_0 =
         (System_Func_CustomLogicVector3Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9__49_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings___cctor (const MethodInfo* method);
// 0x181f001c0

void CustomLogic_CustomLogicVector3Builtin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843452c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"__Sub__");
    il2cpp_codegen_initialize_runtime_metadata(&"Scale");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"Slerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Normalize");
    il2cpp_codegen_initialize_runtime_metadata(&"Down");
    il2cpp_codegen_initialize_runtime_metadata(&"SignedAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"GetRotationDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"Back");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Reflect");
    il2cpp_codegen_initialize_runtime_metadata(&"OrthoNormalize");
    il2cpp_codegen_initialize_runtime_metadata(&"Max");
    il2cpp_codegen_initialize_runtime_metadata(&"SmoothDamp");
    il2cpp_codegen_initialize_runtime_metadata(&"Multiply");
    il2cpp_codegen_initialize_runtime_metadata(&"Divide");
    il2cpp_codegen_initialize_runtime_metadata(&"LerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Project");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTowards");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Dot");
    il2cpp_codegen_initialize_runtime_metadata(&"Distance");
    il2cpp_codegen_initialize_runtime_metadata(&"__Div__");
    il2cpp_codegen_initialize_runtime_metadata(&"One");
    il2cpp_codegen_initialize_runtime_metadata(&"SqrMagnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"ClampMagnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"Cross");
    il2cpp_codegen_initialize_runtime_metadata(&"PositiveInfinity");
    il2cpp_codegen_initialize_runtime_metadata(&"Left");
    il2cpp_codegen_initialize_runtime_metadata(&"Min");
    il2cpp_codegen_initialize_runtime_metadata(&"Magnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"NegativeInfinity");
    il2cpp_codegen_initialize_runtime_metadata(&"SlerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"__Add__");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateTowards");
    il2cpp_codegen_initialize_runtime_metadata(&"Zero");
    il2cpp_codegen_initialize_runtime_metadata(&"ProjectOnPlane");
    il2cpp_codegen_initialize_runtime_metadata(&"Normalized");
    il2cpp_codegen_initialize_runtime_metadata(&"Angle");
    Il2CppMethodInitialized_1843452c1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"X",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Y",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Z",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normalized",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Magnitude",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SqrMagnitude",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Zero",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"One",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Up",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Down",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Left",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Forward",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Back",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NegativeInfinity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PositiveInfinity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Angle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClampMagnitude",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Cross",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Distance",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dot",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Lerp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LerpUnclamped",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Max",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Min",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveTowards",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normalize",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OrthoNormalize",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Project",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ProjectOnPlane",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reflect",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RotateTowards",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SignedAngle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slerp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SlerpUnclamped",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SmoothDamp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Scale",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Multiply",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Divide",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetRotationDirection",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Copy__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Add__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Sub__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Mul__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Div__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__X_g____getter_2_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef4030

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__X_g____getter_2_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_res8[0] =
         EZhex1991_EZSoftBone_EZSoftBoneForceField__get_time
                   ((EZhex1991_EZSoftBone_EZSoftBoneForceField_o *)__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__X_g____setter_2_1 (CustomLogic_CustomLogicVector3Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef4070

void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__X_g____setter_2_1
               (CustomLogic_CustomLogicVector3Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_1843452c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452c2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    EZhex1991_EZSoftBone_EZSoftBoneForceField__set_time
              ((UnityEngine_TextCore_FaceInfo_o *)__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef40f0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_res8[0] =
         UnityEngine_UI_LayoutElement__get_flexibleWidth
                   ((UnityEngine_UI_LayoutElement_o *)__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1 (CustomLogic_CustomLogicVector3Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef4130

void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1
               (CustomLogic_CustomLogicVector3Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_1843452c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452c3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    UnityEngine_UIElements_FieldMouseDragger_float___set_startValue
              ((UnityEngine_UIElements_FieldMouseDragger_T__o *)__i,value,(MethodInfo_16EF940 *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Z>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef41b0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_res8[0] =
         EZhex1991_EZSoftBone_EZSoftBoneMaterial__get_resistance
                   ((EZhex1991_EZSoftBone_EZSoftBoneMaterial_o *)__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Z>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1 (CustomLogic_CustomLogicVector3Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef41f0

void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1
               (CustomLogic_CustomLogicVector3Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_1843452c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843452c4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    UnityEngine_TextCore_Glyph__set_scale((UnityEngine_TextCore_Glyph_o *)__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Normalized>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Normalized_g____getter_5_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef2580

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Normalized_g____getter_5_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Normalized(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Magnitude>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Magnitude_g____getter_6_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef24f0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Magnitude_g____getter_6_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicVector3Builtin__get_Magnitude(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__SqrMagnitude>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__SqrMagnitude_g____getter_7_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef3420

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__SqrMagnitude_g____getter_7_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicVector3Builtin__get_SqrMagnitude(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Zero>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Zero_g____getter_8_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef4270

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Zero_g____getter_8_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Zero((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__One>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__One_g____getter_9_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef2740

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__One_g____getter_9_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_One((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef3ad0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Up((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Down>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Down_g____getter_11_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef1700

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Down_g____getter_11_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Down((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Left>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Left_g____getter_12_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef21f0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Left_g____getter_12_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Left((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Right>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Right_g____getter_13_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef2d40

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Right_g____getter_13_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Right((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Forward_g____getter_14_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef1bf0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Forward_g____getter_14_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Forward((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Back>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Back_g____getter_15_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef0750

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Back_g____getter_15_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Back((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_16_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef2570

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_16_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_NegativeInfinity((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__PositiveInfinity>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__PositiveInfinity_g____getter_17_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x181ef2990

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__PositiveInfinity_g____getter_17_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_PositiveInfinity((MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x181ed7e40

void CustomLogic_CustomLogicVector3Builtin___ctor
               (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345275 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345275 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = 0.0;
  (__this->fields).Value.fields.y = 0.0;
  (__this->fields).Value.fields.z = 0.0;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, float xyz, const MethodInfo* method);
// 0x181ed7ea0

void CustomLogic_CustomLogicVector3Builtin___ctor_1ed7ea0
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float xyz,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345276 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345276 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = xyz;
  (__this->fields).Value.fields.y = xyz;
  (__this->fields).Value.fields.z = xyz;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, float x, float y, const MethodInfo* method);
// 0x181ed7d30

void CustomLogic_CustomLogicVector3Builtin___ctor_1ed7d30
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float x,float y,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345277 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345277 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = x;
  (__this->fields).Value.fields.y = y;
  (__this->fields).Value.fields.z = 0.0;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, float x, float y, float z, const MethodInfo* method);
// 0x181ed7db0

void CustomLogic_CustomLogicVector3Builtin___ctor_1ed7db0
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float x,float y,float z,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345278 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345278 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = x;
  (__this->fields).Value.fields.y = y;
  (__this->fields).Value.fields.z = z;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, UnityEngine_Vector3_o value, const MethodInfo* method);
// 0x181ed7cc0

void CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
               (CustomLogic_CustomLogicVector3Builtin_o *__this,UnityEngine_Vector3_o *value,
               MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  fVar2 = (value->fields).y;
  fVar1 = (value->fields).z;
  (__this->fields).Value.fields.x = (value->fields).x;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar1;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_X
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_X (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x180584c90

float
CustomLogic_CustomLogicVector3Builtin__get_X(CustomLogic_CustomLogicVector3Builtin_o* __this, MethodInfo* method)

{
  return (__this->fields)._time_k__BackingField;
}


// CustomLogic.CustomLogicVector3Builtin$$set_X
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__set_X (CustomLogic_CustomLogicVector3Builtin_o* __this, float value, const MethodInfo* method);
// 0x180584cb0

void
CustomLogic_CustomLogicVector3Builtin__set_X(CustomLogic_CustomLogicVector3Builtin_o* __this, float value, MethodInfo* method)

{
  (__this->fields).m_MeanLine = value;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Y
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_Y (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x1816ef890

float
CustomLogic_CustomLogicVector3Builtin__get_Y(CustomLogic_CustomLogicVector3Builtin_o* __this, MethodInfo* method)

{
  return (__this->fields).m_FlexibleWidth;
}


// CustomLogic.CustomLogicVector3Builtin$$set_Y
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__set_Y (CustomLogic_CustomLogicVector3Builtin_o* __this, float value, const MethodInfo* method);
// 0x1816ef940

void
CustomLogic_CustomLogicVector3Builtin__set_Y(CustomLogic_CustomLogicVector3Builtin_o* __this, float value, MethodInfo* method)

{
  *(float *)&(__this->fields).field_0x24 = value;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Z
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_Z (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x180585020

float
CustomLogic_CustomLogicVector3Builtin__get_Z(CustomLogic_CustomLogicVector3Builtin_o* __this, MethodInfo* method)

{
  return (__this->fields).m_Resistance;
}


// CustomLogic.CustomLogicVector3Builtin$$set_Z
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__set_Z (CustomLogic_CustomLogicVector3Builtin_o* __this, float value, const MethodInfo* method);
// 0x181ed2f30

void
CustomLogic_CustomLogicVector3Builtin__set_Z(CustomLogic_CustomLogicVector3Builtin_o* __this, float value, MethodInfo* method)

{
  (__this->fields).m_Scale = value;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Normalized
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Normalized (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x181ed8360

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Normalized
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  fVar2 = (float)il2cpp_runtime_helper_180546a40(&(__this->fields).Value);
  if (fVar2 <= 1e-05) {
    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar4 = (pUVar1->zeroVector).fields.x;
    fVar3 = (pUVar1->zeroVector).fields.y;
    fVar2 = (pUVar1->zeroVector).fields.z;
  }
  else {
    fVar4 = (__this->fields).Value.fields.x / fVar2;
    fVar3 = (__this->fields).Value.fields.y / fVar2;
    fVar2 = (__this->fields).Value.fields.z / fVar2;
  }
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Value.fields.x = fVar4;
  (__this_00->fields).Value.fields.y = fVar3;
  (__this_00->fields).Value.fields.z = fVar2;
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Magnitude
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_Magnitude (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x181ed8280

float CustomLogic_CustomLogicVector3Builtin__get_Magnitude
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_180546a40(&(__this->fields).Value,0);
  return fVar1;
}


// CustomLogic.CustomLogicVector3Builtin$$get_SqrMagnitude
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_SqrMagnitude (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x181ed86e0

float CustomLogic_CustomLogicVector3Builtin__get_SqrMagnitude
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (__this->fields).Value.fields.y;
  fVar2 = (__this->fields).Value.fields.x;
  fVar3 = (__this->fields).Value.fields.z;
  return fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Zero
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Zero (const MethodInfo* method);
// 0x181ed87e0

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Zero(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_18433dbea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbea = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.x;
  fVar4 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar4;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_One
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_One (const MethodInfo* method);
// 0x181ed8470

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_One(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_18433dbeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433dbeb = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->oneVector).fields.x;
  fVar4 = (pUVar2->oneVector).fields.y;
  fVar1 = (pUVar2->oneVector).fields.z;
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar4;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Up (const MethodInfo* method);
// 0x181ed8710

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Up(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_18433de5c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5c = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->upVector).fields.x;
  fVar4 = (pUVar2->upVector).fields.y;
  fVar1 = (pUVar2->upVector).fields.z;
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar4;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Down
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Down (const MethodInfo* method);
// 0x181ed8010

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Down(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_18434494b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434494b = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->downVector).fields.x;
  fVar4 = (pUVar2->downVector).fields.y;
  fVar1 = (pUVar2->downVector).fields.z;
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar4;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Left
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Left (const MethodInfo* method);
// 0x181ed81b0

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Left(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_184345288 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184345288 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->leftVector).fields.x;
  fVar4 = (pUVar2->leftVector).fields.y;
  fVar1 = (pUVar2->leftVector).fields.z;
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar4;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Right (const MethodInfo* method);
// 0x181ed8610

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Right(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_1843445b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_1843445b8 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->rightVector).fields.x;
  fVar4 = (pUVar2->rightVector).fields.y;
  fVar1 = (pUVar2->rightVector).fields.z;
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar4;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Forward (const MethodInfo* method);
// 0x181ed80e0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Forward(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_18433de5d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5d = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->forwardVector).fields.x;
  fVar4 = (pUVar2->forwardVector).fields.y;
  fVar1 = (pUVar2->forwardVector).fields.z;
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar4;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Back
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Back (const MethodInfo* method);
// 0x181ed7f10

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Back(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_18434506d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434506d = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->backVector).fields.x;
  fVar4 = (pUVar2->backVector).fields.y;
  fVar1 = (pUVar2->backVector).fields.z;
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar4;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_NegativeInfinity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_NegativeInfinity (const MethodInfo* method);
// 0x181ed8290

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_NegativeInfinity(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_184345289 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_184345289 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->negativeInfinityVector).fields.x;
  fVar4 = (pUVar2->negativeInfinityVector).fields.y;
  fVar1 = (pUVar2->negativeInfinityVector).fields.z;
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar4;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_PositiveInfinity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_PositiveInfinity (const MethodInfo* method);
// 0x181ed8540

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_PositiveInfinity(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_18434528a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18434528a = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->positiveInfinityVector).fields.x;
  fVar4 = (pUVar2->positiveInfinityVector).fields.y;
  fVar1 = (pUVar2->positiveInfinityVector).fields.z;
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar4;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$Angle
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__Angle (CustomLogic_CustomLogicVector3Builtin_o* from, CustomLogic_CustomLogicVector3Builtin_o* to, const MethodInfo* method);
// 0x181ed5380

float CustomLogic_CustomLogicVector3Builtin__Angle
                (CustomLogic_CustomLogicVector3Builtin_o *from,CustomLogic_CustomLogicVector3Builtin_o *to,
                MethodInfo *method)

{
  float fVar1;
  undefined8 local_28;
  float local_20;
  undefined8 local_18;
  float local_10;
  
  if ((from != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (to != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_28._0_4_ = (to->fields).Value.fields.x;
    local_28._4_4_ = (to->fields).Value.fields.y;
    local_20 = (to->fields).Value.fields.z;
    local_18._0_4_ = (from->fields).Value.fields.x;
    local_18._4_4_ = (from->fields).Value.fields.y;
    local_10 = (from->fields).Value.fields.z;
    fVar1 = (float)il2cpp_runtime_helper_181d9e200(&local_18,&local_28,0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$ClampMagnitude
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__ClampMagnitude (CustomLogic_CustomLogicVector3Builtin_o* vector, float maxLength, const MethodInfo* method);
// 0x181ed53d0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__ClampMagnitude
          (CustomLogic_CustomLogicVector3Builtin_o *vector,float maxLength,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (vector != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar3 = (vector->fields).Value.fields.x;
    fVar4 = (vector->fields).Value.fields.y;
    fVar5 = (vector->fields).Value.fields.z;
    if (Il2CppMethodInitialized_18433de5a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433de5a = '\x01';
    }
    fVar2 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
    if (maxLength * maxLength < fVar2) {
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar1 = (double)fVar2;
      if (dVar1 < 0.0) {
        dVar1 = sqrt(dVar1);
      }
      else {
        dVar1 = SQRT(dVar1);
      }
      fVar2 = (float)dVar1;
      fVar3 = (fVar3 / fVar2) * maxLength;
      fVar4 = (fVar4 / fVar2) * maxLength;
      fVar5 = (fVar5 / fVar2) * maxLength;
    }
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar3;
    (__this->fields).Value.fields.y = fVar4;
    (__this->fields).Value.fields.z = fVar5;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Cross
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Cross (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x181ed5560

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Cross
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar1 = (b->fields).Value.fields.x;
    fVar2 = (b->fields).Value.fields.z;
    fVar3 = (a->fields).Value.fields.x;
    fVar4 = (a->fields).Value.fields.y;
    fVar5 = (a->fields).Value.fields.z;
    fVar6 = (b->fields).Value.fields.y;
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar2 * fVar4 - fVar6 * fVar5;
    (__this->fields).Value.fields.y = fVar1 * fVar5 - fVar2 * fVar3;
    (__this->fields).Value.fields.z = fVar6 * fVar3 - fVar1 * fVar4;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Distance
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__Distance (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x181ed5680

float CustomLogic_CustomLogicVector3Builtin__Distance
                (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar5 = (a->fields).Value.fields.y;
  fVar6 = (a->fields).Value.fields.x;
  fVar7 = (a->fields).Value.fields.z;
  fVar1 = (b->fields).Value.fields.x;
  fVar2 = (b->fields).Value.fields.y;
  fVar3 = (b->fields).Value.fields.z;
  if (Il2CppMethodInitialized_18433dee7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433dee7 = '\x01';
  }
  fVar6 = fVar6 - fVar1;
  fVar5 = fVar5 - fVar2;
  fVar7 = fVar7 - fVar3;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar4 = (double)(fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7);
  if (0.0 <= dVar4) {
    return (float)SQRT(dVar4);
  }
  dVar4 = sqrt(dVar4);
  return (float)dVar4;
}


// CustomLogic.CustomLogicVector3Builtin$$Dot
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__Dot (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x181ed58b0

float CustomLogic_CustomLogicVector3Builtin__Dot
                (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
                MethodInfo *method)

{
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    return (b->fields).Value.fields.y * (a->fields).Value.fields.y +
           (b->fields).Value.fields.x * (a->fields).Value.fields.x +
           (b->fields).Value.fields.z * (a->fields).Value.fields.z;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Lerp
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Lerp (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x181ed5b30

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Lerp
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,float t,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar1 = (a->fields).Value.fields.x;
    fVar2 = (a->fields).Value.fields.y;
    fVar3 = (a->fields).Value.fields.z;
    if (t < 0.0) {
      t = 0.0;
    }
    else if (1.0 < t) {
      t = 1.0;
    }
    fVar4 = (b->fields).Value.fields.x;
    fVar5 = (b->fields).Value.fields.y;
    fVar6 = (b->fields).Value.fields.z;
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (fVar4 - fVar1) * t + fVar1;
    (__this->fields).Value.fields.y = (fVar5 - fVar2) * t + fVar2;
    (__this->fields).Value.fields.z = (fVar6 - fVar3) * t + fVar3;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$LerpUnclamped
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__LerpUnclamped (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x181ed5a10

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__LerpUnclamped
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,float t,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar1 = (a->fields).Value.fields.x;
    fVar2 = (a->fields).Value.fields.y;
    fVar3 = (a->fields).Value.fields.z;
    fVar4 = (b->fields).Value.fields.x;
    fVar5 = (b->fields).Value.fields.y;
    fVar6 = (b->fields).Value.fields.z;
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = (fVar4 - fVar1) * t + fVar1;
    (__this->fields).Value.fields.y = (fVar5 - fVar2) * t + fVar2;
    (__this->fields).Value.fields.z = (fVar6 - fVar3) * t + fVar3;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Max
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Max (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x181ed5c70

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Max
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar2 = (a->fields).Value.fields.x;
    fVar3 = (b->fields).Value.fields.x;
    if (fVar2 <= fVar3) {
      fVar2 = fVar3;
    }
    fVar3 = (a->fields).Value.fields.y;
    fVar4 = (b->fields).Value.fields.y;
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    fVar4 = (a->fields).Value.fields.z;
    fVar1 = (b->fields).Value.fields.z;
    if (fVar4 <= fVar1) {
      fVar4 = fVar1;
    }
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar2;
    (__this->fields).Value.fields.y = fVar3;
    (__this->fields).Value.fields.z = fVar4;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Min
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Min (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x181ed5d60

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Min
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar2 = (a->fields).Value.fields.x;
    fVar3 = (b->fields).Value.fields.x;
    if (fVar3 <= fVar2) {
      fVar2 = fVar3;
    }
    fVar3 = (a->fields).Value.fields.y;
    fVar4 = (b->fields).Value.fields.y;
    if (fVar4 <= fVar3) {
      fVar3 = fVar4;
    }
    fVar4 = (a->fields).Value.fields.z;
    fVar1 = (b->fields).Value.fields.z;
    if (fVar1 <= fVar4) {
      fVar4 = fVar1;
    }
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar2;
    (__this->fields).Value.fields.y = fVar3;
    (__this->fields).Value.fields.z = fVar4;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$MoveTowards
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__MoveTowards (CustomLogic_CustomLogicVector3Builtin_o* current, CustomLogic_CustomLogicVector3Builtin_o* target, float maxDistanceDelta, const MethodInfo* method);
// 0x181ed5e50

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__MoveTowards
          (CustomLogic_CustomLogicVector3Builtin_o *current,CustomLogic_CustomLogicVector3Builtin_o *target,
          float maxDistanceDelta,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((current != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (target != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar6 = (target->fields).Value.fields.x;
    fVar7 = (target->fields).Value.fields.y;
    fVar4 = (target->fields).Value.fields.z;
    fVar1 = (current->fields).Value.fields.z;
    fVar2 = (current->fields).Value.fields.x;
    fVar3 = (current->fields).Value.fields.y;
    if (Il2CppMethodInitialized_1843445ed == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_1843445ed = '\x01';
    }
    fVar9 = fVar6 - fVar2;
    fVar11 = fVar4 - fVar1;
    fVar10 = fVar7 - fVar3;
    fVar8 = fVar10 * fVar10 + fVar9 * fVar9 + fVar11 * fVar11;
    if ((fVar8 != 0.0) && ((maxDistanceDelta < 0.0 || (maxDistanceDelta * maxDistanceDelta < fVar8)))) {
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar5 = (double)fVar8;
      if (dVar5 < 0.0) {
        dVar5 = sqrt(dVar5);
      }
      else {
        dVar5 = SQRT(dVar5);
      }
      fVar4 = (float)dVar5;
      fVar6 = (fVar9 / fVar4) * maxDistanceDelta + fVar2;
      fVar7 = (fVar10 / fVar4) * maxDistanceDelta + fVar3;
      fVar4 = (fVar11 / fVar4) * maxDistanceDelta + fVar1;
    }
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar6;
    (__this->fields).Value.fields.y = fVar7;
    (__this->fields).Value.fields.z = fVar4;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Normalize
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Normalize (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181ed61d0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Normalize
          (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined8 uVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  float local_20;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar5 = (value->fields).Value.fields.z;
    uVar1._0_4_ = (value->fields).Value.fields.x;
    uVar1._4_4_ = (value->fields).Value.fields.y;
    local_28 = uVar1;
    local_20 = fVar5;
    if (Il2CppMethodInitialized_18434528b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18434528b = '\x01';
    }
    fVar3 = (float)il2cpp_runtime_helper_180546a40(&local_28);
    if (fVar3 <= 1e-05) {
      pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar3 = (pUVar2->zeroVector).fields.x;
      fVar4 = (pUVar2->zeroVector).fields.y;
      fVar5 = (pUVar2->zeroVector).fields.z;
    }
    else {
      fVar4 = local_28._4_4_ / fVar3;
      fVar5 = fVar5 / fVar3;
      fVar3 = (float)(undefined4)uVar1 / fVar3;
    }
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar3;
    (__this->fields).Value.fields.y = fVar4;
    (__this->fields).Value.fields.z = fVar5;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$OrthoNormalize
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__OrthoNormalize (CustomLogic_CustomLogicVector3Builtin_o* normal, CustomLogic_CustomLogicVector3Builtin_o* tangent, const MethodInfo* method);
// 0x181ed6300

void CustomLogic_CustomLogicVector3Builtin__OrthoNormalize
               (CustomLogic_CustomLogicVector3Builtin_o *normal,
               CustomLogic_CustomLogicVector3Builtin_o *tangent,MethodInfo *method)

{
  if ((normal != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (tangent != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    UnityEngine_Vector3__OrthoNormalize(&(normal->fields).Value,&(tangent->fields).Value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Project
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Project (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x181ed64f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Project
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar6 = (b->fields).Value.fields.y;
    fVar7 = (b->fields).Value.fields.z;
    fVar1 = (a->fields).Value.fields.x;
    fVar2 = (a->fields).Value.fields.y;
    fVar8 = (b->fields).Value.fields.x;
    fVar3 = (a->fields).Value.fields.z;
    if (Il2CppMethodInitialized_18433df4c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      Il2CppMethodInitialized_18433df4c = '\x01';
    }
    fVar5 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
    if (fVar5 < TypeInfo_UnityEngine_Mathf->static_fields->Epsilon) {
      if (Il2CppMethodInitialized_18433dbea == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433dbea = '\x01';
      }
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      fVar8 = (pUVar4->zeroVector).fields.x;
      fVar6 = (pUVar4->zeroVector).fields.y;
      fVar7 = (pUVar4->zeroVector).fields.z;
    }
    else {
      fVar5 = (fVar2 * fVar6 + fVar1 * fVar8 + fVar3 * fVar7) / fVar5;
      fVar6 = fVar6 * fVar5;
      fVar8 = fVar5 * fVar8;
      fVar7 = fVar7 * fVar5;
    }
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar8;
    (__this->fields).Value.fields.y = fVar6;
    (__this->fields).Value.fields.z = fVar7;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$ProjectOnPlane
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__ProjectOnPlane (CustomLogic_CustomLogicVector3Builtin_o* vector, CustomLogic_CustomLogicVector3Builtin_o* plane, const MethodInfo* method);
// 0x181ed6330

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__ProjectOnPlane
          (CustomLogic_CustomLogicVector3Builtin_o *vector,CustomLogic_CustomLogicVector3Builtin_o *plane,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((vector != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (plane != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar5 = (vector->fields).Value.fields.x;
    fVar6 = (vector->fields).Value.fields.y;
    fVar7 = (vector->fields).Value.fields.z;
    fVar1 = (plane->fields).Value.fields.x;
    fVar2 = (plane->fields).Value.fields.y;
    fVar3 = (plane->fields).Value.fields.z;
    if (Il2CppMethodInitialized_18434528c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      Il2CppMethodInitialized_18434528c = '\x01';
    }
    fVar4 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
    if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar4) {
      fVar4 = (fVar2 * fVar6 + fVar1 * fVar5 + fVar3 * fVar7) / fVar4;
      fVar5 = fVar5 - fVar1 * fVar4;
      fVar6 = fVar6 - fVar2 * fVar4;
      fVar7 = fVar7 - fVar3 * fVar4;
    }
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar5;
    (__this->fields).Value.fields.y = fVar6;
    (__this->fields).Value.fields.z = fVar7;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Reflect
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Reflect (CustomLogic_CustomLogicVector3Builtin_o* inDirection, CustomLogic_CustomLogicVector3Builtin_o* inNormal, const MethodInfo* method);
// 0x181ed66d0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Reflect
          (CustomLogic_CustomLogicVector3Builtin_o *inDirection,
          CustomLogic_CustomLogicVector3Builtin_o *inNormal,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar7;
  
  if ((inDirection != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (inNormal != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar1 = (inDirection->fields).Value.fields.x;
    fVar2 = (inNormal->fields).Value.fields.x;
    fVar3 = (inDirection->fields).Value.fields.y;
    fVar4 = (inNormal->fields).Value.fields.y;
    fVar5 = (inNormal->fields).Value.fields.z;
    fVar7 = (fVar3 * fVar4 + fVar1 * fVar2 + (inDirection->fields).Value.fields.z * fVar5) * -2.0;
    fVar6 = (inDirection->fields).Value.fields.z;
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar7 * fVar2 + fVar1;
    (__this->fields).Value.fields.y = fVar4 * fVar7 + fVar3;
    (__this->fields).Value.fields.z = fVar5 * fVar7 + fVar6;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$RotateTowards
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__RotateTowards (CustomLogic_CustomLogicVector3Builtin_o* current, CustomLogic_CustomLogicVector3Builtin_o* target, float maxRadiansDelta, float maxMagnitudeDelta, const MethodInfo* method);
// 0x181ed6810

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__RotateTowards
          (CustomLogic_CustomLogicVector3Builtin_o *current,CustomLogic_CustomLogicVector3Builtin_o *target,
          float maxRadiansDelta,float maxMagnitudeDelta,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if ((current != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (target != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_48.x = (target->fields).Value.fields.x;
    local_48.y = (target->fields).Value.fields.y;
    local_48.z = (target->fields).Value.fields.z;
    local_38.x = (current->fields).Value.fields.x;
    local_38.y = (current->fields).Value.fields.y;
    local_38.z = (current->fields).Value.fields.z;
    pUVar4 = UnityEngine_Vector3__Internal_RotateTowards
                       (local_28,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                        maxRadiansDelta,maxMagnitudeDelta,(MethodInfo *)0x0);
    fVar2 = (pUVar4->fields).x;
    fVar3 = (pUVar4->fields).y;
    fVar1 = (pUVar4->fields).z;
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar2;
    (__this->fields).Value.fields.y = fVar3;
    (__this->fields).Value.fields.z = fVar1;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$SignedAngle
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__SignedAngle (CustomLogic_CustomLogicVector3Builtin_o* from, CustomLogic_CustomLogicVector3Builtin_o* to, CustomLogic_CustomLogicVector3Builtin_o* axis, const MethodInfo* method);
// 0x181ed6b80

float CustomLogic_CustomLogicVector3Builtin__SignedAngle
                (CustomLogic_CustomLogicVector3Builtin_o *from,CustomLogic_CustomLogicVector3Builtin_o *to,
                CustomLogic_CustomLogicVector3Builtin_o *axis,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  
  if (((from != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
      (to != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (axis != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_78._0_4_ = (to->fields).Value.fields.x;
    local_78._4_4_ = (to->fields).Value.fields.y;
    fVar1 = (axis->fields).Value.fields.y;
    fVar2 = (axis->fields).Value.fields.x;
    fVar3 = (axis->fields).Value.fields.z;
    local_88._0_4_ = (from->fields).Value.fields.x;
    local_88._4_4_ = (from->fields).Value.fields.y;
    local_70 = (to->fields).Value.fields.z;
    local_80 = (from->fields).Value.fields.z;
    fVar4 = (float)il2cpp_runtime_helper_181ebaeb0(&local_88,&local_78,0);
    if (0.0 <= ((float)local_78 * local_80 - local_70 * (float)local_88) * fVar1 +
               (local_70 * local_88._4_4_ - local_78._4_4_ * local_80) * fVar2 +
               (local_78._4_4_ * (float)local_88 - (float)local_78 * local_88._4_4_) * fVar3) {
      return fVar4 * 1.0;
    }
    return fVar4 * -1.0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Slerp
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Slerp (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x181ed6de0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Slerp
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,float t,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_48.x = (b->fields).Value.fields.x;
    local_48.y = (b->fields).Value.fields.y;
    local_48.z = (b->fields).Value.fields.z;
    local_38.x = (a->fields).Value.fields.x;
    local_38.y = (a->fields).Value.fields.y;
    local_38.z = (a->fields).Value.fields.z;
    pUVar4 = UnityEngine_Vector3__Internal_Slerp
                       (local_28,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,t,
                        (MethodInfo *)0x0);
    fVar2 = (pUVar4->fields).x;
    fVar3 = (pUVar4->fields).y;
    fVar1 = (pUVar4->fields).z;
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar2;
    (__this->fields).Value.fields.y = fVar3;
    (__this->fields).Value.fields.z = fVar1;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$SlerpUnclamped
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__SlerpUnclamped (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x181ed6ce0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__SlerpUnclamped
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,float t,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_48.x = (b->fields).Value.fields.x;
    local_48.y = (b->fields).Value.fields.y;
    local_48.z = (b->fields).Value.fields.z;
    local_38.x = (a->fields).Value.fields.x;
    local_38.y = (a->fields).Value.fields.y;
    local_38.z = (a->fields).Value.fields.z;
    pUVar4 = UnityEngine_Vector3__Internal_SlerpUnclamped
                       (local_28,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,t,
                        (MethodInfo *)0x0);
    fVar2 = (pUVar4->fields).x;
    fVar3 = (pUVar4->fields).y;
    fVar1 = (pUVar4->fields).z;
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar2;
    (__this->fields).Value.fields.y = fVar3;
    (__this->fields).Value.fields.z = fVar1;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$SmoothDamp
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__SmoothDamp (CustomLogic_CustomLogicVector3Builtin_o* current, CustomLogic_CustomLogicVector3Builtin_o* target, CustomLogic_CustomLogicVector3Builtin_o* currentVelocity, float smoothTime, float maxSpeed, const MethodInfo* method);
// 0x181ed6ee0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__SmoothDamp
          (CustomLogic_CustomLogicVector3Builtin_o *current,CustomLogic_CustomLogicVector3Builtin_o *target,
          CustomLogic_CustomLogicVector3Builtin_o *currentVelocity,float smoothTime,float maxSpeed,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar4;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_o local_28 [2];
  
  if (((current != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
      (target != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (currentVelocity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    local_48.x = (target->fields).Value.fields.x;
    local_48.y = (target->fields).Value.fields.y;
    local_48.z = (target->fields).Value.fields.z;
    local_38.x = (current->fields).Value.fields.x;
    local_38.y = (current->fields).Value.fields.y;
    local_38.z = (current->fields).Value.fields.z;
    fVar4 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pUVar3 = UnityEngine_Vector3__SmoothDamp_2f0ce00
                       (local_28,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                        &(currentVelocity->fields).Value,smoothTime,maxSpeed,fVar4,(MethodInfo *)0x0);
    fVar1 = (pUVar3->fields).x;
    fVar2 = (pUVar3->fields).y;
    fVar4 = (pUVar3->fields).z;
    if (Il2CppMethodInitialized_184345284 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345284 = '\x01';
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar1;
    (__this->fields).Value.fields.y = fVar2;
    (__this->fields).Value.fields.z = fVar4;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Set
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__Set (CustomLogic_CustomLogicVector3Builtin_o* __this, float x, float y, float z, const MethodInfo* method);
// 0x181ed6b70

void CustomLogic_CustomLogicVector3Builtin__Set
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float x,float y,float z,MethodInfo *method)

{
  (__this->fields).Value.fields.x = x;
  (__this->fields).Value.fields.y = y;
  (__this->fields).Value.fields.z = z;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$Scale
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Scale (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* scale, const MethodInfo* method);
// 0x181ed6920

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Scale
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *scale,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  Il2CppObject *pIVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  float *pfVar10;
  int *piVar11;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  float fVar12;
  float fVar13;
  
  if (Il2CppMethodInitialized_18434527a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_18434527a = '\x01';
  }
  if (scale == (Il2CppObject *)0x0) {
label_181ed6b14:
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Parameter must be a float or a Vector3.");
    System_Exception___ctor_1b6abf0(__this_00,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Scale);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  pIVar8 = (Il2CppObject *)0x0;
  if (scale->klass == g_data_184354e08) {
    pIVar8 = scale;
  }
  if (pIVar8 == (Il2CppObject *)0x0) {
    pIVar8 = (Il2CppObject *)0x0;
    if (scale->klass == g_data_184354e38) {
      pIVar8 = scale;
    }
    if (pIVar8 == (Il2CppObject *)0x0) {
      bVar7 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if ((bVar7 <= (scale->klass->_2).typeHierarchyDepth) &&
         ((scale->klass->_2).typeHierarchy[(ulonglong)bVar7 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
        uVar1 = (__this->fields).Value.fields.y;
        uVar4 = (__this->fields).Value.fields.z;
        uVar3 = *(undefined8 *)((longlong)&scale[3].klass + 4);
        fVar12 = (__this->fields).Value.fields.x * *(float *)&scale[3].klass;
        (__this->fields).Value.fields.y = (float)uVar1 * (float)uVar3;
        (__this->fields).Value.fields.z = (float)uVar4 * (float)((ulonglong)uVar3 >> 0x20);
        uVar5 = (__this->fields).Value.fields.y;
        (__this->fields).Value.fields.x = fVar12;
        (__this->fields).Value.fields.y = (float)uVar5;
        fVar13 = (__this->fields).Value.fields.z;
        pCVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if (Il2CppMethodInitialized_184345279 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_184345279 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar9,(MethodInfo *)0x0);
        (pCVar9->fields).Value.fields.x = fVar12;
        (pCVar9->fields).Value.fields.y = (float)uVar5;
        (pCVar9->fields).Value.fields.z = fVar13;
        return pCVar9;
      }
      goto label_181ed6b14;
    }
    if ((scale->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    pfVar10 = il2cpp_object_unbox(scale);
    fVar13 = *pfVar10;
  }
  else {
    if ((scale->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
      il2cpp_codegen_raise_invalid_cast_exception();
    }
    piVar11 = il2cpp_object_unbox(scale);
    fVar13 = (float)*piVar11;
  }
  fVar12 = (__this->fields).Value.fields.z;
  uVar2 = (__this->fields).Value.fields.x;
  uVar6 = (__this->fields).Value.fields.y;
  pCVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar9,(MethodInfo *)0x0);
  (pCVar9->fields).Value.fields.x = (float)uVar2 * fVar13;
  (pCVar9->fields).Value.fields.y = (float)uVar6 * fVar13;
  (pCVar9->fields).Value.fields.z = fVar13 * fVar12;
  return pCVar9;
}


// CustomLogic.CustomLogicVector3Builtin$$Multiply
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Multiply (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x181ed60b0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Multiply
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Unity_Mathematics_float3_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  Unity_Mathematics_float3_Fields local_58;
  Unity_Mathematics_float3_Fields local_48;
  Unity_Mathematics_float3_o local_38 [4];
  
  if (Il2CppMethodInitialized_18434527b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434527b = '\x01';
  }
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1._0_4_ = (a->fields).Value.fields.x;
    uVar1._4_4_ = (a->fields).Value.fields.y;
    fVar3 = (a->fields).Value.fields.z;
    uVar2._0_4_ = (b->fields).Value.fields.x;
    uVar2._4_4_ = (b->fields).Value.fields.y;
    fVar4 = (b->fields).Value.fields.z;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    local_58._0_8_ = uVar2;
    local_58.z = fVar4;
    local_48._0_8_ = uVar1;
    local_48.z = fVar3;
    pUVar6 = Unity_Mathematics_float3__op_Multiply
                       (local_38,(Unity_Mathematics_float3_o *)&local_48,
                        (Unity_Mathematics_float3_o *)&local_58,(MethodInfo *)0x0);
    fVar4 = (pUVar6->fields).x;
    fVar5 = (pUVar6->fields).y;
    fVar3 = (pUVar6->fields).z;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar4;
    (__this->fields).Value.fields.y = fVar5;
    (__this->fields).Value.fields.z = fVar3;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Divide
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Divide (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x181ed5790

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Divide
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  Unity_Mathematics_float3_o *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  Unity_Mathematics_float3_Fields local_58;
  Unity_Mathematics_float3_Fields local_48;
  Unity_Mathematics_float3_o local_38 [4];
  
  if (Il2CppMethodInitialized_18434527c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434527c = '\x01';
  }
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1._0_4_ = (a->fields).Value.fields.x;
    uVar1._4_4_ = (a->fields).Value.fields.y;
    fVar3 = (a->fields).Value.fields.z;
    uVar2._0_4_ = (b->fields).Value.fields.x;
    uVar2._4_4_ = (b->fields).Value.fields.y;
    fVar4 = (b->fields).Value.fields.z;
    if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    }
    local_58._0_8_ = uVar2;
    local_58.z = fVar4;
    local_48._0_8_ = uVar1;
    local_48.z = fVar3;
    pUVar6 = Unity_Mathematics_float3__op_Division
                       (local_38,(Unity_Mathematics_float3_o *)&local_48,
                        (Unity_Mathematics_float3_o *)&local_58,(MethodInfo *)0x0);
    fVar4 = (pUVar6->fields).x;
    fVar5 = (pUVar6->fields).y;
    fVar3 = (pUVar6->fields).z;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_184345279 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345279 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar4;
    (__this->fields).Value.fields.y = fVar5;
    (__this->fields).Value.fields.z = fVar3;
    return __this;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$GetRotationDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__GetRotationDirection (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x181ed58f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__GetRotationDirection
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_Vector3_o *pUVar7;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434527d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_18434527d = '\x01';
  }
  if (a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar1 = (a->fields).Value.fields.x;
    uVar2 = (a->fields).Value.fields.y;
    local_48.y = (float)uVar2 * 0.017453292;
    local_48.x = (float)uVar1 * 0.017453292;
    local_48.z = (a->fields).Value.fields.z * 0.017453292;
    pUVar6 = UnityEngine_Quaternion__Internal_FromEulerRad
                       ((UnityEngine_Quaternion_o *)local_28,(UnityEngine_Vector3_o *)&local_48,
                        (MethodInfo *)0x0);
    if (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      local_38.x = (b->fields).Value.fields.x;
      local_38.y = (b->fields).Value.fields.y;
      local_38.z = (b->fields).Value.fields.z;
      local_28[0].x = (pUVar6->fields).x;
      local_28[0].y = (pUVar6->fields).y;
      local_28[0].z = (pUVar6->fields).z;
      local_28[0].w = (pUVar6->fields).w;
      pUVar7 = UnityEngine_Quaternion__op_Multiply_2f08cb0
                         ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)local_28,
                          (UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
      fVar4 = (pUVar7->fields).x;
      fVar5 = (pUVar7->fields).y;
      fVar3 = (pUVar7->fields).z;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      if (Il2CppMethodInitialized_184345279 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345279 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields).Value.fields.x = fVar4;
      (__this->fields).Value.fields.y = fVar5;
      (__this->fields).Value.fields.z = fVar3;
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicVector3Builtin__ToString (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x181ed7020

System_String_o *
CustomLogic_CustomLogicVector3Builtin__ToString
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_CultureInfo_o *pSVar2;
  System_Globalization_NumberFormatInfo_o *provider;
  System_String_o *arg0;
  System_String_o *arg1;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18433dee8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"F2");
    il2cpp_codegen_initialize_runtime_metadata(&"({0}, {1}, {2})");
    Il2CppMethodInitialized_18433dee8 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)0x0,(MethodInfo *)0x0);
  pSVar3 = (System_String_o *)0x0;
  if (bVar1) {
    pSVar3 = "F2";
  }
  if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
  }
  pSVar2 = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
  if (pSVar2 != (System_Globalization_CultureInfo_o *)0x0) {
    provider = (*(pSVar2->klass->vtable)._14_get_NumberFormat.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._14_get_NumberFormat.method);
    arg0 = System_Single__ToString_1b4a0d0
                     ((float *)&(__this->fields).Value,pSVar3,(System_IFormatProvider_o *)provider,
                      (MethodInfo *)0x0);
    arg1 = System_Single__ToString_1b4a0d0
                     (&(__this->fields).Value.fields.y,pSVar3,(System_IFormatProvider_o *)provider,
                      (MethodInfo *)0x0);
    pSVar3 = System_Single__ToString_1b4a0d0
                       (&(__this->fields).Value.fields.z,pSVar3,(System_IFormatProvider_o *)provider,
                        (MethodInfo *)0x0);
    pSVar3 = System_String__Format_196d050
                       ("({0}, {1}, {2})",(Il2CppObject *)arg0,(Il2CppObject *)arg1,(Il2CppObject *)pSVar3
                        ,(MethodInfo *)0x0);
    return pSVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Copy__ (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x181ed72b0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Copy__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  
  if (Il2CppMethodInitialized_18434527e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_18434527e = '\x01';
  }
  fVar2 = (__this->fields).Value.fields.x;
  fVar3 = (__this->fields).Value.fields.y;
  fVar1 = (__this->fields).Value.fields.z;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Value.fields.x = fVar2;
  (__this_00->fields).Value.fields.y = fVar3;
  (__this_00->fields).Value.fields.z = fVar1;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Add__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed7140

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Add__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  byte bVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_18434527f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_18434527f = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar5 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if (((bVar5 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) && (other != (Il2CppObject *)0x0)) {
      bVar5 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if ((bVar5 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
        pIVar3 = self[3].klass;
        pIVar4 = other[3].klass;
        fVar1 = *(float *)&other[3].monitor;
        fVar2 = *(float *)&self[3].monitor;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if (Il2CppMethodInitialized_184345279 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_184345279 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields).Value.fields.x = SUB84(pIVar4,0) + SUB84(pIVar3,0);
        (__this_00->fields).Value.fields.y =
             (float)((ulonglong)pIVar4 >> 0x20) + (float)((ulonglong)pIVar3 >> 0x20);
        (__this_00->fields).Value.fields.z = fVar1 + fVar2;
        return (Il2CppObject *)__this_00;
      }
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Add__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Add);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicVector3Builtin$$__Sub__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Sub__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed7b50

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Sub__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  byte bVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_184345280 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345280 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar5 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if (((bVar5 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) && (other != (Il2CppObject *)0x0)) {
      bVar5 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if ((bVar5 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
        pIVar3 = other[3].klass;
        pIVar4 = self[3].klass;
        fVar1 = *(float *)&self[3].monitor;
        fVar2 = *(float *)&other[3].monitor;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if (Il2CppMethodInitialized_184345279 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_184345279 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields).Value.fields.x = SUB84(pIVar4,0) - SUB84(pIVar3,0);
        (__this_00->fields).Value.fields.y =
             (float)((ulonglong)pIVar4 >> 0x20) - (float)((ulonglong)pIVar3 >> 0x20);
        (__this_00->fields).Value.fields.z = fVar1 - fVar2;
        return (Il2CppObject *)__this_00;
      }
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Sub__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Sub);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicVector3Builtin$$__Mul__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Mul__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed7790

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Mul__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *pIVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  Unity_Mathematics_float3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  int *piVar7;
  float *pfVar8;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  Il2CppClass *local_68;
  float local_60;
  Il2CppClass *local_58;
  float local_50;
  Unity_Mathematics_float3_o local_48 [5];
  
  if (Il2CppMethodInitialized_184345281 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184345281 = '\x01';
  }
  if (self == (Il2CppObject *)0x0) goto label_181ed7af2;
  pIVar3 = self->klass;
  bVar2 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
  if (((pIVar3->_2).typeHierarchyDepth < bVar2) ||
     ((pIVar3->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
    pIVar4 = (Il2CppObject *)0x0;
    if (pIVar3 == g_data_184354e38) {
      pIVar4 = self;
    }
    if (pIVar4 == (Il2CppObject *)0x0) {
      pIVar4 = (Il2CppObject *)0x0;
      if (pIVar3 == g_data_184354e08) {
        pIVar4 = self;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
label_181ed7af2:
        operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
        ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Mul);
        il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
      }
      if ((pIVar3->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      piVar7 = il2cpp_object_unbox(self);
      if (other == (Il2CppObject *)0x0) goto label_181ed7af2;
      bVar2 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if (((other->klass->_2).typeHierarchyDepth < bVar2) ||
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) goto label_181ed7af2;
      fVar9 = (float)*piVar7;
    }
    else {
      if ((pIVar3->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar8 = il2cpp_object_unbox(self);
      if (other == (Il2CppObject *)0x0) goto label_181ed7af2;
      bVar2 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if (((other->klass->_2).typeHierarchyDepth < bVar2) ||
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) goto label_181ed7af2;
      fVar9 = *pfVar8;
    }
    fVar12 = fVar9 * *(float *)&other[3].monitor;
    fVar10 = SUB84(other[3].klass,0);
    fVar11 = (float)((ulonglong)other[3].klass >> 0x20);
  }
  else {
    if (other == (Il2CppObject *)0x0) goto label_181ed7af2;
    pIVar4 = (Il2CppObject *)0x0;
    if (other->klass == g_data_184354e38) {
      pIVar4 = other;
    }
    if (pIVar4 == (Il2CppObject *)0x0) {
      pIVar4 = (Il2CppObject *)0x0;
      if (other->klass == g_data_184354e08) {
        pIVar4 = other;
      }
      if (pIVar4 == (Il2CppObject *)0x0) {
        bVar2 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
        if ((bVar2 <= (other->klass->_2).typeHierarchyDepth) &&
           ((other->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] ==
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
          pIVar3 = self[3].klass;
          pIVar1 = other[3].klass;
          fVar9 = *(float *)&self[3].monitor;
          fVar10 = *(float *)&other[3].monitor;
          if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
          }
          local_68 = pIVar1;
          local_60 = fVar10;
          local_58 = pIVar3;
          local_50 = fVar9;
          pUVar5 = Unity_Mathematics_float3__op_Multiply
                             (local_48,(Unity_Mathematics_float3_o *)&local_58,
                              (Unity_Mathematics_float3_o *)&local_68,(MethodInfo *)0x0);
          fVar10 = (pUVar5->fields).x;
          fVar11 = (pUVar5->fields).y;
          fVar9 = (pUVar5->fields).z;
          pCVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          if (Il2CppMethodInitialized_184345279 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
            Il2CppMethodInitialized_184345279 = '\x01';
          }
          if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
          }
          CustomLogic_BuiltinClassInstance___ctor
                    ((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
          (pCVar6->fields).Value.fields.x = fVar10;
          (pCVar6->fields).Value.fields.y = fVar11;
          (pCVar6->fields).Value.fields.z = fVar9;
          return (Il2CppObject *)pCVar6;
        }
        goto label_181ed7af2;
      }
      if ((other->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(other,g_data_184354e08);
      }
      piVar7 = il2cpp_object_unbox(other);
      fVar9 = (float)*piVar7;
    }
    else {
      if ((other->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception(other,g_data_184354e38);
      }
      pfVar8 = il2cpp_object_unbox(other);
      fVar9 = *pfVar8;
    }
    fVar10 = SUB84(self[3].klass,0);
    fVar11 = (float)((ulonglong)self[3].klass >> 0x20);
    fVar12 = fVar9 * *(float *)&self[3].monitor;
  }
  pCVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
  (pCVar6->fields).Value.fields.x = fVar10 * fVar9;
  (pCVar6->fields).Value.fields.y = fVar11 * fVar9;
  (pCVar6->fields).Value.fields.z = fVar12;
  return (Il2CppObject *)pCVar6;
}


// CustomLogic.CustomLogicVector3Builtin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Div__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed7370

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Div__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *pIVar4;
  byte bVar5;
  float fVar6;
  Il2CppObject *pIVar7;
  Unity_Mathematics_float3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  int *piVar10;
  float *pfVar11;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  float fVar12;
  Il2CppClass *local_68;
  float local_60;
  Il2CppClass *local_58;
  float local_50;
  Unity_Mathematics_float3_o local_48 [5];
  
  if (Il2CppMethodInitialized_184345282 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184345282 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar5 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if (((bVar5 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) && (other != (Il2CppObject *)0x0)) {
      pIVar7 = (Il2CppObject *)0x0;
      if (other->klass == g_data_184354e38) {
        pIVar7 = other;
      }
      if (pIVar7 == (Il2CppObject *)0x0) {
        pIVar7 = (Il2CppObject *)0x0;
        if (other->klass == g_data_184354e08) {
          pIVar7 = other;
        }
        if (pIVar7 == (Il2CppObject *)0x0) {
          bVar5 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
          if ((bVar5 <= (other->klass->_2).typeHierarchyDepth) &&
             ((other->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
            pIVar3 = self[3].klass;
            pIVar4 = other[3].klass;
            fVar12 = *(float *)&self[3].monitor;
            fVar6 = *(float *)&other[3].monitor;
            if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
            }
            local_68 = pIVar4;
            local_60 = fVar6;
            local_58 = pIVar3;
            local_50 = fVar12;
            pUVar8 = Unity_Mathematics_float3__op_Division
                               (local_48,(Unity_Mathematics_float3_o *)&local_58,
                                (Unity_Mathematics_float3_o *)&local_68,(MethodInfo *)0x0);
            fVar6 = (pUVar8->fields).x;
            fVar1 = (pUVar8->fields).y;
            fVar12 = (pUVar8->fields).z;
            pCVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
            if (Il2CppMethodInitialized_184345279 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
              Il2CppMethodInitialized_184345279 = '\x01';
            }
            if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
            }
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)pCVar9,(MethodInfo *)0x0);
            (pCVar9->fields).Value.fields.x = fVar6;
            (pCVar9->fields).Value.fields.y = fVar1;
            (pCVar9->fields).Value.fields.z = fVar12;
            return (Il2CppObject *)pCVar9;
          }
          goto label_181ed75e2;
        }
        if ((other->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(other,g_data_184354e08);
        }
        piVar10 = il2cpp_object_unbox(other);
        fVar12 = (float)*piVar10;
      }
      else {
        if ((other->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception(other,g_data_184354e38);
        }
        pfVar11 = il2cpp_object_unbox(other);
        fVar12 = *pfVar11;
      }
      fVar6 = *(float *)&self[3].klass;
      fVar1 = *(float *)((longlong)&self[3].klass + 4);
      fVar2 = *(float *)&self[3].monitor;
      pCVar9 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      if (Il2CppMethodInitialized_184345279 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184345279 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar9,(MethodInfo *)0x0);
      (pCVar9->fields).Value.fields.x = fVar6 / fVar12;
      (pCVar9->fields).Value.fields.y = fVar1 / fVar12;
      (pCVar9->fields).Value.fields.z = fVar2 / fVar12;
      return (Il2CppObject *)pCVar9;
    }
  }
label_181ed75e2:
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Div);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicVector3Builtin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin____Eq__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed7630

bool CustomLogic_CustomLogicVector3Builtin____Eq__
               (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184345283 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345283 = '\x01';
  }
  if (other != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
       ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
      fVar3 = (__this->fields).Value.fields.x - *(float *)&other[3].klass;
      fVar4 = (__this->fields).Value.fields.y - *(float *)((longlong)&other[3].klass + 4);
      fVar2 = (__this->fields).Value.fields.z - *(float *)&other[3].monitor;
      return fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2 < 9.9999994e-11;
    }
  }
  return false;
}


// CustomLogic.CustomLogicVector3Builtin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicVector3Builtin____Hash__ (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x181ed76f0

int32_t CustomLogic_CustomLogicVector3Builtin____Hash__
                  (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  
  uVar1 = System_Single__GetHashCode((float *)&(__this->fields).Value,(MethodInfo *)0x0);
  iVar2 = System_Single__GetHashCode(&(__this->fields).Value.fields.y,(MethodInfo *)0x0);
  iVar3 = System_Single__GetHashCode(&(__this->fields).Value.fields.z,(MethodInfo *)0x0);
  return iVar3 >> 2 ^ iVar2 * 4 ^ uVar1;
}


// CustomLogic.CustomLogicVector3Builtin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Mod__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed7750

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Mod__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Mod);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicVector3Builtin$$op_Implicit
// il2cpp: UnityEngine_Vector3_o CustomLogic_CustomLogicVector3Builtin__op_Implicit (CustomLogic_CustomLogicVector3Builtin_o* v, const MethodInfo* method);
// 0x181ed8940

UnityEngine_Vector3_o *
CustomLogic_CustomLogicVector3Builtin__op_Implicit
          (UnityEngine_Vector3_o *__return_storage_ptr__,CustomLogic_CustomLogicVector3Builtin_o *v,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (v != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar1 = (v->fields).Value.fields.z;
    fVar2 = (v->fields).Value.fields.y;
    (__return_storage_ptr__->fields).x = (v->fields).Value.fields.x;
    (__return_storage_ptr__->fields).y = fVar2;
    (__return_storage_ptr__->fields).z = fVar1;
    return __return_storage_ptr__;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__op_Implicit (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x181ed88b0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0(UnityEngine_Vector3_o *v,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_184345284 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345284 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_184345279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  fVar1 = (v->fields).z;
  fVar2 = (v->fields).y;
  (__this->fields).Value.fields.x = (v->fields).x;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVector3Builtin__get_ClassName (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x181ed7fe0

System_String_o *
CustomLogic_CustomLogicVector3Builtin__get_ClassName
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345285 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Vector3");
    Il2CppMethodInitialized_184345285 = '\x01';
  }
  return "Vector3";
}


// CustomLogic.CustomLogicVector3Builtin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin__get_IsAbstract (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicVector3Builtin__get_IsAbstract(CustomLogic_CustomLogicVector3Builtin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicVector3Builtin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin__get_IsStatic (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicVector3Builtin__get_IsStatic(CustomLogic_CustomLogicVector3Builtin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicVector3Builtin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin__get_InheritBaseMembers (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicVector3Builtin__get_InheritBaseMembers(CustomLogic_CustomLogicVector3Builtin_o* __this, MethodInfo* method)

{
  return true;
}


