// Type: CustomLogic.CustomLogicMathBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicMathBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMathBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicMathBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMathBuiltin_o* CustomLogic_CustomLogicMathBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x1820ab530

CustomLogic_CustomLogicMathBuiltin_o *
CustomLogic_CustomLogicMathBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346808 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin);
    Il2CppMethodInitialized_184346808 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin);
      if (Il2CppMethodInitialized_184346800 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346800 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicMathBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMathBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x1820b5300

void CustomLogic_CustomLogicMathBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346836 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346836 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicMathBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clamp>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Clamp_b__8_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ae110

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Clamp_b__8_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if ((((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) || ((uint)__a->max_length < 3)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicMathBuiltin__Clamp
                         (__c,__a->m_Items[0],__a->m_Items[1],__a->m_Items[2],(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Max>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Max_b__9_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b0770

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Max_b__9_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppObject *pIVar1;
  float *pfVar2;
  Il2CppObject *pIVar3;
  float fVar4;
  float fVar5;
  float local_res18 [4];
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar3 = __a->m_Items[0];
      obj = __a->m_Items[1];
      if (Il2CppMethodInitialized_184346803 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
        Il2CppMethodInitialized_184346803 = '\x01';
      }
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar1 = (Il2CppObject *)0x0;
        if (pIVar3->klass == g_data_184354e08) {
          pIVar1 = pIVar3;
        }
        if (pIVar1 != (Il2CppObject *)0x0) {
          if ((pIVar3->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          pfVar2 = il2cpp_object_unbox(pIVar3);
          if (obj != (Il2CppObject *)0x0) {
            pIVar1 = (Il2CppObject *)0x0;
            if (obj->klass == g_data_184354e08) {
              pIVar1 = obj;
            }
            if (pIVar1 != (Il2CppObject *)0x0) {
              if ((obj->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
                fVar4 = *pfVar2;
                pfVar2 = il2cpp_object_unbox(obj);
                local_res18[0] = fVar4;
                if ((int)fVar4 <= (int)*pfVar2) {
                  local_res18[0] = *pfVar2;
                }
                pIVar3 = il2cpp_value_box(g_data_184354e08,local_res18);
                return pIVar3;
              }
              il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
            }
          }
        }
      }
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar3,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
      local_res18[0] = fVar4;
      if (fVar4 <= fVar5) {
        local_res18[0] = fVar5;
      }
      pIVar3 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Min>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Min_b__10_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b0b00

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Min_b__10_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppObject *pIVar1;
  float *pfVar2;
  Il2CppObject *pIVar3;
  float fVar4;
  float fVar5;
  float local_res18 [4];
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar3 = __a->m_Items[0];
      obj = __a->m_Items[1];
      if (Il2CppMethodInitialized_184346804 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
        Il2CppMethodInitialized_184346804 = '\x01';
      }
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar1 = (Il2CppObject *)0x0;
        if (pIVar3->klass == g_data_184354e08) {
          pIVar1 = pIVar3;
        }
        if (pIVar1 != (Il2CppObject *)0x0) {
          if ((pIVar3->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception();
          }
          pfVar2 = il2cpp_object_unbox(pIVar3);
          if (obj != (Il2CppObject *)0x0) {
            pIVar1 = (Il2CppObject *)0x0;
            if (obj->klass == g_data_184354e08) {
              pIVar1 = obj;
            }
            if (pIVar1 != (Il2CppObject *)0x0) {
              if ((obj->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
                fVar4 = *pfVar2;
                pfVar2 = il2cpp_object_unbox(obj);
                local_res18[0] = fVar4;
                if ((int)*pfVar2 <= (int)fVar4) {
                  local_res18[0] = *pfVar2;
                }
                pIVar3 = il2cpp_value_box(g_data_184354e08,local_res18);
                return pIVar3;
              }
              il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
            }
          }
        }
      }
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar3,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
      local_res18[0] = fVar4;
      if (fVar5 <= fVar4) {
        local_res18[0] = fVar5;
      }
      pIVar3 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pow>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Pow_b__11_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b1ac0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Pow_b__11_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  undefined4 local_res18 [4];
  
  if (Il2CppMethodInitialized_184346837 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346837 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820b1b92:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if (1 < (uint)__a->max_length) {
      fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        local_res18[0] = il2cpp_runtime_helper_1804f6b50(fVar2,fVar3);
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar1;
      }
      goto label_1820b1b92;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Abs>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Abs_b__12_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ac760

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Abs_b__12_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *pIVar2;
  float *pfVar3;
  Il2CppObject *pIVar4;
  float local_res18 [4];
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar4 = __a->m_Items[0];
      if (Il2CppMethodInitialized_184346805 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
        Il2CppMethodInitialized_184346805 = '\x01';
      }
      if (pIVar4 != (Il2CppObject *)0x0) {
        pIVar2 = (Il2CppObject *)0x0;
        if (pIVar4->klass == g_data_184354e08) {
          pIVar2 = pIVar4;
        }
        if (pIVar2 != (Il2CppObject *)0x0) {
          if ((pIVar4->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
            pfVar3 = il2cpp_object_unbox(pIVar4);
            fVar1 = *pfVar3;
            if (Il2CppMethodInitialized_184341267 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
              Il2CppMethodInitialized_184341267 = '\x01';
            }
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            local_res18[0] = (float)-(int)fVar1;
            if ((int)local_res18[0] < 0) {
              local_res18[0] = fVar1;
            }
            pIVar4 = il2cpp_value_box(g_data_184354e08,local_res18);
            return pIVar4;
          }
          il2cpp_codegen_raise_invalid_cast_exception(pIVar4,g_data_184354e08);
        }
      }
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      local_res18[0] =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (pIVar4,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
      local_res18[0] = ABS(local_res18[0]);
      pIVar4 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sqrt>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sqrt_b__13_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b3140

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sqrt_b__13_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184346838 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346838 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    local_res18[0] =
         CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                   (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (local_res18[0] < 0.0) {
        local_res18[0] = (float)il2cpp_runtime_helper_1804fa7a0();
      }
      else {
        local_res18[0] = SQRT(local_res18[0]);
      }
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Repeat>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Repeat_b__14_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b2700

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Repeat_b__14_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res18 [4];
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = __a->m_Items[0];
      obj = __a->m_Items[1];
      if (Il2CppMethodInitialized_184346806 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
        Il2CppMethodInitialized_184346806 = '\x01';
      }
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      fVar2 = MiscExtensions__UnboxToFloat(pIVar1,(MethodInfo *)0x0);
      fVar3 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
      fVar4 = (float)il2cpp_runtime_helper_1804f4110(fVar2 / fVar3);
      fVar2 = fVar2 - fVar4 * fVar3;
      if (fVar2 < 0.0) {
        local_res18[0] = 0.0;
      }
      else {
        local_res18[0] = fVar3;
        if (fVar2 <= fVar3) {
          local_res18[0] = fVar2;
        }
      }
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Mod>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Mod_b__15_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b0d90

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Mod_b__15_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  int local_res18 [4];
  
  if (Il2CppMethodInitialized_184346839 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346839 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820b0e49:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    iVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar3,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (uint)__a->max_length) {
      iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__a->m_Items[1],
                         (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        local_res18[0] = iVar1 % iVar2;
        pIVar3 = il2cpp_value_box(g_data_184354e08,local_res18);
        return pIVar3;
      }
      goto label_1820b0e49;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sin>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sin_b__16_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b2e40

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sin_b__16_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  undefined4 local_res18 [4];
  
  if (Il2CppMethodInitialized_18434683a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434683a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      local_res18[0] = il2cpp_runtime_helper_1804f5fc0(fVar2 * 0.017453292);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cos>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Cos_b__17_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ae310

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Cos_b__17_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  undefined4 local_res18 [4];
  
  if (Il2CppMethodInitialized_18434683b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434683b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      local_res18[0] = il2cpp_runtime_helper_1804f54c0(fVar2 * 0.017453292);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Tan>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Tan_b__18_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b3480

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Tan_b__18_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  undefined4 local_res18 [4];
  
  if (Il2CppMethodInitialized_18434683c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434683c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      local_res18[0] = il2cpp_runtime_helper_1804fb3e0(fVar2 * 0.017453292);
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Asin>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Asin_b__19_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820acc80

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Asin_b__19_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434683d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434683d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_float_
              (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      local_res18[0] = (float)il2cpp_runtime_helper_1804fa840();
      local_res18[0] = local_res18[0] * 57.29578;
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Acos>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Acos_b__20_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ac950

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Acos_b__20_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434683e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434683e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_float_
              (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      local_res18[0] = (float)il2cpp_runtime_helper_1804f6310();
      local_res18[0] = local_res18[0] * 57.29578;
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Atan>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Atan_b__21_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820acf20

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Atan_b__21_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434683f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434683f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_float_
              (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      local_res18[0] = (float)il2cpp_runtime_helper_1804f6550();
      local_res18[0] = local_res18[0] * 57.29578;
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Atan2>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Atan2_b__22_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ace30

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Atan2_b__22_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184346840 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346840 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820acf0a:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if (1 < (uint)__a->max_length) {
      fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        local_res18[0] = (float)il2cpp_runtime_helper_1804f3c50(fVar2,fVar3);
        local_res18[0] = local_res18[0] * 57.29578;
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar1;
      }
      goto label_1820acf0a;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Ceil>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Ceil_b__23_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ae010

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Ceil_b__23_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  float fVar2;
  double dVar3;
  int local_res18 [4];
  
  if (Il2CppMethodInitialized_184346841 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346841 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_18433df29 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433df29 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar3 = il2cpp_runtime_helper_1804f45c0((double)fVar2,method_00);
      local_res18[0] = (int)dVar3;
      pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Floor>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Floor_b__24_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ae990

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Floor_b__24_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  float fVar2;
  double dVar3;
  int local_res18 [4];
  
  if (Il2CppMethodInitialized_184346842 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346842 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_18433df26 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_18433df26 = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dVar3 = il2cpp_runtime_helper_1804f4690((double)fVar2,method_00);
      local_res18[0] = (int)dVar3;
      pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Round>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Round_b__25_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b29e0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Round_b__25_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  double x;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  System_Object_array *method_01;
  float fVar2;
  double dVar3;
  int local_res18;
  Il2CppMethodPointer local_28;
  
  method_01 = __a;
  if (Il2CppMethodInitialized_184346843 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346843 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184340a0c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_184340a0c = '\x01';
      }
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      x = (double)fVar2;
      method_00 = (MethodInfo *)&stack0xffffffffffffffd8;
      if (x < 0.0) {
        dVar3 = il2cpp_runtime_helper_1804f3b80(x,(double *)method_00,(MethodInfo *)method_01);
        if (dVar3 == -0.5) {
          if (((longlong)(double)local_28 & 1U) != 0) {
            local_28 = (Il2CppMethodPointer)((double)local_28 - 1.0);
          }
        }
        else {
          local_28 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f45c0(x - 0.5,method_00);
        }
      }
      else {
        dVar3 = il2cpp_runtime_helper_1804f3b80(x,(double *)method_00,(MethodInfo *)method_01);
        if (dVar3 == 0.5) {
          if (((longlong)(double)local_28 & 1U) != 0) {
            local_28 = (Il2CppMethodPointer)((double)local_28 + 1.0);
          }
        }
        else {
          local_28 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f4690(x + 0.5,method_00);
        }
      }
      local_res18 = (int)(double)local_28;
      pIVar1 = il2cpp_value_box(g_data_184354e08,&stack0x00000018);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Deg2Rad>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Deg2Rad_b__26_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ae4e0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Deg2Rad_b__26_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184346844 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346844 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    local_res18[0] =
         CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                   (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      local_res18[0] = local_res18[0] * 0.017453292;
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Rad2Deg>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Rad2Deg_b__27_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b1ce0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Rad2Deg_b__27_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184346845 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346845 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    local_res18[0] =
         CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                   (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      local_res18[0] = local_res18[0] * 57.29578;
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__28_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820afe00

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__28_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184346846 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346846 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (1 < (uint)__a->max_length) {
        fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[1],
                           (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (2 < (uint)__a->max_length) {
          fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[2],
                             (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
          ;
          if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            if (fVar4 < 0.0) {
              fVar4 = 0.0;
            }
            else if (1.0 < fVar4) {
              fVar4 = 1.0;
            }
            local_res18[0] = (fVar3 - fVar2) * fVar4 + fVar2;
            pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
            return pIVar1;
          }
          goto label_1820aff17;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820aff17:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__29_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820aff30

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__29_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184346847 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346847 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (1 < (uint)__a->max_length) {
        fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[1],
                           (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (2 < (uint)__a->max_length) {
          fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[2],
                             (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
          ;
          if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            local_res18[0] = (fVar3 - fVar2) * fVar4 + fVar2;
            pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
            return pIVar1;
          }
          goto label_1820b0026;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820b0026:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sign>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sign_b__30_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b2d80

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sign_b__30_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  undefined4 local_res18 [4];
  
  if (Il2CppMethodInitialized_184346848 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346848 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (fVar2 < 0.0) {
        local_res18[0] = 0xbf800000;
      }
      else {
        local_res18[0] = 0x3f800000;
      }
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseLerp>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__InverseLerp_b__31_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af470

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__InverseLerp_b__31_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184346849 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346849 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820af58e:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if ((1 < (uint)__a->max_length) &&
       (fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[1],
                           (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float),
       2 < (uint)__a->max_length)) {
      fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        if ((fVar2 == fVar3) || (local_res18[0] = (fVar4 - fVar2) / (fVar3 - fVar2), local_res18[0] < 0.0)) {
          local_res18[0] = 0.0;
        }
        else if (1.0 < local_res18[0]) {
          local_res18[0] = 1.0;
        }
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar1;
      }
      goto label_1820af58e;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpAngle>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__LerpAngle_b__32_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820afc70

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__LerpAngle_b__32_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434684a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434684a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (1 < (uint)__a->max_length) {
        fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[1],
                           (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (2 < (uint)__a->max_length) {
          fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[2],
                             (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
          ;
          if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            fVar5 = (float)il2cpp_runtime_helper_1804f4110((fVar3 - fVar2) / 360.0);
            fVar3 = (fVar3 - fVar2) - fVar5 * 360.0;
            if (fVar3 < 0.0) {
              fVar3 = 0.0;
            }
            else if (360.0 < fVar3) {
              fVar3 = 360.0;
            }
            if (180.0 < fVar3) {
              fVar3 = fVar3 - 360.0;
            }
            if (fVar4 < 0.0) {
              fVar4 = 0.0;
            }
            else if (1.0 < fVar4) {
              fVar4 = 1.0;
            }
            local_res18[0] = fVar4 * fVar3 + fVar2;
            pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
            return pIVar1;
          }
          goto label_1820afdf4;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820afdf4:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Log>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Log_b__33_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b00c0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Log_b__33_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  if (Il2CppMethodInitialized_18434684b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434684b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_float_
              (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      local_res18[0] = il2cpp_runtime_helper_1804faef0();
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__MoveTowards_b__34_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b1060

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__MoveTowards_b__34_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434684c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434684c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (1 < (uint)__a->max_length) {
        fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[1],
                           (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (2 < (uint)__a->max_length) {
          fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[2],
                             (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
          ;
          if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            if (fVar4 < ABS(fVar3 - fVar2)) {
              if (fVar3 - fVar2 < 0.0) {
                fVar3 = -1.0;
              }
              else {
                fVar3 = 1.0;
              }
              fVar3 = fVar3 * fVar4 + fVar2;
            }
            local_res18[0] = fVar3;
            pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
            return pIVar1;
          }
          goto label_1820b1195;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820b1195:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTowardsAngle>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__MoveTowardsAngle_b__35_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b0e60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820b1002: movaps xmm7, xmm6

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__MoveTowardsAngle_b__35_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434684d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434684d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820b104b:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if ((1 < (uint)__a->max_length) &&
       (fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[1],
                           (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float),
       2 < (uint)__a->max_length)) {
      fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[2],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        fVar5 = (float)il2cpp_runtime_helper_1804f4110((fVar3 - fVar2) / 360.0);
        fVar5 = (fVar3 - fVar2) - fVar5 * 360.0;
        if (fVar5 < 0.0) {
          fVar5 = 0.0;
        }
        else if (360.0 < fVar5) {
          fVar5 = 360.0;
        }
        if (180.0 < fVar5) {
          fVar5 = fVar5 - 360.0;
        }
        if ((fVar5 <= -fVar4) || (fVar4 <= fVar5)) {
          if (fVar4 < ABS((fVar5 + fVar2) - fVar2)) {
            if ((fVar5 + fVar2) - fVar2 < 0.0) {
              fVar5 = fVar4 * -1.0;
            }
            else {
              fVar5 = fVar4 * 1.0;
            }
          }
          fVar3 = fVar5 + fVar2;
        }
        local_res18[0] = fVar3;
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar1;
      }
      goto label_1820b104b;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__PingPong>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__PingPong_b__36_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b1980

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__PingPong_b__36_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434684e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434684e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820b1aa8:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    if (1 < (uint)__a->max_length) {
      fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        fVar5 = fVar3 + fVar3;
        fVar4 = (float)il2cpp_runtime_helper_1804f4110(fVar2 / fVar5);
        fVar2 = fVar2 - fVar4 * fVar5;
        if (fVar2 < 0.0) {
          fVar5 = 0.0;
        }
        else if (fVar2 <= fVar5) {
          fVar5 = fVar2;
        }
        local_res18[0] = fVar3 - ABS(fVar5 - fVar3);
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar1;
      }
      goto label_1820b1aa8;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Exp>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Exp_b__37_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ae660

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Exp_b__37_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  if (Il2CppMethodInitialized_18434684f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434684f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_float_
              (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      local_res18[0] = il2cpp_runtime_helper_1804fabd0();
      pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__SmoothStep>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__SmoothStep_b__38_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b2ef0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__SmoothStep_b__38_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184346850 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346850 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (1 < (uint)__a->max_length) {
        fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[1],
                           (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (2 < (uint)__a->max_length) {
          fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[2],
                             (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
          ;
          if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
            if (fVar4 < 0.0) {
              fVar4 = 0.0;
            }
            else if (1.0 < fVar4) {
              fVar4 = 1.0;
            }
            fVar4 = fVar4 * -2.0 * fVar4 * fVar4 + fVar4 * 3.0 * fVar4;
            local_res18[0] = (1.0 - fVar4) * fVar2 + fVar4 * fVar3;
            pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
            return pIVar1;
          }
          goto label_1820b3038;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820b3038:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseAnd>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseAnd_b__39_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ad070

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseAnd_b__39_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  uint local_res18 [4];
  
  if (Il2CppMethodInitialized_184346851 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346851 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820ad124:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (uint)__a->max_length) {
      local_res18[0] =
           CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__a->m_Items[1],
                      (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        local_res18[0] = local_res18[0] & uVar1;
        pIVar2 = il2cpp_value_box(g_data_184354e08,local_res18);
        return pIVar2;
      }
      goto label_1820ad124;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseOr>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseOr_b__40_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ad2a0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseOr_b__40_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  uint local_res18 [4];
  
  if (Il2CppMethodInitialized_184346852 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346852 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820ad354:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (uint)__a->max_length) {
      local_res18[0] =
           CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__a->m_Items[1],
                      (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        local_res18[0] = local_res18[0] | uVar1;
        pIVar2 = il2cpp_value_box(g_data_184354e08,local_res18);
        return pIVar2;
      }
      goto label_1820ad354;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseXor>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseXor_b__41_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ad430

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseXor_b__41_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  uint local_res18 [4];
  
  if (Il2CppMethodInitialized_184346853 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346853 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820ad4e4:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (uint)__a->max_length) {
      local_res18[0] =
           CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__a->m_Items[1],
                      (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        local_res18[0] = local_res18[0] ^ uVar1;
        pIVar2 = il2cpp_value_box(g_data_184354e08,local_res18);
        return pIVar2;
      }
      goto label_1820ad4e4;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseNot>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseNot_b__42_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ad200

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseNot_b__42_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint local_res18 [4];
  
  if (Il2CppMethodInitialized_184346854 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346854 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    local_res18[0] =
         CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                   (pIVar1,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      local_res18[0] = ~local_res18[0];
      pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseLeftShift>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseLeftShift_b__43_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ad130

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseLeftShift_b__43_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  int local_res18 [4];
  
  if (Il2CppMethodInitialized_184346855 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346855 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820ad1ea:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    iVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar3,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (uint)__a->max_length) {
      iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__a->m_Items[1],
                         (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        local_res18[0] = iVar1 << ((byte)iVar2 & 0x1f);
        pIVar3 = il2cpp_value_box(g_data_184354e08,local_res18);
        return pIVar3;
      }
      goto label_1820ad1ea;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseRightShift>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseRightShift_b__44_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ad360

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseRightShift_b__44_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t iVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  int local_res18 [4];
  
  if (Il2CppMethodInitialized_184346856 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346856 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820ad41a:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    iVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar3,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (uint)__a->max_length) {
      iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__a->m_Items[1],
                         (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        local_res18[0] = iVar1 >> ((byte)iVar2 & 0x1f);
        pIVar3 = il2cpp_value_box(g_data_184354e08,local_res18);
        return pIVar3;
      }
      goto label_1820ad41a;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMathBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x182090dc0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMathBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_01;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_02;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_03;
  MethodInfo *pMVar5;
  System_Func_CustomLogicMathBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184346809 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Clamp");
    il2cpp_codegen_initialize_runtime_metadata(&"Deg2RadConstant");
    il2cpp_codegen_initialize_runtime_metadata(&"Round");
    il2cpp_codegen_initialize_runtime_metadata(&"Atan2");
    il2cpp_codegen_initialize_runtime_metadata(&"InverseLerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Exp");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseOr");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseNot");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign");
    il2cpp_codegen_initialize_runtime_metadata(&"Sin");
    il2cpp_codegen_initialize_runtime_metadata(&"PI");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Asin");
    il2cpp_codegen_initialize_runtime_metadata(&"PingPong");
    il2cpp_codegen_initialize_runtime_metadata(&"Infinity");
    il2cpp_codegen_initialize_runtime_metadata(&"Max");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseRightShift");
    il2cpp_codegen_initialize_runtime_metadata(&"Atan");
    il2cpp_codegen_initialize_runtime_metadata(&"LerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Rad2Deg");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTowards");
    il2cpp_codegen_initialize_runtime_metadata(&"Acos");
    il2cpp_codegen_initialize_runtime_metadata(&"Pow");
    il2cpp_codegen_initialize_runtime_metadata(&"Epsilon");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTowardsAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"Rad2DegConstant");
    il2cpp_codegen_initialize_runtime_metadata(&"Floor");
    il2cpp_codegen_initialize_runtime_metadata(&"Sqrt");
    il2cpp_codegen_initialize_runtime_metadata(&"SmoothStep");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseXor");
    il2cpp_codegen_initialize_runtime_metadata(&"Mod");
    il2cpp_codegen_initialize_runtime_metadata(&"Min");
    il2cpp_codegen_initialize_runtime_metadata(&"Deg2Rad");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseLeftShift");
    il2cpp_codegen_initialize_runtime_metadata(&"LerpAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"NegativeInfinity");
    il2cpp_codegen_initialize_runtime_metadata(&"Repeat");
    il2cpp_codegen_initialize_runtime_metadata(&"Ceil");
    il2cpp_codegen_initialize_runtime_metadata(&"Log");
    il2cpp_codegen_initialize_runtime_metadata(&"Abs");
    il2cpp_codegen_initialize_runtime_metadata(&"Cos");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseAnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Tan");
    Il2CppMethodInitialized_184346809 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8f325c2a) {
    if (uVar3 < 0x44a37324) {
      if (uVar3 < 0x2e9445f8) {
        if (uVar3 < 0x1762fe42) {
          if (uVar3 == 0x6626d4a) {
            bVar2 = System_String__op_Equality(name,"Repeat",(MethodInfo *)0x0);
            if (!bVar2) goto label_182093f0f;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346816 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Repeat_b__14_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346816 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            }
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__14_0;
            if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object
                               );
            System_Func_object__object__object____ctor
                      (__this,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Repeat_b__14_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__14_0 =
                 (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__14_0;
          }
          else {
            if (uVar3 != 0x1762fe41) goto label_182093f0f;
            bVar2 = System_String__op_Equality(name,"BitwiseNot",(MethodInfo *)0x0);
            if (!bVar2) goto label_182093f0f;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346832 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseNot_b__42_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346832 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            }
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__42_0;
            if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object
                               );
            System_Func_object__object__object____ctor
                      (__this,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseNot_b__42_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__42_0 =
                 (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__42_0;
          }
        }
        else {
          if (uVar3 == 0x27fffab2) {
            bVar2 = System_String__op_Equality(name,"PI",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434680a == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__PI_g____getter_2_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
                Il2CppMethodInitialized_18434680a = '\x01';
              }
              __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__PI_g____getter_2_0
              ;
              goto label_1820939ff;
            }
            goto label_182093f0f;
          }
          if (uVar3 == 0x2da77deb) {
            bVar2 = System_String__op_Equality(name,"MoveTowardsAngle",(MethodInfo *)0x0);
            if (!bVar2) goto label_182093f0f;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434682b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowardsAngle_b__35_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
              Il2CppMethodInitialized_18434682b = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            }
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__35_0;
            if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object
                               );
            System_Func_object__object__object____ctor
                      (__this,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowardsAngle_b__35_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__35_0 =
                 (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__35_0;
          }
          else {
            if (uVar3 != 0x2e9445f7) goto label_182093f0f;
            bVar2 = System_String__op_Equality(name,"Min",(MethodInfo *)0x0);
            if (!bVar2) goto label_182093f0f;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184346812 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Min_b__10_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
              Il2CppMethodInitialized_184346812 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            }
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__10_0;
            if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
            __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object
                               );
            System_Func_object__object__object____ctor
                      (__this,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Min_b__10_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__10_0 =
                 (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
            targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__10_0;
          }
        }
      }
      else if (uVar3 < 0x3da28cb3) {
        if (uVar3 != 0x3ca7e3b9) {
          if (uVar3 == 0x3da28cb2) {
            bVar2 = System_String__op_Equality(name,"Rad2DegConstant",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434680d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Rad2DegConstant_g____getter
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
                Il2CppMethodInitialized_18434680d = '\x01';
              }
              __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
              pMVar5 = 
              MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Rad2DegConstant_g____getter
              ;
              goto label_1820939ff;
            }
          }
          goto label_182093f0f;
        }
        bVar2 = System_String__op_Equality(name,"Max",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346811 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Max_b__9_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346811 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__9_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Max_b__9_0,
                   (MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__9_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__9_0;
      }
      else if (uVar3 == 0x3f6740bd) {
        bVar2 = System_String__op_Equality(name,"SmoothStep",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434682e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__SmoothStep_b__38_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434682e = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__38_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__SmoothStep_b__38_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__38_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__38_0;
      }
      else if (uVar3 == 0x42bc54ed) {
        bVar2 = System_String__op_Equality(name,"Sin",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346818 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sin_b__16_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346818 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__16_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sin_b__16_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__16_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__16_0;
      }
      else {
        if (uVar3 != 0x44a37323) goto label_182093f0f;
        bVar2 = System_String__op_Equality(name,"Mod",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346817 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Mod_b__15_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346817 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__15_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Mod_b__15_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__15_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__15_0;
      }
    }
    else if (uVar3 < 0x5ea410be) {
      if (uVar3 < 0x4e2d0c53) {
        if (uVar3 == 0x4dea6e5c) {
          bVar2 = System_String__op_Equality(name,"Clamp",(MethodInfo *)0x0);
          if (!bVar2) goto label_182093f0f;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346810 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Clamp_b__8_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346810 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__8_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Clamp_b__8_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__8_0 =
               (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__8_0;
        }
        else {
          if (uVar3 != 0x4e2d0c52) goto label_182093f0f;
          bVar2 = System_String__op_Equality(name,"Rad2Deg",(MethodInfo *)0x0);
          if (!bVar2) goto label_182093f0f;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346823 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Rad2Deg_b__27_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346823 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__27_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Rad2Deg_b__27_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__27_0 =
               (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__27_0;
        }
      }
      else if (uVar3 == 0x513efccb) {
        bVar2 = System_String__op_Equality(name,"LerpAngle",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346828 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpAngle_b__32_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346828 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__32_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpAngle_b__32_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__32_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__32_0;
      }
      else if (uVar3 == 0x5e187a3c) {
        bVar2 = System_String__op_Equality(name,"Cos",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346819 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Cos_b__17_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346819 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__17_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Cos_b__17_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__17_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__17_0;
      }
      else {
        if (uVar3 != 0x5ea410bd) goto label_182093f0f;
        bVar2 = System_String__op_Equality(name,"Floor",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346820 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Floor_b__24_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346820 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__24_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Floor_b__24_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__24_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__24_0;
      }
    }
    else if (uVar3 < 0x7edc5dc7) {
      if (uVar3 == 0x638c103a) {
        bVar2 = System_String__op_Equality(name,"Deg2Rad",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346822 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Deg2Rad_b__26_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346822 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__26_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Deg2Rad_b__26_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__26_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__26_0;
      }
      else if (uVar3 == 0x7c627bca) {
        bVar2 = System_String__op_Equality(name,"BitwiseRightShift",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346834 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseRightShift_b__44_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346834 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__44_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseRightShift_b__44_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__44_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__44_0;
      }
      else {
        if (uVar3 != 0x7edc5dc6) goto label_182093f0f;
        bVar2 = System_String__op_Equality(name,"Asin",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434681b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Asin_b__19_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434681b = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__19_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Asin_b__19_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__19_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__19_0;
      }
    }
    else if (uVar3 == 0x86a516df) {
      bVar2 = System_String__op_Equality(name,"Atan",(MethodInfo *)0x0);
      if (!bVar2) goto label_182093f0f;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_18434681d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan_b__21_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434681d = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__21_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan_b__21_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__21_0 =
           (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__21_0;
    }
    else if (uVar3 == 0x8cd299db) {
      bVar2 = System_String__op_Equality(name,"Abs",(MethodInfo *)0x0);
      if (!bVar2) goto label_182093f0f;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_184346814 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Abs_b__12_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346814 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__12_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Abs_b__12_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__12_0 =
           (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__12_0;
    }
    else {
      if (uVar3 != 0x8f325c29) goto label_182093f0f;
      bVar2 = System_String__op_Equality(name,"BitwiseAnd",(MethodInfo *)0x0);
      if (!bVar2) goto label_182093f0f;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_18434682f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseAnd_b__39_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434682f = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__39_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseAnd_b__39_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__39_0 =
           (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__39_0;
    }
  }
  else if (uVar3 < 0xc9773aa4) {
    if (uVar3 < 0xabbd87c6) {
      if (uVar3 < 0x96061d5b) {
        if (uVar3 == 0x8f6340c4) {
          bVar2 = System_String__op_Equality(name,"Sign",(MethodInfo *)0x0);
          if (!bVar2) goto label_182093f0f;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346826 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sign_b__30_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346826 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__30_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sign_b__30_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__30_0 =
               (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__30_0;
        }
        else {
          if (uVar3 != 0x96061d5a) goto label_182093f0f;
          bVar2 = System_String__op_Equality(name,"InverseLerp",(MethodInfo *)0x0);
          if (!bVar2) goto label_182093f0f;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346827 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__InverseLerp_b__31_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346827 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__31_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__InverseLerp_b__31_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__31_0 =
               (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__31_0;
        }
      }
      else if (uVar3 == 0x9e956088) {
        bVar2 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346824 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__28_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346824 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__28_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__28_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__28_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__28_0;
      }
      else if (uVar3 == 0xa1dd7bf1) {
        bVar2 = System_String__op_Equality(name,"Log",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346829 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Log_b__33_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346829 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__33_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Log_b__33_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__33_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__33_0;
      }
      else {
        if (uVar3 != 0xabbd87c5) goto label_182093f0f;
        bVar2 = System_String__op_Equality(name,"BitwiseXor",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346831 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseXor_b__41_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346831 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__41_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseXor_b__41_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__41_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__41_0;
      }
    }
    else if (uVar3 < 0xb3919aab) {
      if (uVar3 != 0xacfe0068) {
        if (uVar3 == 0xb184d7bd) {
          bVar2 = System_String__op_Equality(name,"Epsilon",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434680f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Epsilon_g____getter_7_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
              Il2CppMethodInitialized_18434680f = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Epsilon_g____getter_7_0
            ;
label_1820939ff:
            System_Func_object__object____ctor
                      (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar5,(MethodInfo_16E67D0 *)0x0);
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this_00,
                       (System_Action_T__object__o *)0x0,
                       (MethodInfo_12B8EE0 *)
                       MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)__this_01;
          }
        }
        else if (uVar3 == 0xb3919aaa) {
          bVar2 = System_String__op_Equality(name,"Deg2RadConstant",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434680e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Deg2RadConstant_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
              Il2CppMethodInitialized_18434680e = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
            pMVar5 = 
            MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Deg2RadConstant_g____getter
            ;
            goto label_1820939ff;
          }
        }
label_182093f0f:
        pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMathBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_03 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_03,pSVar4,(MethodInfo *)0x0);
        pMVar5 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,pMVar5);
      }
      bVar2 = System_String__op_Equality(name,"MoveTowards",(MethodInfo *)0x0);
      if (!bVar2) goto label_182093f0f;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_18434682a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowards_b__34_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434682a = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__34_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowards_b__34_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__34_0 =
           (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__34_0;
    }
    else if (uVar3 == 0xbc2e2b3f) {
      bVar2 = System_String__op_Equality(name,"Acos",(MethodInfo *)0x0);
      if (!bVar2) goto label_182093f0f;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_18434681c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Acos_b__20_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434681c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__20_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Acos_b__20_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__20_0 =
           (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__20_0;
    }
    else if (uVar3 == 0xbd386b75) {
      bVar2 = System_String__op_Equality(name,"Pow",(MethodInfo *)0x0);
      if (!bVar2) goto label_182093f0f;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_184346813 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Pow_b__11_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346813 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__11_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Pow_b__11_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__11_0 =
           (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__11_0;
    }
    else {
      if (uVar3 != 0xc9773aa3) goto label_182093f0f;
      bVar2 = System_String__op_Equality(name,"PingPong",(MethodInfo *)0x0);
      if (!bVar2) goto label_182093f0f;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_18434682c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__PingPong_b__36_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434682c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__36_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__PingPong_b__36_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__36_0 =
           (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__36_0;
    }
  }
  else if (uVar3 < 0xe3112e29) {
    if (uVar3 < 0xd7ab87c9) {
      if (uVar3 == 0xd6176f0d) {
        bVar2 = System_String__op_Equality(name,"BitwiseOr",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346830 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseOr_b__40_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346830 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__40_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseOr_b__40_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__40_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__40_0;
      }
      else {
        if (uVar3 != 0xd7ab87c8) goto label_182093f0f;
        bVar2 = System_String__op_Equality(name,"Exp",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434682d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Exp_b__37_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434682d = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__37_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Exp_b__37_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__37_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__37_0;
      }
    }
    else {
      if (uVar3 == 0xe0993ada) {
        bVar2 = System_String__op_Equality(name,"NegativeInfinity",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434680c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__NegativeInfinity_g____gette
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
            Il2CppMethodInitialized_18434680c = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
          pMVar5 = 
          MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__NegativeInfinity_g____gette
          ;
          goto label_1820939ff;
        }
        goto label_182093f0f;
      }
      if (uVar3 == 0xe2e31717) {
        bVar2 = System_String__op_Equality(name,"Atan2",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434681e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan2_b__22_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434681e = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__22_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan2_b__22_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__22_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__22_0;
      }
      else {
        if (uVar3 != 0xe3112e28) goto label_182093f0f;
        bVar2 = System_String__op_Equality(name,"Ceil",(MethodInfo *)0x0);
        if (!bVar2) goto label_182093f0f;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434681f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Ceil_b__23_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434681f = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__23_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Ceil_b__23_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__23_0 =
             (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__23_0;
      }
    }
  }
  else if (uVar3 < 0xf4248f7c) {
    if (uVar3 == 0xe740d999) {
      bVar2 = System_String__op_Equality(name,"Infinity",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434680b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Infinity_g____getter_3_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
          Il2CppMethodInitialized_18434680b = '\x01';
        }
        __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
        pMVar5 = 
        MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Infinity_g____getter_3_0
        ;
        goto label_1820939ff;
      }
      goto label_182093f0f;
    }
    if (uVar3 == 0xf176e11b) {
      bVar2 = System_String__op_Equality(name,"BitwiseLeftShift",(MethodInfo *)0x0);
      if (!bVar2) goto label_182093f0f;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_184346833 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseLeftShift_b__43_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346833 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__43_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseLeftShift_b__43_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__43_0 =
           (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__43_0;
    }
    else {
      if (uVar3 != 0xf4248f7b) goto label_182093f0f;
      bVar2 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
      if (!bVar2) goto label_182093f0f;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_184346825 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__29_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346825 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__29_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__29_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__29_0 =
           (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__29_0;
    }
  }
  else if (uVar3 == 0xf4c753db) {
    bVar2 = System_String__op_Equality(name,"Round",(MethodInfo *)0x0);
    if (!bVar2) goto label_182093f0f;
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346821 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Round_b__25_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346821 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__25_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Round_b__25_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__25_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__25_0;
  }
  else if (uVar3 == 0xfe1a87ef) {
    bVar2 = System_String__op_Equality(name,"Sqrt",(MethodInfo *)0x0);
    if (!bVar2) goto label_182093f0f;
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184346815 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sqrt_b__13_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346815 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__13_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sqrt_b__13_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__13_0;
  }
  else {
    if (uVar3 != 0xff835f38) goto label_182093f0f;
    bVar2 = System_String__op_Equality(name,"Tan",(MethodInfo *)0x0);
    if (!bVar2) goto label_182093f0f;
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434681a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Tan_b__18_0)
      ;
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
      Il2CppMethodInitialized_18434681a = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__18_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_182093edb;
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Tan_b__18_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__18_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_182093edb:
  __this_02 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_02,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_02;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__PI
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__PI (const MethodInfo* method);
// 0x182099e80

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__PI(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434680a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__PI_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_18434680a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__PI_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Infinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Infinity (const MethodInfo* method);
// 0x182099ca0

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Infinity(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434680b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Infinity_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_18434680b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Infinity_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__NegativeInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__NegativeInfinity (const MethodInfo* method);
// 0x182099d40

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__NegativeInfinity(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434680c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__NegativeInfinity_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_18434680c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__NegativeInfinity_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Rad2DegConstant
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Rad2DegConstant (const MethodInfo* method);
// 0x182099f20

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Rad2DegConstant(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434680d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Rad2DegConstant_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_18434680d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Rad2DegConstant_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Deg2RadConstant
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Deg2RadConstant (const MethodInfo* method);
// 0x182099b60

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Deg2RadConstant(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434680e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Deg2RadConstant_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_18434680e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Deg2RadConstant_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Epsilon
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Epsilon (const MethodInfo* method);
// 0x182099c00

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Epsilon(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434680f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Epsilon_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_18434680f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Epsilon_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Clamp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Clamp (const MethodInfo* method);
// 0x182095000

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Clamp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346810 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Clamp_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346810 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Clamp_b__8_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Max
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Max (const MethodInfo* method);
// 0x182097260

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Max(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346811 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Max_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346811 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Max_b__9_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Min
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Min (const MethodInfo* method);
// 0x182097380

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Min(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346812 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Min_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346812 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Min_b__10_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Pow
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Pow (const MethodInfo* method);
// 0x182097a70

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Pow(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346813 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Pow_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346813 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Pow_b__11_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Abs
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Abs (const MethodInfo* method);
// 0x1820940f0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Abs(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346814 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Abs_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346814 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Abs_b__12_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sqrt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sqrt (const MethodInfo* method);
// 0x182098dd0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sqrt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346815 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sqrt_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346815 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sqrt_b__13_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Repeat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Repeat (const MethodInfo* method);
// 0x1820984a0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Repeat(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346816 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Repeat_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346816 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Repeat_b__14_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Mod
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Mod (const MethodInfo* method);
// 0x1820974a0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Mod(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346817 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Mod_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346817 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Mod_b__15_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sin (const MethodInfo* method);
// 0x182098a60

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sin(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346818 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sin_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346818 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sin_b__16_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Cos
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Cos (const MethodInfo* method);
// 0x182095240

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Cos(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346819 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Cos_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346819 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Cos_b__17_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__17_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Tan
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Tan (const MethodInfo* method);
// 0x182099250

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Tan(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434681a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Tan_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434681a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__18_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Tan_b__18_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__18_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Asin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Asin (const MethodInfo* method);
// 0x182094330

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Asin(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434681b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Asin_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434681b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__19_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Asin_b__19_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__19_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__19_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Acos
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Acos (const MethodInfo* method);
// 0x182094210

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Acos(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434681c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Acos_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434681c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__20_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Acos_b__20_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__20_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__20_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Atan
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan (const MethodInfo* method);
// 0x182094570

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434681d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan_b__21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434681d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__21_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan_b__21_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__21_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__21_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Atan2
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan2 (const MethodInfo* method);
// 0x182094450

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan2(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434681e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan2_b__22_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434681e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__22_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan2_b__22_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__22_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__22_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Ceil
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Ceil (const MethodInfo* method);
// 0x182094ed0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Ceil(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434681f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Ceil_b__23_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434681f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__23_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Ceil_b__23_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__23_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__23_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Floor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Floor (const MethodInfo* method);
// 0x182095800

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Floor(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346820 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Floor_b__24_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346820 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__24_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Floor_b__24_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__24_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__24_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Round
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Round (const MethodInfo* method);
// 0x1820986e0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Round(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346821 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Round_b__25_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346821 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__25_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Round_b__25_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__25_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__25_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Deg2Rad
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Deg2Rad (const MethodInfo* method);
// 0x182095480

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Deg2Rad(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346822 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Deg2Rad_b__26_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346822 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__26_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Deg2Rad_b__26_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__26_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__26_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Rad2Deg
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Rad2Deg (const MethodInfo* method);
// 0x182097b90

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Rad2Deg(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346823 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Rad2Deg_b__27_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346823 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__27_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Rad2Deg_b__27_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__27_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__27_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x182096ee0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346824 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__28_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346824 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__28_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__28_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__28_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__28_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x182096db0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpUnclamped(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346825 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__29_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346825 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__29_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__29_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__29_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__29_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sign
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sign (const MethodInfo* method);
// 0x182098930

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sign(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346826 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sign_b__30_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346826 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__30_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sign_b__30_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__30_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__30_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__InverseLerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__InverseLerp (const MethodInfo* method);
// 0x182096130

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__InverseLerp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346827 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__InverseLerp_b__31_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346827 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__31_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__InverseLerp_b__31_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__31_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__31_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__LerpAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpAngle (const MethodInfo* method);
// 0x182096c80

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpAngle(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346828 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpAngle_b__32_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346828 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__32_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpAngle_b__32_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__32_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__32_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Log
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Log (const MethodInfo* method);
// 0x182097130

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Log(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346829 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Log_b__33_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346829 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__33_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Log_b__33_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__33_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__33_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__MoveTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowards (const MethodInfo* method);
// 0x1820976f0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowards(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434682a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowards_b__34_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434682a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__34_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowards_b__34_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__34_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__34_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__MoveTowardsAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowardsAngle (const MethodInfo* method);
// 0x1820975c0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowardsAngle(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434682b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowardsAngle_b__35_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434682b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__35_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowardsAngle_b__35_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__35_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__35_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__PingPong
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__PingPong (const MethodInfo* method);
// 0x182097940

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__PingPong(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434682c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__PingPong_b__36_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434682c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__36_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__PingPong_b__36_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__36_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__36_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Exp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Exp (const MethodInfo* method);
// 0x1820956d0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Exp(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434682d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Exp_b__37_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434682d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__37_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Exp_b__37_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__37_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__37_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__SmoothStep
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__SmoothStep (const MethodInfo* method);
// 0x182098b80

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__SmoothStep(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434682e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__SmoothStep_b__38_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434682e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__38_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__SmoothStep_b__38_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__38_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__38_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseAnd
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseAnd (const MethodInfo* method);
// 0x182094690

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseAnd(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434682f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseAnd_b__39_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434682f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__39_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseAnd_b__39_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__39_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__39_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseOr
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseOr (const MethodInfo* method);
// 0x182094a20

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseOr(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346830 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseOr_b__40_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346830 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__40_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseOr_b__40_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__40_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__40_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseXor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseXor (const MethodInfo* method);
// 0x182094c80

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseXor(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346831 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseXor_b__41_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346831 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__41_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseXor_b__41_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__41_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__41_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseNot
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseNot (const MethodInfo* method);
// 0x1820948f0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseNot(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346832 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseNot_b__42_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346832 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__42_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseNot_b__42_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__42_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__42_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseLeftShift
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseLeftShift (const MethodInfo* method);
// 0x1820947c0

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseLeftShift(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346833 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseLeftShift_b__43_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346833 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__43_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseLeftShift_b__43_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__43_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__43_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseRightShift
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseRightShift (const MethodInfo* method);
// 0x182094b50

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseRightShift(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346834 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseRightShift_b__44_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346834 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__44_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseRightShift_b__44_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__44_0 =
         (System_Func_CustomLogicMathBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9__44_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x18209a2d0

void CustomLogic_CustomLogicMathBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346835 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Clamp");
    il2cpp_codegen_initialize_runtime_metadata(&"Deg2RadConstant");
    il2cpp_codegen_initialize_runtime_metadata(&"Round");
    il2cpp_codegen_initialize_runtime_metadata(&"Atan2");
    il2cpp_codegen_initialize_runtime_metadata(&"InverseLerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Exp");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseOr");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseNot");
    il2cpp_codegen_initialize_runtime_metadata(&"Sign");
    il2cpp_codegen_initialize_runtime_metadata(&"Sin");
    il2cpp_codegen_initialize_runtime_metadata(&"PI");
    il2cpp_codegen_initialize_runtime_metadata(&"Lerp");
    il2cpp_codegen_initialize_runtime_metadata(&"Asin");
    il2cpp_codegen_initialize_runtime_metadata(&"PingPong");
    il2cpp_codegen_initialize_runtime_metadata(&"Infinity");
    il2cpp_codegen_initialize_runtime_metadata(&"Max");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseRightShift");
    il2cpp_codegen_initialize_runtime_metadata(&"Atan");
    il2cpp_codegen_initialize_runtime_metadata(&"LerpUnclamped");
    il2cpp_codegen_initialize_runtime_metadata(&"Rad2Deg");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTowards");
    il2cpp_codegen_initialize_runtime_metadata(&"Acos");
    il2cpp_codegen_initialize_runtime_metadata(&"Pow");
    il2cpp_codegen_initialize_runtime_metadata(&"Epsilon");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTowardsAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"Rad2DegConstant");
    il2cpp_codegen_initialize_runtime_metadata(&"Floor");
    il2cpp_codegen_initialize_runtime_metadata(&"Sqrt");
    il2cpp_codegen_initialize_runtime_metadata(&"SmoothStep");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseXor");
    il2cpp_codegen_initialize_runtime_metadata(&"Mod");
    il2cpp_codegen_initialize_runtime_metadata(&"Min");
    il2cpp_codegen_initialize_runtime_metadata(&"Deg2Rad");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseLeftShift");
    il2cpp_codegen_initialize_runtime_metadata(&"LerpAngle");
    il2cpp_codegen_initialize_runtime_metadata(&"NegativeInfinity");
    il2cpp_codegen_initialize_runtime_metadata(&"Repeat");
    il2cpp_codegen_initialize_runtime_metadata(&"Ceil");
    il2cpp_codegen_initialize_runtime_metadata(&"Log");
    il2cpp_codegen_initialize_runtime_metadata(&"Abs");
    il2cpp_codegen_initialize_runtime_metadata(&"Cos");
    il2cpp_codegen_initialize_runtime_metadata(&"BitwiseAnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Tan");
    Il2CppMethodInitialized_184346835 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PI",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Infinity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NegativeInfinity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rad2DegConstant",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Deg2RadConstant",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Epsilon",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clamp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Max",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Min",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pow",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Abs",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sqrt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Repeat",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mod",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sin",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Cos",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Tan",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Asin",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Acos",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Atan",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Atan2",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ceil",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Floor",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Round",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Deg2Rad",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rad2Deg",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Lerp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LerpUnclamped",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sign",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InverseLerp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LerpAngle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Log",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveTowards",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveTowardsAngle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PingPong",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Exp",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SmoothStep",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseAnd",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseOr",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseXor",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseNot",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseLeftShift",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseRightShift",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__PI>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__PI_g____getter_2_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x182094090

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__PI_g____getter_2_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0x40490fdb;
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Infinity>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Infinity_g____getter_3_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x182094000

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Infinity_g____getter_3_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0x7f800000;
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_4_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x182094030

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_4_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0xff800000;
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Rad2DegConstant>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Rad2DegConstant_g____getter_5_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x1820940c0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Rad2DegConstant_g____getter_5_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0x42652ee1;
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Deg2RadConstant>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Deg2RadConstant_g____getter_6_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x182093f80

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Deg2RadConstant_g____getter_6_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_res18 [4];
  
  local_res18[0] = 0x3c8efa35;
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Epsilon>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Epsilon_g____getter_7_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x182093fb0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Epsilon_g____getter_7_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184346917 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_184346917 = '\x01';
  }
  local_res18[0] = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon;
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin___ctor (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x1820a7540

void CustomLogic_CustomLogicMathBuiltin___ctor
               (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346800 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346800 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMathBuiltin$$get_PI
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_PI (const MethodInfo* method);
// 0x1820a7630

float CustomLogic_CustomLogicMathBuiltin__get_PI(MethodInfo *method)

{
  return 3.1415927;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Infinity
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Infinity (const MethodInfo* method);
// 0x1820a7610

float
CustomLogic_CustomLogicMathBuiltin__get_Infinity(MethodInfo* method)

{
  return INFINITY;
}


// CustomLogic.CustomLogicMathBuiltin$$get_NegativeInfinity
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_NegativeInfinity (const MethodInfo* method);
// 0x1820a7620

float CustomLogic_CustomLogicMathBuiltin__get_NegativeInfinity(MethodInfo *method)

{
  return -INFINITY;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Rad2DegConstant
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Rad2DegConstant (const MethodInfo* method);
// 0x1820a7640

float CustomLogic_CustomLogicMathBuiltin__get_Rad2DegConstant(MethodInfo *method)

{
  return 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Deg2RadConstant
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Deg2RadConstant (const MethodInfo* method);
// 0x1820a75c0

float CustomLogic_CustomLogicMathBuiltin__get_Deg2RadConstant(MethodInfo *method)

{
  return 0.017453292;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Epsilon
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Epsilon (const MethodInfo* method);
// 0x1820a75d0

float CustomLogic_CustomLogicMathBuiltin__get_Epsilon(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346801 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_184346801 = '\x01';
  }
  return TypeInfo_UnityEngine_Mathf->static_fields->Epsilon;
}


// CustomLogic.CustomLogicMathBuiltin$$Clamp
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Clamp (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* value, Il2CppObject* min, Il2CppObject* max, const MethodInfo* method);
// 0x1820a6a60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a6bda: movaps xmm0, xmm7

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Clamp
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *value,Il2CppObject *min,
          Il2CppObject *max,MethodInfo *method)

{
  float *pfVar1;
  Il2CppObject *pIVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_res10 [2];
  
  if (Il2CppMethodInitialized_184346802 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346802 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e08) {
      pIVar2 = value;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar1 = il2cpp_object_unbox(value);
      if (min != (Il2CppObject *)0x0) {
        pIVar2 = (Il2CppObject *)0x0;
        if (min->klass == g_data_184354e08) {
          pIVar2 = min;
        }
        if (pIVar2 != (Il2CppObject *)0x0) {
          if ((min->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
            il2cpp_codegen_raise_invalid_cast_exception(min,g_data_184354e08);
          }
          fVar4 = *pfVar1;
          pfVar1 = il2cpp_object_unbox(min);
          if (max != (Il2CppObject *)0x0) {
            pIVar2 = (Il2CppObject *)0x0;
            if (max->klass == g_data_184354e08) {
              pIVar2 = max;
            }
            if (pIVar2 != (Il2CppObject *)0x0) {
              if ((max->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
                fVar3 = *pfVar1;
                pfVar1 = il2cpp_object_unbox(max);
                if ((((int)fVar4 < (int)fVar3) || (local_res10[0] = *pfVar1, (int)fVar4 <= (int)*pfVar1)) &&
                   (local_res10[0] = fVar4, (int)fVar4 < (int)fVar3)) {
                  local_res10[0] = fVar3;
                }
                pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
                return pIVar2;
              }
              il2cpp_codegen_raise_invalid_cast_exception(max,g_data_184354e08);
            }
          }
        }
      }
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (value,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (min,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (max,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((fVar4 <= fVar3) && (fVar4 = fVar5, fVar3 <= fVar5)) {
    fVar4 = fVar3;
  }
  local_res10[0] = fVar4;
  pIVar2 = il2cpp_value_box(g_data_184354e38,local_res10);
  return pIVar2;
}


// CustomLogic.CustomLogicMathBuiltin$$Max
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Max (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x1820a6e20

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Max
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *a,Il2CppObject *b,MethodInfo *method)

{
  float *pfVar1;
  Il2CppObject *pIVar2;
  float fVar3;
  float fVar4;
  float local_res10 [6];
  
  if (Il2CppMethodInitialized_184346803 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346803 = '\x01';
  }
  if (a != (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
    if (a->klass == g_data_184354e08) {
      pIVar2 = a;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((a->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar1 = il2cpp_object_unbox(a);
      if (b != (Il2CppObject *)0x0) {
        pIVar2 = (Il2CppObject *)0x0;
        if (b->klass == g_data_184354e08) {
          pIVar2 = b;
        }
        if (pIVar2 != (Il2CppObject *)0x0) {
          if ((b->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
            fVar3 = *pfVar1;
            pfVar1 = il2cpp_object_unbox(b);
            local_res10[0] = fVar3;
            if ((int)fVar3 <= (int)*pfVar1) {
              local_res10[0] = *pfVar1;
            }
            pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
            return pIVar2;
          }
          il2cpp_codegen_raise_invalid_cast_exception(b,g_data_184354e08);
        }
      }
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (a,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (b,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  local_res10[0] = fVar3;
  if (fVar3 <= fVar4) {
    local_res10[0] = fVar4;
  }
  pIVar2 = il2cpp_value_box(g_data_184354e38,local_res10);
  return pIVar2;
}


// CustomLogic.CustomLogicMathBuiltin$$Min
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Min (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x1820a6f60

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Min
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *a,Il2CppObject *b,MethodInfo *method)

{
  float *pfVar1;
  Il2CppObject *pIVar2;
  float fVar3;
  float fVar4;
  float local_res10 [6];
  
  if (Il2CppMethodInitialized_184346804 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346804 = '\x01';
  }
  if (a != (Il2CppObject *)0x0) {
    pIVar2 = (Il2CppObject *)0x0;
    if (a->klass == g_data_184354e08) {
      pIVar2 = a;
    }
    if (pIVar2 != (Il2CppObject *)0x0) {
      if ((a->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      pfVar1 = il2cpp_object_unbox(a);
      if (b != (Il2CppObject *)0x0) {
        pIVar2 = (Il2CppObject *)0x0;
        if (b->klass == g_data_184354e08) {
          pIVar2 = b;
        }
        if (pIVar2 != (Il2CppObject *)0x0) {
          if ((b->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
            fVar3 = *pfVar1;
            pfVar1 = il2cpp_object_unbox(b);
            local_res10[0] = fVar3;
            if ((int)*pfVar1 <= (int)fVar3) {
              local_res10[0] = *pfVar1;
            }
            pIVar2 = il2cpp_value_box(g_data_184354e08,local_res10);
            return pIVar2;
          }
          il2cpp_codegen_raise_invalid_cast_exception(b,g_data_184354e08);
        }
      }
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (a,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (b,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  local_res10[0] = fVar3;
  if (fVar4 <= fVar3) {
    local_res10[0] = fVar4;
  }
  pIVar2 = il2cpp_value_box(g_data_184354e38,local_res10);
  return pIVar2;
}


// CustomLogic.CustomLogicMathBuiltin$$Pow
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Pow (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, const MethodInfo* method);
// 0x1820a7290

float CustomLogic_CustomLogicMathBuiltin__Pow
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f6b50(a,b);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Abs
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Abs (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x1820a6810

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Abs
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  float fVar1;
  float *pfVar2;
  Il2CppObject *pIVar3;
  float local_res10 [6];
  
  if (Il2CppMethodInitialized_184346805 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346805 = '\x01';
  }
  if (value != (Il2CppObject *)0x0) {
    pIVar3 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e08) {
      pIVar3 = value;
    }
    if (pIVar3 != (Il2CppObject *)0x0) {
      if ((value->klass->_1).element_class == (g_data_184354e08->_1).element_class) {
        pfVar2 = il2cpp_object_unbox(value);
        fVar1 = *pfVar2;
        if (Il2CppMethodInitialized_184341267 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_184341267 = '\x01';
        }
        if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        local_res10[0] = (float)-(int)fVar1;
        if ((int)local_res10[0] < 0) {
          local_res10[0] = fVar1;
        }
        pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
        return pIVar3;
      }
      il2cpp_codegen_raise_invalid_cast_exception();
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  local_res10[0] =
       CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                 (value,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  local_res10[0] = ABS(local_res10[0]);
  pIVar3 = il2cpp_value_box(g_data_184354e38,local_res10);
  return pIVar3;
}


// CustomLogic.CustomLogicMathBuiltin$$Sqrt
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Sqrt (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1820a7510

float CustomLogic_CustomLogicMathBuiltin__Sqrt
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  if (0.0 <= value) {
    return SQRT(value);
  }
  fVar1 = (float)il2cpp_runtime_helper_1804fa7a0(value);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Repeat
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Repeat (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* value, Il2CppObject* max, const MethodInfo* method);
// 0x1820a72b0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Repeat
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *value,Il2CppObject *max,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_res10 [6];
  
  if (Il2CppMethodInitialized_184346806 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_184346806 = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  fVar2 = MiscExtensions__UnboxToFloat(value,(MethodInfo *)0x0);
  fVar3 = MiscExtensions__UnboxToFloat(max,(MethodInfo *)0x0);
  fVar4 = (float)il2cpp_runtime_helper_1804f4110(fVar2 / fVar3);
  fVar2 = fVar2 - fVar4 * fVar3;
  if (fVar2 < 0.0) {
    local_res10[0] = 0.0;
  }
  else {
    local_res10[0] = fVar3;
    if (fVar2 <= fVar3) {
      local_res10[0] = fVar2;
    }
  }
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res10);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Mod
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Mod (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x1820a70a0

int32_t CustomLogic_CustomLogicMathBuiltin__Mod
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,MethodInfo *method)

{
  return a % b;
}


// CustomLogic.CustomLogicMathBuiltin$$Sin
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Sin (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x1820a7490

float CustomLogic_CustomLogicMathBuiltin__Sin
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f5fc0(angle * 0.017453292);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Cos
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Cos (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x1820a6c30

float CustomLogic_CustomLogicMathBuiltin__Cos
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f54c0(angle * 0.017453292);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Tan
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Tan (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x1820a7530

float CustomLogic_CustomLogicMathBuiltin__Tan
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804fb3e0(angle * 0.017453292);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Asin
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Asin (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1820a6940

float CustomLogic_CustomLogicMathBuiltin__Asin
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804fa840(value);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Acos
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Acos (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1820a6920

float CustomLogic_CustomLogicMathBuiltin__Acos
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f6310(value);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Atan
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Atan (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1820a6980

float CustomLogic_CustomLogicMathBuiltin__Atan
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f6550(value);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Atan2
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Atan2 (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, const MethodInfo* method);
// 0x1820a6960

float CustomLogic_CustomLogicMathBuiltin__Atan2
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f3c50(a,b);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Ceil
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Ceil (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1820a6a00

int32_t CustomLogic_CustomLogicMathBuiltin__Ceil
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  MethodInfo *in_RDX;
  double dVar1;
  
  if (Il2CppMethodInitialized_18433df29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df29 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar1 = il2cpp_runtime_helper_1804f45c0((double)value,in_RDX);
  return (int)dVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Floor
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Floor (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1820a6c60

int32_t CustomLogic_CustomLogicMathBuiltin__Floor
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  MethodInfo *in_RDX;
  double dVar1;
  
  if (Il2CppMethodInitialized_18433df26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433df26 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar1 = il2cpp_runtime_helper_1804f4690((double)value,in_RDX);
  return (int)dVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Round
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Round (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1820a7370

int32_t CustomLogic_CustomLogicMathBuiltin__Round
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  MethodInfo *method_00;
  double dVar1;
  double dVar2;
  Il2CppMethodPointer local_res20;
  
  if (Il2CppMethodInitialized_184340a0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_184340a0c = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar2 = (double)value;
  method_00 = (MethodInfo *)&local_res20;
  if (dVar2 < 0.0) {
    dVar1 = il2cpp_runtime_helper_1804f3b80(dVar2,(double *)method_00,method);
    if (dVar1 == -0.5) {
      if (((longlong)(double)local_res20 & 1U) != 0) {
        return (int)((double)local_res20 - 1.0);
      }
    }
    else {
      local_res20 = (Il2CppMethodPointer)il2cpp_runtime_helper_1804f45c0(dVar2 - 0.5,method_00);
    }
  }
  else {
    dVar1 = il2cpp_runtime_helper_1804f3b80(dVar2,(double *)method_00,method);
    if (dVar1 != 0.5) {
      dVar2 = il2cpp_runtime_helper_1804f4690(dVar2 + 0.5,method_00);
      return (int)dVar2;
    }
    if (((longlong)(double)local_res20 & 1U) != 0) {
      return (int)((double)local_res20 + 1.0);
    }
  }
  return (int)(double)local_res20;
}


// CustomLogic.CustomLogicMathBuiltin$$Deg2Rad
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Deg2Rad (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x1820a6c40

float CustomLogic_CustomLogicMathBuiltin__Deg2Rad
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  return angle * 0.017453292;
}


// CustomLogic.CustomLogicMathBuiltin$$Rad2Deg
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Rad2Deg (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x1820a72a0

float CustomLogic_CustomLogicMathBuiltin__Rad2Deg
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  return angle * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Lerp
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Lerp (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x1820a6dd0

float CustomLogic_CustomLogicMathBuiltin__Lerp
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float t,MethodInfo *method)

{
  if (t < 0.0) {
    t = 0.0;
  }
  else if (1.0 < t) {
    return (b - a) * 1.0 + a;
  }
  return (b - a) * t + a;
}


// CustomLogic.CustomLogicMathBuiltin$$LerpUnclamped
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__LerpUnclamped (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x1820a6db0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a6db0: nop 

float
CustomLogic_CustomLogicMathBuiltin__LerpUnclamped(CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, MethodInfo* method)

{
  return (b - a) * interpolant + a;
}


// CustomLogic.CustomLogicMathBuiltin$$Sign
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Sign (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1820a7470

float CustomLogic_CustomLogicMathBuiltin__Sign
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  if (0.0 <= value) {
    return 1.0;
  }
  return -1.0;
}


// CustomLogic.CustomLogicMathBuiltin$$InverseLerp
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__InverseLerp (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float value, const MethodInfo* method);
// 0x1820a6cc0

float CustomLogic_CustomLogicMathBuiltin__InverseLerp
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float value,MethodInfo *method)

{
  float fVar1;
  
  if (a == b) {
    return 0.0;
  }
  fVar1 = (value - a) / (b - a);
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (1.0 < fVar1) {
    return 1.0;
  }
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$LerpAngle
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__LerpAngle (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x1820a6d00

float CustomLogic_CustomLogicMathBuiltin__LerpAngle
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float t,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f4110((b - a) / 360.0);
  fVar1 = (b - a) - fVar1 * 360.0;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (360.0 < fVar1) {
    fVar1 = 360.0;
  }
  if (180.0 < fVar1) {
    fVar1 = fVar1 - 360.0;
  }
  if (t < 0.0) {
    t = 0.0;
  }
  else if (1.0 < t) {
    t = 1.0;
  }
  return t * fVar1 + a;
}


// CustomLogic.CustomLogicMathBuiltin$$Log
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Log (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1820a6e10

float CustomLogic_CustomLogicMathBuiltin__Log
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804faef0(value);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$MoveTowards
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__MoveTowards (CustomLogic_CustomLogicMathBuiltin_o* __this, float current, float target, float maxDelta, const MethodInfo* method);
// 0x1820a71c0

float CustomLogic_CustomLogicMathBuiltin__MoveTowards
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float current,float target,float maxDelta,
                MethodInfo *method)

{
  if (ABS(target - current) <= maxDelta) {
    return target;
  }
  if (0.0 <= target - current) {
    return maxDelta * 1.0 + current;
  }
  return maxDelta * -1.0 + current;
}


// CustomLogic.CustomLogicMathBuiltin$$MoveTowardsAngle
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__MoveTowardsAngle (CustomLogic_CustomLogicMathBuiltin_o* __this, float current, float target, float maxDelta, const MethodInfo* method);
// 0x1820a70b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820a713f: movaps xmm0, xmm10
// asm:   0x1820a7143: jmp 0x1820a7192

float CustomLogic_CustomLogicMathBuiltin__MoveTowardsAngle
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float current,float target,float maxDelta,
                MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804f4110((target - current) / 360.0);
  fVar1 = (target - current) - fVar1 * 360.0;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  else if (360.0 < fVar1) {
    fVar1 = 360.0;
  }
  if (180.0 < fVar1) {
    fVar1 = fVar1 - 360.0;
  }
  if ((fVar1 <= -maxDelta) || (maxDelta <= fVar1)) {
    if (maxDelta < ABS((fVar1 + current) - current)) {
      if ((fVar1 + current) - current < 0.0) {
        fVar1 = -1.0;
      }
      else {
        fVar1 = 1.0;
      }
      fVar1 = fVar1 * maxDelta;
    }
    target = fVar1 + current;
  }
  return target;
}


// CustomLogic.CustomLogicMathBuiltin$$PingPong
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__PingPong (CustomLogic_CustomLogicMathBuiltin_o* __this, float t, float length, const MethodInfo* method);
// 0x1820a7210

float CustomLogic_CustomLogicMathBuiltin__PingPong
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float t,float length,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = length + length;
  fVar1 = (float)il2cpp_runtime_helper_1804f4110(t / fVar2);
  fVar1 = t - fVar1 * fVar2;
  if (fVar1 < 0.0) {
    fVar2 = 0.0;
  }
  else if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  return length - ABS(fVar2 - length);
}


// CustomLogic.CustomLogicMathBuiltin$$Exp
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Exp (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x1820a6c50

float CustomLogic_CustomLogicMathBuiltin__Exp
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = (float)il2cpp_runtime_helper_1804fabd0(value);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$SmoothStep
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__SmoothStep (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x1820a74a0

float CustomLogic_CustomLogicMathBuiltin__SmoothStep
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float t,MethodInfo *method)

{
  float fVar1;
  
  if (t < 0.0) {
    t = 0.0;
  }
  else if (1.0 < t) {
    t = 1.0;
  }
  fVar1 = t * -2.0 * t * t + t * 3.0 * t;
  return (1.0 - fVar1) * a + fVar1 * b;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseAnd
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseAnd (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x1820a69a0

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseAnd
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,MethodInfo *method)

{
  return a & b;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseOr
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseOr (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x1820a69d0

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseOr
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,MethodInfo *method)

{
  return a | b;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseXor
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseXor (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x1820a69f0

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseXor
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,MethodInfo *method)

{
  return a ^ b;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseNot
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseNot (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x1820a69c0

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseNot
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  return ~value;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseLeftShift
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseLeftShift (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t value, int32_t shift, const MethodInfo* method);
// 0x1820a69b0

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseLeftShift
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t value,int32_t shift,MethodInfo *method
                  )

{
  return value << ((byte)shift & 0x1f);
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseRightShift
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseRightShift (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t value, int32_t shift, const MethodInfo* method);
// 0x1820a69e0

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseRightShift
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t value,int32_t shift,MethodInfo *method
                  )

{
  return value >> ((byte)shift & 0x1f);
}


// CustomLogic.CustomLogicMathBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMathBuiltin__get_ClassName (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x1820a7590

System_String_o *
CustomLogic_CustomLogicMathBuiltin__get_ClassName
          (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346807 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Math");
    Il2CppMethodInitialized_184346807 = '\x01';
  }
  return "Math";
}


// CustomLogic.CustomLogicMathBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMathBuiltin__get_IsAbstract (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicMathBuiltin__get_IsAbstract(CustomLogic_CustomLogicMathBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicMathBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMathBuiltin__get_IsStatic (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicMathBuiltin__get_IsStatic(CustomLogic_CustomLogicMathBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicMathBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMathBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicMathBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicMathBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


