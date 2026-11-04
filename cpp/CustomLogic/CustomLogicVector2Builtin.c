// Type: CustomLogic.CustomLogicVector2Builtin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicVector2Builtin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicVector2Builtin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ed95a0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  float fVar4;
  float fVar5;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345240 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_184345240 = '\x01';
  }
  local_res8[0] = 0;
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    if (Il2CppMethodInitialized_184345234 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345234 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
    return pCVar2;
  }
  if ((int)args->max_length != 1) {
    if ((int)args->max_length != 2) {
      NullCheck(args);
      local_res8[0] = (int32_t)args->max_length;
      pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
      str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicVector2Builtin constructor found that takes ");
      pSVar3 = System_String__Concat_1969b70(str0,pSVar3,str2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicVector2Builtin_Factory_CreateInstance);
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
      if (1 < (uint)args->max_length) {
        fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (args->m_Items[1],
                           (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        if (Il2CppMethodInitialized_184345236 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_184345236 = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
        (pCVar2->fields)._value.fields.x = fVar4;
        (pCVar2->fields)._value.fields.y = fVar5;
        return pCVar2;
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
  pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_184345235 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345235 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
  (pCVar2->fields)._value.fields.x = fVar4;
  (pCVar2->fields)._value.fields.y = fVar4;
  return pCVar2;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings___c___cctor (const MethodInfo* method);
// 0x181ee3be0

void CustomLogic_CustomLogicVector2Builtin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184345267 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    Il2CppMethodInitialized_184345267 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings___c___ctor (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicVector2Builtin_Bindings___c___ctor(CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Angle_b__15_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ede830

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Angle_b__15_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar4;
  Il2CppObject *pIVar5;
  MethodInfo *method_00;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184345268 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345268 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181edea26:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar5 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar5,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin
                       );
    if (1 < (uint)__a->max_length) {
      method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin;
      pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar4 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        fVar6 = (pCVar4->fields)._value.fields.y;
        fVar8 = (pCVar4->fields)._value.fields.x;
        fVar1 = (pCVar3->fields)._value.fields.x;
        fVar2 = (pCVar3->fields)._value.fields.y;
        if (Il2CppMethodInitialized_18433df28 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_18433df28 = '\x01';
        }
        fVar9 = (fVar6 * fVar6 + fVar8 * fVar8) * (fVar2 * fVar2 + fVar1 * fVar1);
        if (fVar9 < 1e-30) {
          local_res18[0] = 0.0;
        }
        else {
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          dVar7 = (double)fVar9;
          if (dVar7 < 0.0) {
            dVar7 = sqrt(dVar7);
          }
          else {
            dVar7 = SQRT(dVar7);
          }
          fVar8 = (fVar6 * fVar2 + fVar8 * fVar1) / (float)dVar7;
          fVar6 = -1.0;
          if ((-1.0 <= fVar8) && (fVar6 = 1.0, fVar8 <= 1.0)) {
            fVar6 = fVar8;
          }
          dVar7 = il2cpp_runtime_helper_1804f4750((double)fVar6,method_00);
          local_res18[0] = (float)dVar7 * 57.29578;
        }
        pIVar5 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar5;
      }
      goto label_181edea26;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__ClampMagnitude>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__ClampMagnitude_b__16_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edeb80

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__ClampMagnitude_b__16_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184345269 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345269 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181edecff:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if (1 < (uint)__a->max_length) {
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (pCVar1 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
        fVar4 = (pCVar1->fields)._value.fields.x;
        fVar5 = (pCVar1->fields)._value.fields.y;
        if (Il2CppMethodInitialized_184345287 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_184345287 = '\x01';
        }
        fVar6 = fVar5 * fVar5 + fVar4 * fVar4;
        if (fVar2 * fVar2 < fVar6) {
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          dVar3 = (double)fVar6;
          if (dVar3 < 0.0) {
            dVar3 = sqrt(dVar3);
          }
          else {
            dVar3 = SQRT(dVar3);
          }
          fVar4 = (fVar4 / (float)dVar3) * fVar2;
          fVar5 = (fVar5 / (float)dVar3) * fVar2;
        }
        value.fields.y = fVar5;
        value.fields.x = fVar4;
        pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar1;
      }
      goto label_181edecff;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Distance>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Distance_b__17_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edf230

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Distance_b__17_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar4;
  Il2CppObject *pIVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434526a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434526a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181edf3a2:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar5 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar5,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin
                       );
    if (1 < (uint)__a->max_length) {
      pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar4 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        fVar7 = (pCVar3->fields)._value.fields.y;
        fVar8 = (pCVar3->fields)._value.fields.x;
        fVar1 = (pCVar4->fields)._value.fields.x;
        fVar2 = (pCVar4->fields)._value.fields.y;
        if (Il2CppMethodInitialized_18433de5e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_18433de5e = '\x01';
        }
        fVar8 = fVar8 - fVar1;
        fVar7 = fVar7 - fVar2;
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        dVar6 = (double)(fVar7 * fVar7 + fVar8 * fVar8);
        if (dVar6 < 0.0) {
          dVar6 = sqrt(dVar6);
        }
        else {
          dVar6 = SQRT(dVar6);
        }
        local_res18[0] = (float)dVar6;
        pIVar5 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar5;
      }
      goto label_181edf3a2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Dot>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Dot_b__18_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edf3b0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Dot_b__18_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar2;
  Il2CppObject *pIVar3;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434526b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434526b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181edf47e:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar3,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin
                       );
    if (1 < (uint)__a->max_length) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar1 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar2 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        local_res18[0] =
             (pCVar2->fields)._value.fields.y * (pCVar1->fields)._value.fields.y +
             (pCVar2->fields)._value.fields.x * (pCVar1->fields)._value.fields.x;
        pIVar3 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar3;
      }
      goto label_181edf47e;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Lerp_b__19_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee0110

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Lerp_b__19_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppObject *obj;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_18434526c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434526c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
        if (2 < (uint)__a->max_length) {
          fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[2],
                             (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
          ;
          if ((pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
             (pCVar4 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
            fVar1 = (pCVar3->fields)._value.fields.x;
            fVar2 = (pCVar3->fields)._value.fields.y;
            if (fVar5 < 0.0) {
              fVar5 = 0.0;
            }
            else if (1.0 < fVar5) {
              fVar5 = 1.0;
            }
            value.fields.y = ((pCVar4->fields)._value.fields.y - fVar2) * fVar5 + fVar2;
            value.fields.x = ((pCVar4->fields)._value.fields.x - fVar1) * fVar5 + fVar1;
            pCVar3 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar3;
          }
          goto label_181ee0240;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181ee0240:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__20_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee04d0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__20_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppObject *obj;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_18434526d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434526d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
        if (2 < (uint)__a->max_length) {
          fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[2],
                             (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
          ;
          if ((pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
             (pCVar4 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
            fVar1 = (pCVar3->fields)._value.fields.x;
            fVar2 = (pCVar3->fields)._value.fields.y;
            value.fields.y = ((pCVar4->fields)._value.fields.y - fVar2) * fVar5 + fVar2;
            value.fields.x = ((pCVar4->fields)._value.fields.x - fVar1) * fVar5 + fVar1;
            pCVar3 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar3;
          }
          goto label_181ee05df;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181ee05df:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Max>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Max_b__21_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee0af0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Max_b__21_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *obj;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar2;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_18434526e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434526e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181ee0ba9:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if (1 < (uint)__a->max_length) {
      pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar2 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        fVar5 = (pCVar2->fields)._value.fields.x;
        fVar4 = (pCVar3->fields)._value.fields.x;
        if (fVar5 <= fVar4) {
          fVar5 = fVar4;
        }
        fVar4 = (pCVar2->fields)._value.fields.y;
        fVar1 = (pCVar3->fields)._value.fields.y;
        if (fVar4 <= fVar1) {
          fVar4 = fVar1;
        }
        value.fields.y = fVar4;
        value.fields.x = fVar5;
        pCVar2 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar2;
      }
      goto label_181ee0ba9;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Min>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Min_b__22_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee0bc0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Min_b__22_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *obj;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar2;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_18434526f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434526f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181ee0c79:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if (1 < (uint)__a->max_length) {
      pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar2 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        fVar5 = (pCVar2->fields)._value.fields.x;
        fVar4 = (pCVar3->fields)._value.fields.x;
        if (fVar4 <= fVar5) {
          fVar5 = fVar4;
        }
        fVar4 = (pCVar2->fields)._value.fields.y;
        fVar1 = (pCVar3->fields)._value.fields.y;
        if (fVar1 <= fVar4) {
          fVar4 = fVar1;
        }
        value.fields.y = fVar4;
        value.fields.x = fVar5;
        pCVar2 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar2;
      }
      goto label_181ee0c79;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__MoveTowards_b__23_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee0c90

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__MoveTowards_b__23_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppObject *obj;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_184345270 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345270 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181ee0ed7:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if ((1 < (uint)__a->max_length) &&
       (pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin),
       2 < (uint)__a->max_length)) {
      fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar4 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        fVar7 = (pCVar4->fields)._value.fields.x;
        fVar8 = (pCVar4->fields)._value.fields.y;
        fVar1 = (pCVar3->fields)._value.fields.x;
        fVar2 = (pCVar3->fields)._value.fields.y;
        if (Il2CppMethodInitialized_1843445ec == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_1843445ec = '\x01';
        }
        fVar10 = fVar7 - fVar1;
        fVar11 = fVar8 - fVar2;
        fVar9 = fVar11 * fVar11 + fVar10 * fVar10;
        if ((fVar9 != 0.0) && ((fVar5 < 0.0 || (fVar5 * fVar5 < fVar9)))) {
          if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          }
          dVar6 = (double)fVar9;
          if (dVar6 < 0.0) {
            dVar6 = sqrt(dVar6);
          }
          else {
            dVar6 = SQRT(dVar6);
          }
          fVar7 = (fVar10 / (float)dVar6) * fVar5 + fVar1;
          fVar8 = (fVar11 / (float)dVar6) * fVar5 + fVar2;
        }
        value.fields.y = fVar8;
        value.fields.x = fVar7;
        pCVar3 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar3;
      }
      goto label_181ee0ed7;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Reflect>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Reflect_b__24_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee1310

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Reflect_b__24_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  Il2CppObject *obj;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar5;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_184345271 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345271 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181ee13fe:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    if (1 < (uint)__a->max_length) {
      pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar5 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar6 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        fVar1 = (pCVar5->fields)._value.fields.x;
        fVar2 = (pCVar6->fields)._value.fields.x;
        fVar3 = (pCVar5->fields)._value.fields.y;
        fVar4 = (pCVar6->fields)._value.fields.y;
        fVar7 = (fVar3 * fVar4 + fVar1 * fVar2) * -2.0;
        value.fields.y = fVar4 * fVar7 + fVar3;
        value.fields.x = fVar7 * fVar2 + fVar1;
        pCVar5 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar5;
      }
      goto label_181ee13fe;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__SignedAngle>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__SignedAngle_b__25_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee1c70

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__SignedAngle_b__25_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar2;
  Il2CppObject *pIVar3;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184345272 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345272 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181ee1d52:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar3,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin
                       );
    if (1 < (uint)__a->max_length) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
      if ((pCVar1 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
         (pCVar2 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
        local_res18[0] =
             UnityEngine_Vector2__SignedAngle
                       ((UnityEngine_Vector2_o)(pCVar1->fields)._value.fields,
                        (UnityEngine_Vector2_o)(pCVar2->fields)._value.fields,(MethodInfo *)0x0);
        pIVar3 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar3;
      }
      goto label_181ee1d52;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__SmoothDamp>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__SmoothDamp_b__26_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee1fc0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__SmoothDamp_b__26_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar2;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  UnityEngine_Vector2_o value;
  float smoothTime;
  float maxSpeed;
  float deltaTime;
  UnityEngine_Vector2_o local_res18;
  UnityEngine_Vector2_Fields local_38 [6];
  
  if (Il2CppMethodInitialized_184345273 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345273 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin)
      ;
      if (1 < (uint)__a->max_length) {
        pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin);
        if (2 < (uint)__a->max_length) {
          pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[2],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector2Builtin)
          ;
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
              if (((pCVar1 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
                  (pCVar2 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) &&
                 (pCVar3 != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
                local_38[0] = (pCVar2->fields)._value.fields;
                local_res18.fields.x = (pCVar1->fields)._value.fields.x;
                local_res18.fields.y = (pCVar1->fields)._value.fields.y;
                deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
                value = UnityEngine_Vector2__SmoothDamp_2f0b1f0
                                  (&local_res18,(UnityEngine_Vector2_o *)local_38,&(pCVar3->fields)._value,
                                   smoothTime,maxSpeed,deltaTime,(MethodInfo *)0x0);
                pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
                return (Il2CppObject *)pCVar1;
              }
              goto label_181ee2179;
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181ee2179:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Set>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Set_b__27_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee19d0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Set_b__27_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float fVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_184345274 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345274 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181ee1a84:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (1 < (uint)__a->max_length) {
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
        (__c->fields)._value.fields.x = fVar1;
        (__c->fields)._value.fields.y = fVar2;
        return (Il2CppObject *)0x0;
      }
      goto label_181ee1a84;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding__Normalize>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Normalize_b__28_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee0ef0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding__Normalize_b__28_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    fVar1 = (float)il2cpp_runtime_helper_180562bc0(&(__c->fields)._value,0);
    if (1e-05 < fVar1) {
      fVar2 = (__c->fields)._value.fields.y / fVar1;
      fVar1 = (__c->fields)._value.fields.x / fVar1;
    }
    else {
      fVar2 = 0.0;
      fVar1 = 0.0;
    }
    (__c->fields)._value.fields.x = fVar1;
    (__c->fields)._value.fields.y = fVar2;
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Copy___b__29_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee28b0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Copy___b__29_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    pIVar1 = (*(__c->klass->vtable)._19___Copy__.methodPtr)(__c,(__c->klass->vtable)._19___Copy__.method);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Add__>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Add___b__30_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2570

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Add___b__30_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  byte bVar3;
  Il2CppObject *lhs;
  Il2CppObject *rhs;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      lhs = __a->m_Items[0];
      rhs = __a->m_Items[1];
      if (Il2CppMethodInitialized_184345239 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        Il2CppMethodInitialized_184345239 = '\x01';
      }
      if (lhs != (Il2CppObject *)0x0) {
        bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
        if (((bVar3 <= (lhs->klass->_2).typeHierarchyDepth) &&
            ((lhs->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) && (rhs != (Il2CppObject *)0x0))
        {
          bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
          if ((bVar3 <= (rhs->klass->_2).typeHierarchyDepth) &&
             ((rhs->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
            pIVar1 = lhs[3].klass;
            pIVar2 = rhs[3].klass;
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
            value.fields.y = (float)((ulonglong)pIVar2 >> 0x20) + (float)((ulonglong)pIVar1 >> 0x20);
            value.fields.x = SUB84(pIVar2,0) + SUB84(pIVar1,0);
            CustomLogic_CustomLogicVector2Builtin___ctor_1ed51c0(__this_00,value,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_00;
          }
        }
      }
      operatorName = il2cpp_codegen_get_runtime_metadata(&"__Add__");
      ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,lhs,rhs,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Add);
      il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Sub__>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Sub___b__31_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee32d0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Sub___b__31_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  byte bVar3;
  Il2CppObject *lhs;
  Il2CppObject *rhs;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      lhs = __a->m_Items[0];
      rhs = __a->m_Items[1];
      if (Il2CppMethodInitialized_18434523a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        Il2CppMethodInitialized_18434523a = '\x01';
      }
      if (lhs != (Il2CppObject *)0x0) {
        bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
        if (((bVar3 <= (lhs->klass->_2).typeHierarchyDepth) &&
            ((lhs->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) && (rhs != (Il2CppObject *)0x0))
        {
          bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
          if ((bVar3 <= (rhs->klass->_2).typeHierarchyDepth) &&
             ((rhs->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
            pIVar1 = rhs[3].klass;
            pIVar2 = lhs[3].klass;
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
            value.fields.y = (float)((ulonglong)pIVar2 >> 0x20) - (float)((ulonglong)pIVar1 >> 0x20);
            value.fields.x = SUB84(pIVar2,0) - SUB84(pIVar1,0);
            CustomLogic_CustomLogicVector2Builtin___ctor_1ed51c0(__this_00,value,(MethodInfo *)0x0);
            return (Il2CppObject *)__this_00;
          }
        }
      }
      operatorName = il2cpp_codegen_get_runtime_metadata(&"__Sub__");
      ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,lhs,rhs,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Sub);
      il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Mul___b__32_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee3230

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Mul___b__32_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicVector2Builtin____Mul__
                         (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Div__>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Div___b__33_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2950

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Div___b__33_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *rhs;
  Il2CppObject *lhs;
  UnityEngine_Vector2_o value;
  Il2CppObject *pIVar2;
  float *pfVar3;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  float fVar4;
  float fVar5;
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
      rhs = __a->m_Items[1];
      lhs = __a->m_Items[0];
      if (Il2CppMethodInitialized_18434523c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        Il2CppMethodInitialized_18434523c = '\x01';
      }
      if (lhs != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
        if (((bVar1 <= (lhs->klass->_2).typeHierarchyDepth) &&
            ((lhs->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
             (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) && (rhs != (Il2CppObject *)0x0))
        {
          bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
          if (((rhs->klass->_2).typeHierarchyDepth < bVar1) ||
             ((rhs->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
            pIVar2 = (Il2CppObject *)0x0;
            if (rhs->klass == g_data_184354e38) {
              pIVar2 = rhs;
            }
            if (pIVar2 == (Il2CppObject *)0x0) goto label_181ee2ac6;
            if ((rhs->klass->_1).element_class != (g_data_184354e38->_1).element_class) {
              il2cpp_codegen_raise_invalid_cast_exception(rhs,g_data_184354e38);
            }
            pfVar3 = il2cpp_object_unbox(rhs);
            fVar5 = *(float *)&lhs[3].klass / *pfVar3;
            fVar4 = *(float *)((longlong)&lhs[3].klass + 4) / *pfVar3;
          }
          else {
            fVar5 = *(float *)&lhs[3].klass / *(float *)&rhs[3].klass;
            fVar4 = *(float *)((longlong)&lhs[3].klass + 4) / *(float *)((longlong)&rhs[3].klass + 4);
          }
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)
          ;
          value.fields.y = fVar4;
          value.fields.x = fVar5;
          CustomLogic_CustomLogicVector2Builtin___ctor_1ed51c0(__this_00,value,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_00;
        }
      }
label_181ee2ac6:
      operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
      ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,lhs,rhs,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Div);
      il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Eq___b__34_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2d60

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Eq___b__34_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *pIVar3;
  float fVar4;
  float fVar5;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
label_181ee2e6d:
    ThrowNullReferenceException();
  }
  if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
    ThrowIndexOutOfRangeException();
  }
  if (__c == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) goto label_181ee2e6d;
  pIVar3 = __a->m_Items[0];
  pIVar2 = __a->m_Items[1];
  if (Il2CppMethodInitialized_18434523d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_18434523d = '\x01';
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if (((bVar1 <= (pIVar3->klass->_2).typeHierarchyDepth) &&
        ((pIVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) && (pIVar2 != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar2->klass->_2).typeHierarchyDepth) &&
         ((pIVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
        fVar4 = *(float *)&pIVar3[3].klass - *(float *)&pIVar2[3].klass;
        fVar5 = *(float *)((longlong)&pIVar3[3].klass + 4) - *(float *)((longlong)&pIVar2[3].klass + 4);
        local_res18[0] = fVar5 * fVar5 + fVar4 * fVar4 < 9.9999994e-11;
        goto label_181ee2e49;
      }
    }
  }
  local_res18[0] = false;
label_181ee2e49:
  pIVar3 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar3;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Hash___b__35_0 (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o* __this, CustomLogic_CustomLogicVector2Builtin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee3130

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings___c_____CreateMethodBinding____Hash___b__35_0
          (CustomLogic_CustomLogicVector2Builtin_Bindings___c_o *__this,
          CustomLogic_CustomLogicVector2Builtin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  uint local_res10 [6];
  
  if (__c != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    uVar1 = System_Single__GetHashCode((float *)&(__c->fields)._value,(MethodInfo *)0x0);
    iVar2 = System_Single__GetHashCode(&(__c->fields)._value.fields.y,(MethodInfo *)0x0);
    local_res10[0] = iVar2 << 2 ^ uVar1;
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicVector2Builtin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ebf980

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicVector2Builtin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_01;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_02;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_03;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_04;
  MethodInfo *pMVar5;
  System_Func_CustomLogicVector2Builtin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184345241 == '\0') {
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
    Il2CppMethodInitialized_184345241 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x792a6492) {
    if (uVar3 < 0x2e9445f8) {
      if (uVar3 < 0x1cb1b190) {
        if (uVar3 < 0xdc1f3cd) {
          if (uVar3 != 0xb9c3383) {
            if (uVar3 != 0xdc1f3cc) goto label_181ec1c59;
            bVar2 = System_String__op_Equality(name,"__Add__",(MethodInfo *)0x0);
            if (!bVar2) goto label_181ec1c59;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            if (Il2CppMethodInitialized_18434525e == '\0') {
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
              Il2CppMethodInitialized_18434525e = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__30_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Add___b__30_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__30_0 =
                 (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__30_0;
            goto label_181ec1c1d;
          }
          bVar2 = System_String__op_Equality(name,"Zero",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345247 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_7_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object)
            ;
            Il2CppMethodInitialized_184345247 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_7_0
          ;
        }
        else {
          if (uVar3 == 0x18c37b41) {
            bVar2 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0);
            if (!bVar2) goto label_181ec1c59;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            if (Il2CppMethodInitialized_184345260 == '\0') {
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
              Il2CppMethodInitialized_184345260 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__32_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Mul___b__32_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__32_0 =
                 (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__32_0;
            goto label_181ec1c1d;
          }
          if (uVar3 != 0x1cb1b18f) goto label_181ec1c59;
          bVar2 = System_String__op_Equality(name,"One",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345248 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__One_g____getter_8_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object)
            ;
            Il2CppMethodInitialized_184345248 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__One_g____getter_8_0
          ;
        }
        goto label_181ebfc0e;
      }
      if (uVar3 < 0x21ed379b) {
        if (uVar3 == 0x1e9e9f85) {
          bVar2 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_18434524c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Right_g____getter_12_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object)
            ;
            Il2CppMethodInitialized_18434524c = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Right_g____getter_12_0
          ;
          goto label_181ebfc0e;
        }
        if (uVar3 != 0x21ed379a) goto label_181ec1c59;
        bVar2 = System_String__op_Equality(name,"ClampMagnitude",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_184345250 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          Il2CppMethodInitialized_184345250 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__16_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__ClampMagnitude_b__16_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__16_0 =
             (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__16_0;
      }
      else if (uVar3 == 0x28b19ea3) {
        bVar2 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_18434525b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Set_b__27_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          Il2CppMethodInitialized_18434525b = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__27_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Set_b__27_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__27_0 =
             (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__27_0;
      }
      else {
        if (uVar3 != 0x2e9445f7) goto label_181ec1c59;
        bVar2 = System_String__op_Equality(name,"Min",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_184345256 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Min_b__22_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          Il2CppMethodInitialized_184345256 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__22_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Min_b__22_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__22_0 =
             (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__22_0;
      }
    }
    else if (uVar3 < 0x42f35941) {
      if (uVar3 < 0x39c493b9) {
        if (uVar3 == 0x386d9fc0) {
          bVar2 = System_String__op_Equality(name,"Dot",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345252 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Dot_b__18_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            Il2CppMethodInitialized_184345252 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__18_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Dot_b__18_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__18_0 =
               (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__18_0
          ;
        }
        else {
          if (uVar3 != 0x39c493b8) goto label_181ec1c59;
          bVar2 = System_String__op_Equality(name,"Angle",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_18434524f == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            Il2CppMethodInitialized_18434524f = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__15_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Angle_b__15_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__15_0 =
               (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__15_0
          ;
        }
      }
      else {
        if (uVar3 != 0x3ca7e3b9) {
          if (uVar3 != 0x42f35940) goto label_181ec1c59;
          bVar2 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345249 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Up_g____getter_9_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object)
            ;
            Il2CppMethodInitialized_184345249 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Up_g____getter_9_0
          ;
          goto label_181ebfc0e;
        }
        bVar2 = System_String__op_Equality(name,"Max",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_184345255 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Max_b__21_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          Il2CppMethodInitialized_184345255 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__21_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Max_b__21_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__21_0 =
             (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__21_0;
      }
    }
    else if (uVar3 < 0x4adde30d) {
      if (uVar3 == 0x434cfcb8) {
        bVar2 = System_String__op_Equality(name,"Normalized",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_184345244 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_4
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          Il2CppMethodInitialized_184345244 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_4
        ;
        goto label_181ebfc0e;
      }
      if (uVar3 != 0x4adde30c) goto label_181ec1c59;
      bVar2 = System_String__op_Equality(name,"Normalize",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec1c59;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
      }
      if (Il2CppMethodInitialized_18434525c == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)
        ;
        Il2CppMethodInitialized_18434525c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__28_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object
                            );
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Normalize_b__28_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__28_0 =
           (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__28_0;
    }
    else if (uVar3 == 0x549f4d10) {
      bVar2 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec1c59;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
      }
      if (Il2CppMethodInitialized_18434525d == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)
        ;
        Il2CppMethodInitialized_18434525d = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__29_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object
                            );
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Copy___b__29_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__29_0 =
           (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__29_0;
    }
    else if (uVar3 == 0x74ee9015) {
      bVar2 = System_String__op_Equality(name,"SmoothDamp",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec1c59;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
      }
      if (Il2CppMethodInitialized_18434525a == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)
        ;
        Il2CppMethodInitialized_18434525a = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__26_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object
                            );
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__SmoothDamp_b__26_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__26_0 =
           (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__26_0;
    }
    else {
      if (uVar3 != 0x792a6491) goto label_181ec1c59;
      bVar2 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec1c59;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
      }
      if (Il2CppMethodInitialized_184345263 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)
        ;
        Il2CppMethodInitialized_184345263 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__35_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object
                            );
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Hash___b__35_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__35_0 =
           (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__35_0;
    }
  }
  else {
    if (uVar3 < 0xc370544b) {
      if (uVar3 < 0x9e956089) {
        if (uVar3 < 0x91efe6d8) {
          if (uVar3 != 0x7bdb45c1) {
            if (uVar3 != 0x91efe6d7) goto label_181ec1c59;
            bVar2 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
            if (!bVar2) goto label_181ec1c59;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            if (Il2CppMethodInitialized_184345262 == '\0') {
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
              Il2CppMethodInitialized_184345262 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__34_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Eq___b__34_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__34_0 =
                 (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__34_0;
            goto label_181ec1c1d;
          }
          bVar2 = System_String__op_Equality(name,"SqrMagnitude",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345246 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object)
            ;
            Il2CppMethodInitialized_184345246 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
          ;
        }
        else {
          if (uVar3 != 0x92773890) {
            if (uVar3 != 0x9e956088) goto label_181ec1c59;
            bVar2 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
            if (!bVar2) goto label_181ec1c59;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
            }
            if (Il2CppMethodInitialized_184345253 == '\0') {
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
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
              Il2CppMethodInitialized_184345253 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            }
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__19_0;
            if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
            if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
            __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
            System_Func_object__object__object____ctor
                      (__this_01,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Lerp_b__19_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__19_0 =
                 (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
            targetAddress =
                 &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__19_0;
            goto label_181ec1c1d;
          }
          bVar2 = System_String__op_Equality(name,"Left",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_18434524b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Left_g____getter_11_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object)
            ;
            Il2CppMethodInitialized_18434524b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Left_g____getter_11_0
          ;
        }
      }
      else if (uVar3 < 0xacfe0069) {
        if (uVar3 != 0xa4995035) {
          if (uVar3 != 0xacfe0068) goto label_181ec1c59;
          bVar2 = System_String__op_Equality(name,"MoveTowards",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345257 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            Il2CppMethodInitialized_184345257 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__23_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__MoveTowards_b__23_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__23_0 =
               (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__23_0
          ;
          goto label_181ec1c1d;
        }
        bVar2 = System_String__op_Equality(name,"Down",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_18434524a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Down_g____getter_10_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          Il2CppMethodInitialized_18434524a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Down_g____getter_10_0
        ;
      }
      else {
        if (uVar3 != 0xb127a615) {
          if (uVar3 != 0xc370544a) goto label_181ec1c59;
          bVar2 = System_String__op_Equality(name,"Reflect",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345258 == '\0') {
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
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
            Il2CppMethodInitialized_184345258 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          }
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__24_0;
          if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
          __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this_01,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Reflect_b__24_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__24_0 =
               (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__24_0
          ;
          goto label_181ec1c1d;
        }
        bVar2 = System_String__op_Equality(name,"Magnitude",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_184345245 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_5
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          Il2CppMethodInitialized_184345245 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_5
        ;
      }
label_181ebfc0e:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
      __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
label_181ebff6a:
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)__this_02,
                 (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor
                );
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
    if (uVar3 < 0xdc0c1c95) {
      if (uVar3 < 0xd6c0fe1b) {
        if (uVar3 != 0xd3d96082) {
          if (uVar3 != 0xd6c0fe1a) goto label_181ec1c59;
          bVar2 = System_String__op_Equality(name,"PositiveInfinity",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_18434524e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object)
            ;
            Il2CppMethodInitialized_18434524e = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
          ;
          goto label_181ebfc0e;
        }
        bVar2 = System_String__op_Equality(name,"Distance",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_184345251 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          Il2CppMethodInitialized_184345251 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__17_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Distance_b__17_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__17_0 =
             (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__17_0;
      }
      else {
        if (uVar3 != 0xd7cecb55) {
          if (uVar3 != 0xdc0c1c94) goto label_181ec1c59;
          bVar2 = System_String__op_Equality(name,"Y",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ec1c59;
          if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
          }
          if (Il2CppMethodInitialized_184345243 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicVector2Builtin_object);
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
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object)
            ;
            Il2CppMethodInitialized_184345243 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector2Builtin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
          ;
          goto label_181ebff48;
        }
        bVar2 = System_String__op_Equality(name,"__Sub__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_18434525f == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          Il2CppMethodInitialized_18434525f = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__31_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Sub___b__31_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__31_0 =
             (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__31_0;
      }
    }
    else if (uVar3 < 0xdfeb0949) {
      if (uVar3 == 0xdd0c1e27) {
        bVar2 = System_String__op_Equality(name,"X",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_184345242 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicVector2Builtin_object)
          ;
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
          Il2CppMethodInitialized_184345242 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__X_g____getter_2_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_02 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector2Builtin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__X_g____setter_2_1;
label_181ebff48:
        System_Action_object__object____ctor
                  (__this_02,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin
                              );
        goto label_181ebff6a;
      }
      if (uVar3 != 0xdfeb0948) {
label_181ec1c59:
        pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicVector2Builtin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_04 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_04,pSVar4,(MethodInfo *)0x0);
        pMVar5 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_04,pMVar5);
      }
      bVar2 = System_String__op_Equality(name,"SignedAngle",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ec1c59;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
      }
      if (Il2CppMethodInitialized_184345259 == '\0') {
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
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c)
        ;
        Il2CppMethodInitialized_184345259 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      }
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__25_0;
      if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
      if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
      __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object
                            );
      System_Func_object__object__object____ctor
                (__this_01,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__SignedAngle_b__25_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__25_0 =
           (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__25_0;
    }
    else {
      if (uVar3 == 0xe0993ada) {
        bVar2 = System_String__op_Equality(name,"NegativeInfinity",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_18434524d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
          Il2CppMethodInitialized_18434524d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
        ;
        goto label_181ebfc0e;
      }
      if (uVar3 == 0xf4248f7b) {
        bVar2 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_184345254 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          Il2CppMethodInitialized_184345254 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__20_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__20_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__20_0 =
             (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__20_0;
      }
      else {
        if (uVar3 != 0xff76b6dc) goto label_181ec1c59;
        bVar2 = System_String__op_Equality(name,"__Div__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ec1c59;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings);
        }
        if (Il2CppMethodInitialized_184345261 == '\0') {
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
          Il2CppMethodInitialized_184345261 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__33_0;
        if (__this_01 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ec1c25;
        if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9
        ;
        __this_01 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_01,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Div___b__33_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__33_0 =
             (System_Func_CustomLogicVector2Builtin__object____object__o *)__this_01;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__33_0;
      }
    }
  }
label_181ec1c1d:
  Il2CppCodeGenWriteBarrier(targetAddress,__this_01);
label_181ec1c25:
  __this_03 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_03,(System_String_o *)__this_01,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_03;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__X
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__X (const MethodInfo* method);
// 0x181ecbaf0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__X(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  System_Action_CustomLogicVector2Builtin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345242 == '\0') {
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
    Il2CppMethodInitialized_184345242 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__X_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector2Builtin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__X_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Y
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Y (const MethodInfo* method);
// 0x181ecbbe0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Y(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  System_Action_CustomLogicVector2Builtin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345243 == '\0') {
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
    Il2CppMethodInitialized_184345243 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Y_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicVector2Builtin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Y_g____setter_3_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Normalized
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Normalized (const MethodInfo* method);
// 0x181ecb320

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Normalized(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345244 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_4
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_184345244 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Normalized_g____getter_4
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Magnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Magnitude (const MethodInfo* method);
// 0x181ecb140

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Magnitude(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345245 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_184345245 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Magnitude_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__SqrMagnitude
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__SqrMagnitude (const MethodInfo* method);
// 0x181ecb730

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__SqrMagnitude(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345246 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_184345246 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__SqrMagnitude_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Zero
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Zero (const MethodInfo* method);
// 0x181ecbeb0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Zero(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345247 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_184345247 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Zero_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__One
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__One (const MethodInfo* method);
// 0x181ecb3c0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__One(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345248 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__One_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_184345248 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__One_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x181ecb7d0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345249 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Up_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_184345249 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Up_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Down
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Down (const MethodInfo* method);
// 0x181ecaba0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Down(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434524a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Down_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_18434524a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Down_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Left
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Left (const MethodInfo* method);
// 0x181ecb0a0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Left(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434524b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Left_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_18434524b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Left_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x181ecb690

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434524c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Right_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_18434524c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__Right_g____getter_12_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__NegativeInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__NegativeInfinity (const MethodInfo* method);
// 0x181ecb1e0

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__NegativeInfinity(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434524d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_18434524d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__NegativeInfinity_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreatePropertyBinding__PositiveInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__PositiveInfinity (const MethodInfo* method);
// 0x181ecb500

CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreatePropertyBinding__PositiveInfinity(MethodInfo *method)

{
  System_Func_CustomLogicVector2Builtin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434524e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicVector2Builtin_object);
    Il2CppMethodInitialized_18434524e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings___CreatePropertyBinding__PositiveInfinity_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicVector2Builtin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Angle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Angle (const MethodInfo* method);
// 0x181ec4950

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Angle(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434524f == '\0') {
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
    Il2CppMethodInitialized_18434524f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Angle_b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__ClampMagnitude
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__ClampMagnitude (const MethodInfo* method);
// 0x181ec4b90

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__ClampMagnitude(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345250 == '\0') {
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
    Il2CppMethodInitialized_184345250 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__ClampMagnitude_b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Distance
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Distance (const MethodInfo* method);
// 0x181ec55c0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Distance(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345251 == '\0') {
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
    Il2CppMethodInitialized_184345251 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Distance_b__17_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__17_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Dot
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Dot (const MethodInfo* method);
// 0x181ec56e0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Dot(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345252 == '\0') {
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
    Il2CppMethodInitialized_184345252 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__18_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Dot_b__18_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__18_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x181ec6a00

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345253 == '\0') {
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
    Il2CppMethodInitialized_184345253 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__19_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Lerp_b__19_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__19_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__19_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x181ec67c0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__LerpUnclamped(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345254 == '\0') {
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
    Il2CppMethodInitialized_184345254 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__20_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__20_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__20_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__20_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Max
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Max (const MethodInfo* method);
// 0x181ec6e80

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Max(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345255 == '\0') {
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
    Il2CppMethodInitialized_184345255 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__21_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Max_b__21_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__21_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__21_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Min
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Min (const MethodInfo* method);
// 0x181ec6fa0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Min(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345256 == '\0') {
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
    Il2CppMethodInitialized_184345256 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__22_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Min_b__22_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__22_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__22_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__MoveTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__MoveTowards (const MethodInfo* method);
// 0x181ec70c0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__MoveTowards(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345257 == '\0') {
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
    Il2CppMethodInitialized_184345257 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__23_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__MoveTowards_b__23_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__23_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__23_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Reflect
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Reflect (const MethodInfo* method);
// 0x181ec7660

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Reflect(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345258 == '\0') {
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
    Il2CppMethodInitialized_184345258 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__24_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Reflect_b__24_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__24_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__24_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__SignedAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SignedAngle (const MethodInfo* method);
// 0x181ec81a0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SignedAngle(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345259 == '\0') {
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
    Il2CppMethodInitialized_184345259 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__25_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__SignedAngle_b__25_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__25_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__25_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__SmoothDamp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SmoothDamp (const MethodInfo* method);
// 0x181ec8500

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__SmoothDamp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434525a == '\0') {
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
    Il2CppMethodInitialized_18434525a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__26_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__SmoothDamp_b__26_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__26_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__26_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x181ec7e40

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434525b == '\0') {
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
    Il2CppMethodInitialized_18434525b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__27_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Set_b__27_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__27_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__27_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding__Normalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Normalize (const MethodInfo* method);
// 0x181ec71e0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding__Normalize(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434525c == '\0') {
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
    Il2CppMethodInitialized_18434525c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__28_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding__Normalize_b__28_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__28_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__28_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x181ec9290

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434525d == '\0') {
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
    Il2CppMethodInitialized_18434525d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__29_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Copy___b__29_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__29_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__29_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Add__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Add__ (const MethodInfo* method);
// 0x181ec8ce0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Add__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434525e == '\0') {
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
    Il2CppMethodInitialized_18434525e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__30_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Add___b__30_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__30_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__30_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Sub__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Sub__ (const MethodInfo* method);
// 0x181eca4d0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Sub__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434525f == '\0') {
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
    Il2CppMethodInitialized_18434525f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__31_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Sub___b__31_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__31_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__31_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x181eca040

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Mul__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345260 == '\0') {
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
    Il2CppMethodInitialized_184345260 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__32_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Mul___b__32_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__32_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__32_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Div__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Div__ (const MethodInfo* method);
// 0x181ec94d0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Div__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345261 == '\0') {
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
    Il2CppMethodInitialized_184345261 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__33_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Div___b__33_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__33_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__33_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x181ec9960

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345262 == '\0') {
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
    Il2CppMethodInitialized_184345262 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__34_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Eq___b__34_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__34_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__34_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o* CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x181ec9bb0

CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *
CustomLogic_CustomLogicVector2Builtin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345263 == '\0') {
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
    Il2CppMethodInitialized_184345263 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__35_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicVector2Builtin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c___CreateMethodBinding____Hash___b__35_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__35_0 =
         (System_Func_CustomLogicVector2Builtin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings_c->static_fields->__9__35_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicVector2Builtin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicVector2Builtin__o *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings___cctor (const MethodInfo* method);
// 0x181eccf60

void CustomLogic_CustomLogicVector2Builtin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345264 == '\0') {
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
    Il2CppMethodInitialized_184345264 = '\x01';
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
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reflect",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SignedAngle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SmoothDamp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Normalize",
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
    TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicVector2Builtin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__X_g____getter_2_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec42d0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__X_g____getter_2_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    local_res8[0] = (__i->fields)._value.fields.x;
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__X_g____setter_2_1 (CustomLogic_CustomLogicVector2Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ec4380

void CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__X_g____setter_2_1
               (CustomLogic_CustomLogicVector2Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_184345265 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345265 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    (__i->fields)._value.fields.x = fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec3a70

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    local_res8[0] = (__i->fields)._value.fields.y;
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1 (CustomLogic_CustomLogicVector2Builtin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ec4400

void CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1
               (CustomLogic_CustomLogicVector2Builtin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_184345266 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345266 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    (__i->fields)._value.fields.y = fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Normalized>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Normalized_g____getter_4_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec3f50

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Normalized_g____getter_4_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    value = UnityEngine_Vector2__Normalize(&(__i->fields)._value,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Magnitude>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Magnitude_g____getter_5_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec3ea0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Magnitude_g____getter_5_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    local_res8[0] = il2cpp_runtime_helper_180562bc0(&(__i->fields)._value,0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__SqrMagnitude>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__SqrMagnitude_g____getter_6_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec4150

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__SqrMagnitude_g____getter_6_0
          (CustomLogic_CustomLogicVector2Builtin_o *__i,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Il2CppObject *pIVar3;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    fVar1 = (__i->fields)._value.fields.y;
    fVar2 = (__i->fields)._value.fields.x;
    local_res8[0] = fVar1 * fVar1 + fVar2 * fVar2;
    pIVar3 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Zero>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Zero_g____getter_7_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec45b0

Il2CppObject*
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Zero_g____getter_7_0(CustomLogic_CustomLogicVector2Builtin_o* __i, MethodInfo* method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__One>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__One_g____getter_8_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec3f80

Il2CppObject*
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__One_g____getter_8_0(CustomLogic_CustomLogicVector2Builtin_o* __i, MethodInfo* method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184341f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f36 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Up>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Up_g____getter_9_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec41a0

Il2CppObject*
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Up_g____getter_9_0(CustomLogic_CustomLogicVector2Builtin_o* __i, MethodInfo* method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184341707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341707 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Down>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Down_g____getter_10_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec3aa0

Il2CppObject*
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Down_g____getter_10_0(CustomLogic_CustomLogicVector2Builtin_o* __i, MethodInfo* method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184341f38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f38 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->downVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Left>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Left_g____getter_11_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec3e50

Il2CppObject*
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Left_g____getter_11_0(CustomLogic_CustomLogicVector2Builtin_o* __i, MethodInfo* method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184341f39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f39 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->leftVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__Right>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Right_g____getter_12_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec4100

Il2CppObject*
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__Right_g____getter_12_0(CustomLogic_CustomLogicVector2Builtin_o* __i, MethodInfo* method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_18433df27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433df27 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->rightVector).fields
                      ,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_13_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec3ee0

Il2CppObject*
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_13_0(CustomLogic_CustomLogicVector2Builtin_o* __i, MethodInfo* method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184341266 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341266 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)
                      (TypeInfo_UnityEngine_Vector2->static_fields->negativeInfinityVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin.Bindings$$<__CreatePropertyBinding__PositiveInfinity>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__PositiveInfinity_g____getter_14_0 (CustomLogic_CustomLogicVector2Builtin_o* __i, const MethodInfo* method);
// 0x181ec3ff0

Il2CppObject*
CustomLogic_CustomLogicVector2Builtin_Bindings_____CreatePropertyBinding__PositiveInfinity_g____getter_14_0(CustomLogic_CustomLogicVector2Builtin_o* __i, MethodInfo* method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184345286 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184345286 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)
                      (TypeInfo_UnityEngine_Vector2->static_fields->positiveInfinityVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin___ctor (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x181ed5090

void CustomLogic_CustomLogicVector2Builtin___ctor
               (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345234 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345234 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$.ctor
// il2cpp: void CustomLogic_CustomLogicVector2Builtin___ctor (CustomLogic_CustomLogicVector2Builtin_o* __this, float xy, const MethodInfo* method);
// 0x181ed5150

void CustomLogic_CustomLogicVector2Builtin___ctor_1ed5150
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float xy,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345235 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345235 = '\x01';
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
// 0x181ed50e0

void CustomLogic_CustomLogicVector2Builtin___ctor_1ed50e0
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float x,float y,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345236 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345236 = '\x01';
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
// 0x181ed51c0

void CustomLogic_CustomLogicVector2Builtin___ctor_1ed51c0
               (CustomLogic_CustomLogicVector2Builtin_o *__this,UnityEngine_Vector2_o value,MethodInfo *method
               )

{
  if (Il2CppMethodInitialized_184345237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345237 = '\x01';
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
// 0x180584c90

float
CustomLogic_CustomLogicVector2Builtin__get_X(CustomLogic_CustomLogicVector2Builtin_o* __this, MethodInfo* method)

{
  return (__this->fields)._time_k__BackingField;
}


// CustomLogic.CustomLogicVector2Builtin$$set_X
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__set_X (CustomLogic_CustomLogicVector2Builtin_o* __this, float value, const MethodInfo* method);
// 0x180584cb0

void
CustomLogic_CustomLogicVector2Builtin__set_X(CustomLogic_CustomLogicVector2Builtin_o* __this, float value, MethodInfo* method)

{
  (__this->fields).m_MeanLine = value;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Y
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__get_Y (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x1816ef890

float
CustomLogic_CustomLogicVector2Builtin__get_Y(CustomLogic_CustomLogicVector2Builtin_o* __this, MethodInfo* method)

{
  return (__this->fields).m_FlexibleWidth;
}


// CustomLogic.CustomLogicVector2Builtin$$set_Y
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__set_Y (CustomLogic_CustomLogicVector2Builtin_o* __this, float value, const MethodInfo* method);
// 0x1816ef940

void
CustomLogic_CustomLogicVector2Builtin__set_Y(CustomLogic_CustomLogicVector2Builtin_o* __this, float value, MethodInfo* method)

{
  *(float *)&(__this->fields).field_0x24 = value;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Normalized
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Normalized (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x181ed5260

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_Normalized
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  value = UnityEngine_Vector2__Normalize(&(__this->fields)._value,(MethodInfo *)0x0);
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Magnitude
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__get_Magnitude (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x181ed5250

float CustomLogic_CustomLogicVector2Builtin__get_Magnitude
                (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_180562bc0(&(__this->fields)._value,0);
  return fVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$get_SqrMagnitude
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__get_SqrMagnitude (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x181ed5280

float CustomLogic_CustomLogicVector2Builtin__get_SqrMagnitude
                (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (__this->fields)._value.fields.y;
  fVar2 = (__this->fields)._value.fields.x;
  return fVar1 * fVar1 + fVar2 * fVar2;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Zero
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Zero (const MethodInfo* method);
// 0x181ec45b0

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_Zero(MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$get_One
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_One (const MethodInfo* method);
// 0x181ec3f80

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_One(MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184341f36 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f36 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Up (const MethodInfo* method);
// 0x181ec41a0

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_Up(MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184341707 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341707 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->upVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Down
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Down (const MethodInfo* method);
// 0x181ec3aa0

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_Down(MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184341f38 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f38 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->downVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Left
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Left (const MethodInfo* method);
// 0x181ec3e50

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_Left(MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184341f39 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341f39 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->leftVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_Right (const MethodInfo* method);
// 0x181ec4100

CustomLogic_CustomLogicVector2Builtin_o * CustomLogic_CustomLogicVector2Builtin__get_Right(MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_18433df27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433df27 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->rightVector).fields
                      ,(MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$get_NegativeInfinity
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_NegativeInfinity (const MethodInfo* method);
// 0x181ec3ee0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_NegativeInfinity(MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184341266 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184341266 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)
                      (TypeInfo_UnityEngine_Vector2->static_fields->negativeInfinityVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$get_PositiveInfinity
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__get_PositiveInfinity (const MethodInfo* method);
// 0x181ec3ff0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__get_PositiveInfinity(MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_184345286 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_184345286 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0
                     ((UnityEngine_Vector2_o)
                      (TypeInfo_UnityEngine_Vector2->static_fields->positiveInfinityVector).fields,
                      (MethodInfo *)0x0);
  return pCVar1;
}


// CustomLogic.CustomLogicVector2Builtin$$Angle
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__Angle (CustomLogic_CustomLogicVector2Builtin_o* from, CustomLogic_CustomLogicVector2Builtin_o* to, const MethodInfo* method);
// 0x181ed4020

float CustomLogic_CustomLogicVector2Builtin__Angle
                (CustomLogic_CustomLogicVector2Builtin_o *from,CustomLogic_CustomLogicVector2Builtin_o *to,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  if ((from != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (to != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    fVar3 = (to->fields)._value.fields.y;
    fVar5 = (to->fields)._value.fields.x;
    fVar1 = (from->fields)._value.fields.x;
    fVar2 = (from->fields)._value.fields.y;
    if (Il2CppMethodInitialized_18433df28 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_18433df28 = '\x01';
    }
    fVar6 = (fVar3 * fVar3 + fVar5 * fVar5) * (fVar2 * fVar2 + fVar1 * fVar1);
    if (fVar6 < 1e-30) {
      fVar3 = 0.0;
    }
    else {
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar4 = (double)fVar6;
      if (dVar4 < 0.0) {
        dVar4 = sqrt(dVar4);
      }
      else {
        dVar4 = SQRT(dVar4);
      }
      fVar5 = (fVar3 * fVar2 + fVar5 * fVar1) / (float)dVar4;
      fVar3 = -1.0;
      if ((-1.0 <= fVar5) && (fVar3 = 1.0, fVar5 <= 1.0)) {
        fVar3 = fVar5;
      }
      dVar4 = il2cpp_runtime_helper_1804f4750((double)fVar3,(MethodInfo *)to);
      fVar3 = (float)dVar4 * 57.29578;
    }
    return fVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$ClampMagnitude
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__ClampMagnitude (CustomLogic_CustomLogicVector2Builtin_o* vector, float maxLength, const MethodInfo* method);
// 0x181ed4170

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__ClampMagnitude
          (CustomLogic_CustomLogicVector2Builtin_o *vector,float maxLength,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (vector != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    fVar3 = (vector->fields)._value.fields.x;
    fVar4 = (vector->fields)._value.fields.y;
    if (Il2CppMethodInitialized_184345287 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_184345287 = '\x01';
    }
    fVar5 = fVar4 * fVar4 + fVar3 * fVar3;
    if (maxLength * maxLength < fVar5) {
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar2 = (double)fVar5;
      if (dVar2 < 0.0) {
        dVar2 = sqrt(dVar2);
      }
      else {
        dVar2 = SQRT(dVar2);
      }
      fVar3 = (fVar3 / (float)dVar2) * maxLength;
      fVar4 = (fVar4 / (float)dVar2) * maxLength;
    }
    value.fields.y = fVar4;
    value.fields.x = fVar3;
    pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
    return pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$Distance
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__Distance (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x181ed4260

float CustomLogic_CustomLogicVector2Builtin__Distance
                (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
                MethodInfo *method)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  
  if ((a == (CustomLogic_CustomLogicVector2Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar4 = (a->fields)._value.fields.y;
  fVar5 = (a->fields)._value.fields.x;
  fVar1 = (b->fields)._value.fields.x;
  fVar2 = (b->fields)._value.fields.y;
  if (Il2CppMethodInitialized_18433de5e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433de5e = '\x01';
  }
  fVar5 = fVar5 - fVar1;
  fVar4 = fVar4 - fVar2;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar3 = (double)(fVar4 * fVar4 + fVar5 * fVar5);
  if (0.0 <= dVar3) {
    return (float)SQRT(dVar3);
  }
  dVar3 = sqrt(dVar3);
  return (float)dVar3;
}


// CustomLogic.CustomLogicVector2Builtin$$Dot
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__Dot (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x181ed4340

float CustomLogic_CustomLogicVector2Builtin__Dot
                (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
                MethodInfo *method)

{
  if ((a != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    return (b->fields)._value.fields.y * (a->fields)._value.fields.y +
           (b->fields)._value.fields.x * (a->fields)._value.fields.x;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$Lerp
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Lerp (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, float t, const MethodInfo* method);
// 0x181ed43e0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Lerp
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,float t,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  
  if ((a != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    fVar1 = (a->fields)._value.fields.x;
    fVar2 = (a->fields)._value.fields.y;
    if (t < 0.0) {
      t = 0.0;
    }
    else if (1.0 < t) {
      t = 1.0;
    }
    value.fields.y = ((b->fields)._value.fields.y - fVar2) * t + fVar2;
    value.fields.x = ((b->fields)._value.fields.x - fVar1) * t + fVar1;
    pCVar3 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
    return pCVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$LerpUnclamped
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__LerpUnclamped (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, float t, const MethodInfo* method);
// 0x181ed4380

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__LerpUnclamped
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,float t,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  
  if ((a != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    fVar1 = (a->fields)._value.fields.x;
    fVar2 = (a->fields)._value.fields.y;
    value.fields.y = ((b->fields)._value.fields.y - fVar2) * t + fVar2;
    value.fields.x = ((b->fields)._value.fields.x - fVar1) * t + fVar1;
    pCVar3 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
    return pCVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$Max
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Max (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x181ed4450

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Max
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar2;
  float fVar3;
  float fVar4;
  
  if ((a != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    fVar4 = (a->fields)._value.fields.x;
    fVar3 = (b->fields)._value.fields.x;
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    fVar3 = (a->fields)._value.fields.y;
    fVar1 = (b->fields)._value.fields.y;
    if (fVar3 <= fVar1) {
      fVar3 = fVar1;
    }
    value.fields.y = fVar3;
    value.fields.x = fVar4;
    pCVar2 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$Min
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Min (CustomLogic_CustomLogicVector2Builtin_o* a, CustomLogic_CustomLogicVector2Builtin_o* b, const MethodInfo* method);
// 0x181ed4490

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Min
          (CustomLogic_CustomLogicVector2Builtin_o *a,CustomLogic_CustomLogicVector2Builtin_o *b,
          MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar2;
  float fVar3;
  float fVar4;
  
  if ((a != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    fVar4 = (a->fields)._value.fields.x;
    fVar3 = (b->fields)._value.fields.x;
    if (fVar3 <= fVar4) {
      fVar4 = fVar3;
    }
    fVar3 = (a->fields)._value.fields.y;
    fVar1 = (b->fields)._value.fields.y;
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
    value.fields.y = fVar3;
    value.fields.x = fVar4;
    pCVar2 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$MoveTowards
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__MoveTowards (CustomLogic_CustomLogicVector2Builtin_o* current, CustomLogic_CustomLogicVector2Builtin_o* target, float maxDistanceDelta, const MethodInfo* method);
// 0x181ed44d0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__MoveTowards
          (CustomLogic_CustomLogicVector2Builtin_o *current,CustomLogic_CustomLogicVector2Builtin_o *target,
          float maxDistanceDelta,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((current != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (target != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    fVar5 = (target->fields)._value.fields.x;
    fVar6 = (target->fields)._value.fields.y;
    fVar1 = (current->fields)._value.fields.x;
    fVar2 = (current->fields)._value.fields.y;
    if (Il2CppMethodInitialized_1843445ec == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_1843445ec = '\x01';
    }
    fVar8 = fVar5 - fVar1;
    fVar9 = fVar6 - fVar2;
    fVar7 = fVar9 * fVar9 + fVar8 * fVar8;
    if ((fVar7 != 0.0) && ((maxDistanceDelta < 0.0 || (maxDistanceDelta * maxDistanceDelta < fVar7)))) {
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar4 = (double)fVar7;
      if (dVar4 < 0.0) {
        dVar4 = sqrt(dVar4);
      }
      else {
        dVar4 = SQRT(dVar4);
      }
      fVar5 = (fVar8 / (float)dVar4) * maxDistanceDelta + fVar1;
      fVar6 = (fVar9 / (float)dVar4) * maxDistanceDelta + fVar2;
    }
    value.fields.y = fVar6;
    value.fields.x = fVar5;
    pCVar3 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
    return pCVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$Reflect
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__Reflect (CustomLogic_CustomLogicVector2Builtin_o* inDirection, CustomLogic_CustomLogicVector2Builtin_o* inNormal, const MethodInfo* method);
// 0x181ed46c0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__Reflect
          (CustomLogic_CustomLogicVector2Builtin_o *inDirection,
          CustomLogic_CustomLogicVector2Builtin_o *inNormal,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar5;
  float fVar6;
  
  if ((inDirection != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (inNormal != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    fVar1 = (inDirection->fields)._value.fields.x;
    fVar2 = (inNormal->fields)._value.fields.x;
    fVar3 = (inDirection->fields)._value.fields.y;
    fVar4 = (inNormal->fields)._value.fields.y;
    fVar6 = (fVar3 * fVar4 + fVar1 * fVar2) * -2.0;
    value.fields.y = fVar4 * fVar6 + fVar3;
    value.fields.x = fVar2 * fVar6 + fVar1;
    pCVar5 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
    return pCVar5;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$SignedAngle
// il2cpp: float CustomLogic_CustomLogicVector2Builtin__SignedAngle (CustomLogic_CustomLogicVector2Builtin_o* from, CustomLogic_CustomLogicVector2Builtin_o* to, const MethodInfo* method);
// 0x181ed4740

float CustomLogic_CustomLogicVector2Builtin__SignedAngle
                (CustomLogic_CustomLogicVector2Builtin_o *from,CustomLogic_CustomLogicVector2Builtin_o *to,
                MethodInfo *method)

{
  float fVar1;
  
  if ((from != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
     (to != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    fVar1 = UnityEngine_Vector2__SignedAngle
                      ((UnityEngine_Vector2_o)(from->fields)._value.fields,
                       (UnityEngine_Vector2_o)(to->fields)._value.fields,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$SmoothDamp
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__SmoothDamp (CustomLogic_CustomLogicVector2Builtin_o* current, CustomLogic_CustomLogicVector2Builtin_o* target, CustomLogic_CustomLogicVector2Builtin_o* currentVelocity, float smoothTime, float maxSpeed, const MethodInfo* method);
// 0x181ed4790

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__SmoothDamp
          (CustomLogic_CustomLogicVector2Builtin_o *current,CustomLogic_CustomLogicVector2Builtin_o *target,
          CustomLogic_CustomLogicVector2Builtin_o *currentVelocity,float smoothTime,float maxSpeed,
          MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *pCVar1;
  float deltaTime;
  UnityEngine_Vector2_o local_res8 [4];
  UnityEngine_Vector2_Fields local_28 [4];
  
  if (((current != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) &&
      (target != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) &&
     (currentVelocity != (CustomLogic_CustomLogicVector2Builtin_o *)0x0)) {
    local_28[0] = (target->fields)._value.fields;
    local_res8[0].fields.x = (current->fields)._value.fields.x;
    local_res8[0].fields.y = (current->fields)._value.fields.y;
    deltaTime = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    value = UnityEngine_Vector2__SmoothDamp_2f0b1f0
                      (local_res8,(UnityEngine_Vector2_o *)local_28,&(currentVelocity->fields)._value,
                       smoothTime,maxSpeed,deltaTime,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(value,(MethodInfo *)0x0);
    return pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$Set
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__Set (CustomLogic_CustomLogicVector2Builtin_o* __this, float x, float y, const MethodInfo* method);
// 0x181ed4730

void CustomLogic_CustomLogicVector2Builtin__Set
               (CustomLogic_CustomLogicVector2Builtin_o *__this,float x,float y,MethodInfo *method)

{
  (__this->fields)._value.fields.x = x;
  (__this->fields)._value.fields.y = y;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$Normalize
// il2cpp: void CustomLogic_CustomLogicVector2Builtin__Normalize (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x181ed4650

void CustomLogic_CustomLogicVector2Builtin__Normalize
               (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)il2cpp_runtime_helper_180562bc0(&(__this->fields)._value,0);
  if (fVar2 <= 1e-05) {
    (__this->fields)._value.fields.x = 0.0;
    (__this->fields)._value.fields.y = 0.0;
    return;
  }
  fVar1 = (__this->fields)._value.fields.y;
  (__this->fields)._value.fields.x = (__this->fields)._value.fields.x / fVar2;
  (__this->fields)._value.fields.y = fVar1 / fVar2;
  return;
}


// CustomLogic.CustomLogicVector2Builtin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicVector2Builtin__ToString (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x181ed4830

System_String_o *
CustomLogic_CustomLogicVector2Builtin__ToString
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Globalization_CultureInfo_o *pSVar2;
  System_Globalization_NumberFormatInfo_o *provider;
  System_String_o *arg0;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_18433e520 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&"F2");
    il2cpp_codegen_initialize_runtime_metadata(&"({0}, {1})");
    Il2CppMethodInitialized_18433e520 = '\x01';
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
                     ((float *)&(__this->fields)._value,pSVar3,(System_IFormatProvider_o *)provider,
                      (MethodInfo *)0x0);
    pSVar3 = System_Single__ToString_1b4a0d0
                       (&(__this->fields)._value.fields.y,pSVar3,(System_IFormatProvider_o *)provider,
                        (MethodInfo *)0x0);
    pSVar3 = System_String__Format_196d440
                       ("({0}, {1})",(Il2CppObject *)arg0,(Il2CppObject *)pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Copy__ (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x181ed4a30

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Copy__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  
  if (Il2CppMethodInitialized_184345238 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_184345238 = '\x01';
  }
  fVar1 = (__this->fields)._value.fields.x;
  fVar2 = (__this->fields)._value.fields.y;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_184345237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345237 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._value.fields.x = fVar1;
  (__this_00->fields)._value.fields.y = fVar2;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicVector2Builtin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Add__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed4920

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Add__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  byte bVar3;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_184345239 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_184345239 = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if (((bVar3 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) && (other != (Il2CppObject *)0x0)) {
      bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
      if ((bVar3 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
        pIVar1 = self[3].klass;
        pIVar2 = other[3].klass;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        value.fields.y = (float)((ulonglong)pIVar2 >> 0x20) + (float)((ulonglong)pIVar1 >> 0x20);
        value.fields.x = SUB84(pIVar2,0) + SUB84(pIVar1,0);
        CustomLogic_CustomLogicVector2Builtin___ctor_1ed51c0(__this_00,value,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_00;
      }
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
// 0x181ed4f80

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Sub__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppClass *pIVar2;
  byte bVar3;
  UnityEngine_Vector2_o value;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_18434523a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_18434523a = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if (((bVar3 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) && (other != (Il2CppObject *)0x0)) {
      bVar3 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
      if ((bVar3 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar3 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
        pIVar1 = other[3].klass;
        pIVar2 = self[3].klass;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
        value.fields.y = (float)((ulonglong)pIVar2 >> 0x20) - (float)((ulonglong)pIVar1 >> 0x20);
        value.fields.x = SUB84(pIVar2,0) - SUB84(pIVar1,0);
        CustomLogic_CustomLogicVector2Builtin___ctor_1ed51c0(__this_00,value,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_00;
      }
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
// 0x181ed4da0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ed4f07: mov rcx, rdx

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Mul__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  UnityEngine_Vector2_o value;
  Il2CppObject *pIVar3;
  float *pfVar4;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_18434523b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_18434523b = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    pIVar2 = self->klass;
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
       ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
      pIVar3 = (Il2CppObject *)0x0;
      if (pIVar2 == g_data_184354e38) {
        pIVar3 = self;
      }
      if (pIVar3 != (Il2CppObject *)0x0) {
        if ((pIVar2->_1).element_class != (g_data_184354e38->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pfVar4 = il2cpp_object_unbox(self);
        if (other != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
          if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
             ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
            fVar5 = SUB84(other[3].klass,0) * *pfVar4;
            fVar6 = (float)((ulonglong)other[3].klass >> 0x20) * *pfVar4;
            goto override_prt_181ed4f0a_385ab24f;
          }
        }
      }
    }
    else if (other != (Il2CppObject *)0x0) {
      pIVar2 = other->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
        pIVar3 = (Il2CppObject *)0x0;
        if (pIVar2 == g_data_184354e38) {
          pIVar3 = other;
        }
        if (pIVar3 == (Il2CppObject *)0x0) goto label_181ed4f35;
        if ((pIVar2->_1).element_class != (g_data_184354e38->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pfVar4 = il2cpp_object_unbox(other);
        fVar5 = SUB84(self[3].klass,0) * *pfVar4;
        fVar6 = (float)((ulonglong)self[3].klass >> 0x20) * *pfVar4;
      }
      else {
        fVar5 = SUB84(other[3].klass,0) * SUB84(self[3].klass,0);
        fVar6 = (float)((ulonglong)other[3].klass >> 0x20) * (float)((ulonglong)self[3].klass >> 0x20);
      }
override_prt_181ed4f0a_385ab24f:
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      value.fields.y = fVar6;
      value.fields.x = fVar5;
      CustomLogic_CustomLogicVector2Builtin___ctor_1ed51c0(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
label_181ed4f35:
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Mul__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Mul);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicVector2Builtin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicVector2Builtin____Div__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed4ad0

Il2CppObject *
CustomLogic_CustomLogicVector2Builtin____Div__
          (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  UnityEngine_Vector2_o value;
  Il2CppObject *pIVar3;
  float *pfVar4;
  CustomLogic_CustomLogicVector2Builtin_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *ex;
  MethodInfo *lastManagedFrame;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_18434523c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_18434523c = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) && (other != (Il2CppObject *)0x0)) {
      pIVar2 = other->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
      if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
        pIVar3 = (Il2CppObject *)0x0;
        if (pIVar2 == g_data_184354e38) {
          pIVar3 = other;
        }
        if (pIVar3 == (Il2CppObject *)0x0) goto label_181ed4c03;
        if ((pIVar2->_1).element_class != (g_data_184354e38->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        pfVar4 = il2cpp_object_unbox(other);
        fVar6 = *(float *)&self[3].klass / *pfVar4;
        fVar5 = *(float *)((longlong)&self[3].klass + 4) / *pfVar4;
      }
      else {
        fVar6 = *(float *)&self[3].klass / *(float *)&other[3].klass;
        fVar5 = *(float *)((longlong)&self[3].klass + 4) / *(float *)((longlong)&other[3].klass + 4);
      }
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
      value.fields.y = fVar5;
      value.fields.x = fVar6;
      CustomLogic_CustomLogicVector2Builtin___ctor_1ed51c0(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
label_181ed4c03:
  operatorName = il2cpp_codegen_get_runtime_metadata(&"__Div__");
  ex = CustomLogic_CustomLogicUtils__OperatorException(operatorName,self,other,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicVector2Builtin___Div);
  il2cpp_codegen_raise_exception((Il2CppObject *)ex,lastManagedFrame);
}


// CustomLogic.CustomLogicVector2Builtin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin____Eq__ (CustomLogic_CustomLogicVector2Builtin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181ed4c50

bool CustomLogic_CustomLogicVector2Builtin____Eq__
               (CustomLogic_CustomLogicVector2Builtin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_18434523d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_18434523d = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) && (other != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicVector2Builtin->_2).typeHierarchyDepth;
      if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin)) {
        fVar2 = *(float *)&self[3].klass - *(float *)&other[3].klass;
        fVar3 = *(float *)((longlong)&self[3].klass + 4) - *(float *)((longlong)&other[3].klass + 4);
        return fVar3 * fVar3 + fVar2 * fVar2 < 9.9999994e-11;
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicVector2Builtin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicVector2Builtin____Hash__ (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x181ed4d20

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
// 0x181ed4d60

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
// 0x181ed5350

UnityEngine_Vector2_o
CustomLogic_CustomLogicVector2Builtin__op_Implicit
          (CustomLogic_CustomLogicVector2Builtin_o *value,MethodInfo *method)

{
  if (value != (CustomLogic_CustomLogicVector2Builtin_o *)0x0) {
    return (UnityEngine_Vector2_o)(value->fields)._value.fields;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicVector2Builtin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicVector2Builtin_o* CustomLogic_CustomLogicVector2Builtin__op_Implicit (UnityEngine_Vector2_o value, const MethodInfo* method);
// 0x181ed52a0

CustomLogic_CustomLogicVector2Builtin_o *
CustomLogic_CustomLogicVector2Builtin__op_Implicit_1ed52a0(UnityEngine_Vector2_o value,MethodInfo *method)

{
  CustomLogic_CustomLogicVector2Builtin_o *__this;
  float fStackX_1c;
  
  if (Il2CppMethodInitialized_18434523e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector2Builtin);
    Il2CppMethodInitialized_18434523e = '\x01';
  }
  fStackX_1c = value.fields.y;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector2Builtin);
  if (Il2CppMethodInitialized_184345237 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345237 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._value.fields.x = value.fields.x;
  (__this->fields)._value.fields.y = fStackX_1c;
  return __this;
}


// CustomLogic.CustomLogicVector2Builtin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicVector2Builtin__get_ClassName (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x181ed5220

System_String_o *
CustomLogic_CustomLogicVector2Builtin__get_ClassName
          (CustomLogic_CustomLogicVector2Builtin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434523f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Vector2");
    Il2CppMethodInitialized_18434523f = '\x01';
  }
  return "Vector2";
}


// CustomLogic.CustomLogicVector2Builtin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin__get_IsAbstract (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicVector2Builtin__get_IsAbstract(CustomLogic_CustomLogicVector2Builtin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicVector2Builtin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin__get_IsStatic (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicVector2Builtin__get_IsStatic(CustomLogic_CustomLogicVector2Builtin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicVector2Builtin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicVector2Builtin__get_InheritBaseMembers (CustomLogic_CustomLogicVector2Builtin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicVector2Builtin__get_InheritBaseMembers(CustomLogic_CustomLogicVector2Builtin_o* __this, MethodInfo* method)

{
  return true;
}


