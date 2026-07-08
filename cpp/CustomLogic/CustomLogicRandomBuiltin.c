// Type: CustomLogic.CustomLogicRandomBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRandomBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicRandomBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicRandomBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRandomBuiltin_o* CustomLogic_CustomLogicRandomBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3f43e30

CustomLogic_CustomLogicRandomBuiltin_o *
CustomLogic_CustomLogicRandomBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  uint in_EAX;
  int iVar1;
  uint uVar2;
  CustomLogic_CustomLogicRandomBuiltin_o *__this;
  System_String_o *pSVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  MethodInfo *method_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703ddf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicRandomBuiltin);
    DAT_05703ddf = '\x01';
  }
  uVar2 = (uint)uStack_18;
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicRandomBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicRandomBuiltin);
      if (DAT_05703dda == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703dda = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
    }
    else {
      iVar1 = (int)args->max_length;
      if (iVar1 != 1) {
        uStack_18 = CONCAT44(iVar1,uVar2);
        pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
        str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicRandomBuiltin constructor found that takes ");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
        pSVar3 = System_String__Concat(str0,pSVar3,str2,(MethodInfo *)0x0);
        uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
        System_ArgumentException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
        uVar4 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicRandomBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_00,uVar4);
      }
      obj = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_Int32_ConvertTo_Int32;
      uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<int>
                        (obj,(MethodInfo_24AB5C0 *)MethodInfo_Int32_ConvertTo_Int32);
      __this = (CustomLogic_CustomLogicRandomBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicRandomBuiltin);
      if (DAT_05703ddb == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703ddb = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)__this,method_00);
      uVar2 = uVar2 << 0xd ^ uVar2;
      uVar2 = uVar2 >> 0x11 ^ uVar2;
      (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
      *(undefined1 *)&(__this->fields).UseInstanceRandom = 1;
    }
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3f44e60

void CustomLogic_CustomLogicRandomBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703de9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703de9 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3f44ed0

