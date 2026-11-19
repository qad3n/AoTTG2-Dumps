// Type: CustomLogic.CustomLogicVector2Builtin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicVector2Builtin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicVector2Builtin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59da820

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int iVar2;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  System_String_o *pSVar3;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  float fVar4;
  float fVar5;
  int32_t local_1c;
  
  if (Il2CppMethodInitialized_07545cb8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb8 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    if (Il2CppMethodInitialized_07545cac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_07545cac = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  }
  else {
    iVar2 = (int)args->max_length;
    if (iVar2 == 2) {
      pIVar1 = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_34BDFE0 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((args->max_length & 0xfffffffe) == 0) {
        ThrowIndexOutOfRangeException();
      }
      fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (args->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      if (Il2CppMethodInitialized_07545cae == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545cae = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._value.fields.x = fVar5;
    }
    else {
      if (iVar2 != 1) {
        NullCheck(args);
        local_1c = (int32_t)args->max_length;
        pSVar3 = System_Int32__ToString(&local_1c,(MethodInfo *)0x0);
        str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicVector2Builtin constructor found that takes ");
        str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
        pSVar3 = System_String__Concat_5301f10(str0,pSVar3,str2,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
        System_ArgumentException___ctor_54186d0(__this_00,pSVar3,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicVector2Builtin_Factory_CreateInstance);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
      }
      pIVar1 = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_34BDFE0 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      if (Il2CppMethodInitialized_07545cad == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545cad = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._value.fields.x = fVar4;
    }
    (__this->fields)._value.fields.y = fVar4;
  }
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings___c___cctor (const MethodInfo* method);
// 0x59de300

void CustomLogic_CustomLogicVector2Builtin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545cdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cdf = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings___c___ctor (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, const MethodInfo* method);
// 0x59de370

void CustomLogic_CustomLogicVector2Builtin_Bindings___c___ctor
               (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Angle_b__15_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59de380

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Angle_b__15_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  double dVar3;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar4;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar5;
  Il2CppObject *pIVar6;
  System_Math_c *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float local_4c;
  UnityEngine_Vector2_Fields local_48;
  undefined8 uStack_40;
  UnityEngine_Vector2_Fields local_38;
  undefined8 uStack_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  if (Il2CppMethodInitialized_07545ce0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ce0 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059de570:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
label_059de575:
    ThrowIndexOutOfRangeException();
  }
  pIVar6 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar6,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
  if ((__a->max_length & 0xfffffffe) == 0) goto label_059de575;
  pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__a->m_Items[1],
                      (MethodInfo_34BDE00 *)
                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
  if ((pCVar4 == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (pCVar5 == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) goto label_059de570;
  UVar1 = (pCVar4->fields)._value.fields;
  UVar2 = (pCVar5->fields)._value.fields;
  fVar9 = UVar1.x;
  fVar11 = UVar1.y;
  uVar12 = 0;
  uVar13 = 0;
  fVar14 = UVar2.x;
  fVar15 = UVar2.y;
  uVar16 = 0;
  uVar17 = 0;
  if (Il2CppMethodInitialized_0753e7f8 == '\0') {
    uStack_30 = 0;
    uStack_40 = 0;
    local_48 = UVar2;
    local_38 = UVar1;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f8 = '\x01';
    fVar9 = local_38.x;
    fVar11 = local_38.y;
    uVar12 = (undefined4)uStack_30;
    uVar13 = uStack_30._4_4_;
    fVar14 = local_48.x;
    fVar15 = local_48.y;
    uVar16 = (undefined4)uStack_40;
    uVar17 = uStack_40._4_4_;
  }
  fVar10 = fVar15 * fVar15 + fVar14 * fVar14;
  fVar8 = fVar10 * (fVar11 * fVar11 + fVar9 * fVar9);
  local_4c = 0.0;
  if (fVar8 < 1e-30) goto label_059de54b;
  pSVar7 = TypeInfo_System_Math;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    local_38.y = fVar11;
    local_38.x = fVar9;
    uStack_30 = CONCAT44(uVar13,uVar12);
    local_48.y = fVar15;
    local_48.x = fVar14;
    uStack_40 = CONCAT44(uVar17,uVar16);
    local_28 = fVar8;
    fStack_24 = fVar10;
    fStack_20 = fVar10;
    fStack_1c = fVar10;
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar8 = local_28;
    fVar9 = local_38.x;
    fVar11 = local_38.y;
    uVar12 = (undefined4)uStack_30;
    uVar13 = uStack_30._4_4_;
    fVar14 = local_48.x;
    fVar15 = local_48.y;
    uVar16 = (undefined4)uStack_40;
    uVar17 = uStack_40._4_4_;
    if (local_28 < 0.0) goto label_059de4e3;
label_059de4b2:
    fVar8 = SQRT(fVar8);
  }
  else {
    if (0.0 <= fVar8) goto label_059de4b2;
label_059de4e3:
    local_38.y = fVar11;
    local_38.x = fVar9;
    uStack_30 = CONCAT44(uVar13,uVar12);
    local_48.y = fVar15;
    local_48.x = fVar14;
    uStack_40 = CONCAT44(uVar17,uVar16);
    fVar8 = sqrtf(fVar8);
    fVar9 = local_38.x;
    fVar11 = local_38.y;
    fVar14 = local_48.x;
    fVar15 = local_48.y;
  }
  fVar8 = (fVar11 * fVar15 + fVar9 * fVar14) / fVar8;
  fVar9 = 1.0;
  if (fVar8 <= 1.0) {
    fVar9 = fVar8;
  }
  dVar3 = acos((double)(float)(~-(uint)(-1.0 <= fVar8) & 0xbf800000 | (uint)fVar9 & -(uint)(-1.0 <= fVar8)),
               (MethodInfo *)pSVar7);
  local_4c = (float)dVar3 * 57.29578;
label_059de54b:
  pIVar6 = il2cpp_vm_Object_Box(g_data_07556740,&local_4c);
  return pIVar6;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__ClampMagnitude>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__ClampMagnitude_b__16_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59de580

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__ClampMagnitude_b__16_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  MethodInfo *method_00;
  float maxLength;
  
  if (Il2CppMethodInitialized_07545ce1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ce1 = '\x01';
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
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
      maxLength = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[1],
                             (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                            );
      pCVar1 = CustomLogic_CustomLogicVector2Builtin__ClampMagnitude(pCVar1,maxLength,method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Distance>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Distance_b__17_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59de630

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Distance_b__17_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  uint32_t uVar3;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar4;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar5;
  Il2CppObject *pIVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fStack_3c;
  UnityEngine_Vector2_Fields UStack_38;
  undefined8 uStack_30;
  UnityEngine_Vector2_Fields UStack_28;
  undefined8 uStack_20;
  
  if (Il2CppMethodInitialized_07545ce2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ce2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059de7a3:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar6 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar6,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar4 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar5 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        UVar1 = (pCVar4->fields)._value.fields;
        fVar11 = UVar1.x;
        fVar12 = UVar1.y;
        uVar13 = 0;
        uVar14 = 0;
        UVar2 = (pCVar5->fields)._value.fields;
        fVar7 = UVar2.x;
        fVar8 = UVar2.y;
        uVar9 = 0;
        uVar10 = 0;
        if (Il2CppMethodInitialized_0753e72f == '\0') {
          uStack_20 = 0;
          uStack_30 = 0;
          UStack_38 = UVar2;
          UStack_28 = UVar1;
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e72f = '\x01';
          uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          fVar7 = UStack_38.x;
          fVar8 = UStack_38.y;
          uVar9 = (undefined4)uStack_30;
          uVar10 = uStack_30._4_4_;
          fVar11 = UStack_28.x;
          fVar12 = UStack_28.y;
          uVar13 = (undefined4)uStack_20;
          uVar14 = uStack_20._4_4_;
        }
        else {
          uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar3 == 0) {
          UStack_28.y = fVar12;
          UStack_28.x = fVar11;
          uStack_20 = CONCAT44(uVar14,uVar13);
          UStack_38.y = fVar8;
          UStack_38.x = fVar7;
          uStack_30 = CONCAT44(uVar10,uVar9);
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          fVar7 = UStack_38.x;
          fVar8 = UStack_38.y;
          fVar11 = UStack_28.x;
          fVar12 = UStack_28.y;
        }
        fStack_3c = (fVar12 - fVar8) * (fVar12 - fVar8) + (fVar11 - fVar7) * (fVar11 - fVar7);
        if (fStack_3c < 0.0) {
          fStack_3c = sqrtf(fStack_3c);
        }
        else {
          fStack_3c = SQRT(fStack_3c);
        }
        pIVar6 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_3c);
        return pIVar6;
      }
      goto label_059de7a3;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Dot>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Dot_b__18_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59de7b0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Dot_b__18_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar4;
  Il2CppObject *pIVar5;
  float fStack_1c;
  
  if (Il2CppMethodInitialized_07545ce3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ce3 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059de885:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar5 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar5,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar4 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        UVar1 = (pCVar3->fields)._value.fields;
        UVar2 = (pCVar4->fields)._value.fields;
        fStack_1c = UVar2.y * UVar1.y + UVar2.x * UVar1.x;
        pIVar5 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_1c);
        return pIVar5;
      }
      goto label_059de885;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Lerp_b__19_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59de890

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Lerp_b__19_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar4;
  float fVar5;
  float fVar6;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545ce4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ce4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059dea34:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if (2 < (uint)__a->max_length) {
        fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[2],
                           (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
          if (pCVar4 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
            UVar1 = (pCVar3->fields)._value.fields;
            UVar2 = (pCVar4->fields)._value.fields;
            if (Il2CppMethodInitialized_07545cb6 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
              Il2CppMethodInitialized_07545cb6 = '\x01';
            }
            pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
            if (Il2CppMethodInitialized_07545caf == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
              Il2CppMethodInitialized_07545caf = '\x01';
            }
            if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
            }
            fVar6 = 1.0;
            if (fVar5 <= 1.0) {
              fVar6 = fVar5;
            }
            fVar6 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar6);
            fStack_28 = UVar1.x;
            fStack_24 = UVar1.y;
            fStack_38 = UVar2.x;
            fStack_34 = UVar2.y;
            CustomLogic_BuiltinClassInstance___ctor
                      ((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
            UVar1.y = fVar6 * (fStack_34 - fStack_24) + fStack_24;
            UVar1.x = fVar6 * (fStack_38 - fStack_28) + fStack_28;
            (pCVar3->fields)._value.fields = UVar1;
            return (Il2CppObject *)pCVar3;
          }
        }
        goto label_059dea34;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__20_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59dea40

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__20_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar4;
  float fVar5;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545ce5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ce5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059debcd:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if (2 < (uint)__a->max_length) {
        fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[2],
                           (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
           (pCVar4 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
          UVar1 = (pCVar3->fields)._value.fields;
          UVar2 = (pCVar4->fields)._value.fields;
          if (Il2CppMethodInitialized_07545cb6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
            Il2CppMethodInitialized_07545cb6 = '\x01';
          }
          pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
          if (Il2CppMethodInitialized_07545caf == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
            Il2CppMethodInitialized_07545caf = '\x01';
          }
          if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
          }
          fStack_28 = UVar1.x;
          fStack_24 = UVar1.y;
          fStack_38 = UVar2.x;
          fStack_34 = UVar2.y;
          CustomLogic_BuiltinClassInstance___ctor
                    ((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
          UVar1.y = fVar5 * (fStack_34 - fStack_24) + fStack_24;
          UVar1.x = fVar5 * (fStack_38 - fStack_28) + fStack_28;
          (pCVar3->fields)._value.fields = UVar1;
          return (Il2CppObject *)pCVar3;
        }
        goto label_059debcd;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Max>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Max_b__21_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59debe0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Max_b__21_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar2;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_38 [16];
  
  if (Il2CppMethodInitialized_07545ce6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ce6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059ded25:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar2 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        auStack_38._8_8_ = 0;
        auStack_38._0_8_ = (pCVar2->fields)._value.fields;
        UVar1 = (pCVar3->fields)._value.fields;
        if (Il2CppMethodInitialized_07545cb6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
          Il2CppMethodInitialized_07545cb6 = '\x01';
        }
        pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        if (Il2CppMethodInitialized_07545caf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_07545caf = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = UVar1;
        auVar4 = maxps(auStack_38,auVar4);
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
        auStack_38._0_8_ = auVar4._0_8_;
        (pCVar2->fields)._value.fields = (UnityEngine_Vector2_Fields)auStack_38._0_8_;
        return (Il2CppObject *)pCVar2;
      }
      goto label_059ded25;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Min>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Min_b__22_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59ded30

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Min_b__22_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar2;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_38 [16];
  
  if (Il2CppMethodInitialized_07545ce7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ce7 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059dee75:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar2 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        auStack_38._8_8_ = 0;
        auStack_38._0_8_ = (pCVar2->fields)._value.fields;
        UVar1 = (pCVar3->fields)._value.fields;
        if (Il2CppMethodInitialized_07545cb6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
          Il2CppMethodInitialized_07545cb6 = '\x01';
        }
        pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        if (Il2CppMethodInitialized_07545caf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_07545caf = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = UVar1;
        auVar4 = minps(auStack_38,auVar4);
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
        auStack_38._0_8_ = auVar4._0_8_;
        (pCVar2->fields)._value.fields = (UnityEngine_Vector2_Fields)auStack_38._0_8_;
        return (Il2CppObject *)pCVar2;
      }
      goto label_059dee75;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__MoveTowards_b__23_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59dee80

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__MoveTowards_b__23_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector2Builtin_o *target;
  MethodInfo *method_00;
  float maxDistanceDelta;
  
  if (Il2CppMethodInitialized_07545ce8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ce8 = '\x01';
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
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      target = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if (2 < (uint)__a->max_length) {
        maxDistanceDelta =
             CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (__a->m_Items[2],
                        (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        pCVar1 = CustomLogic_CustomLogicVector2Builtin__MoveTowards(pCVar1,target,maxDistanceDelta,method_00);
        return (Il2CppObject *)pCVar1;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Reflect>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Reflect_b__24_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59def50

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Reflect_b__24_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar4;
  float fVar5;
  UnityEngine_Vector2_Fields UStack_38;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545ce9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ce9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059df0b7:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar4 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        UVar1 = (pCVar3->fields)._value.fields;
        UVar2 = (pCVar4->fields)._value.fields;
        if (Il2CppMethodInitialized_07545cb6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
          Il2CppMethodInitialized_07545cb6 = '\x01';
        }
        pCVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        if (Il2CppMethodInitialized_07545caf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_07545caf = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        UStack_38.x = UVar1.x;
        UStack_38.y = UVar1.y;
        fStack_28 = UVar2.x;
        fStack_24 = UVar2.y;
        fVar5 = (UStack_38.y * fStack_24 + UStack_38.x * fStack_28) * -2.0;
        UStack_38.y = fVar5 * fStack_24 + UStack_38.y;
        UStack_38.x = fVar5 * fStack_28 + UStack_38.x;
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar3,(MethodInfo *)0x0);
        (pCVar3->fields)._value.fields = UStack_38;
        return (Il2CppObject *)pCVar3;
      }
      goto label_059df0b7;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__SignedAngle>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__SignedAngle_b__25_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59df0d0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__SignedAngle_b__25_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *from;
  CustomLogic_CustomLogicVector2Builtin_o *to;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  float fStack_1c;
  
  if (Il2CppMethodInitialized_07545cea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545cea = '\x01';
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
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      to = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__a->m_Items[1],
                      (MethodInfo_34BDE00 *)
                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      fStack_1c = CustomLogic_CustomLogicVector2Builtin__SignedAngle(from,to,method_00);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_1c);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__SmoothDamp>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__SmoothDamp_b__26_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59df1a0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__SmoothDamp_b__26_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector2Builtin_o *target;
  CustomLogic_CustomLogicVector2Builtin_o *currentVelocity;
  float smoothTime;
  float maxSpeed;
  
  if (Il2CppMethodInitialized_07545ceb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545ceb = '\x01';
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
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      target = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if (2 < (uint)__a->max_length) {
        currentVelocity =
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (__a->m_Items[2],
                        (MethodInfo_34BDE00 *)
                        MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
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
            pCVar1 = CustomLogic_CustomLogicVector2Builtin__SmoothDamp
                               (pCVar1,target,currentVelocity,smoothTime,maxSpeed,method);
            return (Il2CppObject *)pCVar1;
          }
        }
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Set>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Set_b__27_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59df2c0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Set_b__27_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_07545cec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545cec = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_059df371:
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
      if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
        (__c->fields)._value.fields.x = fVar1;
        (__c->fields)._value.fields.y = fVar2;
        return (Il2CppObject *)0x0;
      }
      goto label_059df371;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Normalize>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Normalize_b__28_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59df380

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Normalize_b__28_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  float fVar3;
  
  if (__c == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_0753e7b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7b5 = '\x01';
  }
  UVar1 = (__c->fields)._value.fields;
  fVar2 = UVar1.x;
  fVar3 = UVar1.y;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  if (1e-05 < fVar2) {
    fVar3 = (__c->fields)._value.fields.y;
    (__c->fields)._value.fields.x = (__c->fields)._value.fields.x / fVar2;
    fVar3 = fVar3 / fVar2;
  }
  else {
    (__c->fields)._value.fields.x = 0.0;
    fVar3 = 0.0;
  }
  (__c->fields)._value.fields.y = fVar3;
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Copy___b__29_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59df440

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Copy___b__29_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = (*(__c->klass->vtable)._19___Copy__.methodPtr)(__c,(__c->klass->vtable)._19___Copy__.method);
  return pIVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Add___b__30_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59df470

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Add___b__30_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector2Builtin____Add__
                         ((CustomLogic_CustomLogicVector2Builtin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Sub___b__31_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59df4a0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Sub___b__31_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector2Builtin____Sub__
                         ((CustomLogic_CustomLogicVector2Builtin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Mul___b__32_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59df4d0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Mul___b__32_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector2Builtin____Mul__
                         ((CustomLogic_CustomLogicVector2Builtin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Div___b__33_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59df500

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Div___b__33_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicVector2Builtin____Div__
                         ((CustomLogic_CustomLogicVector2Builtin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Eq___b__34_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59df530

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Eq___b__34_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  undefined8 in_RAX;
  Il2CppObject *pIVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_18;
  
  if (__a == (System_Object_array *)0x0) {
label_059df623:
    ThrowNullReferenceException();
  }
  iVar2 = (int)__a->max_length;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    ThrowIndexOutOfRangeException();
  }
  if (__c == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) goto label_059df623;
  pIVar5 = __a->m_Items[0];
  pIVar3 = __a->m_Items[1];
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545cb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb5 = '\x01';
  }
  if (pIVar5 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if (bVar1 <= (pIVar5->klass->_2).typeHierarchyDepth) {
      bVar4 = false;
      if ((pIVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin) {
        pIVar5 = (Il2CppObject *)0x0;
      }
      if ((pIVar3 == (Il2CppObject *)0x0) || (pIVar5 == (Il2CppObject *)0x0)) goto label_059df5d6;
      if ((bVar1 <= (pIVar3->klass->_2).typeHierarchyDepth) &&
         ((pIVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
        fVar6 = SUB84(pIVar5[3].klass,0) - SUB84(pIVar3[3].klass,0);
        fVar7 = (float)((ulong)pIVar5[3].klass >> 0x20) - (float)((ulong)pIVar3[3].klass >> 0x20);
        bVar4 = fVar7 * fVar7 + fVar6 * fVar6 < 9.9999994e-11;
        goto label_059df5d6;
      }
    }
  }
  bVar4 = false;
label_059df5d6:
  uStack_18 = CONCAT17(bVar4,(undefined7)uStack_18);
  pIVar5 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
  return pIVar5;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Hash___b__35_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x59df630

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Hash___b__35_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (__c == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Single__GetHashCode((float *)&(__c->fields)._value,(MethodInfo *)0x0);
  System_Single__GetHashCode(&(__c->fields)._value.fields.y,(MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
  return pIVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVector2Builtin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59daae0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVector2Builtin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicVector2Builtin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545cb9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"__Sub__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Normalize");
    il2cpp_codegen_initialize_runtime_metadata(&"Down");
    il2cpp_codegen_initialize_runtime_metadata(&"SignedAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Reflect");
    il2cpp_codegen_initialize_runtime_metadata(&"Max");
    il2cpp_codegen_initialize_runtime_metadata(&"SmoothDamp");
    il2cpp_codegen_initialize_runtime_metadata(&"LerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTowards");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Dot");
    il2cpp_codegen_initialize_runtime_metadata(&"Distance");
    il2cpp_codegen_initialize_runtime_metadata(&"__Div__");
    il2cpp_codegen_initialize_runtime_metadata(&"One");
    il2cpp_codegen_initialize_runtime_metadata(&"SqrMagnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"ClampMagnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"PositiveInfinity");
    il2cpp_codegen_initialize_runtime_metadata(&"Left");
    il2cpp_codegen_initialize_runtime_metadata(&"Min");
    il2cpp_codegen_initialize_runtime_metadata(&"Magnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"NegativeInfinity");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"__Add__");
    il2cpp_codegen_initialize_runtime_metadata(&"Zero");
    il2cpp_codegen_initialize_runtime_metadata(&"Normalized");
    il2cpp_codegen_initialize_runtime_metadata(&"Angle");
    Il2CppMethodInitialized_07545cb9 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x792a6492) {
    if (uVar2 < 0x2e9445f8) {
      if (uVar2 < 0x1cb1b190) {
        if (uVar2 < 0xdc1f3cd) {
          if (uVar2 == 0xb9c3383) {
            bVar1 = System_String__op_Equality(name,"Zero",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Zero
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0xdc1f3cc) {
            bVar1 = System_String__op_Equality(name,"__Add__",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Add__
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x18c37b41) {
          bVar1 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Mul__
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1cb1b18f) {
          bVar1 = System_String__op_Equality(name,"One",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__One
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 < 0x21ed379b) {
        if (uVar2 == 0x1e9e9f85) {
          bVar1 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Right
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x21ed379a) {
          bVar1 = System_String__op_Equality(name,"ClampMagnitude",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__ClampMagnitude
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x28b19ea3) {
        bVar1 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Set
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x2e9445f7) {
        bVar1 = System_String__op_Equality(name,"Min",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Min
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x42f35941) {
      if (uVar2 < 0x39c493b9) {
        if (uVar2 == 0x386d9fc0) {
          bVar1 = System_String__op_Equality(name,"Dot",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Dot
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x39c493b8) {
          bVar1 = System_String__op_Equality(name,"Angle",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Angle
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x3ca7e3b9) {
        bVar1 = System_String__op_Equality(name,"Max",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Max
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x42f35940) {
        bVar1 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Up
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x4adde30d) {
      if (uVar2 == 0x434cfcb8) {
        bVar1 = System_String__op_Equality(name,"Normalized",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Normalized
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x4adde30c) {
        bVar1 = System_String__op_Equality(name,"Normalize",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Normalize
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x549f4d10) {
      bVar1 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Copy__
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x74ee9015) {
      bVar1 = System_String__op_Equality(name,"SmoothDamp",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SmoothDamp
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x792a6491) {
      bVar1 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Hash__
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc370544b) {
    if (uVar2 < 0x9e956089) {
      if (uVar2 < 0x91efe6d8) {
        if (uVar2 == 0x91efe6d7) {
          bVar1 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Eq__
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x7bdb45c1) {
          bVar1 = System_String__op_Equality(name,"SqrMagnitude",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__SqrMagnitude
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x92773890) {
        bVar1 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Left
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x9e956088) {
        bVar1 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Lerp
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xacfe0069) {
      if (uVar2 == 0xa4995035) {
        bVar1 = System_String__op_Equality(name,"Down",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Down
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xacfe0068) {
        bVar1 = System_String__op_Equality(name,"MoveTowards",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__MoveTowards
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xb127a615) {
      bVar1 = System_String__op_Equality(name,"Magnitude",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Magnitude
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xc370544a) {
      bVar1 = System_String__op_Equality(name,"Reflect",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Reflect
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xdc0c1c95) {
    if (uVar2 < 0xd6c0fe1b) {
      if (uVar2 == 0xd3d96082) {
        bVar1 = System_String__op_Equality(name,"Distance",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Distance
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd6c0fe1a) {
        bVar1 = System_String__op_Equality(name,"PositiveInfinity",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__PositiveInfinity
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0xd7cecb55) {
      bVar1 = System_String__op_Equality(name,"__Sub__",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Sub__
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xdc0c1c94) {
      bVar1 = System_String__op_Equality(name,"Y",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Y
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xdfeb0949) {
    if (uVar2 == 0xdd0c1e27) {
      bVar1 = System_String__op_Equality(name,"X",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__X
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xdfeb0948) {
      bVar1 = System_String__op_Equality(name,"SignedAngle",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SignedAngle
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xe0993ada) {
    bVar1 = System_String__op_Equality(name,"NegativeInfinity",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__NegativeInfinity
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xf4248f7b) {
    bVar1 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__LerpUnclamped
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xff76b6dc) {
    bVar1 = System_String__op_Equality(name,"__Div__",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Div__
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicVector2Builtin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__X
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__X (const MethodInfo* method);
// 0x59db7a0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__X(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  System_Action_CustomLogicVector2Builtin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545cba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicVector2Builtin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__X_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__X_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cba = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__X_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector2Builtin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__X_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Y
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Y (const MethodInfo* method);
// 0x59db880

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Y(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  System_Action_CustomLogicVector2Builtin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545cbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicVector2Builtin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cbb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector2Builtin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Normalized
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Normalized (const MethodInfo* method);
// 0x59db960

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Normalized(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cbc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_4
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Magnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Magnitude (const MethodInfo* method);
// 0x59dba00

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Magnitude(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cbd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_5
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__SqrMagnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__SqrMagnitude (const MethodInfo* method);
// 0x59dbaa0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__SqrMagnitude(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cbe = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Zero
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Zero (const MethodInfo* method);
// 0x59dbb40

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Zero(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cbf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__One
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__One (const MethodInfo* method);
// 0x59dbbe0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__One(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__One_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cc0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__One_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x59dbc80

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Up_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cc1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Up_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Down
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Down (const MethodInfo* method);
// 0x59dbd20

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Down(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Down_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cc2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Down_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Left (const MethodInfo* method);
// 0x59dbdc0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Left(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Left_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cc3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Left_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x59dbe60

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Right_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cc4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Right_g____getter_12_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__NegativeInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__NegativeInfinity (const MethodInfo* method);
// 0x59dbf00

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__NegativeInfinity(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cc5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__PositiveInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__PositiveInfinity (const MethodInfo* method);
// 0x59dbfa0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__PositiveInfinity(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_07545cc6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Angle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Angle (const MethodInfo* method);
// 0x59dc040
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dc075: jmp 0x59dc0e5

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Angle(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Angle_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cc7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Angle_b__15_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__ClampMagnitude
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__ClampMagnitude (const MethodInfo* method);
// 0x59dc180
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dc1b5: jmp 0x59dc225

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__ClampMagnitude(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__ClampMagnitude_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cc8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__ClampMagnitude_b__16_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Distance
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Distance (const MethodInfo* method);
// 0x59dc2c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dc2f5: jmp 0x59dc365

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Distance(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Distance_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cc9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Distance_b__17_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Dot
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Dot (const MethodInfo* method);
// 0x59dc400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dc435: jmp 0x59dc4a5

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Dot(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Dot_b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cca = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Dot_b__18_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x59dc540
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dc575: jmp 0x59dc5e5

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ccb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Lerp_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545ccb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__19_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__19_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Lerp_b__19_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__19_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x59dc680
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dc6b5: jmp 0x59dc725

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__LerpUnclamped(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ccc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__20_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545ccc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__20_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__20_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__20_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__20_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__20_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Max
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Max (const MethodInfo* method);
// 0x59dc7c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dc7f5: jmp 0x59dc865

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Max(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ccd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Max_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545ccd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__21_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__21_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Max_b__21_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__21_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__21_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Min
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Min (const MethodInfo* method);
// 0x59dc900
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dc935: jmp 0x59dc9a5

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Min(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Min_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cce = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Min_b__22_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__MoveTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__MoveTowards (const MethodInfo* method);
// 0x59dca40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dca75: jmp 0x59dcae5

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__MoveTowards(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545ccf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__MoveTowards_b__23_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545ccf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__23_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__23_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__MoveTowards_b__23_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__23_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__23_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Reflect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Reflect (const MethodInfo* method);
// 0x59dcb80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dcbb5: jmp 0x59dcc25

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Reflect(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Reflect_b__24_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cd0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__24_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__24_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Reflect_b__24_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__24_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__24_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__SignedAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SignedAngle (const MethodInfo* method);
// 0x59dccc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dccf5: jmp 0x59dcd65

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SignedAngle(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__SignedAngle_b__25_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cd1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__25_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__25_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__SignedAngle_b__25_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__25_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__25_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__SmoothDamp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SmoothDamp (const MethodInfo* method);
// 0x59dce00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dce35: jmp 0x59dcea5

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SmoothDamp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__SmoothDamp_b__26_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cd2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__26_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__26_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__SmoothDamp_b__26_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__26_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__26_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x59dcf40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dcf75: jmp 0x59dcfe5

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Set_b__27_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cd3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__27_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__27_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Set_b__27_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__27_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__27_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Normalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Normalize (const MethodInfo* method);
// 0x59dd080
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dd0b5: jmp 0x59dd125

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Normalize(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Normalize_b__28_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cd4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__28_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__28_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Normalize_b__28_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__28_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__28_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x59dd1c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dd1f5: jmp 0x59dd265

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Copy___b__29_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cd5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__29_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__29_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Copy___b__29_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__29_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__29_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Add__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Add__ (const MethodInfo* method);
// 0x59dd300
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dd338: jmp 0x59dd3ab

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Add__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Add___b__30_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cd6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__30_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__30_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Add___b__30_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__30_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__30_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Sub__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Sub__ (const MethodInfo* method);
// 0x59dd440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dd478: jmp 0x59dd4eb

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Sub__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Sub___b__31_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cd7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__31_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__31_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Sub___b__31_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__31_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__31_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x59dd580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dd5b8: jmp 0x59dd62b

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cd8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Mul___b__32_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cd8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__32_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__32_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Mul___b__32_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__32_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__32_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Div__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Div__ (const MethodInfo* method);
// 0x59dd6c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dd6f8: jmp 0x59dd76b

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Div__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cd9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Div___b__33_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cd9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__33_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__33_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Div___b__33_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__33_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__33_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x59dd800
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dd838: jmp 0x59dd8ab

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cda == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Eq___b__34_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cda = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__34_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__34_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Eq___b__34_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__34_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__34_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x59dd940
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59dd978: jmp 0x59dd9eb

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicVector2Builtin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545cdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Hash___b__35_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_07545cdb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    __this = pCVar2->__9__35_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->static_fields;
    __this = pCVar2->__9__35_0;
  }
  if (__this == (System_Func_CustomLogicVector2Builtin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Hash___b__35_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields;
    pCVar2->__9__35_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__35_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings___cctor (const MethodInfo* method);
// 0x59dda80

void CustomLogic_CustomLogicVector2Builtin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545cdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"__Sub__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"Normalize");
    il2cpp_codegen_initialize_runtime_metadata(&"Down");
    il2cpp_codegen_initialize_runtime_metadata(&"SignedAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Reflect");
    il2cpp_codegen_initialize_runtime_metadata(&"Max");
    il2cpp_codegen_initialize_runtime_metadata(&"SmoothDamp");
    il2cpp_codegen_initialize_runtime_metadata(&"LerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTowards");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Dot");
    il2cpp_codegen_initialize_runtime_metadata(&"Distance");
    il2cpp_codegen_initialize_runtime_metadata(&"__Div__");
    il2cpp_codegen_initialize_runtime_metadata(&"One");
    il2cpp_codegen_initialize_runtime_metadata(&"SqrMagnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"ClampMagnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"PositiveInfinity");
    il2cpp_codegen_initialize_runtime_metadata(&"Left");
    il2cpp_codegen_initialize_runtime_metadata(&"Min");
    il2cpp_codegen_initialize_runtime_metadata(&"Magnitude");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"__Mul__");
    il2cpp_codegen_initialize_runtime_metadata(&"NegativeInfinity");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"__Add__");
    il2cpp_codegen_initialize_runtime_metadata(&"Zero");
    il2cpp_codegen_initialize_runtime_metadata(&"Normalized");
    il2cpp_codegen_initialize_runtime_metadata(&"Angle");
    Il2CppMethodInitialized_07545cdc = '\x01';
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reflect",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SignedAngle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SmoothDamp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normalize",
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
  TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__X_g____getter_2_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59ddf90

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__X_g____getter_2_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__X_g____setter_2_1 (CustomLogic_CustomLogicVector2Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59ddfc0

void CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__X_g____setter_2_1
               (CustomLogic_CustomLogicVector2Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07545cdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545cdd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__i->fields)._value.fields.x = fVar1;
  return;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de040

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1 (CustomLogic_CustomLogicVector2Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x59de070

void CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1
               (CustomLogic_CustomLogicVector2Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07545cde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545cde = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__i->fields)._value.fields.y = fVar1;
  return;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Normalized>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Normalized_g____getter_4_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de0f0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Normalized_g____getter_4_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (__i == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  UVar1 = (UnityEngine_Vector2_Fields)UnityEngine_Vector2__Normalize(&(__i->fields)._value,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Magnitude>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Magnitude_g____getter_5_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de190

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Magnitude_g____getter_5_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppObject *pIVar3;
  float fStack_c;
  
  if (__i == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_0753e7b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7b5 = '\x01';
  }
  fVar1 = (__i->fields)._value.fields.x;
  fVar2 = (__i->fields)._value.fields.y;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fStack_c = fVar2 * fVar2 + fVar1 * fVar1;
  if (fStack_c < 0.0) {
    fStack_c = sqrtf(fStack_c);
  }
  else {
    fStack_c = SQRT(fStack_c);
  }
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_c);
  return pIVar3;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__SqrMagnitude>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__SqrMagnitude_g____getter_6_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de240

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__SqrMagnitude_g____getter_6_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Zero>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Zero_g____getter_7_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de280

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Zero_g____getter_7_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__get_Zero((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__One>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__One_g____getter_8_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de290

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__One_g____getter_8_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__get_One((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Up>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Up_g____getter_9_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de2a0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Up_g____getter_9_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__get_Up((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Down>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Down_g____getter_10_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de2b0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Down_g____getter_10_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__get_Down((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Left>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Left_g____getter_11_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de2c0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Left_g____getter_11_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__get_Left((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Right>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Right_g____getter_12_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de2d0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Right_g____getter_12_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__get_Right((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_13_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de2e0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_13_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__get_NegativeInfinity((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__PositiveInfinity>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__PositiveInfinity_g____getter_14_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x59de2f0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__PositiveInfinity_g____getter_14_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__get_PositiveInfinity((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin___ctor (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59d8980

void CustomLogic_CustomLogicVector2Builtin___ctor
               (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07545cac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cac = '\x01';
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


// CustomLogic.CustomLogicVector2Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin___ctor (CustomLogic_CustomLogicVector2Builtin_o* __this, float xy, const MethodInfo* method);
// 0x59d89f0

void CustomLogic_CustomLogicVector2Builtin___ctor_58d89f0
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float xy,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545cad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cad = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields.x = xy;
  (__this->fields)._value.fields.y = xy;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin___ctor (CustomLogic_CustomLogicVector2Builtin_o* __this, float x, float y, const MethodInfo* method);
// 0x59d8a60

void CustomLogic_CustomLogicVector2Builtin___ctor_58d8a60
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float x,float y,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545cae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545cae = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields.x = x;
  (__this->fields)._value.fields.y = y;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin___ctor (CustomLogic_CustomLogicVector2Builtin_o* __this, UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x59d8ad0

void CustomLogic_CustomLogicVector2Builtin___ctor_58d8ad0
               (CustomLogic_CustomLogicVector2Builtin_o *__this,UnityEngine_Vector2_o value,MethodInfo *method
               )

{
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = value.fields;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$get_X
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__get_X (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59d8b30

float CustomLogic_CustomLogicVector2Builtin__get_X
                (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  return (__this->fields)._value.fields.x;
}


// CustomLogic.CustomLogicVector2Builtin$$set_X
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__set_X (CustomLogic_CustomLogicVector2Builtin_o* __this, float value, const MethodInfo* method);
// 0x59d8b40

void CustomLogic_CustomLogicVector2Builtin__set_X
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._value.fields.x = value;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Y
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__get_Y (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59d8b50

float CustomLogic_CustomLogicVector2Builtin__get_Y
                (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  return (__this->fields)._value.fields.y;
}


// CustomLogic.CustomLogicVector2Builtin$$set_Y
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__set_Y (CustomLogic_CustomLogicVector2Builtin_o* __this, float value, const MethodInfo* method);
// 0x59d8b60

void CustomLogic_CustomLogicVector2Builtin__set_Y
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float value,MethodInfo *method)

{
  (__this->fields)._value.fields.y = value;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Normalized
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Normalized (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59d8b70

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_Normalized
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  
  UVar1 = (UnityEngine_Vector2_Fields)
          UnityEngine_Vector2__Normalize(&(__this->fields)._value,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._value.fields = UVar1;
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Magnitude
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__get_Magnitude (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59d8ca0

float CustomLogic_CustomLogicVector2Builtin__get_Magnitude
                (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_0753e7b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7b5 = '\x01';
  }
  UVar1 = (__this->fields)._value.fields;
  fVar2 = UVar1.x;
  fVar3 = UVar1.y;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
  if (0.0 <= fVar2) {
    return SQRT(fVar2);
  }
  fVar2 = sqrtf(fVar2);
  return fVar2;
}


// CustomLogic.CustomLogicVector2Builtin$$get_SqrMagnitude
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__get_SqrMagnitude (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59d8d20

float CustomLogic_CustomLogicVector2Builtin__get_SqrMagnitude
                (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  float fVar3;
  
  UVar1 = (__this->fields)._value.fields;
  fVar2 = UVar1.x;
  fVar3 = UVar1.y;
  return fVar3 * fVar3 + fVar2 * fVar2;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Zero
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Zero (const MethodInfo* method);
// 0x59d8d40

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_Zero(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_One
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_One (const MethodInfo* method);
// 0x59d8e00

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_One(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Up (const MethodInfo* method);
// 0x59d8ec0

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_Up(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (Il2CppMethodInitialized_0754205f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0754205f = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Down
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Down (const MethodInfo* method);
// 0x59d8f80

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_Down(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07542887 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542887 = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->downVector).fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Left
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Left (const MethodInfo* method);
// 0x59d9040

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_Left(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07542888 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542888 = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->leftVector).fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Right (const MethodInfo* method);
// 0x59d9100

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_Right(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (Il2CppMethodInitialized_0753e7f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753e7f7 = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->rightVector).fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_NegativeInfinity
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_NegativeInfinity (const MethodInfo* method);
// 0x59d91c0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_NegativeInfinity(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07541ba2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07541ba2 = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->negativeInfinityVector).fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_PositiveInfinity
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_PositiveInfinity (const MethodInfo* method);
// 0x59d9280

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_PositiveInfinity(MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07545e27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07545e27 = '\x01';
  }
  UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->positiveInfinityVector).fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$Angle
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__Angle (CustomLogic_CustomLogicVector2Builtin_o* from, CustomLogic_CustomLogicVector2Builtin_o* to, const MethodInfo* method);
// 0x59d9340
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59d93da: xorps xmm0, xmm0
// asm:   0x59d93dd: ucomiss xmm4, xmm0
// asm:   0x59d93e0: jb 0x59d9414

float CustomLogic_CustomLogicVector2Builtin__Angle
                (CustomLogic_CustomLogicVector2Builtin_o *from,CustomLogic_CustomLogicVector2Builtin_o *to,
                MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  double dVar2;
  System_Math_c *method_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((from == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (to == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = (from->fields)._value.fields;
  fVar3 = UVar1.x;
  fVar4 = UVar1.y;
  UVar1 = (to->fields)._value.fields;
  fVar5 = UVar1.x;
  fVar6 = UVar1.y;
  if (Il2CppMethodInitialized_0753e7f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f8 = '\x01';
  }
  fVar7 = (fVar6 * fVar6 + fVar5 * fVar5) * (fVar4 * fVar4 + fVar3 * fVar3);
  if (fVar7 < 1e-30) {
    return 0.0;
  }
  method_00 = TypeInfo_System_Math;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  if (0.0 <= fVar7) {
    fVar7 = SQRT(fVar7);
  }
  else {
    fVar7 = sqrtf(fVar7);
  }
  fVar7 = (fVar4 * fVar6 + fVar3 * fVar5) / fVar7;
  fVar3 = 1.0;
  if (fVar7 <= 1.0) {
    fVar3 = fVar7;
  }
  dVar2 = acos((double)(float)(~-(uint)(-1.0 <= fVar7) & 0xbf800000 | (uint)fVar3 & -(uint)(-1.0 <= fVar7)),
               (MethodInfo *)method_00);
  return (float)dVar2 * 57.29578;
}


// CustomLogic.CustomLogicVector2Builtin$$ClampMagnitude
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__ClampMagnitude (CustomLogic_CustomLogicVector2Builtin_o* vector, float maxLength, const MethodInfo* method);
// 0x59d9490

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__ClampMagnitude
          (CustomLogic_CustomLogicVector2Builtin_o *vector,float maxLength,MethodInfo *method)

{
  undefined1 auVar1 [16];
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float fVar2;
  undefined1 auVar3 [16];
  UnityEngine_Vector2_Fields local_28;
  
  if (vector == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_28 = (vector->fields)._value.fields;
  auVar3._8_8_ = 0;
  auVar3._0_4_ = local_28.x;
  auVar3._4_4_ = local_28.y;
  if (Il2CppMethodInitialized_07545ca1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07545ca1 = '\x01';
  }
  fVar2 = local_28.y * local_28.y + local_28.x * local_28.x;
  if (fVar2 <= maxLength * maxLength) goto label_059d955b;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (fVar2 < 0.0) goto label_059d9536;
label_059d950c:
    fVar2 = SQRT(fVar2);
  }
  else {
    if (0.0 <= fVar2) goto label_059d950c;
label_059d9536:
    fVar2 = sqrtf(fVar2);
  }
  auVar1._4_4_ = fVar2;
  auVar1._0_4_ = fVar2;
  auVar1._8_4_ = fVar2;
  auVar1._12_4_ = fVar2;
  auVar3 = divps(auVar3,auVar1);
  local_28.y = auVar3._4_4_ * maxLength;
  local_28.x = auVar3._0_4_ * maxLength;
label_059d955b:
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = local_28;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$Distance
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__Distance (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x59d95e0

float CustomLogic_CustomLogicVector2Builtin__Distance
                (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
                MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  uint32_t uVar3;
  float fVar4;
  float fVar5;
  
  if ((a == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = (a->fields)._value.fields;
  UVar2 = (b->fields)._value.fields;
  if (Il2CppMethodInitialized_0753e72f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e72f = '\x01';
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar3 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar4 = UVar1.x - UVar2.x;
  fVar5 = UVar1.y - UVar2.y;
  fVar4 = fVar5 * fVar5 + fVar4 * fVar4;
  if (fVar4 < 0.0) {
    fVar4 = sqrtf(fVar4);
    return fVar4;
  }
  return SQRT(fVar4);
}


// CustomLogic.CustomLogicVector2Builtin$$Dot
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__Dot (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x59d96a0

float CustomLogic_CustomLogicVector2Builtin__Dot
                (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
                MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  
  if ((a == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = (a->fields)._value.fields;
  UVar2 = (b->fields)._value.fields;
  return UVar2.y * UVar1.y + UVar2.x * UVar1.x;
}


// CustomLogic.CustomLogicVector2Builtin$$Lerp
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Lerp (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, float t, const MethodInfo* method);
// 0x59d96d0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Lerp
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,float t,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float fVar3;
  float local_28;
  float fStack_24;
  float local_18;
  float fStack_14;
  
  if (a != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    if (b != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      UVar1 = (a->fields)._value.fields;
      UVar2 = (b->fields)._value.fields;
      if (Il2CppMethodInitialized_07545cb6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        Il2CppMethodInitialized_07545cb6 = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      if (Il2CppMethodInitialized_07545caf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545caf = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      fVar3 = 1.0;
      if (t <= 1.0) {
        fVar3 = t;
      }
      fVar3 = (float)(-(uint)(0.0 <= t) & (uint)fVar3);
      local_18 = UVar1.x;
      fStack_14 = UVar1.y;
      local_28 = UVar2.x;
      fStack_24 = UVar2.y;
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      UVar1.y = fVar3 * (fStack_24 - fStack_14) + fStack_14;
      UVar1.x = fVar3 * (local_28 - local_18) + local_18;
      (__this->fields)._value.fields = UVar1;
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$LerpUnclamped
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__LerpUnclamped (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, float t, const MethodInfo* method);
// 0x59d97c0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__LerpUnclamped
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,float t,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float local_28;
  float fStack_24;
  float local_18;
  float fStack_14;
  
  if ((a == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = (a->fields)._value.fields;
  UVar2 = (b->fields)._value.fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  local_18 = UVar1.x;
  fStack_14 = UVar1.y;
  local_28 = UVar2.x;
  fStack_24 = UVar2.y;
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  UVar1.y = t * (fStack_24 - fStack_14) + fStack_14;
  UVar1.x = t * (local_28 - local_18) + local_18;
  (__this->fields)._value.fields = UVar1;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$Max
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Max (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x59d9890

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Max
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  undefined1 auVar2 [16];
  undefined1 auStack_28 [16];
  
  if ((a == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  auStack_28._8_8_ = 0;
  auStack_28._0_8_ = (a->fields)._value.fields;
  UVar1 = (b->fields)._value.fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = UVar1;
  auVar2 = maxps(auStack_28,auVar2);
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  auStack_28._0_8_ = auVar2._0_8_;
  (__this->fields)._value.fields = (UnityEngine_Vector2_Fields)auStack_28._0_8_;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$Min
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Min (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x59d9950

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Min
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  undefined1 auVar2 [16];
  undefined1 local_28 [16];
  
  if ((a == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_28._8_8_ = 0;
  local_28._0_8_ = (a->fields)._value.fields;
  UVar1 = (b->fields)._value.fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = UVar1;
  auVar2 = minps(local_28,auVar2);
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  local_28._0_8_ = auVar2._0_8_;
  (__this->fields)._value.fields = (UnityEngine_Vector2_Fields)local_28._0_8_;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$MoveTowards
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__MoveTowards (CustomLogic_CustomLogicVector2Builtin_o* current, CustomLogic_CustomLogicVector2Builtin_o* target, float maxDistanceDelta, const MethodInfo* method);
// 0x59d9a10

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__MoveTowards
          (CustomLogic_CustomLogicVector2Builtin_o *current,CustomLogic_CustomLogicVector2Builtin_o *target,
          float maxDistanceDelta,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  undefined1 auVar2 [16];
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  UnityEngine_Vector2_Fields local_48;
  
  if ((current == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (target == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = (current->fields)._value.fields;
  fVar4 = UVar1.x;
  fVar5 = UVar1.y;
  UVar1 = (target->fields)._value.fields;
  local_48.x = UVar1.x;
  local_48.y = UVar1.y;
  if (Il2CppMethodInitialized_07544d8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07544d8a = '\x01';
  }
  auVar6._0_4_ = local_48.x - fVar4;
  auVar6._4_4_ = local_48.y - fVar5;
  auVar6._8_8_ = 0;
  fVar3 = auVar6._4_4_ * auVar6._4_4_ + auVar6._0_4_ * auVar6._0_4_;
  if (((fVar3 == 0.0) && (!NAN(fVar3))) ||
     ((0.0 <= maxDistanceDelta && (fVar3 <= maxDistanceDelta * maxDistanceDelta)))) goto label_059d9b2f;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (fVar3 < 0.0) goto label_059d9afa;
label_059d9ac1:
    fVar3 = SQRT(fVar3);
  }
  else {
    if (0.0 <= fVar3) goto label_059d9ac1;
label_059d9afa:
    fVar3 = sqrtf(fVar3);
  }
  auVar2._4_4_ = fVar3;
  auVar2._0_4_ = fVar3;
  auVar2._8_4_ = fVar3;
  auVar2._12_4_ = fVar3;
  auVar6 = divps(auVar6,auVar2);
  local_48.x = fVar4 + maxDistanceDelta * auVar6._0_4_;
  local_48.y = fVar5 + maxDistanceDelta * auVar6._4_4_;
label_059d9b2f:
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = local_48;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$Reflect
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Reflect (CustomLogic_CustomLogicVector2Builtin_o* inDirection, CustomLogic_CustomLogicVector2Builtin_o* inNormal, const MethodInfo* method);
// 0x59d9bc0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Reflect
          (CustomLogic_CustomLogicVector2Builtin_o *inDirection,
          CustomLogic_CustomLogicVector2Builtin_o *inNormal,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  UnityEngine_Vector2_Fields UVar2;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float fVar3;
  UnityEngine_Vector2_Fields local_28;
  float local_18;
  float fStack_14;
  
  if ((inDirection == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (inNormal == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar1 = (inDirection->fields)._value.fields;
  UVar2 = (inNormal->fields)._value.fields;
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  local_28.x = UVar1.x;
  local_28.y = UVar1.y;
  local_18 = UVar2.x;
  fStack_14 = UVar2.y;
  fVar3 = (local_28.y * fStack_14 + local_28.x * local_18) * -2.0;
  local_28.y = fVar3 * fStack_14 + local_28.y;
  local_28.x = fVar3 * local_18 + local_28.x;
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = local_28;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$SignedAngle
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__SignedAngle (CustomLogic_CustomLogicVector2Builtin_o* from, CustomLogic_CustomLogicVector2Builtin_o* to, const MethodInfo* method);
// 0x59d9ca0

float CustomLogic_CustomLogicVector2Builtin__SignedAngle
                (CustomLogic_CustomLogicVector2Builtin_o *from,CustomLogic_CustomLogicVector2Builtin_o *to,
                MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  float fVar3;
  System_Math_c *pSVar4;
  uint uVar5;
  double dVar6;
  undefined1 auVar7 [12];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((from == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (to == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar2 = (from->fields)._value.fields.x;
  fVar3 = (from->fields)._value.fields.y;
  UVar1 = (to->fields)._value.fields;
  fVar8 = UVar1.x;
  fVar9 = UVar1.y;
  if (Il2CppMethodInitialized_07545e28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07545e28 = '\x01';
  }
  fVar11 = (fVar9 * fVar9 + fVar8 * fVar8) * (fVar3 * fVar3 + fVar2 * fVar2);
  fVar10 = 0.0;
  if (fVar11 < 1e-30) goto label_059d9de6;
  pSVar4 = TypeInfo_System_Math;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    if (fVar11 < 0.0) goto label_059d9d77;
label_059d9d4e:
    fVar11 = SQRT(fVar11);
  }
  else {
    if (0.0 <= fVar11) goto label_059d9d4e;
label_059d9d77:
    fVar11 = sqrtf(fVar11);
  }
  fVar11 = (fVar3 * fVar9 + fVar2 * fVar8) / fVar11;
  auVar7 = ZEXT812(0x3f800000);
  if (fVar11 <= auVar7._0_4_) {
    auVar7._4_8_ = auVar7._4_8_;
    auVar7._0_4_ = fVar11;
  }
  dVar6 = acos((double)(float)(~-(uint)(-1.0 <= fVar11) & 0xbf800000 | auVar7._0_4_ & -(uint)(-1.0 <= fVar11))
               ,(MethodInfo *)pSVar4);
  fVar10 = (float)dVar6 * 57.29578;
label_059d9de6:
  uVar5 = -(uint)(0.0 <= fVar2 * fVar9 - fVar3 * fVar8);
  return (float)(~uVar5 & (uint)-fVar10 | (uint)fVar10 & uVar5);
}


// CustomLogic.CustomLogicVector2Builtin$$SmoothDamp
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__SmoothDamp (CustomLogic_CustomLogicVector2Builtin_o* current, CustomLogic_CustomLogicVector2Builtin_o* target, CustomLogic_CustomLogicVector2Builtin_o* currentVelocity, float smoothTime, float maxSpeed, const MethodInfo* method);
// 0x59d9e20

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__SmoothDamp
          (CustomLogic_CustomLogicVector2Builtin_o *current,CustomLogic_CustomLogicVector2Builtin_o *target,
          CustomLogic_CustomLogicVector2Builtin_o *currentVelocity,float smoothTime,float maxSpeed,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float deltaTime;
  UnityEngine_Vector2_Fields local_18;
  UnityEngine_Vector2_Fields local_10;
  
  if ((current != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (target != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    if (currentVelocity != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      local_10 = (current->fields)._value.fields;
      local_18 = (target->fields)._value.fields;
      deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
      UVar1 = (UnityEngine_Vector2_Fields)
              UnityEngine_Vector2__SmoothDamp_69087f0
                        ((UnityEngine_Vector2_o *)&local_10,(UnityEngine_Vector2_o *)&local_18,
                         &(currentVelocity->fields)._value,smoothTime,maxSpeed,deltaTime,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07545cb6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        Il2CppMethodInitialized_07545cb6 = '\x01';
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      if (Il2CppMethodInitialized_07545caf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545caf = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._value.fields = UVar1;
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$Set
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__Set (CustomLogic_CustomLogicVector2Builtin_o* __this, float x, float y, const MethodInfo* method);
// 0x59d9f20

void CustomLogic_CustomLogicVector2Builtin__Set
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float x,float y,MethodInfo *method)

{
  (__this->fields)._value.fields.x = x;
  (__this->fields)._value.fields.y = y;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$Normalize
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__Normalize (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59d9f30

void CustomLogic_CustomLogicVector2Builtin__Normalize
               (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_0753e7b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7b5 = '\x01';
  }
  UVar1 = (__this->fields)._value.fields;
  fVar2 = UVar1.x;
  fVar3 = UVar1.y;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
  if (fVar2 < 0.0) {
    fVar2 = sqrtf(fVar2);
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  if (fVar2 <= 1e-05) {
    (__this->fields)._value.fields.x = 0.0;
    (__this->fields)._value.fields.y = 0.0;
    return;
  }
  fVar3 = (__this->fields)._value.fields.y;
  (__this->fields)._value.fields.x = (__this->fields)._value.fields.x / fVar2;
  (__this->fields)._value.fields.y = fVar3 / fVar2;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicVector2Builtin__ToString (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59d9ff0

System_String_o *
CustomLogic_CustomLogicVector2Builtin__ToString
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_03deba80(&(__this->fields)._value,0,0,0);
  return pSVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Copy__ (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59da000

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Copy__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  
  if (Il2CppMethodInitialized_07545cb0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb0 = '\x01';
  }
  UVar1 = (__this->fields)._value.fields;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._value.fields = UVar1;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Add__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59da090

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Add__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  byte bVar3;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  UnityEngine_Vector2_Fields UStack_38;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545cb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb1 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if ((((bVar3 <= (self->klass->_2).typeHierarchyDepth) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) &&
       ((bVar3 <= (other->klass->_2).typeHierarchyDepth &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)))) {
      pIVar1 = self[3].klass;
      pIVar2 = other[3].klass;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      if (Il2CppMethodInitialized_07545caf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545caf = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      UStack_38.x = SUB84(pIVar1,0);
      UStack_38.y = (float)((ulong)pIVar1 >> 0x20);
      fStack_28 = SUB84(pIVar2,0);
      fStack_24 = (float)((ulong)pIVar2 >> 0x20);
      UStack_38.y = UStack_38.y + fStack_24;
      UStack_38.x = UStack_38.x + fStack_28;
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._value.fields = UStack_38;
      return (Il2CppObject *)__this_00;
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Add__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Add);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicVector2Builtin$$__Sub__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Sub__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59da1d0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Sub__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  byte bVar3;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  UnityEngine_Vector2_Fields UStack_38;
  float fStack_28;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07545cb2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb2 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if ((((bVar3 <= (self->klass->_2).typeHierarchyDepth) && (other != (Il2CppObject *)0x0)) &&
        ((self->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) &&
       ((bVar3 <= (other->klass->_2).typeHierarchyDepth &&
        ((other->klass->_2).typeHierarchy[(ulong)bVar3 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)))) {
      pIVar1 = self[3].klass;
      pIVar2 = other[3].klass;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      if (Il2CppMethodInitialized_07545caf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545caf = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      UStack_38.x = SUB84(pIVar1,0);
      UStack_38.y = (float)((ulong)pIVar1 >> 0x20);
      fStack_28 = SUB84(pIVar2,0);
      fStack_24 = (float)((ulong)pIVar2 >> 0x20);
      UStack_38.y = UStack_38.y - fStack_24;
      UStack_38.x = UStack_38.x - fStack_28;
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._value.fields = UStack_38;
      return (Il2CppObject *)__this_00;
    }
  }
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Sub__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Sub);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicVector2Builtin$$__Mul__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Mul__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59da310

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Mul__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  undefined4 *puVar3;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  UnityEngine_Vector2_Fields UStack_38;
  undefined8 uStack_28;
  
  if (Il2CppMethodInitialized_07545cb3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb3 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    pIVar2 = self->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
      if (pIVar2 == g_data_07556740) {
        puVar3 = il2cpp_vm_Object_Unbox(self);
        if (other != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
          if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
             ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
            uStack_28 = other[3].klass;
            UStack_38.y = (float)*puVar3;
            UStack_38.x = (float)*puVar3;
            goto override_prt_59da3d6_19fc4389;
          }
        }
      }
    }
    else if (other != (Il2CppObject *)0x0) {
      pIVar2 = other->klass;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
        if (pIVar2 != g_data_07556740) goto label_059da4a8;
        puVar3 = il2cpp_vm_Object_Unbox(other);
        uStack_28 = self[3].klass;
        UStack_38.y = (float)*puVar3;
        UStack_38.x = (float)*puVar3;
      }
      else {
        UStack_38 = (UnityEngine_Vector2_Fields)self[3].klass;
        uStack_28 = other[3].klass;
      }
override_prt_59da3d6_19fc4389:
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      if (Il2CppMethodInitialized_07545caf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545caf = '\x01';
      }
      UStack_38.y = UStack_38.y * uStack_28._4_4_;
      UStack_38.x = UStack_38.x * (float)uStack_28;
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      (__this_00->fields)._value.fields = UStack_38;
      return (Il2CppObject *)__this_00;
    }
  }
label_059da4a8:
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Mul);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicVector2Builtin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Div__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59da4e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59da62c: jmp 0x59da5c3

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Div__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  undefined1 auVar3 [16];
  undefined4 *puVar4;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  undefined1 auVar5 [16];
  UnityEngine_Vector2_Fields UStack_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  if (Il2CppMethodInitialized_07545cb4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb4 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) && (other != (Il2CppObject *)0x0)) &&
       ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
      pIVar2 = other->klass;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
        if (pIVar2 != g_data_07556740) goto label_059da62e;
        puVar4 = il2cpp_vm_Object_Unbox(other);
        pIVar2 = self[3].klass;
        uStack_28 = *puVar4;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        uStack_24 = uStack_28;
        uStack_1c = uStack_28;
      }
      else {
        pIVar2 = self[3].klass;
        uStack_28 = SUB84(other[3].klass,0);
        uStack_24 = (undefined4)((ulong)other[3].klass >> 0x20);
        uStack_1c = 0;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = pIVar2;
      if (Il2CppMethodInitialized_07545caf == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545caf = '\x01';
      }
      auVar3._4_4_ = uStack_24;
      auVar3._0_4_ = uStack_28;
      auVar3._8_4_ = uStack_1c;
      auVar3._12_4_ = uStack_1c;
      auVar5 = divps(auVar5,auVar3);
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
      UStack_38 = auVar5._0_8_;
      (__this_00->fields)._value.fields = UStack_38;
      return (Il2CppObject *)__this_00;
    }
  }
label_059da62e:
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Div);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicVector2Builtin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin____Eq__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59da670
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59da6b7: xor eax, eax

bool CustomLogic_CustomLogicVector2Builtin____Eq__
               (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07545cb5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb5 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if (bVar1 <= (self->klass->_2).typeHierarchyDepth) {
      if ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin) {
        self = (Il2CppObject *)0x0;
      }
      if ((((other != (Il2CppObject *)0x0) && (self != (Il2CppObject *)0x0)) &&
          (bVar1 <= (other->klass->_2).typeHierarchyDepth)) &&
         ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
        fVar2 = SUB84(self[3].klass,0) - SUB84(other[3].klass,0);
        fVar3 = (float)((ulong)self[3].klass >> 0x20) - (float)((ulong)other[3].klass >> 0x20);
        return fVar3 * fVar3 + fVar2 * fVar2 < 9.9999994e-11;
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicVector2Builtin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicVector2Builtin____Hash__ (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59da730

int32_t CustomLogic_CustomLogicVector2Builtin____Hash__
                  (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  
  uVar1 = System_Single__GetHashCode((float *)&(__this->fields)._value,(MethodInfo *)0x0);
  iVar2 = System_Single__GetHashCode(&(__this->fields)._value.fields.y,(MethodInfo *)0x0);
  return iVar2 << 2 ^ uVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Mod__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x59da760

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Mod__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotImplementedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_codegen_object_new(klass);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Mod);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicVector2Builtin$$op_Implicit
// il2cpp: UnityEngine_Vector2_o CustomLogic_CustomLogicVector2Builtin__op_Implicit (CustomLogic_CustomLogicVector2Builtin_o* value, const MethodInfo* method);
// 0x59da7a0

UnityEngine_Vector2_o
CustomLogic_CustomLogicVector2Builtin__op_Implicit
          (CustomLogic_CustomLogicVector2Builtin_o *value,MethodInfo *method)

{
  if (value == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (UnityEngine_Vector2_o)(value->fields)._value.fields;
}


// CustomLogic.CustomLogicVector2Builtin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__op_Implicit (UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x59d8c10

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__op_Implicit_58d8c10(UnityEngine_Vector2_o value,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  
  if (Il2CppMethodInitialized_07545cb6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_07545cb6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_07545caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07545caf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields = value.fields;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVector2Builtin__get_ClassName (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59da7c0

System_String_o *
CustomLogic_CustomLogicVector2Builtin__get_ClassName
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545cb7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Vector2");
    Il2CppMethodInitialized_07545cb7 = '\x01';
  }
  return "Vector2";
}


// CustomLogic.CustomLogicVector2Builtin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin__get_IsAbstract (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59da7f0

bool CustomLogic_CustomLogicVector2Builtin__get_IsAbstract
               (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicVector2Builtin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin__get_IsStatic (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59da800

bool CustomLogic_CustomLogicVector2Builtin__get_IsStatic
               (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicVector2Builtin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin__get_InheritBaseMembers (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x59da810

bool CustomLogic_CustomLogicVector2Builtin__get_InheritBaseMembers
               (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  return true;
}


