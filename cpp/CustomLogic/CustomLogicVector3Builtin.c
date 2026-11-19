// Type: CustomLogic.CustomLogicVector3Builtin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicVector3Builtin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicVector3Builtin.cs
// --------------------------------

// CustomLogic.CustomLogicVector3Builtin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59e2c40

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int iVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  float fVar5;
  float fVar6;
  float fVar7;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07545cfe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfe = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_07545ced == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_07545ced = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
    (pCVar3->fields).Value.fields.z = 0.0;
    (pCVar3->fields).Value.fields.x = 0.0;
    (pCVar3->fields).Value.fields.y = 0.0;
  }
  else {
    iVar2 = (int)args->max_length;
    if (iVar2 == 3) {
      pIVar1 = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_34BDFE0 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (((args->max_length & 0xfffffffe) == 0) ||
         (fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (args->m_Items[1],
                             (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                            ), (uint)args->max_length < 3)) goto label_059e2f72;
      fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (args->m_Items[2],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      if (Il2CppMethodInitialized_07545cf0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545cf0 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
      (pCVar3->fields).Value.fields.x = fVar6;
      (pCVar3->fields).Value.fields.y = fVar7;
    }
    else {
      if (iVar2 == 2) {
        pIVar1 = args->m_Items[0];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (pIVar1,(MethodInfo_34BDFE0 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((args->max_length & 0xfffffffe) != 0) {
          fVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (args->m_Items[1],
                             (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                            );
          pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          if (Il2CppMethodInitialized_07545cef == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
            Il2CppMethodInitialized_07545cef = '\x01';
          }
          if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
          }
          CustomLogic_BuiltinClassInstance___ctor
                    ((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
          (pCVar3->fields).Value.fields.x = fVar6;
          (pCVar3->fields).Value.fields.y = fVar7;
          (pCVar3->fields).Value.fields.z = 0.0;
          return pCVar3;
        }
label_059e2f72:
        ThrowIndexOutOfRangeException();
      }
      if (iVar2 != 1) {
        NullCheck(args);
        local_1c = (int32_t)args->max_length;
        pSVar4 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
        str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicVector3Builtin constructor found that takes ");
        str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
        pSVar4 = System_String__Concat_5301f10(str0,pSVar4,str2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
        System_ArgumentException___ctor_54186d0(__this,pSVar4,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Factory_CreateInstance);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
      }
      pIVar1 = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_34BDFE0 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      if (Il2CppMethodInitialized_07545cee == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545cee = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
      (pCVar3->fields).Value.fields.x = fVar5;
      (pCVar3->fields).Value.fields.y = fVar5;
    }
    (pCVar3->fields).Value.fields.z = fVar5;
  }
  return pCVar3;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings___c___cctor (const MethodInfo* method);
// 0x59e7f20

void CustomLogic_CustomLogicVector3Builtin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545d34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    Il2CppMethodInitialized_07545d34 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings___c___ctor (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59e7f90

void CustomLogic_CustomLogicVector3Builtin_Bindings___c___ctor
               (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Angle_b__18_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e7fa0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Angle_b__18_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *from;
  CustomLogic_CustomLogicVector3Builtin_o *to;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  float local_1c;
  
  if (Il2CppMethodInitialized_07545d35 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d35 = '\x01';
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
                     (pIVar1,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      to = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__a->m_Items[1],
                      (MethodInfo_34BDE00 *)
                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      local_1c = CustomLogic_CustomLogicVector3Builtin__Angle(from,to,method_00);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&local_1c);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__ClampMagnitude>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__ClampMagnitude_b__19_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e8070

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__ClampMagnitude_b__19_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  MethodInfo *method_00;
  float maxLength;
  
  if (Il2CppMethodInitialized_07545d36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d36 = '\x01';
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
      method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
      maxLength = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[1],
                             (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                            );
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__ClampMagnitude(pCVar1,maxLength,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Cross>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Cross_b__20_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e8120

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Cross_b__20_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined8 uStack_68;
  float fStack_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07545d37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d37 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e82d2:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if ((pCVar7 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (pCVar8 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
        uVar3 = (pCVar7->fields).Value.fields.x;
        uVar5 = (pCVar7->fields).Value.fields.y;
        uVar4 = (pCVar8->fields).Value.fields.x;
        uVar6 = (pCVar8->fields).Value.fields.y;
        fVar1 = (pCVar7->fields).Value.fields.z;
        fVar2 = (pCVar8->fields).Value.fields.z;
        if (Il2CppMethodInitialized_07545cfc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          Il2CppMethodInitialized_07545cfc = '\x01';
        }
        pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if (Il2CppMethodInitialized_07545cf1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_07545cf1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar7,(MethodInfo *)0x0);
        (pCVar7->fields).Value.fields.x = fVar2 * (float)uVar5 - (float)uVar6 * fVar1;
        (pCVar7->fields).Value.fields.y = fVar1 * (float)uVar4 - (float)uVar3 * fVar2;
        (pCVar7->fields).Value.fields.z = (float)uVar6 * (float)uVar3 - (float)uVar5 * (float)uVar4;
        return (Il2CppObject *)pCVar7;
      }
      goto label_059e82d2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Distance>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Distance_b__21_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e82e0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Distance_b__21_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint32_t uVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *pIVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_07545d38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d38 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e849a:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar7 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar7,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if ((pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
        uVar2._0_4_ = (pCVar5->fields).Value.fields.x;
        uVar2._4_4_ = (pCVar5->fields).Value.fields.y;
        uVar15 = 0;
        uVar16 = 0;
        fVar8 = (pCVar5->fields).Value.fields.z;
        uVar3._0_4_ = (pCVar6->fields).Value.fields.x;
        uVar3._4_4_ = (pCVar6->fields).Value.fields.y;
        uVar11 = 0;
        uVar12 = 0;
        fVar1 = (pCVar6->fields).Value.fields.z;
        if (Il2CppMethodInitialized_0753e7b7 == '\0') {
          uStack_20 = 0;
          uStack_30 = 0;
          uStack_38 = uVar3;
          uStack_28 = uVar2;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e7b7 = '\x01';
          uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          fVar9 = (float)uStack_38;
          fVar10 = uStack_38._4_4_;
          uVar11 = (undefined4)uStack_30;
          uVar12 = uStack_30._4_4_;
          fVar13 = (float)uStack_28;
          fVar14 = uStack_28._4_4_;
          uVar15 = (undefined4)uStack_20;
          uVar16 = uStack_20._4_4_;
        }
        else {
          uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          fVar9 = (float)(undefined4)uVar3;
          fVar10 = (float)uVar3._4_4_;
          fVar13 = (float)(undefined4)uVar2;
          fVar14 = (float)uVar2._4_4_;
        }
        if (uVar4 == 0) {
          uStack_28 = CONCAT44(fVar14,fVar13);
          uStack_20 = CONCAT44(uVar16,uVar15);
          uStack_38 = CONCAT44(fVar10,fVar9);
          uStack_30 = CONCAT44(uVar12,uVar11);
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          fVar9 = (float)uStack_38;
          fVar10 = uStack_38._4_4_;
          fVar13 = (float)uStack_28;
          fVar14 = uStack_28._4_4_;
        }
        fVar8 = fVar8 - fVar1;
        fStack_3c = fVar8 * fVar8 +
                    (fVar14 - fVar10) * (fVar14 - fVar10) + (fVar13 - fVar9) * (fVar13 - fVar9);
        if (fStack_3c < 0.0) {
          fStack_3c = sqrtf(fStack_3c);
        }
        else {
          fStack_3c = SQRT(fStack_3c);
        }
        pIVar7 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_3c);
        return pIVar7;
      }
      goto label_059e849a;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Dot>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Dot_b__22_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e84b0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Dot_b__22_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *pIVar7;
  float fStack_1c;
  
  if (Il2CppMethodInitialized_07545d39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d39 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e8594:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar7 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar7,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if ((pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
        uVar1 = (pCVar5->fields).Value.fields.x;
        uVar3 = (pCVar5->fields).Value.fields.y;
        uVar2 = (pCVar6->fields).Value.fields.x;
        uVar4 = (pCVar6->fields).Value.fields.y;
        fStack_1c = (pCVar5->fields).Value.fields.z * (pCVar6->fields).Value.fields.z +
                    (float)uVar4 * (float)uVar3 + (float)uVar2 * (float)uVar1;
        pIVar7 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_1c);
        return pIVar7;
      }
      goto label_059e8594;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Lerp_b__23_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e85a0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Lerp_b__23_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  float fVar9;
  float fVar10;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545d3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d3a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e878c:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[2],
                           (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((pCVar7 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
           (pCVar8 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
          fVar1 = (pCVar7->fields).Value.fields.z;
          uVar3 = (pCVar7->fields).Value.fields.x;
          uVar5 = (pCVar7->fields).Value.fields.y;
          uVar4 = (pCVar8->fields).Value.fields.x;
          uVar6 = (pCVar8->fields).Value.fields.y;
          fVar2 = (pCVar8->fields).Value.fields.z;
          if (Il2CppMethodInitialized_07545cfc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
            Il2CppMethodInitialized_07545cfc = '\x01';
          }
          pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          if (Il2CppMethodInitialized_07545cf1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
            Il2CppMethodInitialized_07545cf1 = '\x01';
          }
          if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
          }
          fVar10 = 1.0;
          if (fVar9 <= 1.0) {
            fVar10 = fVar9;
          }
          fVar10 = (float)(-(uint)(0.0 <= fVar9) & (uint)fVar10);
          CustomLogic_BuiltinClassInstance___ctor
                    ((CustomLogic_BuiltinClassInstance_o *)pCVar7,(MethodInfo *)0x0);
          (pCVar7->fields).Value.fields.x = fVar10 * ((float)uVar4 - (float)uVar3) + (float)uVar3;
          (pCVar7->fields).Value.fields.y = fVar10 * ((float)uVar6 - (float)uVar5) + (float)uVar5;
          (pCVar7->fields).Value.fields.z = (fVar2 - fVar1) * fVar10 + fVar1;
          return (Il2CppObject *)pCVar7;
        }
        goto label_059e878c;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__24_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e87a0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__24_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  float fVar9;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545d3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d3b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e8975:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[2],
                           (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((pCVar7 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
           (pCVar8 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
          fVar1 = (pCVar7->fields).Value.fields.z;
          uVar3 = (pCVar7->fields).Value.fields.x;
          uVar5 = (pCVar7->fields).Value.fields.y;
          uVar4 = (pCVar8->fields).Value.fields.x;
          uVar6 = (pCVar8->fields).Value.fields.y;
          fVar2 = (pCVar8->fields).Value.fields.z;
          if (Il2CppMethodInitialized_07545cfc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
            Il2CppMethodInitialized_07545cfc = '\x01';
          }
          pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          if (Il2CppMethodInitialized_07545cf1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
            Il2CppMethodInitialized_07545cf1 = '\x01';
          }
          if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
          }
          CustomLogic_BuiltinClassInstance___ctor
                    ((CustomLogic_BuiltinClassInstance_o *)pCVar7,(MethodInfo *)0x0);
          (pCVar7->fields).Value.fields.x = fVar9 * ((float)uVar4 - (float)uVar3) + (float)uVar3;
          (pCVar7->fields).Value.fields.y = fVar9 * ((float)uVar6 - (float)uVar5) + (float)uVar5;
          (pCVar7->fields).Value.fields.z = fVar9 * (fVar2 - fVar1) + fVar1;
          return (Il2CppObject *)pCVar7;
        }
        goto label_059e8975;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Max>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Max_b__25_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e8980

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Max_b__25_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_38 [16];
  
  if (Il2CppMethodInitialized_07545d3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d3c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e8afd:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if ((pCVar7 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (pCVar8 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
        fVar1 = (pCVar7->fields).Value.fields.z;
        uVar3 = (pCVar7->fields).Value.fields.x;
        uVar5 = (pCVar7->fields).Value.fields.y;
        auStack_38._4_4_ = uVar5;
        auStack_38._0_4_ = uVar3;
        auStack_38._8_8_ = 0;
        uVar4 = (pCVar8->fields).Value.fields.x;
        uVar6 = (pCVar8->fields).Value.fields.y;
        auVar9._4_4_ = uVar6;
        auVar9._0_4_ = uVar4;
        fVar2 = (pCVar8->fields).Value.fields.z;
        if (Il2CppMethodInitialized_07545cfc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          Il2CppMethodInitialized_07545cfc = '\x01';
        }
        pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if (Il2CppMethodInitialized_07545cf1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_07545cf1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        if (fVar1 <= fVar2) {
          fVar1 = fVar2;
        }
        auVar9._8_8_ = 0;
        auVar9 = maxps(auStack_38,auVar9);
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar7,(MethodInfo *)0x0);
        auStack_38._0_4_ = auVar9._0_4_;
        auStack_38._4_4_ = auVar9._4_4_;
        (pCVar7->fields).Value.fields.x = (float)auStack_38._0_4_;
        (pCVar7->fields).Value.fields.y = (float)auStack_38._4_4_;
        (pCVar7->fields).Value.fields.z = fVar1;
        return (Il2CppObject *)pCVar7;
      }
      goto label_059e8afd;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Min>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Min_b__26_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e8b10

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Min_b__26_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_38 [16];
  
  if (Il2CppMethodInitialized_07545d3d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d3d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e8c8d:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if ((pCVar7 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (pCVar8 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
        fVar1 = (pCVar7->fields).Value.fields.z;
        uVar3 = (pCVar7->fields).Value.fields.x;
        uVar5 = (pCVar7->fields).Value.fields.y;
        auStack_38._4_4_ = uVar5;
        auStack_38._0_4_ = uVar3;
        auStack_38._8_8_ = 0;
        uVar4 = (pCVar8->fields).Value.fields.x;
        uVar6 = (pCVar8->fields).Value.fields.y;
        auVar9._4_4_ = uVar6;
        auVar9._0_4_ = uVar4;
        fVar2 = (pCVar8->fields).Value.fields.z;
        if (Il2CppMethodInitialized_07545cfc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          Il2CppMethodInitialized_07545cfc = '\x01';
        }
        pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if (Il2CppMethodInitialized_07545cf1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_07545cf1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        if (fVar2 <= fVar1) {
          fVar1 = fVar2;
        }
        auVar9._8_8_ = 0;
        auVar9 = minps(auStack_38,auVar9);
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar7,(MethodInfo *)0x0);
        auStack_38._0_4_ = auVar9._0_4_;
        auStack_38._4_4_ = auVar9._4_4_;
        (pCVar7->fields).Value.fields.x = (float)auStack_38._0_4_;
        (pCVar7->fields).Value.fields.y = (float)auStack_38._4_4_;
        (pCVar7->fields).Value.fields.z = fVar1;
        return (Il2CppObject *)pCVar7;
      }
      goto label_059e8c8d;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__MoveTowards_b__27_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e8ca0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__MoveTowards_b__27_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *target;
  MethodInfo *method_00;
  float maxDistanceDelta;
  
  if (Il2CppMethodInitialized_07545d3e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d3e = '\x01';
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
      target = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        maxDistanceDelta =
             CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (__a->m_Items[2],
                        (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        pCVar1 = CustomLogic_CustomLogicVector3Builtin__MoveTowards(pCVar1,target,maxDistanceDelta,method_00);
        return (Il2CppObject *)pCVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Normalize>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Normalize_b__28_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e8d70

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Normalize_b__28_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545d3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d3f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin;
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__Normalize(pCVar1,method_00);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__OrthoNormalize>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__OrthoNormalize_b__29_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e8df0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__OrthoNormalize_b__29_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  
  if (Il2CppMethodInitialized_07545d40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d40 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e8e9a:
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
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if ((pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (pCVar2 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
        UnityEngine_Vector3__OrthoNormalize(&(pCVar1->fields).Value,&(pCVar2->fields).Value,(MethodInfo *)0x0)
        ;
        return (Il2CppObject *)0x0;
      }
      goto label_059e8e9a;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Project>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Project_b__30_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e8eb0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Project_b__30_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545d41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d41 = '\x01';
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
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_34BDE00 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Project(pCVar1,b,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__ProjectOnPlane>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__ProjectOnPlane_b__31_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e8f50

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__ProjectOnPlane_b__31_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *plane;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545d42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d42 = '\x01';
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
      plane = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__ProjectOnPlane(pCVar1,plane,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Reflect>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Reflect_b__32_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e8ff0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Reflect_b__32_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar7;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar8;
  float fVar9;
  undefined8 uStack_48;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545d43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d43 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e91a3:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar8 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if ((pCVar7 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (pCVar8 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
        fVar1 = (pCVar7->fields).Value.fields.z;
        uVar3 = (pCVar7->fields).Value.fields.x;
        uVar5 = (pCVar7->fields).Value.fields.y;
        uVar4 = (pCVar8->fields).Value.fields.x;
        uVar6 = (pCVar8->fields).Value.fields.y;
        fVar2 = (pCVar8->fields).Value.fields.z;
        if (Il2CppMethodInitialized_07545cfc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          Il2CppMethodInitialized_07545cfc = '\x01';
        }
        pCVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if (Il2CppMethodInitialized_07545cf1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_07545cf1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        fVar9 = ((float)uVar5 * (float)uVar6 + (float)uVar3 * (float)uVar4 + fVar1 * fVar2) * -2.0;
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar7,(MethodInfo *)0x0);
        (pCVar7->fields).Value.fields.x = fVar9 * (float)uVar4 + (float)uVar3;
        (pCVar7->fields).Value.fields.y = fVar9 * (float)uVar6 + (float)uVar5;
        (pCVar7->fields).Value.fields.z = fVar9 * fVar2 + fVar1;
        return (Il2CppObject *)pCVar7;
      }
      goto label_059e91a3;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__RotateTowards>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__RotateTowards_b__33_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e91b0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__RotateTowards_b__33_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *target;
  MethodInfo *method_00;
  float maxRadiansDelta;
  float maxMagnitudeDelta;
  
  if (Il2CppMethodInitialized_07545d44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d44 = '\x01';
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
      target = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        maxRadiansDelta =
             CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (__a->m_Items[2],
                        (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((__a->max_length & 0xfffffffc) != 0) {
          maxMagnitudeDelta =
               CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (__a->m_Items[3],
                          (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          pCVar1 = CustomLogic_CustomLogicVector3Builtin__RotateTowards
                             (pCVar1,target,maxRadiansDelta,maxMagnitudeDelta,method_00);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SignedAngle>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SignedAngle_b__34_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e92b0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SignedAngle_b__34_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  Il2CppObject *pIVar7;
  undefined1 auStack_24 [4];
  
  if (Il2CppMethodInitialized_07545d45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d45 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e93b7:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar7 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar7,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[2],
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (((pCVar4 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
            (pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
           (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
          uVar1._0_4_ = (pCVar4->fields).Value.fields.x;
          uVar1._4_4_ = (pCVar4->fields).Value.fields.y;
          uVar2._0_4_ = (pCVar5->fields).Value.fields.x;
          uVar2._4_4_ = (pCVar5->fields).Value.fields.y;
          uVar3._0_4_ = (pCVar6->fields).Value.fields.x;
          uVar3._4_4_ = (pCVar6->fields).Value.fields.y;
          il2cpp_runtime_helper_059fb780(uVar1,(pCVar4->fields).Value.fields.z,uVar2,(pCVar5->fields).Value.fields.z,uVar3,
                       (pCVar6->fields).Value.fields.z,0);
          pIVar7 = il2cpp_vm_Object_Box(g_data_07556740,auStack_24);
          return pIVar7;
        }
        goto label_059e93b7;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Slerp>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Slerp_b__35_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e93d0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Slerp_b__35_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  MethodInfo *method_00;
  float t;
  
  if (Il2CppMethodInitialized_07545d46 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d46 = '\x01';
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
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_34BDE00 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (__a->m_Items[2],
                       (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        pCVar1 = CustomLogic_CustomLogicVector3Builtin__Slerp(pCVar1,b,t,method_00);
        return (Il2CppObject *)pCVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SlerpUnclamped>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__36_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e94a0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__36_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  MethodInfo *method_00;
  float t;
  
  if (Il2CppMethodInitialized_07545d47 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d47 = '\x01';
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
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_34BDE00 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        t = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (__a->m_Items[2],
                       (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        pCVar1 = CustomLogic_CustomLogicVector3Builtin__SlerpUnclamped(pCVar1,b,t,method_00);
        return (Il2CppObject *)pCVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__SmoothDamp>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__SmoothDamp_b__37_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e9570

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
  
  if (Il2CppMethodInitialized_07545d48 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d48 = '\x01';
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
      target = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (2 < (uint)__a->max_length) {
        currentVelocity =
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[2],
                        (MethodInfo_34BDE00 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if ((__a->max_length & 0xfffffffc) != 0) {
          smoothTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                 (__a->m_Items[3],
                                  (MethodInfo_34BDFE0 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
          if (4 < (uint)__a->max_length) {
            maxSpeed = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                                 (__a->m_Items[4],
                                  (MethodInfo_34BDFE0 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
            pCVar1 = CustomLogic_CustomLogicVector3Builtin__SmoothDamp
                               (pCVar1,target,currentVelocity,smoothTime,maxSpeed,method);
            return (Il2CppObject *)pCVar1;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Set>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Set_b__38_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e9690

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Set_b__38_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07545d49 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d49 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e9771:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (2 < (uint)__a->max_length) {
        fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[2],
                           (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          (__c->fields).Value.fields.x = fVar1;
          (__c->fields).Value.fields.y = fVar2;
          (__c->fields).Value.fields.z = fVar3;
          return (Il2CppObject *)0x0;
        }
        goto label_059e9771;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Scale>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Scale_b__39_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e9780

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
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Scale(__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Multiply>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Multiply_b__40_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e97b0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Multiply_b__40_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545d4a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d4a = '\x01';
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
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_34BDE00 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Multiply(pCVar1,b,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__Divide>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Divide_b__41_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e9850

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__Divide_b__41_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545d4b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d4b = '\x01';
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
      b = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__a->m_Items[1],
                     (MethodInfo_34BDE00 *)
                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__Divide(pCVar1,b,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding__GetRotationDirection>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__GetRotationDirection_b__42_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e98f0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding__GetRotationDirection_b__42_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar5;
  UnityEngine_Vector3_Fields UStack_38;
  undefined1 auStack_28 [16];
  
  if (Il2CppMethodInitialized_07545d4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d4c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059e9a71:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (Il2CppMethodInitialized_07545cf5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        Il2CppMethodInitialized_07545cf5 = '\x01';
      }
      if (pCVar3 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        uVar1 = (pCVar3->fields).Value.fields.x;
        uVar2 = (pCVar3->fields).Value.fields.y;
        UStack_38.z = (pCVar3->fields).Value.fields.z * 0.017453292;
        UStack_38.y = (float)uVar2 * 0.017453292;
        UStack_38.x = (float)uVar1 * 0.017453292;
        rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                             ((UnityEngine_Vector3_o *)&UStack_38,(MethodInfo *)0x0);
        if (pCVar4 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
          UVar5 = UnityEngine_Quaternion__op_Multiply_6905700
                            (rotation,(UnityEngine_Vector3_o)(pCVar4->fields).Value.fields,(MethodInfo *)0x0);
          auStack_28._8_4_ = extraout_XMM0_Dc;
          auStack_28._0_8_ = UVar5.fields._0_8_;
          auStack_28._12_4_ = extraout_XMM0_Dd;
          pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          if (Il2CppMethodInitialized_07545cf1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
            Il2CppMethodInitialized_07545cf1 = '\x01';
          }
          if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
          }
          CustomLogic_BuiltinClassInstance___ctor
                    ((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
          (pCVar3->fields).Value.fields.x = (float)auStack_28._0_4_;
          (pCVar3->fields).Value.fields.y = (float)auStack_28._4_4_;
          (pCVar3->fields).Value.fields.z = UVar5.fields.z;
          return (Il2CppObject *)pCVar3;
        }
      }
      goto label_059e9a71;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Copy___b__43_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e9a80

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Copy___b__43_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  
  if (__c == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07545cf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cf6 = '\x01';
  }
  fVar2 = (__c->fields).Value.fields.x;
  fVar3 = (__c->fields).Value.fields.y;
  fVar1 = (__c->fields).Value.fields.z;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Add___b__44_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e9b40

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Add___b__44_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector3Builtin____Add__
                         ((CustomLogic_CustomLogicVector3Builtin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Sub___b__45_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e9b70

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Sub___b__45_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector3Builtin____Sub__
                         ((CustomLogic_CustomLogicVector3Builtin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Mul___b__46_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e9ba0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Mul___b__46_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector3Builtin____Mul__
                         ((CustomLogic_CustomLogicVector3Builtin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Div___b__47_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e9bd0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Div___b__47_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector3Builtin____Div__
                         ((CustomLogic_CustomLogicVector3Builtin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Eq___b__48_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e9c00

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Eq___b__48_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  undefined8 in_RAX;
  Il2CppObject *pIVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uStack_18;
  
  if (__a == (System_Object_array *)0x0) {
label_059e9ce2:
    ThrowNullReferenceException();
  }
  iVar4 = (int)__a->max_length;
  if ((iVar4 == 1) || (iVar4 == 0)) {
    ThrowIndexOutOfRangeException();
  }
  if (__c == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto label_059e9ce2;
  pIVar6 = __a->m_Items[1];
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545cfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfb = '\x01';
  }
  if (pIVar6 != (Il2CppObject *)0x0) {
    bVar3 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if ((bVar3 <= (pIVar6->klass->_2).typeHierarchyDepth) &&
       ((pIVar6->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
      uVar1 = (__c->fields).Value.fields.x;
      uVar2 = (__c->fields).Value.fields.y;
      fVar7 = (float)uVar2 - (float)((ulong)pIVar6[3].klass >> 0x20);
      fVar8 = (__c->fields).Value.fields.z - *(float *)&pIVar6[3].monitor;
      fVar9 = (float)uVar1 - SUB84(pIVar6[3].klass,0);
      bVar5 = fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8 < 9.9999994e-11;
      goto label_059e9c7e;
    }
  }
  bVar5 = false;
label_059e9c7e:
  uStack_18 = CONCAT17(bVar5,(undefined7)uStack_18);
  pIVar6 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
  return pIVar6;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Hash___b__49_0 (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector3Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59e9cf0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings___c_____CreateMethodBinding____Hash___b__49_0
          (CustomLogic_CustomLogicVector3Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector3Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  Il2CppObject *pIVar4;
  uint uStack_1c;
  
  if (__c == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = System_Single__GetHashCode((float *)&(__c->fields).Value,(MethodInfo *)0x0);
  iVar2 = System_Single__GetHashCode(&(__c->fields).Value.fields.y,(MethodInfo *)0x0);
  iVar3 = System_Single__GetHashCode(&(__c->fields).Value.fields.z,(MethodInfo *)0x0);
  uStack_1c = iVar3 >> 2 ^ iVar2 << 2 ^ uVar1;
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556710,&uStack_1c);
  return pIVar4;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVector3Builtin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59e3010

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVector3Builtin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicVector3Builtin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545cff == '\0') {
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
    Il2CppMethodInitialized_07545cff = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7b5fea5f) {
    if (uVar2 < 0x39907618) {
      if (uVar2 < 0x1e9e9f86) {
        if (uVar2 < 0x18c37b42) {
          if (uVar2 == 0xb9c3383) {
            bVar1 = System_String__op_Equality(name,"Zero",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Zero
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0xdc1f3cc) {
            bVar1 = System_String__op_Equality(name,"__Add__",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Add__
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x18c37b41) {
            bVar1 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Mul__
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x1cb1b18f) {
          bVar1 = System_String__op_Equality(name,"One",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__One
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x1e7a6f6f) {
          bVar1 = System_String__op_Equality(name,"ProjectOnPlane",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ProjectOnPlane
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1e9e9f85) {
          bVar1 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Right
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 < 0x28b19ea4) {
        if (uVar2 == 0x21ed379a) {
          bVar1 = System_String__op_Equality(name,"ClampMagnitude",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ClampMagnitude
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x28528e11) {
          bVar1 = System_String__op_Equality(name,"Scale",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Scale
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x28b19ea3) {
          bVar1 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Set
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x2e9445f7) {
        bVar1 = System_String__op_Equality(name,"Min",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Min
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x386d9fc0) {
        bVar1 = System_String__op_Equality(name,"Dot",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Dot
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x39907617) {
        bVar1 = System_String__op_Equality(name,"Slerp",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Slerp
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x441a7ddf) {
      if (uVar2 < 0x3ca7e3ba) {
        if (uVar2 == 0x39c493b8) {
          bVar1 = System_String__op_Equality(name,"Angle",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Angle
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x3c0ea91a) {
          bVar1 = System_String__op_Equality(name,"RotateTowards",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__RotateTowards
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x3ca7e3b9) {
          bVar1 = System_String__op_Equality(name,"Max",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Max
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x42f35940) {
        bVar1 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Up
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x434cfcb8) {
        bVar1 = System_String__op_Equality(name,"Normalized",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Normalized
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x441a7dde) {
        bVar1 = System_String__op_Equality(name,"GetRotationDirection",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__GetRotationDirection
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x6a4c91d7) {
      if (uVar2 == 0x4adde30c) {
        bVar1 = System_String__op_Equality(name,"Normalize",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Normalize
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x549f4d10) {
        bVar1 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Copy__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x6a4c91d6) {
        bVar1 = System_String__op_Equality(name,"SlerpUnclamped",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SlerpUnclamped
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x74ee9015) {
      bVar1 = System_String__op_Equality(name,"SmoothDamp",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SmoothDamp
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x792a6491) {
      bVar1 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Hash__
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x7b5fea5e) {
      bVar1 = System_String__op_Equality(name,"Project",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Project
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc370544b) {
    if (uVar2 < 0xa4995036) {
      if (uVar2 < 0x91efe6d8) {
        if (uVar2 == 0x91efe6d7) {
          bVar1 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Eq__
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x7bdb45c1) {
          bVar1 = System_String__op_Equality(name,"SqrMagnitude",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__SqrMagnitude
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x7d671990) {
          bVar1 = System_String__op_Equality(name,"Divide",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Divide
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x92773890) {
        bVar1 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Left
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x9e956088) {
        bVar1 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Lerp
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xa4995035) {
        bVar1 = System_String__op_Equality(name,"Down",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Down
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0xb127a616) {
      if (uVar2 == 0xa734d965) {
        bVar1 = System_String__op_Equality(name,"Multiply",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Multiply
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xacfe0068) {
        bVar1 = System_String__op_Equality(name,"MoveTowards",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__MoveTowards
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xb127a615) {
        bVar1 = System_String__op_Equality(name,"Magnitude",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Magnitude
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0xb663d53b) {
      bVar1 = System_String__op_Equality(name,"Cross",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Cross
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc2954bc2) {
      bVar1 = System_String__op_Equality(name,"Back",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Back
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xc370544a) {
      bVar1 = System_String__op_Equality(name,"Reflect",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Reflect
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xdd0c1e28) {
    if (uVar2 < 0xd7cecb56) {
      if (uVar2 == 0xd3d96082) {
        bVar1 = System_String__op_Equality(name,"Distance",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Distance
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd6c0fe1a) {
        bVar1 = System_String__op_Equality(name,"PositiveInfinity",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__PositiveInfinity
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xd7cecb55) {
        bVar1 = System_String__op_Equality(name,"__Sub__",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Sub__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xd80ed56c) {
      bVar1 = System_String__op_Equality(name,"OrthoNormalize",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__OrthoNormalize
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xdc0c1c94) {
      bVar1 = System_String__op_Equality(name,"Y",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Y
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xdd0c1e27) {
      bVar1 = System_String__op_Equality(name,"X",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__X
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xe0993adb) {
    if (uVar2 == 0xdf0c214d) {
      bVar1 = System_String__op_Equality(name,"Z",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Z
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xdfeb0948) {
      bVar1 = System_String__op_Equality(name,"SignedAngle",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SignedAngle
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe0993ada) {
      bVar1 = System_String__op_Equality(name,"NegativeInfinity",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__NegativeInfinity
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xe50883ba) {
    bVar1 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Forward
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xf4248f7b) {
    bVar1 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__LerpUnclamped
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xff76b6dc) {
    bVar1 = System_String__op_Equality(name,"__Div__",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Div__
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicVector3Builtin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__X
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__X (const MethodInfo* method);
// 0x59e41a0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__X(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  System_Action_CustomLogicVector3Builtin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545d00 == '\0') {
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
    Il2CppMethodInitialized_07545d00 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector3Builtin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__X_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Y
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Y (const MethodInfo* method);
// 0x59e4280

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Y(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  System_Action_CustomLogicVector3Builtin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545d01 == '\0') {
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
    Il2CppMethodInitialized_07545d01 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector3Builtin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Z
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Z (const MethodInfo* method);
// 0x59e4360

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Z(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  System_Action_CustomLogicVector3Builtin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545d02 == '\0') {
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
    Il2CppMethodInitialized_07545d02 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector3Builtin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Z_g____setter_4_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Normalized
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Normalized (const MethodInfo* method);
// 0x59e4440

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Normalized(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d03 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Magnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Magnitude (const MethodInfo* method);
// 0x59e44e0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Magnitude(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d04 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_6
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__SqrMagnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__SqrMagnitude (const MethodInfo* method);
// 0x59e4580

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__SqrMagnitude(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d05 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Zero
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Zero (const MethodInfo* method);
// 0x59e4620

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Zero(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d06 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__One
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__One (const MethodInfo* method);
// 0x59e46c0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__One(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__One_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d07 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__One_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x59e4760

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d08 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Down
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Down (const MethodInfo* method);
// 0x59e4800

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Down(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Down_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d09 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Down_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Left (const MethodInfo* method);
// 0x59e48a0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Left(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Left_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d0a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Left_g____getter_12_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x59e4940

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Right_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d0b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Right_g____getter_13_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x59e49e0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Forward_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d0c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Forward_g____getter_14_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__Back
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Back (const MethodInfo* method);
// 0x59e4a80

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__Back(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Back_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d0d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__Back_g____getter_15_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__NegativeInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__NegativeInfinity (const MethodInfo* method);
// 0x59e4b20

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__NegativeInfinity(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d0e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreatePropertyBinding__PositiveInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__PositiveInfinity (const MethodInfo* method);
// 0x59e4bc0

CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreatePropertyBinding__PositiveInfinity(MethodInfo *method)

{
  System_Func_CustomLogicVector3Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector3Builtin_object);
    Il2CppMethodInitialized_07545d0f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Angle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Angle (const MethodInfo* method);
// 0x59e4c60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e4c95: jmp 0x59e4d05

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Angle(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d10 == '\0') {
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
    Il2CppMethodInitialized_07545d10 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Angle_b__18_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__ClampMagnitude
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ClampMagnitude (const MethodInfo* method);
// 0x59e4da0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e4dd5: jmp 0x59e4e45

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ClampMagnitude(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d11 == '\0') {
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
    Il2CppMethodInitialized_07545d11 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__19_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__19_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ClampMagnitude_b__19_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__19_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Cross
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Cross (const MethodInfo* method);
// 0x59e4ee0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e4f15: jmp 0x59e4f85

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Cross(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d12 == '\0') {
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
    Il2CppMethodInitialized_07545d12 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__20_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__20_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Cross_b__20_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__20_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__20_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Distance
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Distance (const MethodInfo* method);
// 0x59e5020
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e5055: jmp 0x59e50c5

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Distance(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d13 == '\0') {
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
    Il2CppMethodInitialized_07545d13 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__21_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__21_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Distance_b__21_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__21_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__21_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Dot
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Dot (const MethodInfo* method);
// 0x59e5160
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e5195: jmp 0x59e5205

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Dot(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d14 == '\0') {
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
    Il2CppMethodInitialized_07545d14 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Dot_b__22_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x59e52a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e52d5: jmp 0x59e5345

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d15 == '\0') {
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
    Il2CppMethodInitialized_07545d15 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__23_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__23_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Lerp_b__23_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__23_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__23_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x59e53e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e5415: jmp 0x59e5485

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__LerpUnclamped(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d16 == '\0') {
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
    Il2CppMethodInitialized_07545d16 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__24_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__24_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__24_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__24_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__24_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Max
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Max (const MethodInfo* method);
// 0x59e5520
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e5555: jmp 0x59e55c5

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Max(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d17 == '\0') {
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
    Il2CppMethodInitialized_07545d17 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__25_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__25_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Max_b__25_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__25_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__25_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Min
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Min (const MethodInfo* method);
// 0x59e5660
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e5695: jmp 0x59e5705

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Min(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d18 == '\0') {
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
    Il2CppMethodInitialized_07545d18 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__26_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__26_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Min_b__26_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__26_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__26_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__MoveTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__MoveTowards (const MethodInfo* method);
// 0x59e57a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e57d5: jmp 0x59e5845

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__MoveTowards(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d19 == '\0') {
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
    Il2CppMethodInitialized_07545d19 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__27_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__27_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__MoveTowards_b__27_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__27_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__27_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Normalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Normalize (const MethodInfo* method);
// 0x59e58e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e5915: jmp 0x59e5985

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Normalize(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d1a == '\0') {
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
    Il2CppMethodInitialized_07545d1a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__28_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__28_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Normalize_b__28_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__28_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__28_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__OrthoNormalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__OrthoNormalize (const MethodInfo* method);
// 0x59e5a20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e5a55: jmp 0x59e5ac5

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__OrthoNormalize(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d1b == '\0') {
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
    Il2CppMethodInitialized_07545d1b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__29_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__29_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__OrthoNormalize_b__29_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__29_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__29_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Project
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Project (const MethodInfo* method);
// 0x59e5b60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e5b95: jmp 0x59e5c05

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Project(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d1c == '\0') {
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
    Il2CppMethodInitialized_07545d1c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__30_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__30_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Project_b__30_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__30_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__30_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__ProjectOnPlane
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ProjectOnPlane (const MethodInfo* method);
// 0x59e5ca0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e5cd5: jmp 0x59e5d45

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__ProjectOnPlane(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d1d == '\0') {
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
    Il2CppMethodInitialized_07545d1d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__31_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__31_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__ProjectOnPlane_b__31_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__31_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__31_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Reflect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Reflect (const MethodInfo* method);
// 0x59e5de0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e5e15: jmp 0x59e5e85

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Reflect(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d1e == '\0') {
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
    Il2CppMethodInitialized_07545d1e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__32_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__32_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Reflect_b__32_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__32_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__32_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__RotateTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__RotateTowards (const MethodInfo* method);
// 0x59e5f20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e5f58: jmp 0x59e5fcb

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__RotateTowards(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d1f == '\0') {
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
    Il2CppMethodInitialized_07545d1f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__33_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__33_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__RotateTowards_b__33_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__33_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__33_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SignedAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SignedAngle (const MethodInfo* method);
// 0x59e6060
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e6098: jmp 0x59e610b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SignedAngle(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d20 == '\0') {
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
    Il2CppMethodInitialized_07545d20 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__34_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__34_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SignedAngle_b__34_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__34_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__34_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Slerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Slerp (const MethodInfo* method);
// 0x59e61a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e61d8: jmp 0x59e624b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Slerp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d21 == '\0') {
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
    Il2CppMethodInitialized_07545d21 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__35_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__35_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Slerp_b__35_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__35_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__35_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SlerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SlerpUnclamped (const MethodInfo* method);
// 0x59e62e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e6318: jmp 0x59e638b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SlerpUnclamped(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d22 == '\0') {
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
    Il2CppMethodInitialized_07545d22 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__36_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__36_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SlerpUnclamped_b__36_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__36_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__36_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__SmoothDamp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SmoothDamp (const MethodInfo* method);
// 0x59e6420
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e6458: jmp 0x59e64cb

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__SmoothDamp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d23 == '\0') {
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
    Il2CppMethodInitialized_07545d23 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__37_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__37_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__SmoothDamp_b__37_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__37_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__37_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x59e6560
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e6598: jmp 0x59e660b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d24 == '\0') {
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
    Il2CppMethodInitialized_07545d24 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__38_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__38_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Set_b__38_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__38_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__38_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Scale
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Scale (const MethodInfo* method);
// 0x59e66a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e66d8: jmp 0x59e674b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Scale(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d25 == '\0') {
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
    Il2CppMethodInitialized_07545d25 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__39_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__39_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Scale_b__39_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__39_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__39_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Multiply
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Multiply (const MethodInfo* method);
// 0x59e67e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e6818: jmp 0x59e688b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Multiply(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d26 == '\0') {
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
    Il2CppMethodInitialized_07545d26 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__40_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__40_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Multiply_b__40_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__40_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__40_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__Divide
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Divide (const MethodInfo* method);
// 0x59e6920
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e6958: jmp 0x59e69cb

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__Divide(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d27 == '\0') {
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
    Il2CppMethodInitialized_07545d27 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__41_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__41_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__Divide_b__41_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__41_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__41_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding__GetRotationDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__GetRotationDirection (const MethodInfo* method);
// 0x59e6a60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e6a98: jmp 0x59e6b0b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding__GetRotationDirection
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d28 == '\0') {
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
    Il2CppMethodInitialized_07545d28 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__42_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__42_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding__GetRotationDirection_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__42_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__42_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x59e6ba0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e6bd8: jmp 0x59e6c4b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d29 == '\0') {
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
    Il2CppMethodInitialized_07545d29 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__43_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__43_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Copy___b__43_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__43_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__43_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Add__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Add__ (const MethodInfo* method);
// 0x59e6ce0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e6d18: jmp 0x59e6d8b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Add__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d2a == '\0') {
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
    Il2CppMethodInitialized_07545d2a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__44_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__44_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Add___b__44_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__44_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__44_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Sub__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Sub__ (const MethodInfo* method);
// 0x59e6e20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e6e58: jmp 0x59e6ecb

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Sub__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d2b == '\0') {
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
    Il2CppMethodInitialized_07545d2b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__45_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__45_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Sub___b__45_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__45_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__45_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x59e6f60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e6f98: jmp 0x59e700b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d2c == '\0') {
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
    Il2CppMethodInitialized_07545d2c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__46_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__46_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Mul___b__46_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__46_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__46_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Div__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Div__ (const MethodInfo* method);
// 0x59e70a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e70d8: jmp 0x59e714b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Div__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d2d == '\0') {
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
    Il2CppMethodInitialized_07545d2d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__47_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__47_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Div___b__47_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__47_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__47_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x59e71e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e7218: jmp 0x59e728b

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d2e == '\0') {
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
    Il2CppMethodInitialized_07545d2e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__48_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__48_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Eq___b__48_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__48_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__48_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o* CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x59e7320
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e7358: jmp 0x59e73cb

CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *
CustomLogic_CustomLogicVector3Builtin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector3Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector3Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector3Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545d2f == '\0') {
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
    Il2CppMethodInitialized_07545d2f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__49_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__49_0;
  }
  if (__this == (System_Func_CustomLogicVector3Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector3Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c___CreateMethodBinding____Hash___b__49_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings_c->static_fields;
    pCVar2->__9__49_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__49_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector3Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings___cctor (const MethodInfo* method);
// 0x59e7460

void CustomLogic_CustomLogicVector3Builtin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545d30 == '\0') {
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
    Il2CppMethodInitialized_07545d30 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"X",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Y",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Z",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normalized",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Magnitude",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SqrMagnitude",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Zero",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"One",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Up",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Down",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Left",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Forward",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Back",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NegativeInfinity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PositiveInfinity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Angle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClampMagnitude",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Cross",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Distance",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Dot",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Lerp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LerpUnclamped",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Max",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Min",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveTowards",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normalize",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"OrthoNormalize",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Project",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ProjectOnPlane",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reflect",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RotateTowards",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SignedAngle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Slerp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SlerpUnclamped",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SmoothDamp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Scale",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Multiply",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Divide",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetRotationDirection",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Copy__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Add__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Sub__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Mul__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Div__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicVector3Builtin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__X_g____getter_2_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7b40

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__X_g____getter_2_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__X_g____setter_2_1 (CustomLogic_CustomLogicVector3Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59e7b70

void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__X_g____setter_2_1
               (CustomLogic_CustomLogicVector3Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07545d31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d31 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__i->fields).Value.fields.x = fVar1;
  return;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7bf0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1 (CustomLogic_CustomLogicVector3Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59e7c20

void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1
               (CustomLogic_CustomLogicVector3Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07545d32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d32 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__i->fields).Value.fields.y = fVar1;
  return;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Z>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7ca0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Z>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1 (CustomLogic_CustomLogicVector3Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59e7cd0

void CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1
               (CustomLogic_CustomLogicVector3Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07545d33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545d33 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__i->fields).Value.fields.z = fVar1;
  return;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Normalized>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Normalized_g____getter_5_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7d50

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Normalized_g____getter_5_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Normalized(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Magnitude>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Magnitude_g____getter_6_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7d60

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Magnitude_g____getter_6_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  Il2CppObject *pIVar4;
  float fStack_c;
  
  if (__i == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fVar1 = (__i->fields).Value.fields.x;
  fVar2 = (__i->fields).Value.fields.y;
  fVar3 = (__i->fields).Value.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fStack_c = fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1;
  if (fStack_c < 0.0) {
    fStack_c = sqrtf(fStack_c);
  }
  else {
    fStack_c = SQRT(fStack_c);
  }
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_c);
  return pIVar4;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__SqrMagnitude>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__SqrMagnitude_g____getter_7_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7e30

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__SqrMagnitude_g____getter_7_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Zero>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Zero_g____getter_8_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7e80

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Zero_g____getter_8_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Zero((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__One>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__One_g____getter_9_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7e90

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__One_g____getter_9_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_One((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7ea0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Up((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Down>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Down_g____getter_11_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7eb0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Down_g____getter_11_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Down((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Left>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Left_g____getter_12_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7ec0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Left_g____getter_12_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Left((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Right>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Right_g____getter_13_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7ed0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Right_g____getter_13_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Right((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Forward_g____getter_14_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7ee0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Forward_g____getter_14_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Forward((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__Back>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Back_g____getter_15_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7ef0

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__Back_g____getter_15_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_Back((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_16_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7f00

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_16_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_NegativeInfinity((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin.Bindings$$<__CreatePropertyBinding__PositiveInfinity>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__PositiveInfinity_g____getter_17_0 (CustomLogic_CustomLogicVector3Builtin_o* __i, const MethodInfo* method);
// 0x59e7f10

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin_Bindings_____CreatePropertyBinding__PositiveInfinity_g____getter_17_0
          (CustomLogic_CustomLogicVector3Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector3Builtin__get_PositiveInfinity((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59df680

void CustomLogic_CustomLogicVector3Builtin___ctor
               (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545ced == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545ced = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.z = 0.0;
  (__this->fields).Value.fields.x = 0.0;
  (__this->fields).Value.fields.y = 0.0;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector3Builtin___ctor (CustomLogic_CustomLogicVector3Builtin_o* __this, float xyz, const MethodInfo* method);
// 0x59df6e0

void CustomLogic_CustomLogicVector3Builtin___ctor_58df6e0
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float xyz,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545cee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cee = '\x01';
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
// 0x59df750

void CustomLogic_CustomLogicVector3Builtin___ctor_58df750
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float x,float y,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545cef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cef = '\x01';
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
// 0x59df7d0

void CustomLogic_CustomLogicVector3Builtin___ctor_58df7d0
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float x,float y,float z,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545cf0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf0 = '\x01';
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
// 0x59df850

void CustomLogic_CustomLogicVector3Builtin___ctor_58df850
               (CustomLogic_CustomLogicVector3Builtin_o *__this,UnityEngine_Vector3_o value,MethodInfo *method
               )

{
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = value.fields.x;
  (__this->fields).Value.fields.y = value.fields.y;
  (__this->fields).Value.fields.z = value.fields.z;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_X
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_X (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59df8c0

float CustomLogic_CustomLogicVector3Builtin__get_X
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.x;
}


// CustomLogic.CustomLogicVector3Builtin$$set_X
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__set_X (CustomLogic_CustomLogicVector3Builtin_o* __this, float value, const MethodInfo* method);
// 0x59df8d0

void CustomLogic_CustomLogicVector3Builtin__set_X
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.x = value;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Y
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_Y (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59df8e0

float CustomLogic_CustomLogicVector3Builtin__get_Y
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.y;
}


// CustomLogic.CustomLogicVector3Builtin$$set_Y
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__set_Y (CustomLogic_CustomLogicVector3Builtin_o* __this, float value, const MethodInfo* method);
// 0x59df8f0

void CustomLogic_CustomLogicVector3Builtin__set_Y
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.y = value;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Z
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_Z (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59df900

float CustomLogic_CustomLogicVector3Builtin__get_Z
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.z;
}


// CustomLogic.CustomLogicVector3Builtin$$set_Z
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__set_Z (CustomLogic_CustomLogicVector3Builtin_o* __this, float value, const MethodInfo* method);
// 0x59df910

void CustomLogic_CustomLogicVector3Builtin__set_Z
               (CustomLogic_CustomLogicVector3Builtin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.z = value;
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Normalized
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Normalized (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59df920
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59df935: mov qword ptr [rsp + 8], 0
// asm:   0x59df93e: cmp byte ptr [rip + 0x1b5ede4], 0
// asm:   0x59df945: je 0x59dfacb
// asm:   0x59df9d9: jmp 0x59dfa35

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Normalized
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  undefined8 uVar8;
  float fVar6;
  float fVar7;
  float extraout_XMM0_Db;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72d = '\x01';
  }
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fVar6 = (__this->fields).Value.fields.x;
  uVar1 = (__this->fields).Value.fields.y;
  uVar3 = (__this->fields).Value.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar7 = (float)uVar3 * (float)uVar3;
  fVar6 = fVar7 + fVar6 * fVar6 + (float)uVar1 * (float)uVar1;
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
    fVar7 = extraout_XMM0_Db;
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  if (fVar6 <= 1e-05) {
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar6 = (pUVar5->zeroVector).fields.z;
    uVar8._0_4_ = (pUVar5->zeroVector).fields.x;
    uVar8._4_4_ = (pUVar5->zeroVector).fields.y;
  }
  else {
    uVar2 = (__this->fields).Value.fields.x;
    uVar4 = (__this->fields).Value.fields.y;
    auVar9._4_4_ = uVar4;
    auVar9._0_4_ = uVar2;
    auVar9._8_8_ = 0;
    auVar10._4_4_ = fVar6;
    auVar10._0_4_ = fVar6;
    auVar10._8_4_ = fVar7;
    auVar10._12_4_ = fVar7;
    auVar10 = divps(auVar9,auVar10);
    uVar8 = auVar10._0_8_;
    fVar6 = (__this->fields).Value.fields.z / fVar6;
  }
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Value.fields.x = (float)(int)uVar8;
  (__this_00->fields).Value.fields.y = (float)(int)((ulong)uVar8 >> 0x20);
  (__this_00->fields).Value.fields.z = fVar6;
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Magnitude
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_Magnitude (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59dfb90

float CustomLogic_CustomLogicVector3Builtin__get_Magnitude
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_0753e729 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e729 = '\x01';
  }
  fVar3 = (__this->fields).Value.fields.x;
  uVar1 = (__this->fields).Value.fields.y;
  uVar2 = (__this->fields).Value.fields.z;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar3 = (float)uVar2 * (float)uVar2 + fVar3 * fVar3 + (float)uVar1 * (float)uVar1;
  if (0.0 <= fVar3) {
    return SQRT(fVar3);
  }
  fVar3 = sqrtf(fVar3);
  return fVar3;
}


// CustomLogic.CustomLogicVector3Builtin$$get_SqrMagnitude
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__get_SqrMagnitude (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59dfc20

float CustomLogic_CustomLogicVector3Builtin__get_SqrMagnitude
                (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  fVar1 = (__this->fields).Value.fields.x;
  uVar2 = (__this->fields).Value.fields.y;
  uVar3 = (__this->fields).Value.fields.z;
  return (float)uVar3 * (float)uVar3 + fVar1 * fVar1 + (float)uVar2 * (float)uVar2;
}


// CustomLogic.CustomLogicVector3Builtin$$get_Zero
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__get_Zero (const MethodInfo* method);
// 0x59dfc40

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Zero(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b6 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->zeroVector).fields.x;
  fVar4 = (pUVar2->zeroVector).fields.y;
  fVar1 = (pUVar2->zeroVector).fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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
// 0x59dfd10

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_One(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_0753e4b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e4b7 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->oneVector).fields.x;
  fVar4 = (pUVar2->oneVector).fields.y;
  fVar1 = (pUVar2->oneVector).fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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
// 0x59dfde0

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Up(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_0753e72c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72c = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->upVector).fields.x;
  fVar4 = (pUVar2->upVector).fields.y;
  fVar1 = (pUVar2->upVector).fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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
// 0x59dfeb0

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Down(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_075450a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_075450a5 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->downVector).fields.x;
  fVar4 = (pUVar2->downVector).fields.y;
  fVar1 = (pUVar2->downVector).fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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
// 0x59dff80

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Left(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07545e29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07545e29 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->leftVector).fields.x;
  fVar4 = (pUVar2->leftVector).fields.y;
  fVar1 = (pUVar2->leftVector).fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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
// 0x59e0050

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Right(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07544d56 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07544d56 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->rightVector).fields.x;
  fVar4 = (pUVar2->rightVector).fields.y;
  fVar1 = (pUVar2->rightVector).fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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
// 0x59e0120

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_Forward(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_0753e72e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0753e72e = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->forwardVector).fields.x;
  fVar4 = (pUVar2->forwardVector).fields.y;
  fVar1 = (pUVar2->forwardVector).fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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
// 0x59e01f0

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicVector3Builtin__get_Back(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07545a60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07545a60 = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->backVector).fields.x;
  fVar4 = (pUVar2->backVector).fields.y;
  fVar1 = (pUVar2->backVector).fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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
// 0x59e02c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_NegativeInfinity(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07545e2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07545e2a = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->negativeInfinityVector).fields.x;
  fVar4 = (pUVar2->negativeInfinityVector).fields.y;
  fVar1 = (pUVar2->negativeInfinityVector).fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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
// 0x59e0390

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__get_PositiveInfinity(MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07545e2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07545e2b = '\x01';
  }
  pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
  fVar3 = (pUVar2->positiveInfinityVector).fields.x;
  fVar4 = (pUVar2->positiveInfinityVector).fields.y;
  fVar1 = (pUVar2->positiveInfinityVector).fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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
// 0x59e0460
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e0519: mulss xmm0, xmm3
// asm:   0x59e051d: xorps xmm3, xmm3
// asm:   0x59e0520: ucomiss xmm0, xmm3
// asm:   0x59e0523: jb 0x59e0578

float CustomLogic_CustomLogicVector3Builtin__Angle
                (CustomLogic_CustomLogicVector3Builtin_o *from,CustomLogic_CustomLogicVector3Builtin_o *to,
                MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  Il2CppClass *klass;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((from == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (to == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar2 = (from->fields).Value.fields.x;
  uVar4 = (from->fields).Value.fields.y;
  fVar8 = (from->fields).Value.fields.z;
  uVar3 = (to->fields).Value.fields.x;
  uVar5 = (to->fields).Value.fields.y;
  fVar1 = (to->fields).Value.fields.z;
  if (Il2CppMethodInitialized_075450a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_075450a4 = '\x01';
  }
  fVar7 = fVar8 * fVar8 + (float)uVar4 * (float)uVar4 + (float)uVar2 * (float)uVar2;
  fVar9 = fVar1 * fVar1 + (float)uVar5 * (float)uVar5 + (float)uVar3 * (float)uVar3;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  if (fVar7 * fVar9 < 0.0) {
    fVar7 = sqrtf(fVar7 * fVar9);
    klass = (Il2CppClass *)TypeInfo_System_Math;
  }
  else {
    fVar7 = SQRT(fVar7 * fVar9);
    klass = (Il2CppClass *)TypeInfo_System_Math;
  }
  if (1e-15 <= fVar7) {
    fVar7 = (fVar8 * fVar1 + (float)uVar4 * (float)uVar5 + (float)uVar2 * (float)uVar3) / fVar7;
    fVar8 = 1.0;
    if (fVar7 <= 1.0) {
      fVar8 = fVar7;
    }
    TypeInfo_System_Math = (System_Math_c *)klass;
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    dVar6 = acos((double)(float)(~-(uint)(-1.0 <= fVar7) & 0xbf800000 | (uint)fVar8 & -(uint)(-1.0 <= fVar7)),
                 (MethodInfo *)klass);
    return (float)dVar6 * 57.29578;
  }
  TypeInfo_System_Math = (System_Math_c *)klass;
  return 0.0;
}


// CustomLogic.CustomLogicVector3Builtin$$ClampMagnitude
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__ClampMagnitude (CustomLogic_CustomLogicVector3Builtin_o* vector, float maxLength, const MethodInfo* method);
// 0x59e0630

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__ClampMagnitude
          (CustomLogic_CustomLogicVector3Builtin_o *vector,float maxLength,MethodInfo *method)

{
  undefined1 auVar1 [16];
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar2;
  undefined1 auVar3 [16];
  float local_30;
  undefined8 local_18;
  
  if (vector == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_18._0_4_ = (vector->fields).Value.fields.x;
  local_18._4_4_ = (vector->fields).Value.fields.y;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_18;
  local_30 = (vector->fields).Value.fields.z;
  if (Il2CppMethodInitialized_0753e72a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e72a = '\x01';
  }
  fVar2 = local_30 * local_30 +
          (float)local_18._4_4_ * (float)local_18._4_4_ +
          (float)(undefined4)local_18 * (float)(undefined4)local_18;
  if (fVar2 <= maxLength * maxLength) goto label_059e073d;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (fVar2 < 0.0) goto label_059e0702;
label_059e06ce:
    fVar2 = SQRT(fVar2);
  }
  else {
    if (0.0 <= fVar2) goto label_059e06ce;
label_059e0702:
    fVar2 = sqrtf(fVar2);
  }
  auVar1._4_4_ = fVar2;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar2;
  auVar1._12_4_ = fVar2;
  auVar3 = divps(auVar3,auVar1);
  local_30 = (local_30 / fVar2) * maxLength;
  local_18 = CONCAT44(auVar3._4_4_ * maxLength,auVar3._0_4_ * maxLength);
label_059e073d:
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(undefined4)local_18;
  (__this->fields).Value.fields.y = (float)local_18._4_4_;
  (__this->fields).Value.fields.z = local_30;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$Cross
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Cross (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x59e07d0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Cross
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  undefined8 local_58;
  float local_28;
  float fStack_24;
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar3 = (a->fields).Value.fields.x;
  uVar5 = (a->fields).Value.fields.y;
  uVar4 = (b->fields).Value.fields.x;
  uVar6 = (b->fields).Value.fields.y;
  fVar1 = (a->fields).Value.fields.z;
  fVar2 = (b->fields).Value.fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar2 * (float)uVar5 - (float)uVar6 * fVar1;
  (__this->fields).Value.fields.y = fVar1 * (float)uVar4 - (float)uVar3 * fVar2;
  (__this->fields).Value.fields.z = (float)uVar6 * (float)uVar3 - (float)uVar5 * (float)uVar4;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$Distance
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__Distance (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x59e0900

float CustomLogic_CustomLogicVector3Builtin__Distance
                (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
                MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint32_t uVar6;
  float fVar7;
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar2 = (a->fields).Value.fields.x;
  uVar4 = (a->fields).Value.fields.y;
  fVar7 = (a->fields).Value.fields.z;
  uVar3 = (b->fields).Value.fields.x;
  uVar5 = (b->fields).Value.fields.y;
  fVar1 = (b->fields).Value.fields.z;
  if (Il2CppMethodInitialized_0753e7b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7b7 = '\x01';
    uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar6 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar6 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar7 = fVar7 - fVar1;
  fVar7 = ((float)uVar4 - (float)uVar5) * ((float)uVar4 - (float)uVar5) +
          ((float)uVar2 - (float)uVar3) * ((float)uVar2 - (float)uVar3) + fVar7 * fVar7;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
    return fVar7;
  }
  return SQRT(fVar7);
}


// CustomLogic.CustomLogicVector3Builtin$$Dot
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__Dot (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x59e0a10

float CustomLogic_CustomLogicVector3Builtin__Dot
                (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
                MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar1 = (a->fields).Value.fields.x;
  uVar3 = (a->fields).Value.fields.y;
  uVar2 = (b->fields).Value.fields.x;
  uVar4 = (b->fields).Value.fields.y;
  return (a->fields).Value.fields.z * (b->fields).Value.fields.z +
         (float)uVar4 * (float)uVar3 + (float)uVar2 * (float)uVar1;
}


// CustomLogic.CustomLogicVector3Builtin$$Lerp
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Lerp (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x59e0a50

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Lerp
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,float t,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar7;
  float local_28;
  float fStack_24;
  float local_18;
  float fStack_14;
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar1 = (a->fields).Value.fields.z;
  uVar3 = (a->fields).Value.fields.x;
  uVar5 = (a->fields).Value.fields.y;
  uVar4 = (b->fields).Value.fields.x;
  uVar6 = (b->fields).Value.fields.y;
  fVar2 = (b->fields).Value.fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  fVar7 = 1.0;
  if (t <= 1.0) {
    fVar7 = t;
  }
  fVar7 = (float)(-(uint)(0.0 <= t) & (uint)fVar7);
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar7 * ((float)uVar4 - (float)uVar3) + (float)uVar3;
  (__this->fields).Value.fields.y = fVar7 * ((float)uVar6 - (float)uVar5) + (float)uVar5;
  (__this->fields).Value.fields.z = (fVar2 - fVar1) * fVar7 + fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$LerpUnclamped
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__LerpUnclamped (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x59e0b80

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__LerpUnclamped
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,float t,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float local_28;
  float fStack_24;
  float local_18;
  float fStack_14;
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar1 = (a->fields).Value.fields.z;
  uVar3 = (a->fields).Value.fields.x;
  uVar5 = (a->fields).Value.fields.y;
  uVar4 = (b->fields).Value.fields.x;
  uVar6 = (b->fields).Value.fields.y;
  fVar2 = (b->fields).Value.fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = t * ((float)uVar4 - (float)uVar3) + (float)uVar3;
  (__this->fields).Value.fields.y = t * ((float)uVar6 - (float)uVar5) + (float)uVar5;
  (__this->fields).Value.fields.z = (fVar2 - fVar1) * t + fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$Max
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Max (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x59e0ca0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Max
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  undefined1 auVar7 [16];
  undefined1 local_28 [16];
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar1 = (a->fields).Value.fields.z;
  uVar3 = (a->fields).Value.fields.x;
  uVar5 = (a->fields).Value.fields.y;
  local_28._4_4_ = uVar5;
  local_28._0_4_ = uVar3;
  local_28._8_8_ = 0;
  uVar4 = (b->fields).Value.fields.x;
  uVar6 = (b->fields).Value.fields.y;
  auVar7._4_4_ = uVar6;
  auVar7._0_4_ = uVar4;
  fVar2 = (b->fields).Value.fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  if (fVar1 <= fVar2) {
    fVar1 = fVar2;
  }
  auVar7._8_8_ = 0;
  auVar7 = maxps(local_28,auVar7);
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  local_28._0_4_ = auVar7._0_4_;
  local_28._4_4_ = auVar7._4_4_;
  (__this->fields).Value.fields.x = (float)local_28._0_4_;
  (__this->fields).Value.fields.y = (float)local_28._4_4_;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$Min
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Min (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x59e0d90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Min
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  undefined1 auVar7 [16];
  undefined1 auStack_28 [16];
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar1 = (a->fields).Value.fields.z;
  uVar3 = (a->fields).Value.fields.x;
  uVar5 = (a->fields).Value.fields.y;
  auStack_28._4_4_ = uVar5;
  auStack_28._0_4_ = uVar3;
  auStack_28._8_8_ = 0;
  uVar4 = (b->fields).Value.fields.x;
  uVar6 = (b->fields).Value.fields.y;
  auVar7._4_4_ = uVar6;
  auVar7._0_4_ = uVar4;
  fVar2 = (b->fields).Value.fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  if (fVar2 <= fVar1) {
    fVar1 = fVar2;
  }
  auVar7._8_8_ = 0;
  auVar7 = minps(auStack_28,auVar7);
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  auStack_28._0_4_ = auVar7._0_4_;
  auStack_28._4_4_ = auVar7._4_4_;
  (__this->fields).Value.fields.x = (float)auStack_28._0_4_;
  (__this->fields).Value.fields.y = (float)auStack_28._4_4_;
  (__this->fields).Value.fields.z = fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$MoveTowards
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__MoveTowards (CustomLogic_CustomLogicVector3Builtin_o* current, CustomLogic_CustomLogicVector3Builtin_o* target, float maxDistanceDelta, const MethodInfo* method);
// 0x59e0e80

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__MoveTowards
          (CustomLogic_CustomLogicVector3Builtin_o *current,CustomLogic_CustomLogicVector3Builtin_o *target,
          float maxDistanceDelta,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auVar6 [16];
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined8 uStack_48;
  
  if ((current == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (target == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar2 = (current->fields).Value.fields.x;
  uVar4 = (current->fields).Value.fields.y;
  fVar1 = (current->fields).Value.fields.z;
  fVar3 = (target->fields).Value.fields.x;
  fVar5 = (target->fields).Value.fields.y;
  fVar9 = (target->fields).Value.fields.z;
  if (Il2CppMethodInitialized_07544d8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07544d8b = '\x01';
  }
  auVar8._0_4_ = fVar3 - (float)uVar2;
  auVar8._4_4_ = fVar5 - (float)uVar4;
  auVar8._8_8_ = 0;
  fVar10 = fVar9 - fVar1;
  fVar7 = fVar10 * fVar10 + auVar8._4_4_ * auVar8._4_4_ + auVar8._0_4_ * auVar8._0_4_;
  if (((fVar7 == 0.0) && (!NAN(fVar7))) ||
     ((0.0 <= maxDistanceDelta && (fVar7 <= maxDistanceDelta * maxDistanceDelta)))) goto label_059e1027;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (fVar7 < 0.0) goto label_059e0fc5;
label_059e0f6b:
    fVar7 = SQRT(fVar7);
  }
  else {
    if (0.0 <= fVar7) goto label_059e0f6b;
label_059e0fc5:
    fVar7 = sqrtf(fVar7);
  }
  auVar6._4_4_ = fVar7;
  auVar6._0_4_ = fVar7;
  auVar6._8_4_ = fVar7;
  auVar6._12_4_ = fVar7;
  auVar8 = divps(auVar8,auVar6);
  fVar3 = (float)uVar2 + maxDistanceDelta * auVar8._0_4_;
  fVar5 = (float)uVar4 + maxDistanceDelta * auVar8._4_4_;
  fVar9 = fVar1 + (fVar10 / fVar7) * maxDistanceDelta;
label_059e1027:
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar3;
  (__this->fields).Value.fields.y = fVar5;
  (__this->fields).Value.fields.z = fVar9;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$Normalize
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Normalize (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x59e10c0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e10f0: mov qword ptr [rsp + 8], 0
// asm:   0x59e10f9: cmp byte ptr [rip + 0x1b5d629], 0
// asm:   0x59e1100: je 0x59e1271
// asm:   0x59e1181: jmp 0x59e11db

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Normalize
          (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint32_t uVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  undefined1 auVar7 [16];
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Db;
  float fVar10;
  undefined1 auVar11 [16];
  float fStack_18;
  float fStack_14;
  
  if (value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uVar1 = (value->fields).Value.fields.x;
  uVar3 = (value->fields).Value.fields.y;
  auVar11._4_4_ = uVar3;
  auVar11._0_4_ = uVar1;
  fVar10 = (value->fields).Value.fields.z;
  if (Il2CppMethodInitialized_07545e2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_07545e2c = '\x01';
  }
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
  uVar9 = 0;
  fVar8 = fVar10 * fVar10 + (float)uVar3 * (float)uVar3 + (float)uVar1 * (float)uVar1;
  if (fVar8 < 0.0) {
    fVar8 = sqrtf(fVar8);
    uVar9 = extraout_XMM0_Db;
  }
  else {
    fVar8 = SQRT(fVar8);
  }
  if (fVar8 <= 1e-05) {
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar10 = (pUVar6->zeroVector).fields.z;
    uVar2 = (pUVar6->zeroVector).fields.x;
    uVar4 = (pUVar6->zeroVector).fields.y;
    fStack_18 = (float)uVar2;
    fStack_14 = (float)uVar4;
  }
  else {
    fVar10 = fVar10 / fVar8;
    auVar11._8_8_ = 0;
    auVar7._4_4_ = fVar8;
    auVar7._0_4_ = fVar8;
    auVar7._8_4_ = uVar9;
    auVar7._12_4_ = uVar9;
    auVar11 = divps(auVar11,auVar7);
    fStack_18 = auVar11._0_4_;
    fStack_14 = auVar11._4_4_;
  }
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fStack_18;
  (__this->fields).Value.fields.y = fStack_14;
  (__this->fields).Value.fields.z = fVar10;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$OrthoNormalize
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__OrthoNormalize (CustomLogic_CustomLogicVector3Builtin_o* normal, CustomLogic_CustomLogicVector3Builtin_o* tangent, const MethodInfo* method);
// 0x59e12b0

void CustomLogic_CustomLogicVector3Builtin__OrthoNormalize
               (CustomLogic_CustomLogicVector3Builtin_o *normal,
               CustomLogic_CustomLogicVector3Builtin_o *tangent,MethodInfo *method)

{
  if ((normal == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (tangent == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UnityEngine_Vector3__OrthoNormalize(&(normal->fields).Value,&(tangent->fields).Value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVector3Builtin$$Project
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Project (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x59e12d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e13c1: jmp 0x59e140f

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Project
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_Vector3_StaticFields *pUVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar7;
  float fVar8;
  undefined8 uStack_38;
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar2 = (a->fields).Value.fields.x;
  uVar4 = (a->fields).Value.fields.y;
  fVar1 = (a->fields).Value.fields.z;
  uVar3 = (b->fields).Value.fields.x;
  uVar5 = (b->fields).Value.fields.y;
  fVar8 = (b->fields).Value.fields.z;
  if (Il2CppMethodInitialized_0753e81c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_0753e81c = '\x01';
  }
  fVar7 = fVar8 * fVar8 + (float)uVar5 * (float)uVar5 + (float)uVar3 * (float)uVar3;
  if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar7) {
    fVar7 = (fVar1 * fVar8 + (float)uVar4 * (float)uVar5 + (float)uVar2 * (float)uVar3) / fVar7;
    fVar8 = fVar8 * fVar7;
    uStack_38 = CONCAT44(fVar7 * (float)uVar5,fVar7 * (float)uVar3);
  }
  else {
    if (Il2CppMethodInitialized_0753e4b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e4b6 = '\x01';
    }
    pUVar6 = TypeInfo_UnityEngine_Vector3->static_fields;
    uStack_38._0_4_ = (pUVar6->zeroVector).fields.x;
    uStack_38._4_4_ = (pUVar6->zeroVector).fields.y;
    fVar8 = (pUVar6->zeroVector).fields.z;
  }
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)uStack_38;
  (__this->fields).Value.fields.y = (float)(int)((ulong)uStack_38 >> 0x20);
  (__this->fields).Value.fields.z = fVar8;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$ProjectOnPlane
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__ProjectOnPlane (CustomLogic_CustomLogicVector3Builtin_o* vector, CustomLogic_CustomLogicVector3Builtin_o* plane, const MethodInfo* method);
// 0x59e1490
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e1539: movaps xmmword ptr [rsp + 0x10], xmm4
// asm:   0x59e153e: movss dword ptr [rsp + 8], xmm3
// asm:   0x59e1544: cmp byte ptr [rip + 0x1b647b1], 0
// asm:   0x59e154b: je 0x59e1595
// asm:   0x59e154d: jmp 0x59e15a8

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__ProjectOnPlane
          (CustomLogic_CustomLogicVector3Builtin_o *vector,CustomLogic_CustomLogicVector3Builtin_o *plane,
          MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar4;
  float fVar5;
  undefined8 local_28;
  
  if ((vector == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (plane == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_28._0_4_ = (vector->fields).Value.fields.x;
  local_28._4_4_ = (vector->fields).Value.fields.y;
  fVar5 = (vector->fields).Value.fields.z;
  uVar2 = (plane->fields).Value.fields.x;
  uVar3 = (plane->fields).Value.fields.y;
  fVar1 = (plane->fields).Value.fields.z;
  if (Il2CppMethodInitialized_07545e2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_07545e2d = '\x01';
  }
  fVar4 = fVar1 * fVar1 + (float)uVar3 * (float)uVar3 + (float)uVar2 * (float)uVar2;
  if (TypeInfo_UnityEngine_Mathf->static_fields->Epsilon <= fVar4) {
    fVar4 = (fVar5 * fVar1 + (float)local_28._4_4_ * (float)uVar3 + (float)(undefined4)local_28 * (float)uVar2
            ) / fVar4;
    local_28 = CONCAT44((float)local_28._4_4_ - fVar4 * (float)uVar3,
                        (float)(undefined4)local_28 - fVar4 * (float)uVar2);
    fVar5 = fVar5 - fVar1 * fVar4;
  }
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)(int)local_28;
  (__this->fields).Value.fields.y = (float)(int)((ulong)local_28 >> 0x20);
  (__this->fields).Value.fields.z = fVar5;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$Reflect
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Reflect (CustomLogic_CustomLogicVector3Builtin_o* inDirection, CustomLogic_CustomLogicVector3Builtin_o* inNormal, const MethodInfo* method);
// 0x59e1620

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Reflect
          (CustomLogic_CustomLogicVector3Builtin_o *inDirection,
          CustomLogic_CustomLogicVector3Builtin_o *inNormal,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar7;
  undefined8 local_38;
  float local_18;
  float fStack_14;
  
  if ((inDirection == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (inNormal == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar1 = (inDirection->fields).Value.fields.z;
  uVar3 = (inDirection->fields).Value.fields.x;
  uVar5 = (inDirection->fields).Value.fields.y;
  uVar4 = (inNormal->fields).Value.fields.x;
  uVar6 = (inNormal->fields).Value.fields.y;
  fVar2 = (inNormal->fields).Value.fields.z;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  fVar7 = ((float)uVar5 * (float)uVar6 + (float)uVar3 * (float)uVar4 + fVar1 * fVar2) * -2.0;
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = fVar7 * (float)uVar4 + (float)uVar3;
  (__this->fields).Value.fields.y = fVar7 * (float)uVar6 + (float)uVar5;
  (__this->fields).Value.fields.z = fVar7 * fVar2 + fVar1;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$RotateTowards
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__RotateTowards (CustomLogic_CustomLogicVector3Builtin_o* current, CustomLogic_CustomLogicVector3Builtin_o* target, float maxRadiansDelta, float maxMagnitudeDelta, const MethodInfo* method);
// 0x59e1750

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__RotateTowards
          (CustomLogic_CustomLogicVector3Builtin_o *current,CustomLogic_CustomLogicVector3Builtin_o *target,
          float maxRadiansDelta,float maxMagnitudeDelta,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28;
  undefined1 local_18 [16];
  
  if ((current == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (target == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_28.z = (current->fields).Value.fields.z;
  local_28.x = (current->fields).Value.fields.x;
  local_28.y = (current->fields).Value.fields.y;
  local_38.x = (target->fields).Value.fields.x;
  local_38.y = (target->fields).Value.fields.y;
  local_38.z = (target->fields).Value.fields.z;
  UVar1 = UnityEngine_Vector3__Internal_RotateTowards
                    ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,maxRadiansDelta,
                     maxMagnitudeDelta,(MethodInfo *)0x0);
  local_18._8_4_ = extraout_XMM0_Dc;
  local_18._0_8_ = UVar1.fields._0_8_;
  local_18._12_4_ = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)local_18._0_4_;
  (__this->fields).Value.fields.y = (float)local_18._4_4_;
  (__this->fields).Value.fields.z = UVar1.fields.z;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$SignedAngle
// il2cpp: float CustomLogic_CustomLogicVector3Builtin__SignedAngle (CustomLogic_CustomLogicVector3Builtin_o* from, CustomLogic_CustomLogicVector3Builtin_o* to, CustomLogic_CustomLogicVector3Builtin_o* axis, const MethodInfo* method);
// 0x59e1840

float CustomLogic_CustomLogicVector3Builtin__SignedAngle
                (CustomLogic_CustomLogicVector3Builtin_o *from,CustomLogic_CustomLogicVector3Builtin_o *to,
                CustomLogic_CustomLogicVector3Builtin_o *axis,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (((from == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
      (to == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
     (axis == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar1._0_4_ = (from->fields).Value.fields.x;
  uVar1._4_4_ = (from->fields).Value.fields.y;
  uVar2._0_4_ = (to->fields).Value.fields.x;
  uVar2._4_4_ = (to->fields).Value.fields.y;
  uVar3._0_4_ = (axis->fields).Value.fields.x;
  uVar3._4_4_ = (axis->fields).Value.fields.y;
  fVar4 = (float)il2cpp_runtime_helper_059fb780(uVar1,(from->fields).Value.fields.z,uVar2,(to->fields).Value.fields.z,uVar3,
                              (axis->fields).Value.fields.z,0);
  return fVar4;
}


// CustomLogic.CustomLogicVector3Builtin$$Slerp
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Slerp (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x59e1880

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Slerp
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,float t,
          MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28;
  undefined1 local_18 [16];
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_28.z = (a->fields).Value.fields.z;
  local_28.x = (a->fields).Value.fields.x;
  local_28.y = (a->fields).Value.fields.y;
  local_38.x = (b->fields).Value.fields.x;
  local_38.y = (b->fields).Value.fields.y;
  local_38.z = (b->fields).Value.fields.z;
  UVar1 = UnityEngine_Vector3__Internal_Slerp
                    ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,t,(MethodInfo *)0x0
                    );
  local_18._8_4_ = extraout_XMM0_Dc;
  local_18._0_8_ = UVar1.fields._0_8_;
  local_18._12_4_ = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)local_18._0_4_;
  (__this->fields).Value.fields.y = (float)local_18._4_4_;
  (__this->fields).Value.fields.z = UVar1.fields.z;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$SlerpUnclamped
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__SlerpUnclamped (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, float t, const MethodInfo* method);
// 0x59e1970

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__SlerpUnclamped
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,float t,
          MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Vector3_Fields local_28;
  undefined1 local_18 [16];
  
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_28.z = (a->fields).Value.fields.z;
  local_28.x = (a->fields).Value.fields.x;
  local_28.y = (a->fields).Value.fields.y;
  local_38.x = (b->fields).Value.fields.x;
  local_38.y = (b->fields).Value.fields.y;
  local_38.z = (b->fields).Value.fields.z;
  UVar1 = UnityEngine_Vector3__Internal_SlerpUnclamped
                    ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_38,t,(MethodInfo *)0x0
                    );
  local_18._8_4_ = extraout_XMM0_Dc;
  local_18._0_8_ = UVar1.fields._0_8_;
  local_18._12_4_ = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = (float)local_18._0_4_;
  (__this->fields).Value.fields.y = (float)local_18._4_4_;
  (__this->fields).Value.fields.z = UVar1.fields.z;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$SmoothDamp
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__SmoothDamp (CustomLogic_CustomLogicVector3Builtin_o* current, CustomLogic_CustomLogicVector3Builtin_o* target, CustomLogic_CustomLogicVector3Builtin_o* currentVelocity, float smoothTime, float maxSpeed, const MethodInfo* method);
// 0x59e1a60

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__SmoothDamp
          (CustomLogic_CustomLogicVector3Builtin_o *current,CustomLogic_CustomLogicVector3Builtin_o *target,
          CustomLogic_CustomLogicVector3Builtin_o *currentVelocity,float smoothTime,float maxSpeed,
          MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float deltaTime;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_Fields local_18;
  
  if ((current != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (target != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    if (currentVelocity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      local_18.x = (current->fields).Value.fields.x;
      local_18.y = (current->fields).Value.fields.y;
      local_18.z = (current->fields).Value.fields.z;
      local_28.z = (target->fields).Value.fields.z;
      local_28.x = (target->fields).Value.fields.x;
      local_28.y = (target->fields).Value.fields.y;
      deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UVar1 = UnityEngine_Vector3__SmoothDamp_6902f70
                        ((UnityEngine_Vector3_o *)&local_18,(UnityEngine_Vector3_o *)&local_28,
                         &(currentVelocity->fields).Value,smoothTime,maxSpeed,deltaTime,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07545cfc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        Il2CppMethodInitialized_07545cfc = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      if (Il2CppMethodInitialized_07545cf1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545cf1 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields).Value.fields.x = UVar1.fields.x;
      (__this->fields).Value.fields.y = UVar1.fields.y;
      (__this->fields).Value.fields.z = UVar1.fields.z;
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$Set
// il2cpp: void CustomLogic_CustomLogicVector3Builtin__Set (CustomLogic_CustomLogicVector3Builtin_o* __this, float x, float y, float z, const MethodInfo* method);
// 0x59e1b90

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
// 0x59e1ba0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Scale
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *scale,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint32_t uVar4;
  CustomLogic_CustomLogicVector3Builtin_c *klass;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  int *piVar5;
  float *pfVar6;
  Il2CppClass *pIVar7;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_48;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07545cf2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cf2 = '\x01';
  }
  klass = TypeInfo_CustomLogic_CustomLogicVector3Builtin;
  if (scale == (Il2CppObject *)0x0) {
label_059e1d5b:
    pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar7);
    message = il2cpp_codegen_get_runtime_metadata(&"Parameter must be a float or a Vector3.");
    System_Exception___ctor_54fa440(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin_Scale);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  pIVar7 = scale->klass;
  if (pIVar7 == g_data_07556710) {
    piVar5 = il2cpp_vm_Object_Unbox(scale);
    fVar8 = (float)*piVar5;
    local_48._0_4_ = (__this->fields).Value.fields.x;
    local_48._4_4_ = (__this->fields).Value.fields.y;
    local_38 = CONCAT44(fVar8,fVar8);
  }
  else {
    if (pIVar7 != g_data_07556740) {
      bVar3 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if (((pIVar7->_2).typeHierarchyDepth < bVar3) ||
         ((pIVar7->_2).typeHierarchy[(ulong)bVar3 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) goto label_059e1d5b;
      fVar8 = *(float *)&scale[3].monitor;
      uVar1 = (__this->fields).Value.fields.x;
      uVar2 = (__this->fields).Value.fields.y;
      fVar9 = (float)uVar1 * SUB84(scale[3].klass,0);
      fVar10 = (float)uVar2 * (float)((ulong)scale[3].klass >> 0x20);
      local_48 = CONCAT44(fVar10,fVar9);
      (__this->fields).Value.fields.x = fVar9;
      (__this->fields).Value.fields.y = fVar10;
      fVar8 = fVar8 * (__this->fields).Value.fields.z;
      (__this->fields).Value.fields.z = fVar8;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)klass);
      if (Il2CppMethodInitialized_07545cf1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545cf1 = '\x01';
      }
      uVar4 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
      goto joined_r0x059e1d4b;
    }
    pfVar6 = il2cpp_vm_Object_Unbox(scale);
    fVar8 = *pfVar6;
    local_38._0_4_ = (__this->fields).Value.fields.x;
    local_38._4_4_ = (__this->fields).Value.fields.y;
    local_48 = CONCAT44(fVar8,fVar8);
  }
  fVar8 = fVar8 * (__this->fields).Value.fields.z;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  local_48 = CONCAT44(local_48._4_4_ * local_38._4_4_,(float)local_48 * (float)local_38);
  uVar4 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
joined_r0x059e1d4b:
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Value.fields.x = (float)(int)local_48;
  (__this_00->fields).Value.fields.y = (float)(int)((ulong)local_48 >> 0x20);
  (__this_00->fields).Value.fields.z = fVar8;
  return __this_00;
}


// CustomLogic.CustomLogicVector3Builtin$$Multiply
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Multiply (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x59e1db0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Multiply
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  UnityEngine_Vector3_Fields b_00;
  UnityEngine_Vector3_Fields a_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o UVar1;
  
  if (Il2CppMethodInitialized_07545cf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545cf3 = '\x01';
  }
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  a_00 = (a->fields).Value.fields;
  b_00 = (b->fields).Value.fields;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  UVar1 = Utility_Util__MultiplyVectors
                    ((UnityEngine_Vector3_o)a_00,(UnityEngine_Vector3_o)b_00,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = UVar1.fields.x;
  (__this->fields).Value.fields.y = UVar1.fields.y;
  (__this->fields).Value.fields.z = UVar1.fields.z;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$Divide
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__Divide (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x59e1ee0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__Divide
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  UnityEngine_Vector3_Fields b_00;
  UnityEngine_Vector3_Fields a_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o UVar1;
  
  if (Il2CppMethodInitialized_07545cf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545cf4 = '\x01';
  }
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  a_00 = (a->fields).Value.fields;
  b_00 = (b->fields).Value.fields;
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  UVar1 = Utility_Util__DivideVectors
                    ((UnityEngine_Vector3_o)a_00,(UnityEngine_Vector3_o)b_00,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = UVar1.fields.x;
  (__this->fields).Value.fields.y = UVar1.fields.y;
  (__this->fields).Value.fields.z = UVar1.fields.z;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$GetRotationDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__GetRotationDirection (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x59e2010

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__GetRotationDirection
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_Fields UStack_38;
  undefined1 auStack_28 [16];
  
  if (Il2CppMethodInitialized_07545cf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cf5 = '\x01';
  }
  if (a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar1 = (a->fields).Value.fields.x;
    uVar2 = (a->fields).Value.fields.y;
    UStack_38.z = (a->fields).Value.fields.z * 0.017453292;
    UStack_38.y = (float)uVar2 * 0.017453292;
    UStack_38.x = (float)uVar1 * 0.017453292;
    rotation = UnityEngine_Quaternion__Internal_FromEulerRad
                         ((UnityEngine_Vector3_o *)&UStack_38,(MethodInfo *)0x0);
    if (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      UVar3 = UnityEngine_Quaternion__op_Multiply_6905700
                        (rotation,(UnityEngine_Vector3_o)(b->fields).Value.fields,(MethodInfo *)0x0);
      auStack_28._8_4_ = extraout_XMM0_Dc;
      auStack_28._0_8_ = UVar3.fields._0_8_;
      auStack_28._12_4_ = extraout_XMM0_Dd;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      if (Il2CppMethodInitialized_07545cf1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545cf1 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields).Value.fields.x = (float)auStack_28._0_4_;
      (__this->fields).Value.fields.y = (float)auStack_28._4_4_;
      (__this->fields).Value.fields.z = UVar3.fields.z;
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector3Builtin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicVector3Builtin__ToString (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59e2110

System_String_o *
CustomLogic_CustomLogicVector3Builtin__ToString
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_03296cc0(&(__this->fields).Value,0,0,0);
  return pSVar1;
}


// CustomLogic.CustomLogicVector3Builtin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Copy__ (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59e2120

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Copy__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  
  if (Il2CppMethodInitialized_07545cf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cf6 = '\x01';
  }
  fVar2 = (__this->fields).Value.fields.x;
  fVar3 = (__this->fields).Value.fields.y;
  fVar1 = (__this->fields).Value.fields.z;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
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
// 0x59e21d0

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
  undefined8 uStack_38;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545cf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cf7 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar5 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if ((((bVar5 <= (self->klass->_2).typeHierarchyDepth) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar5 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) &&
       ((bVar5 <= (other->klass->_2).typeHierarchyDepth &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar5 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)))) {
      pIVar3 = self[3].klass;
      fVar1 = *(float *)&self[3].monitor;
      pIVar4 = other[3].klass;
      fVar2 = *(float *)&other[3].monitor;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      if (Il2CppMethodInitialized_07545cf1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545cf1 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      uStack_38._0_4_ = SUB84(pIVar3,0);
      uStack_38._4_4_ = (float)((ulong)pIVar3 >> 0x20);
      fStack_28 = SUB84(pIVar4,0);
      fStack_24 = (float)((ulong)pIVar4 >> 0x20);
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).Value.fields.x = (float)uStack_38 + fStack_28;
      (__this_00->fields).Value.fields.y = uStack_38._4_4_ + fStack_24;
      (__this_00->fields).Value.fields.z = fVar1 + fVar2;
      return (Il2CppObject *)__this_00;
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
// 0x59e2350

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
  undefined8 uStack_38;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545cf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cf8 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar5 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if ((((bVar5 <= (self->klass->_2).typeHierarchyDepth) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar5 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) &&
       ((bVar5 <= (other->klass->_2).typeHierarchyDepth &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar5 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)))) {
      pIVar3 = self[3].klass;
      fVar1 = *(float *)&self[3].monitor;
      pIVar4 = other[3].klass;
      fVar2 = *(float *)&other[3].monitor;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      if (Il2CppMethodInitialized_07545cf1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545cf1 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      uStack_38._0_4_ = SUB84(pIVar3,0);
      uStack_38._4_4_ = (float)((ulong)pIVar3 >> 0x20);
      fStack_28 = SUB84(pIVar4,0);
      fStack_24 = (float)((ulong)pIVar4 >> 0x20);
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields).Value.fields.x = (float)uStack_38 - fStack_28;
      (__this_00->fields).Value.fields.y = uStack_38._4_4_ - fStack_24;
      (__this_00->fields).Value.fields.z = fVar1 - fVar2;
      return (Il2CppObject *)__this_00;
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
// 0x59e24d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59e27c9: jmp 0x59e2632

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Mul__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  UnityEngine_Vector3_Fields b;
  UnityEngine_Vector3_Fields a;
  int *piVar3;
  float *pfVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  if (Il2CppMethodInitialized_07545cf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545cf9 = '\x01';
  }
  if (self == (Il2CppObject *)0x0) goto label_059e27ce;
  pIVar2 = self->klass;
  bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
  if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
    if (pIVar2 == g_data_07556740) {
      pfVar4 = il2cpp_vm_Object_Unbox(self);
      if (other == (Il2CppObject *)0x0) goto label_059e27ce;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if (((other->klass->_2).typeHierarchyDepth < bVar1) ||
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) goto label_059e27ce;
      fVar5 = *pfVar4;
      uStack_48 = other[3].klass;
      uStack_58 = (Il2CppClass *)CONCAT44(fVar5,fVar5);
    }
    else {
      if ((pIVar2 != g_data_07556710) || (piVar3 = il2cpp_vm_Object_Unbox(self), other == (Il2CppObject *)0x0)) {
label_059e27ce:
        operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
        ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Mul);
        il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
      }
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
      if (((other->klass->_2).typeHierarchyDepth < bVar1) ||
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) goto label_059e27ce;
      uStack_58 = other[3].klass;
      fVar5 = (float)*piVar3;
      uStack_48 = (Il2CppClass *)CONCAT44(fVar5,fVar5);
    }
    fVar5 = fVar5 * *(float *)&other[3].monitor;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  }
  else {
    if (other == (Il2CppObject *)0x0) goto label_059e27ce;
    pIVar2 = other->klass;
    if (pIVar2 == g_data_07556740) {
      pfVar4 = il2cpp_vm_Object_Unbox(other);
      fVar5 = *pfVar4;
      uStack_48 = self[3].klass;
      uStack_58 = (Il2CppClass *)CONCAT44(fVar5,fVar5);
    }
    else {
      if (pIVar2 != g_data_07556710) {
        if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) goto label_059e27ce;
        a = *(UnityEngine_Vector3_Fields *)(self + 3);
        b = *(UnityEngine_Vector3_Fields *)(other + 3);
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        UVar6 = Utility_Util__MultiplyVectors
                          ((UnityEngine_Vector3_o)a,(UnityEngine_Vector3_o)b,(MethodInfo *)0x0);
        fVar5 = UVar6.fields.z;
        uStack_58 = UVar6.fields._0_8_;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        if (Il2CppMethodInitialized_07545cf1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_07545cf1 = '\x01';
        }
        goto label_059e263f;
      }
      piVar3 = il2cpp_vm_Object_Unbox(other);
      uStack_58 = self[3].klass;
      fVar5 = (float)*piVar3;
      uStack_48 = (Il2CppClass *)CONCAT44(fVar5,fVar5);
    }
    fVar5 = fVar5 * *(float *)&self[3].monitor;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  }
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  uStack_58._4_4_ = (float)((ulong)uStack_58 >> 0x20);
  uStack_48._4_4_ = (float)((ulong)uStack_48 >> 0x20);
  uStack_58 = (Il2CppClass *)CONCAT44(uStack_58._4_4_ * uStack_48._4_4_,(float)uStack_58 * (float)uStack_48);
label_059e263f:
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Value.fields.x = (float)uStack_58;
  (__this_00->fields).Value.fields.y = uStack_58._4_4_;
  (__this_00->fields).Value.fields.z = fVar5;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Div__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59e2810

Il2CppObject *
CustomLogic_CustomLogicVector3Builtin____Div__
          (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  float fVar1;
  byte bVar2;
  uint32_t uVar3;
  Il2CppClass *pIVar4;
  UnityEngine_Vector3_Fields b;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  float *pfVar5;
  int *piVar6;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  undefined1 auVar7 [16];
  float fVar8;
  UnityEngine_Vector3_Fields UVar9;
  undefined1 auStack_48 [16];
  
  if (Il2CppMethodInitialized_07545cfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545cfa = '\x01';
  }
  if (self == (Il2CppObject *)0x0) {
label_059e2a4c:
    operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
    ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector3Builtin___Div);
    il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
  }
  bVar2 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
  if ((((self->klass->_2).typeHierarchyDepth < bVar2) ||
      ((self->klass->_2).typeHierarchy[(ulong)bVar2 - 1] !=
       (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) || (other == (Il2CppObject *)0x0))
  goto label_059e2a4c;
  pIVar4 = other->klass;
  if (pIVar4 == g_data_07556740) {
    pfVar5 = il2cpp_vm_Object_Unbox(other);
    fVar8 = *pfVar5;
    auStack_48._0_8_ = self[3].klass;
  }
  else {
    if (pIVar4 != g_data_07556710) {
      if (((pIVar4->_2).typeHierarchyDepth < bVar2) ||
         ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) goto label_059e2a4c;
      UVar9 = *(UnityEngine_Vector3_Fields *)(self + 3);
      b = *(UnityEngine_Vector3_Fields *)(other + 3);
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      UVar9 = (UnityEngine_Vector3_Fields)
              Utility_Util__DivideVectors
                        ((UnityEngine_Vector3_o)UVar9,(UnityEngine_Vector3_o)b,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      if (Il2CppMethodInitialized_07545cf1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545cf1 = '\x01';
      }
      uVar3 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
      goto joined_r0x059e2a3c;
    }
    piVar6 = il2cpp_vm_Object_Unbox(other);
    auStack_48._0_8_ = self[3].klass;
    fVar8 = (float)*piVar6;
  }
  auStack_48._8_8_ = 0;
  fVar1 = *(float *)&self[3].monitor;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  auVar7._4_4_ = fVar8;
  auVar7._0_4_ = fVar8;
  auVar7._8_4_ = fVar8;
  auVar7._12_4_ = fVar8;
  auVar7 = divps(auStack_48,auVar7);
  UVar9.z = fVar1 / fVar8;
  auStack_48._0_4_ = auVar7._0_4_;
  auStack_48._4_4_ = auVar7._4_4_;
  UVar9.x = (float)auStack_48._0_4_;
  UVar9.y = (float)auStack_48._4_4_;
  uVar3 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
joined_r0x059e2a3c:
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Value.fields = UVar9;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicVector3Builtin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin____Eq__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59e2a90

bool CustomLogic_CustomLogicVector3Builtin____Eq__
               (CustomLogic_CustomLogicVector3Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07545cfb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfb = '\x01';
  }
  if (other != (Il2CppObject *)0x0) {
    bVar3 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
    if ((bVar3 <= (other->klass->_2).typeHierarchyDepth) &&
       ((other->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
      uVar1 = (__this->fields).Value.fields.x;
      uVar2 = (__this->fields).Value.fields.y;
      fVar4 = (float)uVar2 - (float)((ulong)other[3].klass >> 0x20);
      fVar5 = (__this->fields).Value.fields.z - *(float *)&other[3].monitor;
      fVar6 = (float)uVar1 - SUB84(other[3].klass,0);
      return fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5 < 9.9999994e-11;
    }
  }
  return false;
}


// CustomLogic.CustomLogicVector3Builtin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicVector3Builtin____Hash__ (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59e2b40

int32_t CustomLogic_CustomLogicVector3Builtin____Hash__
                  (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  
  uVar1 = System_Single__GetHashCode((float *)&(__this->fields).Value,(MethodInfo *)0x0);
  iVar2 = System_Single__GetHashCode(&(__this->fields).Value.fields.y,(MethodInfo *)0x0);
  iVar3 = System_Single__GetHashCode(&(__this->fields).Value.fields.z,(MethodInfo *)0x0);
  return iVar3 >> 2 ^ iVar2 << 2 ^ uVar1;
}


// CustomLogic.CustomLogicVector3Builtin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector3Builtin____Mod__ (CustomLogic_CustomLogicVector3Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59e2b80

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
// 0x59e2bc0

UnityEngine_Vector3_o
CustomLogic_CustomLogicVector3Builtin__op_Implicit
          (CustomLogic_CustomLogicVector3Builtin_o *v,MethodInfo *method)

{
  if (v == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (UnityEngine_Vector3_o)(v->fields).Value.fields;
}


// CustomLogic.CustomLogicVector3Builtin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicVector3Builtin__op_Implicit (UnityEngine_Vector3_o v, const MethodInfo* method);
// 0x59dfaf0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(UnityEngine_Vector3_o v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07545cfc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545cfc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_07545cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cf1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = v.fields.x;
  (__this->fields).Value.fields.y = v.fields.y;
  (__this->fields).Value.fields.z = v.fields.z;
  return __this;
}


// CustomLogic.CustomLogicVector3Builtin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVector3Builtin__get_ClassName (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59e2be0

System_String_o *
CustomLogic_CustomLogicVector3Builtin__get_ClassName
          (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545cfd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Vector3");
    Il2CppMethodInitialized_07545cfd = '\x01';
  }
  return "Vector3";
}


// CustomLogic.CustomLogicVector3Builtin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin__get_IsAbstract (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59e2c10

bool CustomLogic_CustomLogicVector3Builtin__get_IsAbstract
               (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicVector3Builtin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin__get_IsStatic (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59e2c20

bool CustomLogic_CustomLogicVector3Builtin__get_IsStatic
               (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicVector3Builtin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVector3Builtin__get_InheritBaseMembers (CustomLogic_CustomLogicVector3Builtin_o* __this, const MethodInfo* method);
// 0x59e2c30

bool CustomLogic_CustomLogicVector3Builtin__get_InheritBaseMembers
               (CustomLogic_CustomLogicVector3Builtin_o *__this,MethodInfo *method)

{
  return true;
}