void CustomLogic_CustomLogicRandomBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomInt>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomInt_b__2_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f44ee0

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings_<>c__<__CreateMethodBinding__RandomInt>b__2_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  int32_t minInclusive;
  int32_t maxExclusive;
  Il2CppObject *pIVar2;
  uint uVar3;
  int iStack_2c;
  
  if (DAT_05703dea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dea = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f44fe2:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    minInclusive = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (uint)__a->max_length) {
      maxExclusive = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        if ((char)(__c->fields).UseInstanceRandom == '\0') {
          iStack_2c = UnityEngine_Random__Range(minInclusive,maxExclusive,(MethodInfo *)0x0);
        }
        else {
          uVar1 = (__c->fields).Rand.fields.state;
          uVar3 = uVar1 << 0xd ^ uVar1;
          uVar3 = uVar3 >> 0x11 ^ uVar3;
          (__c->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
          iStack_2c = (int)((ulong)(uint)(maxExclusive - minInclusive) * (ulong)uVar1 >> 0x20) +
                      minInclusive;
        }
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&iStack_2c);
        return pIVar2;
      }
      goto LAB_03f44fe2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomFloat>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomFloat_b__3_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f44ff0

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings_<>c__<__CreateMethodBinding__RandomFloat>b__3_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  uint uVar3;
  float fVar4;
  undefined8 local_28;
  
  local_28 = in_RAX;
  if (DAT_05703deb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703deb = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f45116:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar2,MethodInfo_Single_ConvertTo_Single);
    local_28 = CONCAT44(local_28._4_4_,fVar4);
    if (1 < (uint)__a->max_length) {
      fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        if ((char)(__c->fields).UseInstanceRandom == '\0') {
          fVar4 = UnityEngine_Random__Range((float)local_28,fVar4,(MethodInfo *)0x0);
        }
        else {
          uVar1 = (__c->fields).Rand.fields.state;
          uVar3 = uVar1 << 0xd ^ uVar1;
          uVar3 = uVar3 >> 0x11 ^ uVar3;
          (__c->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
          fVar4 = (fVar4 - (float)local_28) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) +
                  (float)local_28;
        }
        local_28 = CONCAT44(fVar4,(float)local_28);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&local_28 + 4);
        return pIVar2;
      }
      goto LAB_03f45116;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomBool>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomBool_b__4_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f45120

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings_<>c__<__CreateMethodBinding__RandomBool>b__4_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  byte bVar2;
  bool_conflict bVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  uint uVar5;
  undefined8 uStack_8;
  
  if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
    uStack_8 = in_RAX;
    if ((char)(__c->fields).UseInstanceRandom == '\0') {
      bVar3 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
      bVar2 = (byte)bVar3;
    }
    else {
      uVar1 = (__c->fields).Rand.fields.state;
      uVar5 = uVar1 << 0xd ^ uVar1;
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      (__c->fields).Rand.fields.state = uVar5 << 5 ^ uVar5;
      bVar2 = (byte)uVar1 & 1;
    }
    uStack_8 = CONCAT17(bVar2,(undefined7)uStack_8);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
    return pIVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomVector3>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomVector3_b__5_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f45180

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings_<>c__<__CreateMethodBinding__RandomVector3>b__5_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *b;
  
  if (DAT_05703dec == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dec = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f45229:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      b = (CustomLogic_CustomLogicVector3Builtin_o *)
          CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        pCVar1 = CustomLogic_CustomLogicRandomBuiltin__RandomVector3(__c,pCVar1,b,method);
        return (Il2CppObject *)pCVar1;
      }
      goto LAB_03f45229;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomDirection>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomDirection_b__6_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f45230

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings_<>c__<__CreateMethodBinding__RandomDirection>b__6_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  System_Object_array *extraout_RDX;
  System_Object_array *method_00;
  System_Object_array *extraout_RDX_00;
  
  method_00 = __a;
  if (DAT_05703ded == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703ded = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      uVar1 = 0;
    }
    else {
      if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(obj,MethodInfo_Boolean_ConvertTo_Boolean);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
      pCVar2 = CustomLogic_CustomLogicRandomBuiltin__RandomDirection
                         (__c,uVar1 & 0xff,(MethodInfo *)method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__RandomSign>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__RandomSign_b__7_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f452d0

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings_<>c__<__CreateMethodBinding__RandomSign>b__7_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  uint uVar2;
  undefined1 auStack_4 [4];
  
  if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
    if ((char)(__c->fields).UseInstanceRandom == '\0') {
      Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
    }
    else {
      uVar2 = (__c->fields).Rand.fields.state;
      uVar2 = uVar2 << 0xd ^ uVar2;
      uVar2 = uVar2 >> 0x11 ^ uVar2;
      (__c->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    }
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings.<>c$$<__CreateMethodBinding__PerlinNoise>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicRandomBuiltin_Bindings___c_____CreateMethodBinding__PerlinNoise_b__8_0 (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicRandomBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f45330

Il2CppObject *
CustomLogic_CustomLogicRandomBuiltin_Bindings_<>c__<__CreateMethodBinding__PerlinNoise>b__8_0
          (CustomLogic_CustomLogicRandomBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicRandomBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 in_RAX;
  Il2CppObject *pIVar1;
  float fVar2;
  undefined8 local_28;
  
  local_28 = in_RAX;
  if (DAT_05703dee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703dee = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f45400:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    local_28 = CONCAT44(local_28._4_4_,fVar2);
    if (1 < (uint)__a->max_length) {
      fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
      if (__c != (CustomLogic_CustomLogicRandomBuiltin_o *)0x0) {
        fVar2 = UnityEngine_Mathf__PerlinNoise((float)local_28,fVar2,(MethodInfo *)0x0);
        local_28 = CONCAT44(fVar2,(float)local_28);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,(long)&local_28 + 4);
        return pIVar1;
      }
      goto LAB_03f45400;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRandomBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3f44010

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRandomBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_Exception_o *__this;
  System_Func_T__object____object__o *pSVar7;
  CustomLogic_CLMethodBinding_T__o *pCVar8;
  
  if (DAT_05703de0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"RandomBool");
    il2cpp_init_method_metadata(&"RandomDirection");
    il2cpp_init_method_metadata(&"PerlinNoise");
    il2cpp_init_method_metadata(&"RandomFloat");
    il2cpp_init_method_metadata(&"RandomVector3");
    il2cpp_init_method_metadata(&"RandomInt");
    il2cpp_init_method_metadata(&"RandomSign");
    DAT_05703de0 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x90354281) {
    if (uVar3 == 0x82de4eee) {
      bVar4 = System_String__op_Equality(name,"RandomVector3",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703de4 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomVector3_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703de4 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x885c07e3) {
      bVar4 = System_String__op_Equality(name,"PerlinNoise",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703de7 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PerlinNoise_b__8);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703de7 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x38,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x90354280) &&
            (bVar4 = System_String__op_Equality(name,"RandomFloat",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703de2 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomFloat_b__3);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703de2 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xb5b881f8) {
    if (uVar3 == 0x91b5efce) {
      bVar4 = System_String__op_Equality(name,"RandomBool",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703de3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomBool_b__4_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703de3 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xb5b881f7) &&
            (bVar4 = System_String__op_Equality(name,"RandomDirection",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703de5 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomDirection_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703de5 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x28,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xfb77f8cf) {
    bVar4 = System_String__op_Equality(name,"RandomSign",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703de6 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomSign_b__7_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703de6 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x30,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xfa877c5b) &&
          (bVar4 = System_String__op_Equality(name,"RandomInt",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703de1 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomInt_b__2_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703de1 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
      il2cpp_runtime_glue(lVar2 + 8,pSVar7);
    }
    pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicRandomBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomInt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt (const MethodInfo* method);
// 0x3f44390

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomInt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (DAT_05703de1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomInt_b__2_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703de1 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomFloat (const MethodInfo* method);
// 0x3f444e0

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomFloat
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (DAT_05703de2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomFloat_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703de2 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomBool
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomBool (const MethodInfo* method);
// 0x3f44630

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomBool(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (DAT_05703de3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomBool_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703de3 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomVector3
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomVector3 (const MethodInfo* method);
// 0x3f44780

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomVector3
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (DAT_05703de4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomVector3_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703de4 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomDirection
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomDirection (const MethodInfo* method);
// 0x3f448d0

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomDirection
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (DAT_05703de5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomDirection_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703de5 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__RandomSign
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomSign (const MethodInfo* method);
// 0x3f44a20

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__RandomSign(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (DAT_05703de6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RandomSign_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703de6 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$__CreateMethodBinding__PerlinNoise
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o* CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__PerlinNoise (const MethodInfo* method);
// 0x3f44b70

CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *
CustomLogic_CustomLogicRandomBuiltin_Bindings____CreateMethodBinding__PerlinNoise
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *__this;
  
  if (DAT_05703de7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__PerlinNoise_b__8);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703de7 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicRandomBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicRandomBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicRandomBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicRandomBuiltin);
  return __this;
}


// CustomLogic.CustomLogicRandomBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3f44cc0

void CustomLogic_CustomLogicRandomBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703de8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"RandomBool");
    il2cpp_init_method_metadata(&"RandomDirection");
    il2cpp_init_method_metadata(&"PerlinNoise");
    il2cpp_init_method_metadata(&"RandomFloat");
    il2cpp_init_method_metadata(&"RandomVector3");
    il2cpp_init_method_metadata(&"RandomInt");
    il2cpp_init_method_metadata(&"RandomSign");
    DAT_05703de8 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"RandomInt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RandomFloat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RandomBool",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RandomVector3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RandomDirection",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RandomSign",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"PerlinNoise",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRandomBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin___ctor (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x3f43730

void CustomLogic_CustomLogicRandomBuiltin___ctor
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703dda == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703dda = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
  return;
}


// CustomLogic.CustomLogicRandomBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRandomBuiltin___ctor (CustomLogic_CustomLogicRandomBuiltin_o* __this, int32_t seed, const MethodInfo* method);
// 0x3f43790

void CustomLogic_CustomLogicRandomBuiltin___ctor
               (CustomLogic_CustomLogicRandomBuiltin_o *__this,int32_t seed,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  undefined4 in_register_00000034;
  
  iVar2 = seed;
  if (DAT_05703ddb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703ddb = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,
             (MethodInfo *)CONCAT44(in_register_00000034,iVar2));
  uVar1 = seed << 0xd ^ seed;
  uVar1 = uVar1 >> 0x11 ^ uVar1;
  (__this->fields).Rand.fields.state = uVar1 << 5 ^ uVar1;
  *(undefined1 *)&(__this->fields).UseInstanceRandom = 1;
  return;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomInt
// il2cpp: int32_t CustomLogic_CustomLogicRandomBuiltin__RandomInt (CustomLogic_CustomLogicRandomBuiltin_o* __this, int32_t min, int32_t max, const MethodInfo* method);
// 0x3f43800

int32_t CustomLogic_CustomLogicRandomBuiltin__RandomInt
                  (CustomLogic_CustomLogicRandomBuiltin_o *__this,int32_t min,int32_t max,
                  MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  uint uVar3;
  
  if ((char)(__this->fields).UseInstanceRandom != '\0') {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar3 = uVar1 << 0xd ^ uVar1;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
    return (int)((ulong)(uint)(max - min) * (ulong)uVar1 >> 0x20) + min;
  }
  iVar2 = UnityEngine_Random__Range(min,max,(MethodInfo *)0x0);
  return iVar2;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomFloat
// il2cpp: float CustomLogic_CustomLogicRandomBuiltin__RandomFloat (CustomLogic_CustomLogicRandomBuiltin_o* __this, float min, float max, const MethodInfo* method);
// 0x3f43840

float CustomLogic_CustomLogicRandomBuiltin__RandomFloat
                (CustomLogic_CustomLogicRandomBuiltin_o *__this,float min,float max,
                MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  if ((char)(__this->fields).UseInstanceRandom != '\0') {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar2 = uVar1 << 0xd ^ uVar1;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    return (max - min) * ((float)(uVar1 >> 9 | 0x3f800000) + -1.0) + min;
  }
  fVar3 = UnityEngine_Random__Range(min,max,(MethodInfo *)0x0);
  return fVar3;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomBool
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__RandomBool (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x3f43890

bool_conflict
CustomLogic_CustomLogicRandomBuiltin__RandomBool
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  if ((char)(__this->fields).UseInstanceRandom != '\0') {
    uVar1 = (__this->fields).Rand.fields.state;
    uVar3 = uVar1 << 0xd ^ uVar1;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
    return uVar1 & 0xffffff01;
  }
  bVar2 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomVector3
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRandomBuiltin__RandomVector3 (CustomLogic_CustomLogicRandomBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x3f438c0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRandomBuiltin__RandomVector3
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *a
          ,CustomLogic_CustomLogicVector3Builtin_o *b,MethodInfo *method)

{
  uint uVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  UnityEngine_Vector3_o value;
  float local_3c;
  
  if (DAT_05703ddc == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703ddc = '\x01';
  }
  if ((a == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (b == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  fVar3 = (a->fields).Value.fields.x;
  fVar5 = (b->fields).Value.fields.x;
  if ((char)(__this->fields).UseInstanceRandom == '\0') {
    fVar3 = UnityEngine_Random__Range(fVar3,fVar5,(MethodInfo *)0x0);
    fVar5 = (a->fields).Value.fields.y;
    fVar4 = (b->fields).Value.fields.y;
    if ((char)(__this->fields).UseInstanceRandom != '\0') goto LAB_03f4397e;
    fVar5 = UnityEngine_Random__Range(fVar5,fVar4,(MethodInfo *)0x0);
    local_3c = (a->fields).Value.fields.z;
    fVar4 = (b->fields).Value.fields.z;
    if ((char)(__this->fields).UseInstanceRandom == '\0') {
      local_3c = UnityEngine_Random__Range(local_3c,fVar4,(MethodInfo *)0x0);
      goto LAB_03f43a06;
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
LAB_03f4397e:
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
LAB_03f43a06:
  __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  value.fields.y = fVar5;
  value.fields.x = fVar3;
  value.fields.z = local_3c;
  CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicRandomBuiltin__RandomDirection (CustomLogic_CustomLogicRandomBuiltin_o* __this, bool _flat, const MethodInfo* method);
// 0x3f43aa0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicRandomBuiltin__RandomDirection
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,bool_conflict _flat,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  uint uVar2;
  float fVar3;
  undefined4 uVar6;
  undefined1 extraout_var [12];
  undefined1 auVar4 [16];
  undefined1 extraout_var_00 [12];
  undefined1 auVar5 [16];
  undefined1 extraout_var_01 [12];
  undefined1 extraout_var_02 [12];
  float fVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  UnityEngine_Vector3_o value;
  undefined8 local_28;
  undefined1 auVar11 [16];
  
  if (DAT_05703ddd == '\0') {
    il2cpp_init_method_metadata();
    DAT_05703ddd = '\x01';
  }
  if ((char)(__this->fields).UseInstanceRandom == '\0') {
    auVar12._0_4_ = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
    auVar12._4_12_ = extraout_var;
    if ((char)(__this->fields).UseInstanceRandom != '\0') goto LAB_03f43b2b;
    fVar3 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
    uVar6 = extraout_var_01._0_4_;
    if ((char)(__this->fields).UseInstanceRandom == '\0') {
      fVar7 = UnityEngine_Random__Range(-1.0,1.0,(MethodInfo *)0x0);
      auVar9._4_4_ = extraout_var_02._0_4_;
      auVar9._0_4_ = fVar7;
      auVar9._8_4_ = extraout_var_02._4_4_;
      auVar9._12_4_ = extraout_var_02._8_4_;
      auVar13._8_4_ = extraout_var._0_4_;
      auVar13._0_8_ = auVar12._0_8_;
      auVar13._12_4_ = uVar6;
      auVar10._8_8_ = auVar13._8_8_;
      auVar10._4_4_ = fVar3;
      auVar10._0_4_ = auVar12._0_4_;
      goto joined_r0x03f43d5e;
    }
  }
  else {
    uVar8 = (__this->fields).Rand.fields.state;
    uVar2 = uVar8 << 0xd ^ uVar8;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    fVar3 = (float)(uVar8 >> 9 | 0x3f800000) + -1.0;
    auVar12 = ZEXT416((uint)(fVar3 + fVar3 + -1.0));
LAB_03f43b2b:
    uVar8 = (__this->fields).Rand.fields.state;
    uVar2 = uVar8 << 0xd ^ uVar8;
    uVar2 = uVar2 >> 0x11 ^ uVar2;
    (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
    fVar3 = (float)(uVar8 >> 9 | 0x3f800000) + -1.0;
    fVar3 = fVar3 + fVar3 + -1.0;
    uVar6 = 0;
  }
  uVar8 = (__this->fields).Rand.fields.state;
  uVar2 = uVar8 << 0xd ^ uVar8;
  uVar2 = uVar2 >> 0x11 ^ uVar2;
  (__this->fields).Rand.fields.state = uVar2 << 5 ^ uVar2;
  fVar7 = (float)(uVar8 >> 9 | 0x3f800000) + -1.0;
  auVar9 = ZEXT416((uint)(fVar7 + fVar7 + -1.0));
  auVar11._0_8_ = auVar12._0_8_;
  auVar11._8_4_ = auVar12._4_4_;
  auVar11._12_4_ = uVar6;
  auVar10._8_8_ = auVar11._8_8_;
  auVar10._0_4_ = auVar12._0_4_;
  auVar10._4_4_ = fVar3;
joined_r0x03f43d5e:
  if ((char)_flat != '\0') {
    auVar10._4_4_ = 0;
    auVar10._0_4_ = auVar12._0_4_;
  }
  uVar8 = auVar9._0_4_;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    auVar9 = ZEXT416(uVar8);
    DAT_056fde20 = '\x01';
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Math + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    auVar9 = ZEXT416(uVar8);
  }
  auVar4._4_12_ = auVar9._4_12_;
  fVar3 = auVar9._0_4_ * auVar9._0_4_ +
          auVar10._4_4_ * auVar10._4_4_ + auVar10._0_4_ * auVar10._0_4_;
  if (fVar3 < 0.0) {
    auVar4._0_4_ = sqrtf(fVar3);
    auVar4._4_12_ = extraout_var_00;
    auVar9 = ZEXT416(uVar8);
    fVar3 = auVar4._0_4_;
  }
  else {
    auVar4._0_4_ = SQRT(fVar3);
    fVar3 = auVar4._0_4_;
  }
  if (1e-05 < fVar3) {
    auVar5._0_4_ = auVar4._0_4_;
    fVar3 = auVar9._0_4_ / auVar5._0_4_;
    auVar5._8_4_ = auVar4._8_4_;
    auVar5._12_4_ = auVar4._12_4_;
    auVar5._4_4_ = auVar5._0_4_;
    auVar12 = divps(auVar10,auVar5);
    local_28 = auVar12._0_8_;
  }
  else {
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    local_28 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar3 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  value.fields.z = fVar3;
  value.fields.x = (float)(undefined4)local_28;
  value.fields.y = (float)local_28._4_4_;
  CustomLogic_CustomLogicVector3Builtin___ctor(__this_00,value,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicRandomBuiltin$$RandomSign
// il2cpp: int32_t CustomLogic_CustomLogicRandomBuiltin__RandomSign (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x3f43d70

int32_t CustomLogic_CustomLogicRandomBuiltin__RandomSign
                  (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if ((char)(__this->fields).UseInstanceRandom != '\0') {
    uVar2 = (__this->fields).Rand.fields.state;
    uVar3 = uVar2 << 0xd ^ uVar2;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    (__this->fields).Rand.fields.state = uVar3 << 5 ^ uVar3;
    bVar1 = (byte)uVar2 & 1;
    return (uint)bVar1 + (uint)bVar1 + -1;
  }
  uVar2 = Utility_RandomGen__GetRandomBool((MethodInfo *)0x0);
  return (uVar2 & 0xff) * 2 + -1;
}


// CustomLogic.CustomLogicRandomBuiltin$$PerlinNoise
// il2cpp: float CustomLogic_CustomLogicRandomBuiltin__PerlinNoise (CustomLogic_CustomLogicRandomBuiltin_o* __this, float x, float y, const MethodInfo* method);
// 0x3f43dc0

float CustomLogic_CustomLogicRandomBuiltin__PerlinNoise
                (CustomLogic_CustomLogicRandomBuiltin_o *__this,float x,float y,MethodInfo *method)

{
  float fVar1;
  
  fVar1 = UnityEngine_Mathf__PerlinNoise(x,y,(MethodInfo *)0x0);
  return fVar1;
}


// CustomLogic.CustomLogicRandomBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRandomBuiltin__get_ClassName (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x3f43dd0

System_String_o *
CustomLogic_CustomLogicRandomBuiltin__get_ClassName
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703dde == '\0') {
    il2cpp_init_method_metadata(&"Random");
    DAT_05703dde = '\x01';
  }
  return "Random";
}


// CustomLogic.CustomLogicRandomBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_IsAbstract (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x3f43e00

bool_conflict
CustomLogic_CustomLogicRandomBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicRandomBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_IsStatic (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x3f43e10

bool_conflict
CustomLogic_CustomLogicRandomBuiltin__get_IsStatic
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicRandomBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRandomBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRandomBuiltin_o* __this, const MethodInfo* method);
// 0x3f43e20

bool_conflict
CustomLogic_CustomLogicRandomBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicRandomBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


