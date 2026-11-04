// Type: CustomLogic.CustomLogicRandomBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRandomBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRandomBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicRandomBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRandomBuiltin_o* CustomLogic_CustomLogicRandomBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x1820ab200

CustomLogic_CustomLogicRandomBuiltin_o *
CustomLogic_CustomLogicRandomBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  CustomLogic_CustomLogicRandomBuiltin_o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434685c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin);
    Il2CppMethodInitialized_18434685c = '\x01';
  }
  local_res8[0] = 0;
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length == 0) {
    pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin);
    if (Il2CppMethodInitialized_184346857 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184346857 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
    return pCVar2;
  }
  if ((int)args->max_length == 1) {
    if ((int)args->max_length != 0) {
      obj = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      pCVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin);
      if (Il2CppMethodInitialized_184346858 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_184346858 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar2,(MethodInfo *)0x0);
      (pCVar2->fields).UseInstanceRandom = true;
      uVar1 = uVar1 << 0xd ^ uVar1;
      uVar1 = uVar1 >> 0x11 ^ uVar1;
      (pCVar2->fields).Rand.fields.state = uVar1 << 5 ^ uVar1;
      return pCVar2;
    }
    ThrowIndexOutOfRangeException();
  }
  NullCheck(args);
  local_res8[0] = (int32_t)args->max_length;
  pSVar3 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRandomBuiltin constructor found that takes ");
  pSVar3 = System_String__Concat_1969b70(str0,pSVar3,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x1820b53e0

void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346866 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346866 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicRandomBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomInt>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomInt_b__2_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b1fc0

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomInt_b__2_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t minInclusive;
  int32_t maxExclusive;
  Il2CppObject *pIVar1;
  uint uVar2;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184346867 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346867 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820b20c6:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    minInclusive = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (pIVar1,(MethodInfo_66E9A0 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (uint)__a->max_length) {
      maxExclusive = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                               (__a->m_Items[1],
                                (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                               );
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        if ((__c->fields).UseInstanceRandom == false) {
          local_res18[0] = UnityEngine_Random__RandomRangeInt(minInclusive,maxExclusive,(MethodInfo *)0x0);
        }
        else {
          uVar2 = (__c->fields).Rand.fields.state << 0xd ^ (__c->fields).Rand.fields.state;
          uVar2 = uVar2 >> 0x11 ^ uVar2;
          local_res18[0] =
               (int)((ulonglong)(uint)(maxExclusive - minInclusive) *
                     (ulonglong)(__c->fields).Rand.fields.state >> 0x20) + minInclusive;
          (__c->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
        }
        pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
        return pIVar1;
      }
      goto label_1820b20c6;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomFloat>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomFloat_b__3_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b1e90

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomFloat_b__3_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  float minInclusive;
  float maxInclusive;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_184346868 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346868 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820b1fad:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    minInclusive = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             (pIVar3,(MethodInfo_66ED40 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (1 < (uint)__a->max_length) {
      maxInclusive = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                               (__a->m_Items[1],
                                (MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        if ((__c->fields).UseInstanceRandom == false) {
          local_res18[0] = UnityEngine_Random__Range(minInclusive,maxInclusive,(MethodInfo *)0x0);
        }
        else {
          uVar1 = (__c->fields).Rand.fields.state;
          uVar2 = uVar1 << 0xd ^ uVar1;
          uVar2 = uVar2 >> 0x11 ^ uVar2;
          (__c->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
          local_res18[0] =
               ((float)(uVar1 >> 9 | 0x3f800000) - 1.0) * (maxInclusive - minInclusive) + minInclusive;
        }
        pIVar3 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar3;
      }
      goto label_1820b1fad;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomBool>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomBool_b__4_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b1d90

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomBool_b__4_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res10 [24];
  
  if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
    if ((__c->fields).UseInstanceRandom == false) {
      local_res10[0] = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
    }
    else {
      uVar1 = (__c->fields).Rand.fields.state;
      uVar2 = uVar1 << 0xd ^ uVar1;
      uVar2 = uVar2 >> 0x11 ^ uVar2;
      (__c->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
      local_res10[0] = (byte)uVar1 & 1;
    }
    pIVar3 = il2cpp_value_box(g_data_184354de8,local_res10);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomVector3>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomVector3_b__5_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b2150

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomVector3_b__5_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  
  if (Il2CppMethodInitialized_184346869 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346869 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820b21fe:
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
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicRandomBuiltin__RandomVector3(__c,pCVar1,b,(MethodInfo *)0x0);
        return (Il2CppObject *)pCVar1;
      }
      goto label_1820b21fe;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomDirection>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomDirection_b__6_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b1df0

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomDirection_b__6_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool _flat;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434686a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434686a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    _flat = false;
    if (__a->max_length != 0) {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      _flat = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicRandomBuiltin__RandomDirection(__c,_flat,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomSign>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomSign_b__7_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b20e0

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomSign_b__7_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int local_res10 [6];
  
  if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
    if ((__c->fields).UseInstanceRandom == false) {
      bVar4 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
    }
    else {
      uVar1 = (__c->fields).Rand.fields.state;
      uVar2 = uVar1 << 0xd ^ uVar1;
      uVar2 = uVar2 >> 0x11 ^ uVar2;
      (__c->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
      bVar4 = (bool)((byte)uVar1 & 1);
    }
    local_res10[0] = (uint)bVar4 * 2 + -1;
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
    return pIVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__PerlinNoise>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__PerlinNoise_b__8_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b1890

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__PerlinNoise_b__8_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float x;
  float y;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434686b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434686b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820b1965:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    x = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                  (pIVar1,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (1 < (uint)__a->max_length) {
      y = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__a->m_Items[1],
                     (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        local_res18[0] = UnityEngine_Mathf__PerlinNoise(x,y,(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
        return pIVar1;
      }
      goto label_1820b1965;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRandomBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x18208ed90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRandomBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

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
  System_Func_CustomLogicRandomBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_18434685d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"RandomBool");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"PerlinNoise");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomVector3");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomInt");
    il2cpp_codegen_initialize_runtime_metadata(&"RandomSign");
    Il2CppMethodInitialized_18434685d = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x90354281) {
    if (uVar3 == 0x82de4eee) {
      bVar2 = System_String__op_Equality(name,"RandomVector3",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208f643;
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346861 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomVector3_b__5_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346861 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__5_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208f614;
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomVector3_b__5_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__5_0 =
           (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__5_0;
    }
    else if (uVar3 == 0x885c07e3) {
      bVar2 = System_String__op_Equality(name,"PerlinNoise",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208f643;
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346864 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__PerlinNoise_b__8_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346864 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__8_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208f614;
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__PerlinNoise_b__8_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__8_0 =
           (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__8_0;
    }
    else {
      if (uVar3 != 0x90354280) goto label_18208f643;
      bVar2 = System_String__op_Equality(name,"RandomFloat",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208f643;
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434685f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomFloat_b__3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434685f = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__3_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208f614;
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomFloat_b__3_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__3_0 =
           (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__3_0;
    }
  }
  else if (uVar3 < 0xb5b881f8) {
    if (uVar3 == 0x91b5efce) {
      bVar2 = System_String__op_Equality(name,"RandomBool",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208f643;
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346860 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomBool_b__4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346860 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__4_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208f614;
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomBool_b__4_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__4_0 =
           (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__4_0;
    }
    else {
      if (uVar3 != 0xb5b881f7) goto label_18208f643;
      bVar2 = System_String__op_Equality(name,"RandomDirection",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208f643;
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346862 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomDirection_b__6_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346862 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__6_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208f614;
      if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomDirection_b__6_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__6_0 =
           (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__6_0;
    }
  }
  else if (uVar3 == 0xfa877c5b) {
    bVar2 = System_String__op_Equality(name,"RandomInt",(MethodInfo *)0x0);
    if (!bVar2) goto label_18208f643;
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_18434685e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomInt_b__2_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      Il2CppMethodInitialized_18434685e = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__2_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208f614;
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomInt_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__2_0;
  }
  else {
    if (uVar3 != 0xfb77f8cf) {
label_18208f643:
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRandomBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_01,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    bVar2 = System_String__op_Equality(name,"RandomSign",(MethodInfo *)0x0);
    if (!bVar2) goto label_18208f643;
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_184346863 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomSign_b__7_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346863 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__7_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208f614;
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomSign_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__7_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_18208f614:
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt (const MethodInfo* method);
// 0x182098020

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434685e == '\0') {
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
    Il2CppMethodInitialized_18434685e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__2_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomInt_b__2_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__2_0 =
         (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__2_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomFloat (const MethodInfo* method);
// 0x182097f00

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomFloat(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434685f == '\0') {
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
    Il2CppMethodInitialized_18434685f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomFloat_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomBool (const MethodInfo* method);
// 0x182097cc0

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomBool(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346860 == '\0') {
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
    Il2CppMethodInitialized_184346860 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomBool_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomVector3
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomVector3 (const MethodInfo* method);
// 0x182098260

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomVector3(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346861 == '\0') {
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
    Il2CppMethodInitialized_184346861 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomVector3_b__5_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomDirection (const MethodInfo* method);
// 0x182097de0

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomDirection(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346862 == '\0') {
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
    Il2CppMethodInitialized_184346862 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomDirection_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomSign
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomSign (const MethodInfo* method);
// 0x182098140

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomSign(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346863 == '\0') {
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
    Il2CppMethodInitialized_184346863 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__RandomSign_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__PerlinNoise
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__PerlinNoise (const MethodInfo* method);
// 0x182097820

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__PerlinNoise(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346864 == '\0') {
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
    Il2CppMethodInitialized_184346864 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicRandomBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c___CreateMethodBinding__PerlinNoise_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicRandomBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x18209a930

void CustomLogic_CustomLogicRandomBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346865 == '\0') {
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
    Il2CppMethodInitialized_184346865 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomInt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomFloat",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomBool",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomVector3",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomDirection",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RandomSign",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PerlinNoise",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicRandomBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRandomBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin___ctor (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x1820aa590

void CustomLogic_CustomLogicRandomBuiltin___ctor
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346857 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346857 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin___ctor (CustomLogic_CustomLogicRandomBuiltin_o* __this, int32_t seed, const MethodInfo* method);
// 0x1820aa510

void CustomLogic_CustomLogicRandomBuiltin___ctor_20aa510
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,int32_t seed,MethodInfo *method)

{
  uint uVar1;
  
  if (Il2CppMethodInitialized_184346858 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184346858 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).UseInstanceRandom = true;
  uVar1 = seed << 0xd ^ seed;
  uVar1 = uVar1 >> 0x11 ^ uVar1;
  (__this->fields).Rand.fields.state = uVar1 << 5 ^ uVar1;
  return;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomInt
// il2cpp: int32_t CustomLogic_CustomLogicRandomBuiltin__RandomInt (CustomLogic_CustomLogicRandomBuiltin_o* __this, int32_t min, int32_t max, const MethodInfo* method);
// 0x1820aa2a0

int32_t CustomLogic_CustomLogicRandomBuiltin__RandomInt
                  (CustomLogic_CustomLogicRandomBuiltin_o *__this,int32_t min,int32_t max,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int32_t iVar3;
  
  if ((__this->fields).UseInstanceRandom != false) {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar2 = (__this->fields).Rand.fields.state << 0xd ^ (__this->fields).Rand.fields.state;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    return (int)((ulonglong)(uint)(max - min) * (ulonglong)uVar1 >> 0x20) + min;
  }
  iVar3 = UnityEngine_Random__RandomRangeInt(min,max,(MethodInfo *)0x0);
  return iVar3;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomFloat
// il2cpp: float CustomLogic_CustomLogicRandomBuiltin__RandomFloat (CustomLogic_CustomLogicRandomBuiltin_o* __this, float min, float max, const MethodInfo* method);
// 0x1820aa240

float CustomLogic_CustomLogicRandomBuiltin__RandomFloat
                (CustomLogic_CustomLogicRandomBuiltin_o *__this,float min,float max,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  if ((__this->fields).UseInstanceRandom != false) {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar2 = uVar1 << 0xd ^ uVar1;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    return ((float)(uVar1 >> 9 | 0x3f800000) - 1.0) * (max - min) + min;
  }
  fVar3 = UnityEngine_Random__Range(min,max,(MethodInfo *)0x0);
  return fVar3;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomBool
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__RandomBool (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x1820a9f90

bool CustomLogic_CustomLogicRandomBuiltin__RandomBool
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  
  if ((__this->fields).UseInstanceRandom != false) {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar3 = uVar1 << 0xd ^ uVar1;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
    return (bool)((byte)uVar1 & 1);
  }
  bVar2 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomVector3
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRandomBuiltin__RandomVector3 (CustomLogic_CustomLogicRandomBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x1820aa340

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRandomBuiltin__RandomVector3
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *a,
          CustomLogic_CustomLogicVector3Builtin_o *b,MethodInfo *method)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o local_48 [5];
  
  if (Il2CppMethodInitialized_184346859 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184346859 = '\x01';
  }
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    fVar4 = (a->fields).Value.fields.x;
    fVar5 = (b->fields).Value.fields.x;
    if ((__this->fields).UseInstanceRandom == false) {
      fVar4 = UnityEngine_Random__Range(fVar4,fVar5,(MethodInfo *)0x0);
    }
    else {
      uVar2 = (__this->fields).Rand.fields.state;
      uVar3 = uVar2 << 0xd ^ uVar2;
      uVar3 = uVar3 >> 0x11 ^ uVar3;
      (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
      fVar4 = ((float)(uVar2 >> 9 | 0x3f800000) - 1.0) * (fVar5 - fVar4) + fVar4;
    }
    fVar5 = (a->fields).Value.fields.y;
    fVar1 = (b->fields).Value.fields.y;
    if ((__this->fields).UseInstanceRandom == false) {
      fVar5 = UnityEngine_Random__Range(fVar5,fVar1,(MethodInfo *)0x0);
    }
    else {
      uVar2 = (__this->fields).Rand.fields.state;
      uVar3 = uVar2 << 0xd ^ uVar2;
      uVar3 = uVar3 >> 0x11 ^ uVar3;
      (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
      fVar5 = ((float)(uVar2 >> 9 | 0x3f800000) - 1.0) * (fVar1 - fVar5) + fVar5;
    }
    local_48[0].fields.z = (a->fields).Value.fields.z;
    fVar1 = (b->fields).Value.fields.z;
    if ((__this->fields).UseInstanceRandom == false) {
      local_48[0].fields.z = UnityEngine_Random__Range(local_48[0].fields.z,fVar1,(MethodInfo *)0x0);
    }
    else {
      uVar2 = (__this->fields).Rand.fields.state;
      uVar3 = uVar2 << 0xd ^ uVar2;
      uVar3 = uVar3 >> 0x11 ^ uVar3;
      (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
      local_48[0].fields.z =
           ((float)(uVar2 >> 9 | 0x3f800000) - 1.0) * (fVar1 - local_48[0].fields.z) + local_48[0].fields.z;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_48[0].fields.x = fVar4;
    local_48[0].fields.y = fVar5;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0(__this_00,local_48,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRandomBuiltin__RandomDirection (CustomLogic_CustomLogicRandomBuiltin_o* __this, bool _flat, const MethodInfo* method);
// 0x1820a9fd0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRandomBuiltin__RandomDirection
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,bool _flat,MethodInfo *method)

{
  uint uVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  uint uVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  UnityEngine_Vector3_Fields local_58 [6];
  
  if (Il2CppMethodInitialized_18434685a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_18434685a = '\x01';
  }
  if ((__this->fields).UseInstanceRandom == false) {
    fVar7 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  }
  else {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar3 = uVar1 << 0xd ^ uVar1;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
    fVar7 = (float)(uVar1 >> 9 | 0x3f800000) - 1.0;
    fVar7 = (fVar7 + fVar7) - 1.0;
  }
  if ((__this->fields).UseInstanceRandom == false) {
    fVar6 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  }
  else {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar3 = uVar1 << 0xd ^ uVar1;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
    fVar6 = (float)(uVar1 >> 9 | 0x3f800000) - 1.0;
    fVar6 = (fVar6 + fVar6) - 1.0;
  }
  if ((__this->fields).UseInstanceRandom == false) {
    fVar9 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
  }
  else {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar3 = uVar1 << 0xd ^ uVar1;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
    fVar9 = (float)(uVar1 >> 9 | 0x3f800000) - 1.0;
    fVar9 = (fVar9 + fVar9) - 1.0;
  }
  if (_flat) {
    fVar6 = 0.0;
  }
  if (Il2CppMethodInitialized_18433de5f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_18433de5f = '\x01';
  }
  if (Il2CppMethodInitialized_18433de59 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_18433de59 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar5 = (double)(fVar6 * fVar6 + fVar7 * fVar7 + fVar9 * fVar9);
  if (dVar5 < 0.0) {
    dVar5 = sqrt(dVar5);
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  fVar4 = (float)dVar5;
  if (fVar4 <= 1e-05) {
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar7 = (pUVar2->zeroVector).fields.x;
    fVar6 = (pUVar2->zeroVector).fields.y;
    fVar9 = (pUVar2->zeroVector).fields.z;
  }
  else {
    fVar7 = fVar7 / fVar4;
    fVar6 = fVar6 / fVar4;
    fVar9 = fVar9 / fVar4;
  }
  uVar8._4_4_ = fVar6;
  uVar8._0_4_ = fVar7;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_58[0]._0_8_ = uVar8;
  local_58[0].z = fVar9;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this_00,(UnityEngine_Vector3_o *)local_58,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomSign
// il2cpp: int32_t CustomLogic_CustomLogicRandomBuiltin__RandomSign (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x1820aa2f0

int32_t CustomLogic_CustomLogicRandomBuiltin__RandomSign
                  (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  int32_t iVar3;
  bool bVar4;
  
  if ((__this->fields).UseInstanceRandom == false) {
    bVar4 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
  }
  else {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar2 = uVar1 << 0xd ^ uVar1;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    bVar4 = (bool)((byte)uVar1 & 1);
  }
  iVar3 = -1;
  if (bVar4 != false) {
    iVar3 = 1;
  }
  return iVar3;
}


// CustomLogic.CustomLogicRandomBuiltin$$PerlinNoise
// il2cpp: float CustomLogic_CustomLogicRandomBuiltin__PerlinNoise (CustomLogic_CustomLogicRandomBuiltin_o* __this, float x, float y, const MethodInfo* method);
// 0x1820a9f80

float CustomLogic_CustomLogicRandomBuiltin__PerlinNoise
                (CustomLogic_CustomLogicRandomBuiltin_o *__this,float x,float y,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Mathf__PerlinNoise(x,y,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicRandomBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRandomBuiltin__get_ClassName (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x1820aa5e0

System_String_o *
CustomLogic_CustomLogicRandomBuiltin__get_ClassName
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434685b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Random");
    Il2CppMethodInitialized_18434685b = '\x01';
  }
  return "Random";
}


// CustomLogic.CustomLogicRandomBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_IsAbstract (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicRandomBuiltin__get_IsAbstract(CustomLogic_CustomLogicRandomBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicRandomBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_IsStatic (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicRandomBuiltin__get_IsStatic(CustomLogic_CustomLogicRandomBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicRandomBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicRandomBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicRandomBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


