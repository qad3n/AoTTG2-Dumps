// Type: CustomLogic.CustomLogicRandomBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRandomBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRandomBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicRandomBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRandomBuiltin_o* CustomLogic_CustomLogicRandomBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5b34ee0

CustomLogic_CustomLogicRandomBuiltin_o *
CustomLogic_CustomLogicRandomBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  CustomLogic_CustomLogicRandomBuiltin_o *__this;
  System_String_o *pSVar2;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754721b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin);
    Il2CppMethodInitialized_0754721b = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin);
    if (Il2CppMethodInitialized_07547216 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_07547216 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  }
  else {
    if ((int)args->max_length != 1) {
      NullCheck(args);
      pSVar2 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
      str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRandomBuiltin constructor found that takes ");
      str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
      pSVar2 = System_String__Concat_5301f10(str0,pSVar2,str2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_54186d0(__this_00,pSVar2,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Factory_CreateInstance);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    obj = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin);
    if (Il2CppMethodInitialized_07547217 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_07547217 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    uVar1 = uVar1 << 0xd ^ uVar1;
    uVar1 = uVar1 >> 0x11 ^ uVar1;
    (__this->fields).Rand.fields.state = uVar1 << 5 ^ uVar1;
    (__this->fields).UseInstanceRandom = true;
  }
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5b35ea0

void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07547225 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547225 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5b35f10

void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomInt>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomInt_b__2_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b35f20

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomInt_b__2_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  int32_t minInclusive;
  int32_t maxExclusive;
  Il2CppObject *pIVar2;
  uint uVar3;
  int iStack_2c;
  
  if (Il2CppMethodInitialized_07547226 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547226 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b36024:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    minInclusive = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (pIVar2,(MethodInfo_34BDC20 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((__a->max_length & 0xfffffffe) != 0) {
      maxExclusive = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                               (__a->m_Items[1],
                                (MethodInfo_34BDC20 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        if ((__c->fields).UseInstanceRandom == false) {
          iStack_2c = UnityEngine_Random__Range_690e2b0(minInclusive,maxExclusive,(MethodInfo *)0x0);
        }
        else {
          uVar1 = (__c->fields).Rand.fields.state;
          uVar3 = uVar1 << 0xd ^ uVar1;
          uVar3 = uVar3 >> 0x11 ^ uVar3;
          (__c->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
          iStack_2c = (int)((ulong)(uint)(maxExclusive - minInclusive) * (ulong)uVar1 >> 0x20) + minInclusive;
        }
        pIVar2 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
        return pIVar2;
      }
      goto label_05b36024;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomFloat>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomFloat_b__3_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b36030

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomFloat_b__3_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  uint uVar3;
  float fVar4;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_07547227 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547227 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b36154:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar2,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    uStack_28 = CONCAT44(uStack_28._4_4_,fVar4);
    if ((__a->max_length & 0xfffffffe) != 0) {
      fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        if ((__c->fields).UseInstanceRandom == false) {
          fVar4 = UnityEngine_Random__Range((float)uStack_28,fVar4,(MethodInfo *)0x0);
        }
        else {
          uVar1 = (__c->fields).Rand.fields.state;
          uVar3 = uVar1 << 0xd ^ uVar1;
          uVar3 = uVar3 >> 0x11 ^ uVar3;
          (__c->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
          fVar4 = (fVar4 - (float)uStack_28) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + (float)uStack_28;
        }
        uStack_28 = CONCAT44(fVar4,(float)uStack_28);
        pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,(void *)((long)&uStack_28 + 4));
        return pIVar2;
      }
      goto label_05b36154;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomBool>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomBool_b__4_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b36160

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomBool_b__4_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  uint uVar4;
  undefined8 uStack_8;
  
  if (__c == (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  if ((__c->fields).UseInstanceRandom == false) {
    bVar2 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
  }
  else {
    uVar1 = (__c->fields).Rand.fields.state;
    uVar4 = uVar1 << 0xd ^ uVar1;
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    (__c->fields).Rand.fields.state = uVar4 << 5 ^ uVar4;
    bVar2 = (bool)((byte)uVar1 & 1);
  }
  uStack_8 = CONCAT17(bVar2,(undefined7)uStack_8);
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar3;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomVector3>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomVector3_b__5_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b361c0

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomVector3_b__5_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  
  if (Il2CppMethodInitialized_07547228 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547228 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b36267:
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
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicRandomBuiltin__RandomVector3(__c,pCVar1,b,method);
        return (Il2CppObject *)pCVar1;
      }
      goto label_05b36267;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomDirection>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomDirection_b__6_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b36280

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomDirection_b__6_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool _flat;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  System_Object_array *extraout_RDX;
  System_Object_array *method_00;
  System_Object_array *extraout_RDX_00;
  
  method_00 = __a;
  if (Il2CppMethodInitialized_07547229 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07547229 = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      _flat = false;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      _flat = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
      ;
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicRandomBuiltin__RandomDirection(__c,_flat,(MethodInfo *)method_00);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomSign>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomSign_b__7_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b36320

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomSign_b__7_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  undefined1 auStack_4 [4];
  
  if (__c == (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((__c->fields).UseInstanceRandom == false) {
    Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
  }
  else {
    uVar2 = (__c->fields).Rand.fields.state;
    uVar2 = uVar2 << 0xd ^ uVar2;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__c->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__PerlinNoise>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__PerlinNoise_b__8_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5b36380

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__PerlinNoise_b__8_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 in_RAX;
  Il2CppObject *pIVar1;
  float fVar2;
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (Il2CppMethodInitialized_0754722a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754722a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05b3644e:
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
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        fVar2 = UnityEngine_Mathf__PerlinNoise((float)uStack_28,fVar2,(MethodInfo *)0x0);
        uStack_28 = CONCAT44(fVar2,(float)uStack_28);
        pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,(void *)((long)&uStack_28 + 4));
        return pIVar1;
      }
      goto label_05b3644e;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRandomBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5b350c0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRandomBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *pCVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicRandomBuiltin_Bindings_c *pCVar5;
  
  if (Il2CppMethodInitialized_0754721c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"RandomBool");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"PerlinNoise");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomVector3");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomInt");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomSign");
    Il2CppMethodInitialized_0754721c = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x90354281) {
    if (uVar2 == 0x82de4eee) {
      bVar1 = System_String__op_Equality(name,"RandomVector3",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomVector3
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomVector3
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x885c07e3) {
      bVar1 = System_String__op_Equality(name,"PerlinNoise",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__PerlinNoise
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__PerlinNoise
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x90354280) {
      bVar1 = System_String__op_Equality(name,"RandomFloat",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomFloat
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomFloat
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xb5b881f8) {
    if (uVar2 == 0x91b5efce) {
      bVar1 = System_String__op_Equality(name,"RandomBool",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomBool
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomBool
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xb5b881f7) {
      bVar1 = System_String__op_Equality(name,"RandomDirection",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar5 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomDirection
                             ((MethodInfo *)pCVar5);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomDirection
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xfb77f8cf) {
    bVar1 = System_String__op_Equality(name,"RandomSign",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomSign
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomSign
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfa877c5b) {
    bVar1 = System_String__op_Equality(name,"RandomInt",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar5 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt
                           ((MethodInfo *)pCVar5);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRandomBuiltin not found");
  pSVar4 = System_String__Concat_5301f10(pSVar4,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar4,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt (const MethodInfo* method);
// 0x5b35440
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b35475: jmp 0x5b354e5

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRandomBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754721d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomInt_b__2_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754721d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__2_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__2_0;
  }
  if (__this == (System_Func_CustomLogicRandomBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomInt_b__2_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    pCVar2->__9__2_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__2_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomFloat (const MethodInfo* method);
// 0x5b35580
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b355b5: jmp 0x5b35625

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomFloat(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRandomBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754721e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomFloat_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754721e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__3_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__3_0;
  }
  if (__this == (System_Func_CustomLogicRandomBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomFloat_b__3_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    pCVar2->__9__3_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__3_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomBool (const MethodInfo* method);
// 0x5b356c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b356f5: jmp 0x5b35765

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomBool(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRandomBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754721f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomBool_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754721f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicRandomBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomBool_b__4_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomVector3
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomVector3 (const MethodInfo* method);
// 0x5b35800
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b35835: jmp 0x5b358a5

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomVector3(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRandomBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547220 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomVector3_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547220 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicRandomBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomVector3_b__5_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomDirection (const MethodInfo* method);
// 0x5b35940
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b35975: jmp 0x5b359e5

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomDirection(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRandomBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547221 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomDirection_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547221 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicRandomBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomDirection_b__6_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomSign
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomSign (const MethodInfo* method);
// 0x5b35a80
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b35ab5: jmp 0x5b35b25

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomSign(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRandomBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547222 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomSign_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547222 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicRandomBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomSign_b__7_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__PerlinNoise
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__PerlinNoise (const MethodInfo* method);
// 0x5b35bc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b35bf5: jmp 0x5b35c65

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__PerlinNoise(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicRandomBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicRandomBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07547223 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__PerlinNoise_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    Il2CppMethodInitialized_07547223 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicRandomBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__PerlinNoise_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5b35d00

void CustomLogic_CustomLogicRandomBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07547224 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"RandomBool");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"PerlinNoise");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomVector3");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomInt");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomSign");
    Il2CppMethodInitialized_07547224 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomInt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomFloat",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomBool",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomVector3",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomDirection",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomSign",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PerlinNoise",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin___ctor (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x5b347b0

void CustomLogic_CustomLogicRandomBuiltin___ctor
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07547216 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07547216 = '\x01';
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


// CustomLogic.CustomLogicRandomBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin___ctor (CustomLogic_CustomLogicRandomBuiltin_o* __this, int32_t seed, const MethodInfo* method);
// 0x5b34820

void CustomLogic_CustomLogicRandomBuiltin___ctor_5a34820
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,int32_t seed,MethodInfo *method)

{
  uint uVar1;
  
  if (Il2CppMethodInitialized_07547217 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07547217 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  uVar1 = seed << 0xd ^ seed;
  uVar1 = uVar1 >> 0x11 ^ uVar1;
  (__this->fields).Rand.fields.state = uVar1 << 5 ^ uVar1;
  (__this->fields).UseInstanceRandom = true;
  return;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomInt
// il2cpp: int32_t CustomLogic_CustomLogicRandomBuiltin__RandomInt (CustomLogic_CustomLogicRandomBuiltin_o* __this, int32_t min, int32_t max, const MethodInfo* method);
// 0x5b34890

int32_t CustomLogic_CustomLogicRandomBuiltin__RandomInt
                  (CustomLogic_CustomLogicRandomBuiltin_o *__this,int32_t min,int32_t max,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  uint uVar3;
  
  if ((__this->fields).UseInstanceRandom == false) {
    iVar2 = UnityEngine_Random__Range_690e2b0(min,max,(MethodInfo *)0x0);
    return iVar2;
  }
  uVar1 = (__this->fields).Rand.fields.state;
  uVar3 = uVar1 << 0xd ^ uVar1;
  uVar3 = uVar3 >> 0x11 ^ uVar3;
  (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
  return (int)((ulong)(uint)(max - min) * (ulong)uVar1 >> 0x20) + min;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomFloat
// il2cpp: float CustomLogic_CustomLogicRandomBuiltin__RandomFloat (CustomLogic_CustomLogicRandomBuiltin_o* __this, float min, float max, const MethodInfo* method);
// 0x5b348d0

float CustomLogic_CustomLogicRandomBuiltin__RandomFloat
                (CustomLogic_CustomLogicRandomBuiltin_o *__this,float min,float max,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  if ((__this->fields).UseInstanceRandom == false) {
    fVar3 = UnityEngine_Random__Range(min,max,(MethodInfo *)0x0);
    return fVar3;
  }
  uVar1 = (__this->fields).Rand.fields.state;
  uVar2 = uVar1 << 0xd ^ uVar1;
  uVar2 = uVar2 >> 0x11 ^ uVar2;
  (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
  return (max - min) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + min;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomBool
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__RandomBool (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x5b34920

bool CustomLogic_CustomLogicRandomBuiltin__RandomBool
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  if ((__this->fields).UseInstanceRandom == false) {
    bVar2 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
    return bVar2;
  }
  uVar1 = (__this->fields).Rand.fields.state;
  uVar3 = uVar1 << 0xd ^ uVar1;
  uVar3 = uVar3 >> 0x11 ^ uVar3;
  (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
  return (bool)((byte)uVar1 & 1);
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomVector3
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRandomBuiltin__RandomVector3 (CustomLogic_CustomLogicRandomBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x5b34950
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b34af6: movaps xmm2, xmmword ptr [rsp + 0x10]
// asm:   0x5b34afb: jmp 0x5b34a55

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRandomBuiltin__RandomVector3
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *a,
          CustomLogic_CustomLogicVector3Builtin_o *b,MethodInfo *method)

{
  uint uVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o value;
  float local_3c;
  
  if (Il2CppMethodInitialized_07547218 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07547218 = '\x01';
  }
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar3 = (a->fields).Value.fields.x;
  fVar5 = (b->fields).Value.fields.x;
  if ((__this->fields).UseInstanceRandom == false) {
    fVar3 = UnityEngine_Random__Range(fVar3,fVar5,(MethodInfo *)0x0);
    fVar5 = (a->fields).Value.fields.y;
    fVar4 = (b->fields).Value.fields.y;
    if ((__this->fields).UseInstanceRandom != false) goto label_05b34a0e;
    fVar5 = UnityEngine_Random__Range(fVar5,fVar4,(MethodInfo *)0x0);
    local_3c = (a->fields).Value.fields.z;
    fVar4 = (b->fields).Value.fields.z;
    if ((__this->fields).UseInstanceRandom == false) {
      local_3c = UnityEngine_Random__Range(local_3c,fVar4,(MethodInfo *)0x0);
      goto label_05b34a96;
    }
  }
  else {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar2 = uVar1 << 0xd ^ uVar1;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    fVar3 = (fVar5 - fVar3) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + fVar3;
    fVar5 = (a->fields).Value.fields.y;
    fVar4 = (b->fields).Value.fields.y;
label_05b34a0e:
    uVar1 = (__this->fields).Rand.fields.state;
    uVar2 = uVar1 << 0xd ^ uVar1;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    fVar5 = (fVar4 - fVar5) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + fVar5;
    local_3c = (a->fields).Value.fields.z;
    fVar4 = (b->fields).Value.fields.z;
  }
  uVar1 = (__this->fields).Rand.fields.state;
  uVar2 = uVar1 << 0xd ^ uVar1;
  uVar2 = uVar2 >> 0x11 ^ uVar2;
  (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
  local_3c = (fVar4 - local_3c) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + local_3c;
label_05b34a96:
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  value.fields.y = fVar5;
  value.fields.x = fVar3;
  value.fields.z = local_3c;
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRandomBuiltin__RandomDirection (CustomLogic_CustomLogicRandomBuiltin_o* __this, bool _flat, const MethodInfo* method);
// 0x5b34b30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b34e1d: jmp 0x5b34c4d

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRandomBuiltin__RandomDirection
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,bool _flat,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint32_t uVar4;
  UnityEngine_Vector3_StaticFields *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  uint uVar6;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar7;
  undefined4 uVar12;
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  undefined1 auVar8 [16];
  undefined1 auVar11 [16];
  float fVar13;
  undefined4 uVar14;
  UnityEngine_Vector3_o value;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined1 auStack_30 [12];
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (Il2CppMethodInitialized_07547219 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07547219 = '\x01';
  }
  if ((__this->fields).UseInstanceRandom == false) {
    auStack_30._8_4_ = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
    fStack_24 = extraout_XMM0_Db;
    uStack_20 = extraout_XMM0_Dc;
    uStack_1c = extraout_XMM0_Dd;
    if ((__this->fields).UseInstanceRandom != false) goto label_05b34bc5;
    fVar7 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
    uVar12 = extraout_XMM0_Db_01;
    if ((__this->fields).UseInstanceRandom == false) {
      fStack_4c = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
      uVar12 = 0;
      uVar14 = extraout_XMM0_Db_02;
      goto joined_r0x05b34e17;
    }
  }
  else {
    uVar3 = (__this->fields).Rand.fields.state;
    uVar6 = uVar3 << 0xd ^ uVar3;
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    (__this->fields).Rand.fields.state = uVar6 << 5 ^ uVar6;
    fVar7 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
    stack0xffffffffffffffd8 = ZEXT416((uint)(fVar7 + fVar7 + -1.0));
label_05b34bc5:
    uVar3 = (__this->fields).Rand.fields.state;
    uVar6 = uVar3 << 0xd ^ uVar3;
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    (__this->fields).Rand.fields.state = uVar6 << 5 ^ uVar6;
    fVar7 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
    fVar7 = fVar7 + fVar7 + -1.0;
    uVar12 = 0;
  }
  uVar3 = (__this->fields).Rand.fields.state;
  uVar6 = uVar3 << 0xd ^ uVar3;
  uVar6 = uVar6 >> 0x11 ^ uVar6;
  (__this->fields).Rand.fields.state = uVar6 << 5 ^ uVar6;
  fVar13 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
  fStack_4c = fVar13 + fVar13 + -1.0;
  uVar14 = 0;
joined_r0x05b34e17:
  fStack_48 = 0.0;
  uStack_44 = 0;
  if (!_flat) {
    fStack_48 = fVar7;
    uStack_44 = uVar12;
  }
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    uVar14 = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    auStack_30._0_4_ = 0.0;
    auStack_30._4_4_ = 0.0;
  }
  else {
    auStack_30._0_4_ = 0.0;
    auStack_30._4_4_ = 0.0;
  }
  if (g_data_0753e729 == '\0') {
    auStack_30._0_4_ = 0.0;
    auStack_30._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    uVar14 = 0;
    g_data_0753e729 = '\x01';
    uVar4 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    auStack_30._0_4_ = 0.0;
    auStack_30._4_4_ = 0.0;
    uVar4 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar4 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar14 = 0;
  }
  fVar7 = fStack_4c * fStack_4c + fStack_48 * fStack_48 + (float)auStack_30._8_4_ * (float)auStack_30._8_4_;
  if (fVar7 < 0.0) {
    fVar7 = sqrtf(fVar7);
    uVar14 = extraout_XMM0_Db_00;
  }
  else {
    fVar7 = SQRT(fVar7);
  }
  if (1e-05 < fVar7) {
    auVar9._0_8_ = auStack_30._8_8_;
    auVar9._8_4_ = auStack_30._12_4_;
    auVar9._12_4_ = auStack_30._20_4_;
    auVar8._8_8_ = auVar9._8_8_;
    auVar8._0_4_ = auStack_30._8_4_;
    auVar8._4_4_ = fStack_48;
    auVar10._0_12_ = auVar8._0_12_;
    auVar10._12_4_ = uStack_44;
    fStack_4c = fStack_4c / fVar7;
    auVar11._4_4_ = fVar7;
    auVar11._0_4_ = fVar7;
    auVar11._8_4_ = uVar14;
    auVar11._12_4_ = uVar14;
    auVar11 = divps(auVar10,auVar11);
    auStack_30._0_4_ = auVar11._0_4_;
    auStack_30._4_4_ = auVar11._4_4_;
    pUVar5 = (UnityEngine_Vector3_StaticFields *)auStack_30;
  }
  else {
    pUVar5 = TypeInfo_UnityEngine_Vector3->static_fields;
    fStack_4c = (pUVar5->zeroVector).fields.z;
  }
  uVar1 = (pUVar5->zeroVector).fields.x;
  uVar2 = (pUVar5->zeroVector).fields.y;
  value.fields.y = (float)uVar2;
  value.fields.x = (float)uVar1;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  value.fields.z = fStack_4c;
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomSign
// il2cpp: int32_t CustomLogic_CustomLogicRandomBuiltin__RandomSign (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x5b34e30

int32_t CustomLogic_CustomLogicRandomBuiltin__RandomSign
                  (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  if ((__this->fields).UseInstanceRandom == false) {
    bVar2 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
    return (uint)bVar2 * 2 + -1;
  }
  uVar1 = (__this->fields).Rand.fields.state;
  uVar3 = uVar1 << 0xd ^ uVar1;
  uVar3 = uVar3 >> 0x11 ^ uVar3;
  (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
  return (uint)((byte)uVar1 & 1) * 2 + -1;
}


// CustomLogic.CustomLogicRandomBuiltin$$PerlinNoise
// il2cpp: float CustomLogic_CustomLogicRandomBuiltin__PerlinNoise (CustomLogic_CustomLogicRandomBuiltin_o* __this, float x, float y, const MethodInfo* method);
// 0x5b34e70

float CustomLogic_CustomLogicRandomBuiltin__PerlinNoise
                (CustomLogic_CustomLogicRandomBuiltin_o *__this,float x,float y,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Mathf__PerlinNoise(x,y,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicRandomBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRandomBuiltin__get_ClassName (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x5b34e80

System_String_o *
CustomLogic_CustomLogicRandomBuiltin__get_ClassName
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754721a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_0754721a = '\x01';
  }
  return "Random";
}


// CustomLogic.CustomLogicRandomBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_IsAbstract (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x5b34eb0

bool CustomLogic_CustomLogicRandomBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicRandomBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_IsStatic (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x5b34ec0

bool CustomLogic_CustomLogicRandomBuiltin__get_IsStatic
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicRandomBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x5b34ed0

bool CustomLogic_CustomLogicRandomBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


