// Type: CustomLogic.CustomLogicMathBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicMathBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicMathBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicMathBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicMathBuiltin_o* CustomLogic_CustomLogicMathBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b2de00

CustomLogic_CustomLogicMathBuiltin_o *
CustomLogic_CustomLogicMathBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_075471c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin);
    Il2CppMethodInitialized_075471c7 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicMathBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin);
  if (Il2CppMethodInitialized_075471bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075471bf = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicMathBuiltin_o *)__this;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b32820

void CustomLogic_CustomLogicMathBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075471f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471f5 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b32890

void CustomLogic_CustomLogicMathBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clamp>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Clamp_b__8_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b328a0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Clamp_b__8_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  MethodInfo *in_R8;
  
  if (__a != (System_Object_array *)0x0) {
    uVar1 = (uint)__a->max_length;
    if (((uVar1 == 0) || (uVar1 == 1)) || (uVar1 < 3)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicMathBuiltin__Clamp
                         ((CustomLogic_CustomLogicMathBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          __a->m_Items[2],in_R8);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Max>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Max_b__9_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b328e0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Max_b__9_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicMathBuiltin__Max
                         ((CustomLogic_CustomLogicMathBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Min>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Min_b__10_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b32910

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Min_b__10_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicMathBuiltin__Min
                         ((CustomLogic_CustomLogicMathBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                          method);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Pow>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Pow_b__11_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b32940

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Pow_b__11_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  undefined8 in_RAX;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  float fVar2;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_075471f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471f6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b32a0c:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    uStack_28 = CONCAT44(uStack_28._4_4_,fVar2);
    if ((__a->max_length & 0xfffffffe) != 0) {
      __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)__a->m_Items[1];
      method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        ((Il2CppObject *)__this_00,
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        fVar2 = powf(__this_00,(float)uStack_28,fVar2,method_00);
        uStack_28 = CONCAT44(fVar2,(float)uStack_28);
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,(void *)((long)&uStack_28 + 4));
        return pIVar1;
      }
      goto label_05b32a0c;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Abs>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Abs_b__12_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b32a20

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Abs_b__12_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicMathBuiltin__Abs
                         ((CustomLogic_CustomLogicMathBuiltin_o *)__this,__a->m_Items[0],(MethodInfo *)__a);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sqrt>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sqrt_b__13_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b32a50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b32ac8: sqrtss xmm0, xmm0
// asm:   0x5b32acc: jmp 0x5b32ad3

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sqrt_b__13_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float __x;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_075471f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471f7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __x = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
    ;
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (__x < 0.0) {
        sqrtf(__x);
      }
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Repeat>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Repeat_b__14_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b32b00

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Repeat_b__14_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  Il2CppObject *pIVar2;
  float fVar3;
  float fVar4;
  uint uStack_3c;
  float fStack_38;
  float fStack_28;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar2 = __a->m_Items[0];
      obj = __a->m_Items[1];
      if (Il2CppMethodInitialized_075471c5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
        Il2CppMethodInitialized_075471c5 = '\x01';
      }
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      fStack_38 = MiscExtensions__UnboxToFloat(pIVar2,(MethodInfo *)0x0);
      fStack_28 = MiscExtensions__UnboxToFloat(obj,(MethodInfo *)0x0);
      fVar3 = floorf(fStack_38 / fStack_28);
      fVar4 = fStack_38 - fVar3 * fStack_28;
      fVar3 = fStack_28;
      if (fVar4 <= fStack_28) {
        fVar3 = fVar4;
      }
      uStack_3c = -(uint)(0.0 <= fVar4) & (uint)fVar3;
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,&uStack_3c);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Mod>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Mod_b__15_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b32bf0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Mod_b__15_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (Il2CppMethodInitialized_075471f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471f8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b32ca5:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_int_
              (pIVar1,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                (__a->m_Items[1],
                 (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_24);
        return pIVar1;
      }
      goto label_05b32ca5;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sin>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sin_b__16_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b32cb0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sin_b__16_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_075471f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471f9 = '\x01';
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
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      sinf(fVar2 * 0.017453292);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cos>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Cos_b__17_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b32d60

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Cos_b__17_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_075471fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471fa = '\x01';
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
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      cosf(fVar2 * 0.017453292);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Tan>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Tan_b__18_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b32e10

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Tan_b__18_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_075471fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471fb = '\x01';
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
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      tanf(fVar2 * 0.017453292);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Asin>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Asin_b__19_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b32ec0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Asin_b__19_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float __x;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_075471fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471fc = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __x = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
    ;
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      asinf(__x);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Acos>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Acos_b__20_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b32f70

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Acos_b__20_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float __x;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_075471fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471fd = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __x = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
    ;
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      acosf(__x);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Atan>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Atan_b__21_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b33020

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Atan_b__21_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float __x;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_075471fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471fe = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __x = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
    ;
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      atanf(__x);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Atan2>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Atan2_b__22_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b330d0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Atan2_b__22_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  undefined8 in_RAX;
  Il2CppObject *pIVar1;
  float fVar2;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_075471ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471ff = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b331a4:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    uStack_28 = CONCAT44(uStack_28._4_4_,fVar2);
    if ((__a->max_length & 0xfffffffe) != 0) {
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        fVar2 = atan2f((float)uStack_28,fVar2);
        uStack_28 = CONCAT44(fVar2 * 57.29578,(float)uStack_28);
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,(void *)((long)&uStack_28 + 4));
        return pIVar1;
      }
      goto label_05b331a4;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Ceil>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Ceil_b__23_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b331b0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Ceil_b__23_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  float fVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07547200 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547200 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar2,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_0753e7f9 == '\0') {
        uStack_18 = CONCAT44(uStack_18._4_4_,fVar3);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7f9 = '\x01';
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        fVar3 = (float)uStack_18;
      }
      else {
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        uStack_18._4_4_ = (undefined4)((ulong)uStack_18 >> 0x20);
        uStack_18 = CONCAT44(uStack_18._4_4_,fVar3);
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        fVar3 = (float)uStack_18;
      }
      fVar3 = ceilf(fVar3);
      uStack_18 = CONCAT44((int)fVar3,(float)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_18 + 4));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Floor>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Floor_b__24_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b332c0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Floor_b__24_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  float fVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07547201 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547201 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar2,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_0753e7f6 == '\0') {
        uStack_18 = CONCAT44(uStack_18._4_4_,fVar3);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_0753e7f6 = '\x01';
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        fVar3 = (float)uStack_18;
      }
      else {
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        uStack_18._4_4_ = (undefined4)((ulong)uStack_18 >> 0x20);
        uStack_18 = CONCAT44(uStack_18._4_4_,fVar3);
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        fVar3 = (float)uStack_18;
      }
      fVar3 = floorf(fVar3);
      uStack_18 = CONCAT44((int)fVar3,(float)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&uStack_18 + 4));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Round>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Round_b__25_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b333d0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Round_b__25_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar3;
  double dVar4;
  int iStack_24;
  double dStack_20;
  Il2CppMethodPointer pIStack_18;
  
  if (Il2CppMethodInitialized_07547202 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547202 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar2,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_07541320 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        Il2CppMethodInitialized_07541320 = '\x01';
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      dStack_20 = (double)fVar3;
      method_01 = (MethodInfo *)&pIStack_18;
      dVar4 = modf(dStack_20,(double *)method_01,method_00);
      if (0.0 <= fVar3) {
        if ((dVar4 != 0.5) || (NAN(dVar4))) {
          pIStack_18 = (Il2CppMethodPointer)floor(dStack_20 + 0.5,method_01);
        }
        else if (((long)(double)pIStack_18 & 1U) != 0) {
          pIStack_18 = (Il2CppMethodPointer)((double)pIStack_18 + 1.0);
        }
      }
      else if ((dVar4 != -0.5) || (NAN(dVar4))) {
        pIStack_18 = (Il2CppMethodPointer)ceil(dStack_20 + -0.5,method_01);
      }
      else if (((long)(double)pIStack_18 & 1U) != 0) {
        pIStack_18 = (Il2CppMethodPointer)((double)pIStack_18 + -1.0);
      }
      iStack_24 = (int)(double)pIStack_18;
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_24);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Deg2Rad>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Deg2Rad_b__26_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b33580

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Deg2Rad_b__26_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07547203 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547203 = '\x01';
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
              (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Rad2Deg>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Rad2Deg_b__27_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b33630

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Rad2Deg_b__27_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07547204 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547204 = '\x01';
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
              (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__28_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b336e0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__28_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07547205 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547205 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b337f4:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (2 < (uint)__a->max_length) {
        fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[2],
                           (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
          fVar5 = 1.0;
          if (fVar4 <= 1.0) {
            fVar5 = fVar4;
          }
          fStack_24 = (fVar3 - fVar2) * (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5) + fVar2;
          pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_24);
          return pIVar1;
        }
        goto label_05b337f4;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__29_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b33800

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__29_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_24;
  
  if (Il2CppMethodInitialized_07547206 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547206 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b338f9:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (2 < (uint)__a->max_length) {
        fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[2],
                           (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
          fStack_24 = (fVar3 - fVar2) * fVar4 + fVar2;
          pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_24);
          return pIVar1;
        }
        goto label_05b338f9;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sign>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sign_b__30_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b33900

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Sign_b__30_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07547207 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547207 = '\x01';
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
              (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__InverseLerp>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__InverseLerp_b__31_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b339c0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__InverseLerp_b__31_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uStack_24;
  
  if (Il2CppMethodInitialized_07547208 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547208 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b33ae0:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (2 < (uint)__a->max_length) {
        fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[2],
                           (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
          if ((fVar2 != fVar3) || (NAN(fVar2) || NAN(fVar3))) {
            fVar3 = (fVar4 - fVar2) / (fVar3 - fVar2);
            fVar2 = 1.0;
            if (fVar3 <= 1.0) {
              fVar2 = fVar3;
            }
            uStack_24 = -(uint)(0.0 <= fVar3) & (uint)fVar2;
          }
          else {
            uStack_24 = 0;
          }
          pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&uStack_24);
          return pIVar1;
        }
        goto label_05b33ae0;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpAngle>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__LerpAngle_b__32_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b33af0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__LerpAngle_b__32_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [12];
  float fStack_3c;
  float fStack_38;
  
  if (Il2CppMethodInitialized_07547209 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547209 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b33c6b:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (2 < (uint)__a->max_length) {
        fStack_38 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              (__a->m_Items[2],
                               (MethodInfo_34BDFE0 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
          fVar4 = floorf((fVar3 - fVar2) / 360.0);
          fVar3 = fVar4 * -360.0 + (fVar3 - fVar2);
          auVar5 = ZEXT812(0x43b40000);
          if (fVar3 <= auVar5._0_4_) {
            auVar5._4_8_ = auVar5._4_8_;
            auVar5._0_4_ = fVar3;
          }
          fVar4 = (float)(-(uint)(0.0 <= fVar3) & auVar5._0_4_);
          fVar3 = 1.0;
          if (fStack_38 <= 1.0) {
            fVar3 = fStack_38;
          }
          fStack_3c = (float)(-(uint)(0.0 <= fStack_38) & (uint)fVar3) *
                      (float)(~-(uint)(180.0 < fVar4) & (uint)fVar4 |
                             (uint)(fVar4 + -360.0) & -(uint)(180.0 < fVar4)) + fVar2;
          pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_3c);
          return pIVar1;
        }
        goto label_05b33c6b;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Log>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Log_b__33_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b33c70

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Log_b__33_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  float value;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_0754720a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754720a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      ((Il2CppObject *)__this_00,
                       (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      logf(__this_00,value,method_00);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTowards>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__MoveTowards_b__34_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b33d20

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__MoveTowards_b__34_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uStack_3c;
  float fStack_38;
  
  if (Il2CppMethodInitialized_0754720b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754720b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b33e54:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      fStack_38 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[1],
                             (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                            );
      if (2 < (uint)__a->max_length) {
        fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[2],
                           (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
          uVar2 = -(uint)(0.0 <= fStack_38 - fVar4);
          uVar3 = -(uint)(fVar5 < ABS(fStack_38 - fVar4));
          uStack_3c = ~uVar3 & (uint)fStack_38 |
                      (uint)((float)(~uVar2 & (uint)-fVar5 | uVar2 & (uint)fVar5) + fVar4) & uVar3;
          pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&uStack_3c);
          return pIVar1;
        }
        goto label_05b33e54;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTowardsAngle>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__MoveTowardsAngle_b__35_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b33e60

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__MoveTowardsAngle_b__35_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar7 [12];
  undefined4 uStack_4c;
  undefined1 auStack_48 [16];
  float fStack_38;
  
  if (Il2CppMethodInitialized_0754720c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754720c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b3401a:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      auStack_48._0_4_ =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (__a->m_Items[1],
                      (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      auStack_48._4_4_ = extraout_XMM0_Db;
      auStack_48._8_4_ = extraout_XMM0_Dc;
      auStack_48._12_4_ = extraout_XMM0_Dd;
      if (2 < (uint)__a->max_length) {
        fStack_38 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              (__a->m_Items[2],
                               (MethodInfo_34BDFE0 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
          fVar5 = (float)auStack_48._0_4_ - fVar4;
          fVar6 = floorf(fVar5 / 360.0);
          fVar5 = fVar6 * -360.0 + fVar5;
          auVar7 = ZEXT812(0x43b40000);
          if (fVar5 <= auVar7._0_4_) {
            auVar7._4_8_ = auVar7._4_8_;
            auVar7._0_4_ = fVar5;
          }
          fVar6 = (float)(-(uint)(0.0 <= fVar5) & auVar7._0_4_);
          fVar6 = (float)(~-(uint)(180.0 < fVar6) & (uint)fVar6 |
                         (uint)(fVar6 + -360.0) & -(uint)(180.0 < fVar6));
          if ((fVar6 <= -fStack_38) || (fStack_38 <= fVar6)) {
            fVar5 = (fVar4 + fVar6) - fVar4;
            uVar2 = -(uint)(0.0 <= fVar5);
            uVar3 = -(uint)(fStack_38 < ABS(fVar5));
            auStack_48 = ZEXT416(uVar3 & (uint)((float)(~uVar2 & (uint)-fStack_38 | uVar2 & (uint)fStack_38) +
                                               fVar4) | ~uVar3 & (uint)(fVar4 + fVar6));
          }
          uStack_4c = auStack_48._0_4_;
          pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&uStack_4c);
          return pIVar1;
        }
        goto label_05b3401a;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__PingPong>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__PingPong_b__36_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b34020

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__PingPong_b__36_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fStack_4c;
  float fStack_48;
  float fStack_38;
  
  if (Il2CppMethodInitialized_0754720d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754720d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b3413c:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fStack_48 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (pIVar1,(MethodInfo_34BDFE0 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        fStack_38 = fVar2 + fVar2;
        fVar3 = floorf(fStack_48 / fStack_38);
        fVar4 = fStack_48 - fVar3 * fStack_38;
        fVar3 = fStack_38;
        if (fVar4 <= fStack_38) {
          fVar3 = fVar4;
        }
        fStack_4c = fVar2 - ABS((float)(-(uint)(0.0 <= fVar4) & (uint)fVar3) - fVar2);
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_4c);
        return pIVar1;
      }
      goto label_05b3413c;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__Exp>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Exp_b__37_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b34150

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__Exp_b__37_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicMathBuiltin_o *__this_00;
  float value;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_0754720e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754720e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    __this_00 = (CustomLogic_CustomLogicMathBuiltin_o *)__a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      ((Il2CppObject *)__this_00,
                       (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      expf(__this_00,value,method_00);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__SmoothStep>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__SmoothStep_b__38_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b34200

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__SmoothStep_b__38_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fStack_24;
  
  if (Il2CppMethodInitialized_0754720f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754720f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b34346:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar1,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__a->max_length & 0xfffffffe) != 0) {
      fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (2 < (uint)__a->max_length) {
        fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (__a->m_Items[2],
                           (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
          fVar5 = 1.0;
          if (fVar4 <= 1.0) {
            fVar5 = fVar4;
          }
          fVar5 = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
          fVar4 = fVar5 * 3.0 * fVar5 - (fVar5 + fVar5) * fVar5 * fVar5;
          fStack_24 = fVar2 * (1.0 - fVar4) + fVar3 * fVar4;
          pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_24);
          return pIVar1;
        }
        goto label_05b34346;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseAnd>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseAnd_b__39_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b34350

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseAnd_b__39_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (Il2CppMethodInitialized_07547210 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547210 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b34400:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_int_
              (pIVar1,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                (__a->m_Items[1],
                 (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_24);
        return pIVar1;
      }
      goto label_05b34400;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseOr>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseOr_b__40_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b34410

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseOr_b__40_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (Il2CppMethodInitialized_07547211 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547211 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b344c0:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_int_
              (pIVar1,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                (__a->m_Items[1],
                 (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_24);
        return pIVar1;
      }
      goto label_05b344c0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseXor>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseXor_b__41_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b344d0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseXor_b__41_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (Il2CppMethodInitialized_07547212 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547212 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b34580:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_int_
              (pIVar1,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                (__a->m_Items[1],
                 (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_24);
        return pIVar1;
      }
      goto label_05b34580;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseNot>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseNot_b__42_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b34590

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseNot_b__42_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07547213 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547213 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_int_
              (pIVar1,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_14);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseLeftShift>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseLeftShift_b__43_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b34630

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseLeftShift_b__43_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (Il2CppMethodInitialized_07547214 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547214 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b346e2:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_int_
              (pIVar1,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                (__a->m_Items[1],
                 (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_24);
        return pIVar1;
      }
      goto label_05b346e2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings.<>c$$<__CreateMethodBinding__BitwiseRightShift>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseRightShift_b__44_0 (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicMathBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b346f0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings___c_____CreateMethodBinding__BitwiseRightShift_b__44_0
          (CustomLogic_CustomLogicMathBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicMathBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_24 [4];
  
  if (Il2CppMethodInitialized_07547215 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547215 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b347a2:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo_int_
              (pIVar1,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                (__a->m_Items[1],
                 (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicMathBuiltin_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_24);
        return pIVar1;
      }
      goto label_05b347a2;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicMathBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b2df20

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicMathBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicMathBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_075471c8 == '\0') {
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
    Il2CppMethodInitialized_075471c8 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x8f325c2a) {
    if (uVar2 < 0x44a37324) {
      if (uVar2 < 0x2e9445f8) {
        if (uVar2 < 0x1762fe42) {
          if (uVar2 == 0x6626d4a) {
            bVar1 = System_String__op_Equality(name,"Repeat",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Repeat
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x1762fe41) {
            bVar1 = System_String__op_Equality(name,"BitwiseNot",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseNot
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x27fffab2) {
          bVar1 = System_String__op_Equality(name,"PI",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__PI
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x2da77deb) {
          bVar1 = System_String__op_Equality(name,"MoveTowardsAngle",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowardsAngle
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x2e9445f7) {
          bVar1 = System_String__op_Equality(name,"Min",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Min
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x3da28cb3) {
        if (uVar2 == 0x3ca7e3b9) {
          bVar1 = System_String__op_Equality(name,"Max",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Max
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x3da28cb2) {
          bVar1 = System_String__op_Equality(name,"Rad2DegConstant",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Rad2DegConstant
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x3f6740bd) {
        bVar1 = System_String__op_Equality(name,"SmoothStep",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__SmoothStep
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x42bc54ed) {
        bVar1 = System_String__op_Equality(name,"Sin",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sin
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x44a37323) {
        bVar1 = System_String__op_Equality(name,"Mod",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Mod
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x5ea410be) {
      if (uVar2 < 0x4e2d0c53) {
        if (uVar2 == 0x4dea6e5c) {
          bVar1 = System_String__op_Equality(name,"Clamp",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Clamp
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x4e2d0c52) {
          bVar1 = System_String__op_Equality(name,"Rad2Deg",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Rad2Deg
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x513efccb) {
        bVar1 = System_String__op_Equality(name,"LerpAngle",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpAngle
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5e187a3c) {
        bVar1 = System_String__op_Equality(name,"Cos",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Cos
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5ea410bd) {
        bVar1 = System_String__op_Equality(name,"Floor",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Floor
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x7edc5dc7) {
      if (uVar2 == 0x638c103a) {
        bVar1 = System_String__op_Equality(name,"Deg2Rad",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Deg2Rad
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x7c627bca) {
        bVar1 = System_String__op_Equality(name,"BitwiseRightShift",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseRightShift
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x7edc5dc6) {
        bVar1 = System_String__op_Equality(name,"Asin",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Asin
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x86a516df) {
      bVar1 = System_String__op_Equality(name,"Atan",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x8cd299db) {
      bVar1 = System_String__op_Equality(name,"Abs",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Abs((MethodInfo *)pCVar6)
        ;
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x8f325c29) {
      bVar1 = System_String__op_Equality(name,"BitwiseAnd",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseAnd
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xc9773aa4) {
    if (uVar2 < 0xabbd87c6) {
      if (uVar2 < 0x96061d5b) {
        if (uVar2 == 0x8f6340c4) {
          bVar1 = System_String__op_Equality(name,"Sign",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sign
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x96061d5a) {
          bVar1 = System_String__op_Equality(name,"InverseLerp",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__InverseLerp
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x9e956088) {
        bVar1 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Lerp
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xa1dd7bf1) {
        bVar1 = System_String__op_Equality(name,"Log",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Log
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xabbd87c5) {
        bVar1 = System_String__op_Equality(name,"BitwiseXor",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseXor
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xb3919aab) {
      if (uVar2 == 0xacfe0068) {
        bVar1 = System_String__op_Equality(name,"MoveTowards",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowards
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xb184d7bd) {
        bVar1 = System_String__op_Equality(name,"Epsilon",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Epsilon
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xb3919aaa) {
        bVar1 = System_String__op_Equality(name,"Deg2RadConstant",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Deg2RadConstant
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 == 0xbc2e2b3f) {
      bVar1 = System_String__op_Equality(name,"Acos",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Acos
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xbd386b75) {
      bVar1 = System_String__op_Equality(name,"Pow",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Pow((MethodInfo *)pCVar6)
        ;
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xc9773aa3) {
      bVar1 = System_String__op_Equality(name,"PingPong",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__PingPong
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe3112e29) {
    if (uVar2 < 0xd7ab87c9) {
      if (uVar2 == 0xd6176f0d) {
        bVar1 = System_String__op_Equality(name,"BitwiseOr",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseOr
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xd7ab87c8) {
        bVar1 = System_String__op_Equality(name,"Exp",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Exp
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xe0993ada) {
      bVar1 = System_String__op_Equality(name,"NegativeInfinity",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__NegativeInfinity
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xe2e31717) {
      bVar1 = System_String__op_Equality(name,"Atan2",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan2
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe3112e28) {
      bVar1 = System_String__op_Equality(name,"Ceil",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Ceil
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xf4248f7c) {
    if (uVar2 == 0xe740d999) {
      bVar1 = System_String__op_Equality(name,"Infinity",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Infinity
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xf176e11b) {
      bVar1 = System_String__op_Equality(name,"BitwiseLeftShift",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseLeftShift
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xf4248f7b) {
      bVar1 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpUnclamped
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf4c753db) {
    bVar1 = System_String__op_Equality(name,"Round",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Round((MethodInfo *)pCVar6)
      ;
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfe1a87ef) {
    bVar1 = System_String__op_Equality(name,"Sqrt",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sqrt((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xff835f38) {
    bVar1 = System_String__op_Equality(name,"Tan",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings)
        ;
      }
      pCVar3 = CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Tan((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicMathBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__PI
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__PI (const MethodInfo* method);
// 0x5b2eef0

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__PI(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__PI_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_075471c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__PI_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Infinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Infinity (const MethodInfo* method);
// 0x5b2ef90

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Infinity(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Infinity_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_075471ca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Infinity_g____getter_3_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__NegativeInfinity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__NegativeInfinity (const MethodInfo* method);
// 0x5b2f030

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__NegativeInfinity(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__NegativeInfinity_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_075471cb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__NegativeInfinity_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Rad2DegConstant
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Rad2DegConstant (const MethodInfo* method);
// 0x5b2f0d0

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Rad2DegConstant(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Rad2DegConstant_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_075471cc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Rad2DegConstant_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Deg2RadConstant
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Deg2RadConstant (const MethodInfo* method);
// 0x5b2f170

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Deg2RadConstant(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Deg2RadConstant_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_075471cd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Deg2RadConstant_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreatePropertyBinding__Epsilon
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Epsilon (const MethodInfo* method);
// 0x5b2f210

CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreatePropertyBinding__Epsilon(MethodInfo *method)

{
  System_Func_CustomLogicMathBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Epsilon_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicMathBuiltin_object);
    Il2CppMethodInitialized_075471ce = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings___CreatePropertyBinding__Epsilon_g____getter_7_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Clamp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Clamp (const MethodInfo* method);
// 0x5b2f2b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2f2e5: jmp 0x5b2f355

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Clamp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Clamp_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471cf = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Clamp_b__8_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Max
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Max (const MethodInfo* method);
// 0x5b2f3f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2f425: jmp 0x5b2f495

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Max(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Max_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471d0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Max_b__9_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Min
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Min (const MethodInfo* method);
// 0x5b2f530
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2f565: jmp 0x5b2f5d5

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Min(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Min_b__10_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471d1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Min_b__10_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Pow
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Pow (const MethodInfo* method);
// 0x5b2f670
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2f6a5: jmp 0x5b2f715

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Pow(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Pow_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471d2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Pow_b__11_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Abs
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Abs (const MethodInfo* method);
// 0x5b2f7b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2f7e5: jmp 0x5b2f855

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Abs(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Abs_b__12_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471d3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Abs_b__12_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sqrt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sqrt (const MethodInfo* method);
// 0x5b2f8f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2f925: jmp 0x5b2f995

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sqrt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sqrt_b__13_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471d4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sqrt_b__13_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Repeat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Repeat (const MethodInfo* method);
// 0x5b2fa30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2fa65: jmp 0x5b2fad5

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Repeat(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Repeat_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471d5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Repeat_b__14_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Mod
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Mod (const MethodInfo* method);
// 0x5b2fb70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2fba5: jmp 0x5b2fc15

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Mod(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Mod_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471d6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__15_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__15_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Mod_b__15_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__15_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__15_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sin (const MethodInfo* method);
// 0x5b2fcb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2fce5: jmp 0x5b2fd55

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sin(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sin_b__16_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471d7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__16_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__16_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sin_b__16_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__16_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__16_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Cos
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Cos (const MethodInfo* method);
// 0x5b2fdf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2fe25: jmp 0x5b2fe95

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Cos(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Cos_b__17_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471d8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__17_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__17_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Cos_b__17_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__17_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__17_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Tan
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Tan (const MethodInfo* method);
// 0x5b2ff30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2ff65: jmp 0x5b2ffd5

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Tan(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Tan_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471d9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__18_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__18_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Tan_b__18_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__18_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__18_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Asin
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Asin (const MethodInfo* method);
// 0x5b30070
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b300a5: jmp 0x5b30115

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Asin(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Asin_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471da = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__19_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__19_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Asin_b__19_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__19_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__19_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Acos
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Acos (const MethodInfo* method);
// 0x5b301b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b301e5: jmp 0x5b30255

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Acos(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Acos_b__20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471db = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__20_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__20_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Acos_b__20_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__20_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__20_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Atan
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan (const MethodInfo* method);
// 0x5b302f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b30325: jmp 0x5b30395

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan_b__21_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471dc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__21_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__21_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan_b__21_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__21_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__21_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Atan2
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan2 (const MethodInfo* method);
// 0x5b30430
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b30465: jmp 0x5b304d5

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Atan2(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan2_b__22_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471dd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Atan2_b__22_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Ceil
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Ceil (const MethodInfo* method);
// 0x5b30570
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b305a8: jmp 0x5b3061b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Ceil(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Ceil_b__23_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471de = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__23_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__23_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Ceil_b__23_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__23_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__23_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Floor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Floor (const MethodInfo* method);
// 0x5b306b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b306e8: jmp 0x5b3075b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Floor(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Floor_b__24_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471df = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__24_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__24_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Floor_b__24_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__24_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__24_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Round
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Round (const MethodInfo* method);
// 0x5b307f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b30828: jmp 0x5b3089b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Round(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Round_b__25_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471e0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__25_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__25_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Round_b__25_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__25_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__25_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Deg2Rad
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Deg2Rad (const MethodInfo* method);
// 0x5b30930
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b30968: jmp 0x5b309db

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Deg2Rad(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471e1 == '\0') {
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
    Il2CppMethodInitialized_075471e1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__26_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__26_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Deg2Rad_b__26_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__26_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__26_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Rad2Deg
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Rad2Deg (const MethodInfo* method);
// 0x5b30a70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b30aa8: jmp 0x5b30b1b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Rad2Deg(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471e2 == '\0') {
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
    Il2CppMethodInitialized_075471e2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__27_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__27_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Rad2Deg_b__27_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__27_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__27_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x5b30bb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b30be8: jmp 0x5b30c5b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__28_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471e3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__28_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__28_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Lerp_b__28_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__28_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__28_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x5b30cf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b30d28: jmp 0x5b30d9b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpUnclamped(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471e4 == '\0') {
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
    Il2CppMethodInitialized_075471e4 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__29_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__29_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpUnclamped_b__29_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__29_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__29_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Sign
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sign (const MethodInfo* method);
// 0x5b30e30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b30e68: jmp 0x5b30edb

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Sign(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sign_b__30_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471e5 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__30_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__30_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Sign_b__30_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__30_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__30_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__InverseLerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__InverseLerp (const MethodInfo* method);
// 0x5b30f70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b30fa8: jmp 0x5b3101b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__InverseLerp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471e6 == '\0') {
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
    Il2CppMethodInitialized_075471e6 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__31_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__31_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__InverseLerp_b__31_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__31_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__31_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__LerpAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpAngle (const MethodInfo* method);
// 0x5b310b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b310e8: jmp 0x5b3115b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__LerpAngle(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471e7 == '\0') {
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
    Il2CppMethodInitialized_075471e7 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__32_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__32_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__LerpAngle_b__32_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__32_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__32_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Log
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Log (const MethodInfo* method);
// 0x5b311f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b31228: jmp 0x5b3129b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Log(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Log_b__33_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471e8 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__33_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__33_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Log_b__33_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__33_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__33_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__MoveTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowards (const MethodInfo* method);
// 0x5b31330
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b31368: jmp 0x5b313db

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowards(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471e9 == '\0') {
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
    Il2CppMethodInitialized_075471e9 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__34_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__34_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowards_b__34_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__34_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__34_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__MoveTowardsAngle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowardsAngle (const MethodInfo* method);
// 0x5b31470
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b314a8: jmp 0x5b3151b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__MoveTowardsAngle(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471ea == '\0') {
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
    Il2CppMethodInitialized_075471ea = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__35_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__35_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__MoveTowardsAngle_b__35_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__35_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__35_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__PingPong
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__PingPong (const MethodInfo* method);
// 0x5b315b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b315e8: jmp 0x5b3165b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__PingPong(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471eb == '\0') {
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
    Il2CppMethodInitialized_075471eb = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__36_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__36_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__PingPong_b__36_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__36_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__36_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__Exp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Exp (const MethodInfo* method);
// 0x5b316f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b31728: jmp 0x5b3179b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__Exp(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Exp_b__37_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    Il2CppMethodInitialized_075471ec = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__37_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__37_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__Exp_b__37_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__37_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__37_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__SmoothStep
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__SmoothStep (const MethodInfo* method);
// 0x5b31830
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b31868: jmp 0x5b318db

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__SmoothStep(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471ed == '\0') {
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
    Il2CppMethodInitialized_075471ed = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__38_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__38_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__SmoothStep_b__38_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__38_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__38_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseAnd
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseAnd (const MethodInfo* method);
// 0x5b31970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b319a8: jmp 0x5b31a1b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseAnd(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471ee == '\0') {
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
    Il2CppMethodInitialized_075471ee = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__39_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__39_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseAnd_b__39_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__39_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__39_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseOr
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseOr (const MethodInfo* method);
// 0x5b31ab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b31ae8: jmp 0x5b31b5b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseOr(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471ef == '\0') {
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
    Il2CppMethodInitialized_075471ef = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__40_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__40_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseOr_b__40_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__40_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__40_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseXor
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseXor (const MethodInfo* method);
// 0x5b31bf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b31c28: jmp 0x5b31c9b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseXor(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471f0 == '\0') {
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
    Il2CppMethodInitialized_075471f0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__41_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__41_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseXor_b__41_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__41_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__41_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseNot
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseNot (const MethodInfo* method);
// 0x5b31d30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b31d68: jmp 0x5b31ddb

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseNot(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471f1 == '\0') {
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
    Il2CppMethodInitialized_075471f1 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__42_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__42_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseNot_b__42_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__42_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__42_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseLeftShift
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseLeftShift (const MethodInfo* method);
// 0x5b31e70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b31ea8: jmp 0x5b31f1b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseLeftShift(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471f2 == '\0') {
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
    Il2CppMethodInitialized_075471f2 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__43_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__43_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseLeftShift_b__43_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__43_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__43_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$__CreateMethodBinding__BitwiseRightShift
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o* CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseRightShift (const MethodInfo* method);
// 0x5b31fb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b31fe8: jmp 0x5b3205b

CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *
CustomLogic_CustomLogicMathBuiltin_Bindings____CreateMethodBinding__BitwiseRightShift(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicMathBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicMathBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicMathBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075471f3 == '\0') {
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
    Il2CppMethodInitialized_075471f3 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__44_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__44_0;
  }
  if (__this == (System_Func_CustomLogicMathBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c)
      ;
      pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicMathBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c___CreateMethodBinding__BitwiseRightShift_b__44_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings_c->static_fields;
    pCVar2->__9__44_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__44_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicMathBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b320f0

void CustomLogic_CustomLogicMathBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075471f4 == '\0') {
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
    Il2CppMethodInitialized_075471f4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PI",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Infinity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NegativeInfinity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rad2DegConstant",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Deg2RadConstant",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Epsilon",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clamp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Max",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Min",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Pow",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Abs",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sqrt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Repeat",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Mod",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sin",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Cos",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Tan",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Asin",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Acos",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Atan",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Atan2",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ceil",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Floor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Round",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Deg2Rad",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rad2Deg",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Lerp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LerpUnclamped",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sign",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InverseLerp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LerpAngle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Log",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveTowards",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveTowardsAngle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PingPong",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Exp",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SmoothStep",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseAnd",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseOr",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseXor",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseNot",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseLeftShift",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"BitwiseRightShift",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicMathBuiltin_Bindings->static_fields->MemberNames)
  ;
  return;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__PI>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__PI_g____getter_2_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x5b32730

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__PI_g____getter_2_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Infinity>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Infinity_g____getter_3_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x5b32750

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Infinity_g____getter_3_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__NegativeInfinity>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_4_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x5b32770

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__NegativeInfinity_g____getter_4_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Rad2DegConstant>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Rad2DegConstant_g____getter_5_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x5b32790

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Rad2DegConstant_g____getter_5_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Deg2RadConstant>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Deg2RadConstant_g____getter_6_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x5b327b0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Deg2RadConstant_g____getter_6_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin.Bindings$$<__CreatePropertyBinding__Epsilon>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Epsilon_g____getter_7_0 (CustomLogic_CustomLogicMathBuiltin_o* __i, const MethodInfo* method);
// 0x5b327d0

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin_Bindings_____CreatePropertyBinding__Epsilon_g____getter_7_0
          (CustomLogic_CustomLogicMathBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (Il2CppMethodInitialized_07547248 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_07547248 = '\x01';
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicMathBuiltin___ctor (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x5b2d100

void CustomLogic_CustomLogicMathBuiltin___ctor
               (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075471bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_075471bf = '\x01';
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


// CustomLogic.CustomLogicMathBuiltin$$get_PI
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_PI (const MethodInfo* method);
// 0x5b2d170

float CustomLogic_CustomLogicMathBuiltin__get_PI(MethodInfo *method)

{
  return 3.1415927;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Infinity
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Infinity (const MethodInfo* method);
// 0x5b2d180

float CustomLogic_CustomLogicMathBuiltin__get_Infinity(MethodInfo *method)

{
  return INFINITY;
}


// CustomLogic.CustomLogicMathBuiltin$$get_NegativeInfinity
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_NegativeInfinity (const MethodInfo* method);
// 0x5b2d190

float CustomLogic_CustomLogicMathBuiltin__get_NegativeInfinity(MethodInfo *method)

{
  return -INFINITY;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Rad2DegConstant
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Rad2DegConstant (const MethodInfo* method);
// 0x5b2d1a0

float CustomLogic_CustomLogicMathBuiltin__get_Rad2DegConstant(MethodInfo *method)

{
  return 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Deg2RadConstant
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Deg2RadConstant (const MethodInfo* method);
// 0x5b2d1b0

float CustomLogic_CustomLogicMathBuiltin__get_Deg2RadConstant(MethodInfo *method)

{
  return 0.017453292;
}


// CustomLogic.CustomLogicMathBuiltin$$get_Epsilon
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__get_Epsilon (const MethodInfo* method);
// 0x5b2d1c0

float CustomLogic_CustomLogicMathBuiltin__get_Epsilon(MethodInfo *method)

{
  if (Il2CppMethodInitialized_075471c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_075471c0 = '\x01';
  }
  return TypeInfo_UnityEngine_Mathf->static_fields->Epsilon;
}


// CustomLogic.CustomLogicMathBuiltin$$Clamp
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Clamp (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* value, Il2CppObject* min, Il2CppObject* max, const MethodInfo* method);
// 0x5b2d200

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Clamp
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *value,Il2CppObject *min,
          Il2CppObject *max,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  uint *puVar4;
  Il2CppClass *klass;
  float fVar5;
  uint uStack_50;
  uint uStack_4c;
  float fStack_48;
  float fStack_38;
  
  if (Il2CppMethodInitialized_075471c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471c1 = '\x01';
  }
  if ((value != (Il2CppObject *)0x0) && (value->klass == g_data_07556710)) {
    puVar4 = il2cpp_vm_Object_Unbox(value);
    if ((min != (Il2CppObject *)0x0) && (min->klass == g_data_07556710)) {
      uVar1 = *puVar4;
      puVar4 = il2cpp_vm_Object_Unbox(min);
      if ((max != (Il2CppObject *)0x0) && (max->klass == g_data_07556710)) {
        uVar2 = *puVar4;
        puVar4 = il2cpp_vm_Object_Unbox(max);
        uStack_4c = *puVar4;
        if ((int)uVar1 < (int)*puVar4) {
          uStack_4c = uVar1;
        }
        if ((int)uVar1 < (int)uVar2) {
          uStack_4c = uVar2;
        }
        puVar4 = &uStack_4c;
        klass = g_data_07556710;
        goto label_05b2d2d6;
      }
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fStack_38 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (value,(MethodInfo_34BDFE0 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  fStack_48 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (min,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                        );
  fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (max,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (fStack_38 <= fVar5) {
    fVar5 = fStack_38;
  }
  uStack_50 = ~-(uint)(fStack_48 <= fStack_38) & (uint)fStack_48 |
              (uint)fVar5 & -(uint)(fStack_48 <= fStack_38);
  puVar4 = &uStack_50;
  klass = g_data_07556740;
label_05b2d2d6:
  pIVar3 = il2cpp_vm_Object_Box(klass,puVar4);
  return pIVar3;
}


// CustomLogic.CustomLogicMathBuiltin$$Max
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Max (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x5b2d350

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Max
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *a,Il2CppObject *b,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float *pfVar2;
  Il2CppClass *klass;
  float fVar3;
  float fVar4;
  float local_20;
  float local_1c;
  
  if (Il2CppMethodInitialized_075471c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471c2 = '\x01';
  }
  if ((a != (Il2CppObject *)0x0) && (a->klass == g_data_07556710)) {
    pfVar2 = il2cpp_vm_Object_Unbox(a);
    if ((b != (Il2CppObject *)0x0) && (b->klass == g_data_07556710)) {
      fVar3 = *pfVar2;
      pfVar2 = il2cpp_vm_Object_Unbox(b);
      local_1c = *pfVar2;
      if ((int)*pfVar2 < (int)fVar3) {
        local_1c = fVar3;
      }
      pfVar2 = &local_1c;
      klass = g_data_07556710;
      goto label_05b2d3f7;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (a,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (b,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  local_20 = fVar3;
  if (fVar3 <= fVar4) {
    local_20 = fVar4;
  }
  pfVar2 = &local_20;
  klass = g_data_07556740;
label_05b2d3f7:
  pIVar1 = il2cpp_vm_Object_Box(klass,pfVar2);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Min
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Min (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x5b2d440

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Min
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *a,Il2CppObject *b,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float *pfVar2;
  Il2CppClass *klass;
  float fVar3;
  float fVar4;
  float local_20;
  float local_1c;
  
  if (Il2CppMethodInitialized_075471c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471c3 = '\x01';
  }
  if ((a != (Il2CppObject *)0x0) && (a->klass == g_data_07556710)) {
    pfVar2 = il2cpp_vm_Object_Unbox(a);
    if ((b != (Il2CppObject *)0x0) && (b->klass == g_data_07556710)) {
      fVar3 = *pfVar2;
      pfVar2 = il2cpp_vm_Object_Unbox(b);
      local_1c = *pfVar2;
      if ((int)fVar3 < (int)*pfVar2) {
        local_1c = fVar3;
      }
      pfVar2 = &local_1c;
      klass = g_data_07556710;
      goto label_05b2d4e7;
    }
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (a,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (b,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  local_20 = fVar3;
  if (fVar4 <= fVar3) {
    local_20 = fVar4;
  }
  pfVar2 = &local_20;
  klass = g_data_07556740;
label_05b2d4e7:
  pIVar1 = il2cpp_vm_Object_Box(klass,pfVar2);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Pow
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Pow (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, const MethodInfo* method);
// 0x5b2d530

float CustomLogic_CustomLogicMathBuiltin__Pow
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = powf(__this,a,b,method);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Abs
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Abs (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x5b2d540

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Abs
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  int iVar3;
  undefined8 in_RAX;
  int *piVar4;
  Il2CppObject *pIVar5;
  undefined8 *data;
  Il2CppClass *klass;
  float fVar6;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_075471c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075471c4 = '\x01';
  }
  if ((value == (Il2CppObject *)0x0) || (value->klass != g_data_07556710)) {
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (value,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    data = &uStack_18;
    uStack_18 = CONCAT44(uStack_18._4_4_,fVar6) & 0xffffffff7fffffff;
    klass = g_data_07556740;
  }
  else {
    piVar4 = il2cpp_vm_Object_Unbox(value);
    iVar1 = *piVar4;
    if (Il2CppMethodInitialized_07541ba3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
      Il2CppMethodInitialized_07541ba3 = '\x01';
      uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    }
    iVar3 = -iVar1;
    if (iVar3 < 0) {
      iVar3 = iVar1;
    }
    uStack_18 = CONCAT44(iVar3,(undefined4)uStack_18);
    data = (undefined8 *)((long)&uStack_18 + 4);
    klass = g_data_07556710;
  }
  pIVar5 = il2cpp_vm_Object_Box(klass,data);
  return pIVar5;
}


// CustomLogic.CustomLogicMathBuiltin$$Sqrt
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Sqrt (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b2d640

float CustomLogic_CustomLogicMathBuiltin__Sqrt
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  if (0.0 <= value) {
    return SQRT(value);
  }
  fVar1 = sqrtf(value);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Repeat
// il2cpp: Il2CppObject* CustomLogic_CustomLogicMathBuiltin__Repeat (CustomLogic_CustomLogicMathBuiltin_o* __this, Il2CppObject* value, Il2CppObject* max, const MethodInfo* method);
// 0x5b2d660

Il2CppObject *
CustomLogic_CustomLogicMathBuiltin__Repeat
          (CustomLogic_CustomLogicMathBuiltin_o *__this,Il2CppObject *value,Il2CppObject *max,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float fVar2;
  float fVar3;
  uint uStack_3c;
  float fStack_38;
  float fStack_28;
  
  if (Il2CppMethodInitialized_075471c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_075471c5 = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  fStack_38 = MiscExtensions__UnboxToFloat(value,(MethodInfo *)0x0);
  fStack_28 = MiscExtensions__UnboxToFloat(max,(MethodInfo *)0x0);
  fVar2 = floorf(fStack_38 / fStack_28);
  fVar3 = fStack_38 - fVar2 * fStack_28;
  fVar2 = fStack_28;
  if (fVar3 <= fStack_28) {
    fVar2 = fVar3;
  }
  uStack_3c = -(uint)(0.0 <= fVar3) & (uint)fVar2;
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,&uStack_3c);
  return pIVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Mod
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Mod (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x5b2d720

int32_t CustomLogic_CustomLogicMathBuiltin__Mod
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,MethodInfo *method)

{
  return a % b;
}


// CustomLogic.CustomLogicMathBuiltin$$Sin
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Sin (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x5b2d730

float CustomLogic_CustomLogicMathBuiltin__Sin
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = sinf(angle * 0.017453292);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Cos
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Cos (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x5b2d740

float CustomLogic_CustomLogicMathBuiltin__Cos
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = cosf(angle * 0.017453292);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Tan
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Tan (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x5b2d750

float CustomLogic_CustomLogicMathBuiltin__Tan
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = tanf(angle * 0.017453292);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$Asin
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Asin (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b2d760

float CustomLogic_CustomLogicMathBuiltin__Asin
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = asinf(value);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Acos
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Acos (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b2d770

float CustomLogic_CustomLogicMathBuiltin__Acos
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = acosf(value);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Atan
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Atan (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b2d780

float CustomLogic_CustomLogicMathBuiltin__Atan
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = atanf(value);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Atan2
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Atan2 (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, const MethodInfo* method);
// 0x5b2d790

float CustomLogic_CustomLogicMathBuiltin__Atan2
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = atan2f(a,b);
  return fVar1 * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Ceil
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Ceil (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b2d7a0

int32_t CustomLogic_CustomLogicMathBuiltin__Ceil
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  uint32_t uVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_0753e7f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f9 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar2 = ceilf(value);
    return (int)fVar2;
  }
  fVar2 = ceilf(value);
  return (int)fVar2;
}


// CustomLogic.CustomLogicMathBuiltin$$Floor
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Floor (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b2d820

int32_t CustomLogic_CustomLogicMathBuiltin__Floor
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  uint32_t uVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_0753e7f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_0753e7f6 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    fVar2 = floorf(value);
    return (int)fVar2;
  }
  fVar2 = floorf(value);
  return (int)fVar2;
}


// CustomLogic.CustomLogicMathBuiltin$$Round
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__Round (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b2d8a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b2d979: jmp 0x5b2d8ca

int32_t CustomLogic_CustomLogicMathBuiltin__Round
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  uint32_t uVar1;
  MethodInfo *method_00;
  double dVar2;
  double dVar3;
  Il2CppMethodPointer local_8;
  
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar2 = (double)value;
  method_00 = (MethodInfo *)&local_8;
  dVar3 = modf(dVar2,(double *)method_00,method);
  if (0.0 <= value) {
    if ((dVar3 != 0.5) || (NAN(dVar3))) {
      dVar2 = floor(dVar2 + 0.5,method_00);
      return (int)dVar2;
    }
    if (((long)(double)local_8 & 1U) != 0) {
      return (int)((double)local_8 + 1.0);
    }
  }
  else {
    if ((dVar3 != -0.5) || (NAN(dVar3))) {
      dVar2 = ceil(dVar2 + -0.5,method_00);
      return (int)dVar2;
    }
    if (((long)(double)local_8 & 1U) != 0) {
      local_8 = (Il2CppMethodPointer)((double)local_8 + -1.0);
    }
  }
  return (int)(double)local_8;
}


// CustomLogic.CustomLogicMathBuiltin$$Deg2Rad
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Deg2Rad (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x5b2d9c0

float CustomLogic_CustomLogicMathBuiltin__Deg2Rad
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  return angle * 0.017453292;
}


// CustomLogic.CustomLogicMathBuiltin$$Rad2Deg
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Rad2Deg (CustomLogic_CustomLogicMathBuiltin_o* __this, float angle, const MethodInfo* method);
// 0x5b2d9d0

float CustomLogic_CustomLogicMathBuiltin__Rad2Deg
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float angle,MethodInfo *method)

{
  return angle * 57.29578;
}


// CustomLogic.CustomLogicMathBuiltin$$Lerp
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Lerp (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x5b2d9e0

float CustomLogic_CustomLogicMathBuiltin__Lerp
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float t,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (t <= 1.0) {
    fVar1 = t;
  }
  return a + (float)((uint)fVar1 & -(uint)(0.0 <= t)) * (b - a);
}


// CustomLogic.CustomLogicMathBuiltin$$LerpUnclamped
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__LerpUnclamped (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x5b2da10

float CustomLogic_CustomLogicMathBuiltin__LerpUnclamped
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float t,MethodInfo *method)

{
  return a + (b - a) * t;
}


// CustomLogic.CustomLogicMathBuiltin$$Sign
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Sign (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b2da20

float CustomLogic_CustomLogicMathBuiltin__Sign
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  return *(float *)(&g_data_0100ad30 + (ulong)(0.0 <= value) * 4);
}


// CustomLogic.CustomLogicMathBuiltin$$InverseLerp
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__InverseLerp (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float value, const MethodInfo* method);
// 0x5b2da40

float CustomLogic_CustomLogicMathBuiltin__InverseLerp
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float value,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((a == b) && (!NAN(a) && !NAN(b))) {
    return 0.0;
  }
  fVar2 = (value - a) / (b - a);
  fVar1 = 1.0;
  if (fVar2 <= 1.0) {
    fVar1 = fVar2;
  }
  return (float)(-(uint)(0.0 <= fVar2) & (uint)fVar1);
}


// CustomLogic.CustomLogicMathBuiltin$$LerpAngle
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__LerpAngle (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x5b2da80

float CustomLogic_CustomLogicMathBuiltin__LerpAngle
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float t,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [12];
  
  fVar1 = floorf((b - a) / 360.0);
  fVar1 = fVar1 * -360.0 + (b - a);
  auVar3 = ZEXT812(0x43b40000);
  if (fVar1 <= auVar3._0_4_) {
    auVar3._4_8_ = auVar3._4_8_;
    auVar3._0_4_ = fVar1;
  }
  fVar2 = (float)(-(uint)(0.0 <= fVar1) & auVar3._0_4_);
  fVar1 = 1.0;
  if (t <= 1.0) {
    fVar1 = t;
  }
  return (float)(-(uint)(0.0 <= t) & (uint)fVar1) *
         (float)(~-(uint)(180.0 < fVar2) & (uint)fVar2 | (uint)(fVar2 + -360.0) & -(uint)(180.0 < fVar2)) + a;
}


// CustomLogic.CustomLogicMathBuiltin$$Log
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Log (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b2db20

float CustomLogic_CustomLogicMathBuiltin__Log
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = logf(__this,value,method);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$MoveTowards
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__MoveTowards (CustomLogic_CustomLogicMathBuiltin_o* __this, float current, float target, float maxDelta, const MethodInfo* method);
// 0x5b2db30

float CustomLogic_CustomLogicMathBuiltin__MoveTowards
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float current,float target,float maxDelta,
                MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = -(uint)(0.0 <= target - current);
  uVar2 = -(uint)(maxDelta < ABS(target - current));
  return (float)((uint)(current + (float)(~uVar1 & (uint)-maxDelta | uVar1 & (uint)maxDelta)) & uVar2 |
                ~uVar2 & (uint)target);
}


// CustomLogic.CustomLogicMathBuiltin$$MoveTowardsAngle
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__MoveTowardsAngle (CustomLogic_CustomLogicMathBuiltin_o* __this, float current, float target, float maxDelta, const MethodInfo* method);
// 0x5b2db80

float CustomLogic_CustomLogicMathBuiltin__MoveTowardsAngle
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float current,float target,float maxDelta,
                MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined1 auVar4 [12];
  float fVar5;
  
  fVar3 = floorf((target - current) / 360.0);
  fVar3 = fVar3 * -360.0 + (target - current);
  auVar4 = ZEXT812(0x43b40000);
  if (fVar3 <= auVar4._0_4_) {
    auVar4._4_8_ = auVar4._4_8_;
    auVar4._0_4_ = fVar3;
  }
  fVar3 = (float)(-(uint)(0.0 <= fVar3) & auVar4._0_4_);
  fVar3 = (float)(~-(uint)(180.0 < fVar3) & (uint)fVar3 | (uint)(fVar3 + -360.0) & -(uint)(180.0 < fVar3));
  if ((-maxDelta < fVar3) && (fVar3 < maxDelta)) {
    return target;
  }
  fVar5 = (fVar3 + current) - current;
  uVar1 = -(uint)(0.0 <= fVar5);
  uVar2 = -(uint)(maxDelta < ABS(fVar5));
  return (float)(uVar2 & (uint)((float)(~uVar1 & (uint)-maxDelta | uVar1 & (uint)maxDelta) + current) |
                ~uVar2 & (uint)(fVar3 + current));
}


// CustomLogic.CustomLogicMathBuiltin$$PingPong
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__PingPong (CustomLogic_CustomLogicMathBuiltin_o* __this, float t, float length, const MethodInfo* method);
// 0x5b2dc70

float CustomLogic_CustomLogicMathBuiltin__PingPong
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float t,float length,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  fVar2 = length + length;
  fVar1 = floorf(t / fVar2);
  fVar1 = t - fVar1 * fVar2;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  return length - ABS((float)(-(uint)(0.0 <= fVar1) & (uint)fVar2) - length);
}


// CustomLogic.CustomLogicMathBuiltin$$Exp
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__Exp (CustomLogic_CustomLogicMathBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5b2dcd0

float CustomLogic_CustomLogicMathBuiltin__Exp
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float value,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = expf(__this,value,method);
  return fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$SmoothStep
// il2cpp: float CustomLogic_CustomLogicMathBuiltin__SmoothStep (CustomLogic_CustomLogicMathBuiltin_o* __this, float a, float b, float t, const MethodInfo* method);
// 0x5b2dce0

float CustomLogic_CustomLogicMathBuiltin__SmoothStep
                (CustomLogic_CustomLogicMathBuiltin_o *__this,float a,float b,float t,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = 1.0;
  if (t <= 1.0) {
    fVar1 = t;
  }
  fVar1 = (float)(-(uint)(0.0 <= t) & (uint)fVar1);
  fVar1 = fVar1 * 3.0 * fVar1 - (fVar1 + fVar1) * fVar1 * fVar1;
  return a * (1.0 - fVar1) + b * fVar1;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseAnd
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseAnd (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x5b2dd40

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseAnd
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,MethodInfo *method)

{
  return a & b;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseOr
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseOr (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x5b2dd50

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseOr
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,MethodInfo *method)

{
  return a | b;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseXor
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseXor (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t a, int32_t b, const MethodInfo* method);
// 0x5b2dd60

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseXor
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t a,int32_t b,MethodInfo *method)

{
  return a ^ b;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseNot
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseNot (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5b2dd70

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseNot
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  return ~value;
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseLeftShift
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseLeftShift (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t value, int32_t shift, const MethodInfo* method);
// 0x5b2dd80

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseLeftShift
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t value,int32_t shift,MethodInfo *method
                  )

{
  return value << ((byte)shift & 0x1f);
}


// CustomLogic.CustomLogicMathBuiltin$$BitwiseRightShift
// il2cpp: int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseRightShift (CustomLogic_CustomLogicMathBuiltin_o* __this, int32_t value, int32_t shift, const MethodInfo* method);
// 0x5b2dd90

int32_t CustomLogic_CustomLogicMathBuiltin__BitwiseRightShift
                  (CustomLogic_CustomLogicMathBuiltin_o *__this,int32_t value,int32_t shift,MethodInfo *method
                  )

{
  return value >> ((byte)shift & 0x1f);
}


// CustomLogic.CustomLogicMathBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicMathBuiltin__get_ClassName (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x5b2dda0

System_String_o *
CustomLogic_CustomLogicMathBuiltin__get_ClassName
          (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075471c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Math");
    Il2CppMethodInitialized_075471c6 = '\x01';
  }
  return "Math";
}


// CustomLogic.CustomLogicMathBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicMathBuiltin__get_IsAbstract (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x5b2ddd0

bool CustomLogic_CustomLogicMathBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicMathBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicMathBuiltin__get_IsStatic (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x5b2dde0

bool CustomLogic_CustomLogicMathBuiltin__get_IsStatic
               (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicMathBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicMathBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicMathBuiltin_o* __this, const MethodInfo* method);
// 0x5b2ddf0

bool CustomLogic_CustomLogicMathBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicMathBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


