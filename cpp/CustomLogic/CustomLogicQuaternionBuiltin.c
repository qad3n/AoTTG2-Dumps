// Type: CustomLogic.CustomLogicQuaternionBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicQuaternionBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicQuaternionBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicQuaternionBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3dbff70

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar6;
  System_String_o *pSVar7;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar8;
  System_ArgumentException_o *__this;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  if (DAT_05702870 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    DAT_05702870 = '\x01';
  }
  local_2c = 0;
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (args->max_length == 0) {
    pCVar6 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
    if (DAT_05702867 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702867 = '\x01';
    }
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    pfVar1 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar2 = pfVar1[1];
    fVar3 = pfVar1[2];
    fVar4 = pfVar1[3];
    (pCVar6->fields).Value.fields.x = *pfVar1;
    (pCVar6->fields).Value.fields.y = fVar2;
    (pCVar6->fields).Value.fields.z = fVar3;
    (pCVar6->fields).Value.fields.w = fVar4;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
    return pCVar6;
  }
  iVar5 = (int)args->max_length;
  if (iVar5 == 4) {
    obj = args->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    local_1c = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (((1 < (uint)args->max_length) &&
        (local_20 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                              (args->m_Items[1],MethodInfo_Single_ConvertTo_Single), 2 < (uint)args->max_length)) &&
       (local_24 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(args->m_Items[2],MethodInfo_Single_ConvertTo_Single)
       , 3 < (uint)args->max_length)) {
      local_28 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(args->m_Items[3],MethodInfo_Single_ConvertTo_Single);
      pCVar6 = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
      if (DAT_05702868 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05702868 = '\x01';
      }
      if (DAT_056fde1e == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Quaternion);
        DAT_056fde1e = '\x01';
      }
      pfVar1 = *(float **)(TypeInfo_Quaternion + 0xb8);
      fVar2 = pfVar1[1];
      fVar3 = pfVar1[2];
      fVar4 = pfVar1[3];
      (pCVar6->fields).Value.fields.x = *pfVar1;
      (pCVar6->fields).Value.fields.y = fVar2;
      (pCVar6->fields).Value.fields.z = fVar3;
      (pCVar6->fields).Value.fields.w = fVar4;
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor
                ((CustomLogic_BuiltinClassInstance_o *)pCVar6,(MethodInfo *)0x0);
      (pCVar6->fields).Value.fields.x = local_1c;
      (pCVar6->fields).Value.fields.y = local_20;
      (pCVar6->fields).Value.fields.z = local_24;
      (pCVar6->fields).Value.fields.w = local_28;
      return pCVar6;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  local_2c = iVar5;
  pSVar7 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicQuaternionBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar7 = System_String__Concat(str0,pSVar7,str2,(MethodInfo *)0x0);
  uVar8 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar8);
  System_ArgumentException___ctor(__this,pSVar7,(MethodInfo *)0x0);
  uVar8 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar8);
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3dc2ac0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570288d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570288d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3dc2b30

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Lerp>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Lerp_b__8_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc2b40

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding__Lerp>b__8_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *method_00;
  float t;
  UnityEngine_Quaternion_o q;
  
  if (DAT_0570288e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570288e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
      if (1 < (uint)__a->max_length) {
        pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
            method_00 = (MethodInfo *)0x0;
            q = UnityEngine_Quaternion__Lerp
                          (*(UnityEngine_Quaternion_Fields *)(pIVar1 + 3),
                           *(UnityEngine_Quaternion_Fields *)(pIVar2 + 3),t,(MethodInfo *)0x0);
            pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
            return (Il2CppObject *)pCVar3;
          }
          goto LAB_03dc2c29;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03dc2c29:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__LerpUnclamped>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LerpUnclamped_b__9_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc2c30

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding__LerpUnclamped>b__9_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *method_00;
  float t;
  UnityEngine_Quaternion_o q;
  
  if (DAT_0570288f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570288f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
      if (1 < (uint)__a->max_length) {
        pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
            method_00 = (MethodInfo *)0x0;
            q = UnityEngine_Quaternion__LerpUnclamped
                          (*(UnityEngine_Quaternion_Fields *)(pIVar1 + 3),
                           *(UnityEngine_Quaternion_Fields *)(pIVar2 + 3),t,(MethodInfo *)0x0);
            pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
            return (Il2CppObject *)pCVar3;
          }
          goto LAB_03dc2d19;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03dc2d19:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Slerp>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Slerp_b__10_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc2d20

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding__Slerp>b__10_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *method_00;
  float t;
  UnityEngine_Quaternion_o q;
  
  if (DAT_05702890 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702890 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
      if (1 < (uint)__a->max_length) {
        pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
            method_00 = (MethodInfo *)0x0;
            q = UnityEngine_Quaternion__Slerp
                          (*(UnityEngine_Quaternion_Fields *)(pIVar1 + 3),
                           *(UnityEngine_Quaternion_Fields *)(pIVar2 + 3),t,(MethodInfo *)0x0);
            pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
            return (Il2CppObject *)pCVar3;
          }
          goto LAB_03dc2e09;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03dc2e09:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__SlerpUnclamped>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__SlerpUnclamped_b__11_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc2e10

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding__SlerpUnclamped>b__11_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *method_00;
  float t;
  UnityEngine_Quaternion_o q;
  
  if (DAT_05702891 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702891 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
      if (1 < (uint)__a->max_length) {
        pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
        if (2 < (uint)__a->max_length) {
          t = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
            method_00 = (MethodInfo *)0x0;
            q = UnityEngine_Quaternion__SlerpUnclamped
                          (*(UnityEngine_Quaternion_Fields *)(pIVar1 + 3),
                           *(UnityEngine_Quaternion_Fields *)(pIVar2 + 3),t,(MethodInfo *)0x0);
            pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
            return (Il2CppObject *)pCVar3;
          }
          goto LAB_03dc2ef9;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03dc2ef9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__FromEuler>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromEuler_b__12_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc2f00

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding__FromEuler>b__12_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  MethodInfo *method_00;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o q;
  
  if (DAT_05702892 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702892 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (pIVar1 != (Il2CppObject *)0x0) {
      euler.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
      euler.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
      euler.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
      method_00 = (MethodInfo *)0x0;
      q = UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
      pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookRotation>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__LookRotation_b__13_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc2fa0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding__LookRotation>b__13_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicVector3Builtin_o *forward;
  CustomLogic_CustomLogicVector3Builtin_o *upwards;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05702893 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702893 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      forward = (CustomLogic_CustomLogicVector3Builtin_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((int)__a->max_length < 2) {
        upwards = (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
        method_00 = extraout_RDX;
      }
      else {
        pIVar1 = __a->m_Items[1];
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_init_class();
        }
        upwards = (CustomLogic_CustomLogicVector3Builtin_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        method_00 = extraout_RDX_00;
      }
      pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__LookRotation(forward,upwards,method_00);
      return (Il2CppObject *)pCVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__FromToRotation>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__FromToRotation_b__14_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc3060

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding__FromToRotation>b__14_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  
  if (DAT_05702894 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702894 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dc310f:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (1 < (uint)__a->max_length) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
        method_00 = (MethodInfo *)0x0;
        q = UnityEngine_Quaternion__FromToRotation
                      ((UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
                       (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar2 + 3),
                       (MethodInfo *)0x0);
        pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
        return (Il2CppObject *)pCVar3;
      }
      goto LAB_03dc310f;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Inverse>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Inverse_b__15_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc3120

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding__Inverse>b__15_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  
  if (DAT_05702895 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702895 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    if (pIVar1 != (Il2CppObject *)0x0) {
      method_00 = (MethodInfo *)0x0;
      q = UnityEngine_Quaternion__Inverse
                    (*(UnityEngine_Quaternion_Fields *)(pIVar1 + 3),(MethodInfo *)0x0);
      pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
      return (Il2CppObject *)pCVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__RotateTowards>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__RotateTowards_b__16_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc31b0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding__RotateTowards>b__16_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  UnityEngine_Quaternion_Fields *pUVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  UnityEngine_Quaternion_Fields a;
  UnityEngine_Quaternion_Fields b;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar8;
  MethodInfo *method_00;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  UnityEngine_Quaternion_o UVar13;
  
  if (DAT_05702896 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702896 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dc335d:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar6 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar6,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    if ((1 < (uint)__a->max_length) &&
       (pIVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog),
       2 < (uint)__a->max_length)) {
      method_00 = (MethodInfo *)__a->m_Items[2];
      fVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>
                        ((Il2CppObject *)method_00,MethodInfo_Single_ConvertTo_Single);
      if ((pIVar6 != (Il2CppObject *)0x0) && (pIVar7 != (Il2CppObject *)0x0)) {
        pUVar1 = (UnityEngine_Quaternion_Fields *)(pIVar6 + 3);
        uVar2 = pUVar1->x;
        uVar4 = pUVar1->y;
        a = *pUVar1;
        pUVar1 = (UnityEngine_Quaternion_Fields *)(pIVar7 + 3);
        fVar3 = pUVar1->x;
        fVar5 = pUVar1->y;
        b = *pUVar1;
        fVar11 = SUB84(pIVar7[3].monitor,0);
        fVar12 = (float)((ulong)pIVar7[3].monitor >> 0x20);
        fVar10 = ABS((float)((ulong)pIVar6[3].monitor >> 0x20) * fVar12 +
                     (float)uVar4 * fVar5 + (float)uVar2 * fVar3 +
                     SUB84(pIVar6[3].monitor,0) * fVar11);
        if (1.0 <= fVar10) {
          fVar10 = 1.0;
        }
        if (fVar10 <= 0.999999) {
          fVar10 = acosf(fVar10);
          fVar10 = (fVar10 + fVar10) * 57.29578;
          if ((fVar10 != 0.0) || (NAN(fVar10))) {
            fVar3 = 1.0;
            if (fVar9 / fVar10 <= 1.0) {
              fVar3 = fVar9 / fVar10;
            }
            method_00 = (MethodInfo *)0x0;
            UVar13 = UnityEngine_Quaternion__SlerpUnclamped(a,b,fVar3,(MethodInfo *)0x0);
            fVar11 = UVar13.fields.z;
            fVar12 = UVar13.fields.w;
            fVar3 = UVar13.fields.x;
            fVar5 = UVar13.fields.y;
          }
        }
        UVar13.fields.y = fVar5;
        UVar13.fields.x = fVar3;
        UVar13.fields.w = fVar12;
        UVar13.fields.z = fVar11;
        pCVar8 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(UVar13,method_00);
        return (Il2CppObject *)pCVar8;
      }
      goto LAB_03dc335d;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__AngleAxis>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__AngleAxis_b__17_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc3370

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding__AngleAxis>b__17_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar2;
  MethodInfo *method_00;
  float angle;
  UnityEngine_Quaternion_o q;
  
  if (DAT_05702897 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702897 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dc3434:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    angle = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    if (1 < (uint)__a->max_length) {
      pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (pIVar1 != (Il2CppObject *)0x0) {
        method_00 = (MethodInfo *)0x0;
        q = UnityEngine_Quaternion__AngleAxis
                      (angle,(UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(pIVar1 + 3),
                       (MethodInfo *)0x0);
        pCVar2 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
        return (Il2CppObject *)pCVar2;
      }
      goto LAB_03dc3434;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding__Angle>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding__Angle_b__18_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc3440

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding__Angle>b__18_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *pIVar2;
  float fVar3;
  float local_1c;
  
  if (DAT_05702898 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702898 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dc3567:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    if (1 < (uint)__a->max_length) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
      if ((pIVar1 != (Il2CppObject *)0x0) && (pIVar2 != (Il2CppObject *)0x0)) {
        fVar3 = ABS((float)((ulong)pIVar2[3].monitor >> 0x20) *
                    (float)((ulong)pIVar1[3].monitor >> 0x20) +
                    (float)((ulong)pIVar2[3].klass >> 0x20) *
                    (float)((ulong)pIVar1[3].klass >> 0x20) +
                    SUB84(pIVar2[3].klass,0) * SUB84(pIVar1[3].klass,0) +
                    SUB84(pIVar2[3].monitor,0) * SUB84(pIVar1[3].monitor,0));
        if (1.0 <= fVar3) {
          fVar3 = 1.0;
        }
        local_1c = 0.0;
        if (fVar3 <= 0.999999) {
          fVar3 = acosf(fVar3);
          local_1c = (fVar3 + fVar3) * 57.29578;
        }
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_1c);
        return pIVar1;
      }
      goto LAB_03dc3567;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__19_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc3580

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding____Copy__>b__19_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicQuaternionBuiltin____Copy__(__c,(MethodInfo *)__c);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Mul__>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Mul___b__20_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc35a0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding____Mul__>b__20_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicQuaternionBuiltin____Mul__
                         ((CustomLogic_CustomLogicQuaternionBuiltin_o *)__this,__a->m_Items[0],
                          __a->m_Items[1],method);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__21_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc35d0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding____Eq__>b__21_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  undefined8 uStack_18;
  
  if (__a == (System_Object_array *)0x0) {
LAB_03dc36e7:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar2 = (int)__a->max_length;
  if ((iVar2 == 0) || (iVar2 == 1)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (__c == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) goto LAB_03dc36e7;
  pIVar3 = __a->m_Items[0];
  pIVar5 = __a->m_Items[1];
  uStack_18 = in_RAX;
  if (DAT_0570286d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    DAT_0570286d = '\x01';
  }
  if (pIVar5 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar1 <= (pIVar5->klass->_2).naturalAligment) {
      pIVar4 = (Il2CppObject *)0x0;
      if ((pIVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicQuaternionBuiltin) {
        pIVar5 = pIVar4;
      }
      if ((pIVar3 == (Il2CppObject *)0x0) || (pIVar5 == (Il2CppObject *)0x0)) goto LAB_03dc3641;
      if ((bVar1 <= (pIVar3->klass->_2).naturalAligment) &&
         ((pIVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
        pIVar4 = (Il2CppObject *)
                 (ulong)(0.999999 <
                        (float)((ulong)pIVar5[3].monitor >> 0x20) *
                        (float)((ulong)pIVar3[3].monitor >> 0x20) +
                        (float)((ulong)pIVar5[3].klass >> 0x20) *
                        (float)((ulong)pIVar3[3].klass >> 0x20) +
                        SUB84(pIVar3[3].klass,0) * SUB84(pIVar5[3].klass,0) +
                        SUB84(pIVar5[3].monitor,0) * SUB84(pIVar3[3].monitor,0));
        goto LAB_03dc3641;
      }
    }
  }
  pIVar4 = (Il2CppObject *)0x0;
LAB_03dc3641:
  uStack_18 = CONCAT17((char)pIVar4,(undefined7)uStack_18);
  pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
  return pIVar3;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__22_0 (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dc36f0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings_<>c__<__CreateMethodBinding____Hash__>b__22_0
          (CustomLogic_CustomLogicQuaternionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicQuaternionBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float in_XMM0_Da;
  float __this_00;
  float __this_01;
  float __this_02;
  undefined1 auStack_24 [4];
  
  if (__c != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    System_Single__GetHashCode(in_XMM0_Da,(MethodInfo *)&(__c->fields).Value);
    System_Single__GetHashCode(__this_00,(MethodInfo *)&(__c->fields).Value.fields.y);
    System_Single__GetHashCode(__this_01,(MethodInfo *)&(__c->fields).Value.fields.z);
    System_Single__GetHashCode(__this_02,(MethodInfo *)&(__c->fields).Value.fields.w);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_24);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3dc0230

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings__CreateMemberBinding
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
  System_Func_T__object__o *pSVar7;
  System_Action_T__object__o *pSVar8;
  CustomLogic_CLPropertyBinding_T__o *pCVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  
  if (DAT_05702871 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"FromToRotation");
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"Z");
    il2cpp_init_method_metadata(&"Slerp");
    il2cpp_init_method_metadata(&"Inverse");
    il2cpp_init_method_metadata(&"W");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"Lerp");
    il2cpp_init_method_metadata(&"LerpUnclamped");
    il2cpp_init_method_metadata(&"Euler");
    il2cpp_init_method_metadata(&"FromEuler");
    il2cpp_init_method_metadata(&"LookRotation");
    il2cpp_init_method_metadata(&"Y");
    il2cpp_init_method_metadata(&"__Mul__");
    il2cpp_init_method_metadata(&"SlerpUnclamped");
    il2cpp_init_method_metadata(&"Identity");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata(&"AngleAxis");
    il2cpp_init_method_metadata(&"RotateTowards");
    il2cpp_init_method_metadata(&"Angle");
    DAT_05702871 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x91ba4e13) {
    if (uVar3 < 0x39c493b9) {
      if (uVar3 < 0x18c37b42) {
        if (uVar3 == 0x18535612) {
          bVar4 = System_String__op_Equality(name,"Euler",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702876 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Euler_g____gett);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Euler_g____setter);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
              DAT_05702876 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x18c37b41) &&
                (bVar4 = System_String__op_Equality(name,"__Mul__",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702884 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Mul___b__20_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702884 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x68);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x68,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x27b48c82) {
        bVar4 = System_String__op_Equality(name,"FromEuler",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570287c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FromEuler_b__12_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_0570287c = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x39907617) {
        bVar4 = System_String__op_Equality(name,"Slerp",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570287a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Slerp_b__10_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_0570287a = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x18);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x39c493b8) &&
              (bVar4 = System_String__op_Equality(name,"Angle",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702882 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Angle_b__18_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702882 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x58,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x549f4d11) {
      if (uVar3 == 0x3c0ea91a) {
        bVar4 = System_String__op_Equality(name,"RotateTowards",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702880 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RotateTowards_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702880 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x549f4d10) &&
              (bVar4 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702883 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__19_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702883 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x60,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x91ba4e12) {
      bVar4 = System_String__op_Equality(name,"FromToRotation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570287e == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FromToRotation_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570287e = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0x6a4c91d6) {
      bVar4 = System_String__op_Equality(name,"SlerpUnclamped",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570287b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SlerpUnclamped_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570287b = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x792a6491) &&
            (bVar4 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702886 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__22_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702886 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x78,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xd20c0cd7) {
    if (uVar3 < 0x9e956089) {
      if (uVar3 == 0x91efe6d7) {
        bVar4 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702885 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__21_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702885 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x70);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x70);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x70,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x9e956088) &&
              (bVar4 = System_String__op_Equality(name,"Lerp",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702878 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Lerp_b__8_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702878 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 8,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xbcf8f25c) {
      bVar4 = System_String__op_Equality(name,"LookRotation",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570287d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LookRotation_b__1);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570287d = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xc95e1923) {
      bVar4 = System_String__op_Equality(name,"Inverse",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570287f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Inverse_b__15_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570287f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xd20c0cd6) &&
            (bVar4 = System_String__op_Equality(name,"W",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702875 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__W_g____getter_5);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__W_g____setter_5_1);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
        DAT_05702875 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xdf0c214e) {
    if (uVar3 == 0xdc0c1c94) {
      bVar4 = System_String__op_Equality(name,"Y",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702873 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Y_g____getter_3);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Y_g____setter_3_1);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
          DAT_05702873 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xdd0c1e27) {
      bVar4 = System_String__op_Equality(name,"X",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702872 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__X_g____getter_2);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__X_g____setter_2_1);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
          DAT_05702872 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xdf0c214d) &&
            (bVar4 = System_String__op_Equality(name,"Z",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702874 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Z_g____getter_4);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Z_g____setter_4_1);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
        DAT_05702874 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xdfc1d0bb) {
    bVar4 = System_String__op_Equality(name,"Identity",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702877 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Identity_g____g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
        DAT_05702877 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xf4248f7b) {
    bVar4 = System_String__op_Equality(name,"LerpUnclamped",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702879 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LerpUnclamped_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702879 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xf6586339) &&
          (bVar4 = System_String__op_Equality(name,"AngleAxis",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702881 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AngleAxis_b__17_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05702881 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
    }
    else {
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
    }
    if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 0x50,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicQuaternionBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__X
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X (const MethodInfo* method);
// 0x3dc0a30

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__X(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702872 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__X_g____getter_2);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__X_g____setter_2_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
    DAT_05702872 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Y
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Y (const MethodInfo* method);
// 0x3dc0b10

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Y(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702873 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Y_g____getter_3);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Y_g____setter_3_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
    DAT_05702873 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Z
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Z (const MethodInfo* method);
// 0x3dc0bf0

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Z(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702874 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Z_g____getter_4);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Z_g____setter_4_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
    DAT_05702874 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__W
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__W (const MethodInfo* method);
// 0x3dc0cd0

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__W(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702875 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__W_g____getter_5);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__W_g____setter_5_1);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
    DAT_05702875 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Euler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Euler (const MethodInfo* method);
// 0x3dc0db0

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Euler
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702876 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Euler_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Euler_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
    DAT_05702876 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicQuaternionBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreatePropertyBinding__Identity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Identity (const MethodInfo* method);
// 0x3dc0e90

CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreatePropertyBinding__Identity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702877 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Identity_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
    DAT_05702877 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Lerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Lerp (const MethodInfo* method);
// 0x3dc0f30

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Lerp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702878 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Lerp_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702878 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__LerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LerpUnclamped (const MethodInfo* method);
// 0x3dc1080

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LerpUnclamped
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702879 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LerpUnclamped_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702879 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Slerp
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Slerp (const MethodInfo* method);
// 0x3dc11d0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Slerp(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_0570287a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Slerp_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570287a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__SlerpUnclamped
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__SlerpUnclamped (const MethodInfo* method);
// 0x3dc1320

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__SlerpUnclamped
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_0570287b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SlerpUnclamped_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570287b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__FromEuler
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromEuler (const MethodInfo* method);
// 0x3dc1470

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromEuler
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_0570287c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FromEuler_b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570287c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__LookRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LookRotation (const MethodInfo* method);
// 0x3dc15c0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__LookRotation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_0570287d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LookRotation_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570287d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__FromToRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromToRotation (const MethodInfo* method);
// 0x3dc1710

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__FromToRotation
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_0570287e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FromToRotation_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570287e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Inverse
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Inverse (const MethodInfo* method);
// 0x3dc1860

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Inverse
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_0570287f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Inverse_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570287f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__RotateTowards
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__RotateTowards (const MethodInfo* method);
// 0x3dc19b0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__RotateTowards
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702880 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RotateTowards_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702880 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__AngleAxis
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__AngleAxis (const MethodInfo* method);
// 0x3dc1b00

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__AngleAxis
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702881 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AngleAxis_b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702881 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding__Angle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Angle (const MethodInfo* method);
// 0x3dc1c50

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding__Angle(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702882 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Angle_b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702882 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x3dc1da0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Copy__
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702883 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Copy___b__19_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702883 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Mul__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Mul__ (const MethodInfo* method);
// 0x3dc1ef0

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Mul__
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702884 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Mul___b__20_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702884 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x3dc2040

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702885 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Eq___b__21_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702885 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o* CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x3dc2190

CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings____CreateMethodBinding____Hash__
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *__this;
  
  if (DAT_05702886 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding____Hash___b__22_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702886 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicQuaternionBuiltin__object____obj);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicQuaternionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicQuaternionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicQuaternionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3dc22e0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702887 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"FromToRotation");
    il2cpp_init_method_metadata(&"__Copy__");
    il2cpp_init_method_metadata(&"Z");
    il2cpp_init_method_metadata(&"Slerp");
    il2cpp_init_method_metadata(&"Inverse");
    il2cpp_init_method_metadata(&"W");
    il2cpp_init_method_metadata(&"__Eq__");
    il2cpp_init_method_metadata(&"__Hash__");
    il2cpp_init_method_metadata(&"Lerp");
    il2cpp_init_method_metadata(&"LerpUnclamped");
    il2cpp_init_method_metadata(&"Euler");
    il2cpp_init_method_metadata(&"FromEuler");
    il2cpp_init_method_metadata(&"LookRotation");
    il2cpp_init_method_metadata(&"Y");
    il2cpp_init_method_metadata(&"__Mul__");
    il2cpp_init_method_metadata(&"SlerpUnclamped");
    il2cpp_init_method_metadata(&"Identity");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata(&"AngleAxis");
    il2cpp_init_method_metadata(&"RotateTowards");
    il2cpp_init_method_metadata(&"Angle");
    DAT_05702887 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"X",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Y",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Z",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"W",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Euler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Identity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Lerp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LerpUnclamped",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Slerp",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SlerpUnclamped",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FromEuler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LookRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FromToRotation",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Inverse",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RotateTowards",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AngleAxis",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Angle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Copy__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Mul__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Eq__",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"__Hash__",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__X>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____getter_2_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x3dc2650

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings__<__CreatePropertyBinding__X>g____getter_2_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__X>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__X_g____setter_2_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dc2680

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings__<__CreatePropertyBinding__X>g____setter_2_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method
               )

{
  float fVar1;
  
  if (DAT_05702888 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702888 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.x = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Y>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____getter_3_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x3dc2700

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings__<__CreatePropertyBinding__Y>g____getter_3_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Y>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Y_g____setter_3_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dc2730

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings__<__CreatePropertyBinding__Y>g____setter_3_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method
               )

{
  float fVar1;
  
  if (DAT_05702889 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702889 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.y = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Z>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____getter_4_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x3dc27b0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings__<__CreatePropertyBinding__Z>g____getter_4_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Z>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Z_g____setter_4_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dc27e0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings__<__CreatePropertyBinding__Z>g____setter_4_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method
               )

{
  float fVar1;
  
  if (DAT_0570288a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570288a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.z = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__W>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____getter_5_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x3dc2860

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings__<__CreatePropertyBinding__W>g____getter_5_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__W>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__W_g____setter_5_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dc2890

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings__<__CreatePropertyBinding__W>g____setter_5_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method
               )

{
  float fVar1;
  
  if (DAT_0570288b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570288b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    (__i->fields).Value.fields.w = fVar1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Euler>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____getter_6_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x3dc2910

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings__<__CreatePropertyBinding__Euler>g____getter_6_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o euler;
  
  if (__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    UVar1 = UnityEngine_Quaternion__Internal_ToEulerRad
                      ((UnityEngine_Quaternion_o)(__i->fields).Value.fields,(MethodInfo *)0x0);
    euler.fields.x = UVar1.fields.x * 57.29578;
    euler.fields.y = UVar1.fields.y * 57.29578;
    euler.fields.z = UVar1.fields.z * 57.29578;
    UVar1 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    if (DAT_0570291b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
      DAT_0570291b = '\x01';
    }
    __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    if (DAT_05702910 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702910 = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
    __this[1].klass = UVar1.fields._0_8_;
    *(float *)&__this[1].monitor = UVar1.fields.z;
    return (Il2CppObject *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Euler>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Euler_g____setter_6_1 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3dc29e0

void CustomLogic_CustomLogicQuaternionBuiltin_Bindings__<__CreatePropertyBinding__Euler>g____setter_6_1
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method
               )

{
  Il2CppObject *pIVar1;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_Fields UVar2;
  
  if (DAT_0570288c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570288c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__v,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
  if ((__i != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) && (pIVar1 != (Il2CppObject *)0x0))
  {
    euler.fields.x = SUB84(pIVar1[3].klass,0) * 0.017453292;
    euler.fields.y = (float)((ulong)pIVar1[3].klass >> 0x20) * 0.017453292;
    euler.fields.z = *(float *)&pIVar1[3].monitor * 0.017453292;
    UVar2 = (UnityEngine_Quaternion_Fields)
            UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    (__i->fields).Value.fields = UVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin.Bindings$$<__CreatePropertyBinding__Identity>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin_Bindings_____CreatePropertyBinding__Identity_g____getter_7_0 (CustomLogic_CustomLogicQuaternionBuiltin_o* __i, const MethodInfo* method);
// 0x3dc2a80

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin_Bindings__<__CreatePropertyBinding__Identity>g____getter_7_0
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (DAT_056fde1e == '\0') {
    __i = (CustomLogic_CustomLogicQuaternionBuiltin_o *)&TypeInfo_Quaternion;
    il2cpp_init_method_metadata();
    DAT_056fde1e = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit
                     ((UnityEngine_Quaternion_o)
                      **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin___ctor (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbee70

void CustomLogic_CustomLogicQuaternionBuiltin___ctor
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_05702867 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702867 = '\x01';
  }
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  pfVar1 = *(float **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pfVar1[1];
  fVar3 = pfVar1[2];
  fVar4 = pfVar1[3];
  (__this->fields).Value.fields.x = *pfVar1;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin___ctor (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float x, float y, float z, float w, const MethodInfo* method);
// 0x3dbef00

void CustomLogic_CustomLogicQuaternionBuiltin___ctor
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float x,float y,float z,float w,
               MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (DAT_05702868 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702868 = '\x01';
  }
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  pfVar1 = *(float **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pfVar1[1];
  fVar3 = pfVar1[2];
  fVar4 = pfVar1[3];
  (__this->fields).Value.fields.x = *pfVar1;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Value.fields.x = x;
  (__this->fields).Value.fields.y = y;
  (__this->fields).Value.fields.z = z;
  (__this->fields).Value.fields.w = w;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin___ctor (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, UnityEngine_Quaternion_o value, const MethodInfo* method);
// 0x3dbefd0

void CustomLogic_CustomLogicQuaternionBuiltin___ctor
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,UnityEngine_Quaternion_o value,
               MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_28;
  float fStack_24;
  
  if (DAT_05702869 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702869 = '\x01';
  }
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  pfVar1 = *(float **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pfVar1[1];
  fVar3 = pfVar1[2];
  fVar4 = pfVar1[3];
  (__this->fields).Value.fields.x = *pfVar1;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  local_28 = value.fields.x;
  fStack_24 = value.fields.y;
  (__this->fields).Value.fields.x = local_28;
  (__this->fields).Value.fields.y = fStack_24;
  (__this->fields).Value.fields.z = value.fields.z;
  (__this->fields).Value.fields.w = value.fields.w;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_X
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_X (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbf070

float CustomLogic_CustomLogicQuaternionBuiltin__get_X
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.x;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_X
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_X (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3dbf080

void CustomLogic_CustomLogicQuaternionBuiltin__set_X
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.x = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Y
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_Y (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbf090

float CustomLogic_CustomLogicQuaternionBuiltin__get_Y
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.y;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Y
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Y (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3dbf0a0

void CustomLogic_CustomLogicQuaternionBuiltin__set_Y
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.y = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Z
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_Z (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbf0b0

float CustomLogic_CustomLogicQuaternionBuiltin__get_Z
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.z;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Z
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Z (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3dbf0c0

void CustomLogic_CustomLogicQuaternionBuiltin__set_Z
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.z = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_W
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__get_W (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbf0d0

float CustomLogic_CustomLogicQuaternionBuiltin__get_W
                (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields).Value.fields.w;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_W
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_W (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3dbf0e0

void CustomLogic_CustomLogicQuaternionBuiltin__set_W
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,float value,MethodInfo *method)

{
  (__this->fields).Value.fields.w = value;
  return;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Euler
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicQuaternionBuiltin__get_Euler (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbf0f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_Euler
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o UVar1;
  UnityEngine_Vector3_o euler;
  
  UVar1 = UnityEngine_Quaternion__Internal_ToEulerRad
                    ((UnityEngine_Quaternion_o)(__this->fields).Value.fields,(MethodInfo *)0x0);
  euler.fields.x = UVar1.fields.x * 57.29578;
  euler.fields.y = UVar1.fields.y * 57.29578;
  euler.fields.z = UVar1.fields.z * 57.29578;
  UVar1 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  if (DAT_0570291b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570291b = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
  if (DAT_05702910 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702910 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Value.fields.x = (float)(int)UVar1.fields._0_8_;
  (__this_00->fields).Value.fields.y = (float)(int)((ulong)UVar1.fields._0_8_ >> 0x20);
  (__this_00->fields).Value.fields.z = UVar1.fields.z;
  return __this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$set_Euler
// il2cpp: void CustomLogic_CustomLogicQuaternionBuiltin__set_Euler (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x3dbf250

void CustomLogic_CustomLogicQuaternionBuiltin__set_Euler
               (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_Fields UVar3;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar1 = (value->fields).Value.fields.x;
    uVar2 = (value->fields).Value.fields.y;
    euler.fields.x = (float)uVar1 * 0.017453292;
    euler.fields.y = (float)uVar2 * 0.017453292;
    euler.fields.z = (value->fields).Value.fields.z * 0.017453292;
    UVar3 = (UnityEngine_Quaternion_Fields)
            UnityEngine_Quaternion__Internal_FromEulerRad(euler,(MethodInfo *)0x0);
    (__this->fields).Value.fields = UVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_Identity
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__get_Identity (const MethodInfo* method);
// 0x3dbf290

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_Identity(MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (DAT_056fde1e == '\0') {
    method = (MethodInfo *)&TypeInfo_Quaternion;
    il2cpp_init_method_metadata();
    DAT_056fde1e = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit
                     ((UnityEngine_Quaternion_o)
                      **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),method);
  return pCVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Lerp
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Lerp (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x3dbf3a0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Lerp
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,
          CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    q = UnityEngine_Quaternion__Lerp
                  ((a->fields).Value.fields,(b->fields).Value.fields,t,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$LerpUnclamped
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__LerpUnclamped (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x3dbf3e0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__LerpUnclamped
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,
          CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    q = UnityEngine_Quaternion__LerpUnclamped
                  ((a->fields).Value.fields,(b->fields).Value.fields,t,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Slerp
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Slerp (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x3dbf420

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Slerp
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,
          CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    q = UnityEngine_Quaternion__Slerp
                  ((a->fields).Value.fields,(b->fields).Value.fields,t,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$SlerpUnclamped
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__SlerpUnclamped (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, float t, const MethodInfo* method);
// 0x3dbf460

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__SlerpUnclamped
          (CustomLogic_CustomLogicQuaternionBuiltin_o *a,
          CustomLogic_CustomLogicQuaternionBuiltin_o *b,float t,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    q = UnityEngine_Quaternion__SlerpUnclamped
                  ((a->fields).Value.fields,(b->fields).Value.fields,t,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$FromEuler
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__FromEuler (CustomLogic_CustomLogicVector3Builtin_o* euler, const MethodInfo* method);
// 0x3dbf4a0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__FromEuler
          (CustomLogic_CustomLogicVector3Builtin_o *euler,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar3;
  MethodInfo *method_00;
  UnityEngine_Vector3_o euler_00;
  UnityEngine_Quaternion_o q;
  
  if (euler != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    uVar1 = (euler->fields).Value.fields.x;
    uVar2 = (euler->fields).Value.fields.y;
    euler_00.fields.x = (float)uVar1 * 0.017453292;
    euler_00.fields.y = (float)uVar2 * 0.017453292;
    euler_00.fields.z = (euler->fields).Value.fields.z * 0.017453292;
    method_00 = (MethodInfo *)0x0;
    q = UnityEngine_Quaternion__Internal_FromEulerRad(euler_00,(MethodInfo *)0x0);
    pCVar3 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
    return pCVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$LookRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__LookRotation (CustomLogic_CustomLogicVector3Builtin_o* forward, CustomLogic_CustomLogicVector3Builtin_o* upwards, const MethodInfo* method);
// 0x3dbf4e0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__LookRotation
          (CustomLogic_CustomLogicVector3Builtin_o *forward,
          CustomLogic_CustomLogicVector3Builtin_o *upwards,MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Quaternion_o UVar10;
  
  if (DAT_0570286a == '\0') {
    il2cpp_init_method_metadata();
    DAT_0570286a = '\x01';
  }
  if (forward != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pUVar1 = &(forward->fields).Value;
    if (upwards == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      UVar10 = UnityEngine_Quaternion__LookRotation
                         ((UnityEngine_Vector3_o)pUVar1->fields,(MethodInfo *)0x0);
      fVar8 = UVar10.fields.z;
      fVar9 = UVar10.fields.w;
      fVar6 = UVar10.fields.x;
      fVar7 = UVar10.fields.y;
    }
    else {
      UVar10 = UnityEngine_Quaternion__LookRotation
                         ((UnityEngine_Vector3_o)pUVar1->fields,
                          (UnityEngine_Vector3_o)(upwards->fields).Value.fields,(MethodInfo *)0x0);
      fVar8 = UVar10.fields.z;
      fVar9 = UVar10.fields.w;
      fVar6 = UVar10.fields.x;
      fVar7 = UVar10.fields.y;
    }
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
    if (DAT_05702869 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702869 = '\x01';
    }
    if (DAT_056fde1e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
    }
    pfVar2 = *(float **)(TypeInfo_Quaternion + 0xb8);
    fVar3 = pfVar2[1];
    fVar4 = pfVar2[2];
    fVar5 = pfVar2[3];
    (__this->fields).Value.fields.x = *pfVar2;
    (__this->fields).Value.fields.y = fVar3;
    (__this->fields).Value.fields.z = fVar4;
    (__this->fields).Value.fields.w = fVar5;
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Value.fields.x = fVar6;
    (__this->fields).Value.fields.y = fVar7;
    (__this->fields).Value.fields.z = fVar8;
    (__this->fields).Value.fields.w = fVar9;
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$FromToRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__FromToRotation (CustomLogic_CustomLogicVector3Builtin_o* a, CustomLogic_CustomLogicVector3Builtin_o* b, const MethodInfo* method);
// 0x3dbf5f0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__FromToRotation
          (CustomLogic_CustomLogicVector3Builtin_o *a,CustomLogic_CustomLogicVector3Builtin_o *b,
          MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  
  if ((a != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    method_00 = (MethodInfo *)0x0;
    q = UnityEngine_Quaternion__FromToRotation
                  ((UnityEngine_Vector3_o)(a->fields).Value.fields,
                   (UnityEngine_Vector3_o)(b->fields).Value.fields,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Inverse
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__Inverse (CustomLogic_CustomLogicQuaternionBuiltin_o* q, const MethodInfo* method);
// 0x3dbf630

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__Inverse
          (CustomLogic_CustomLogicQuaternionBuiltin_o *q,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q_00;
  
  if (q != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    q_00 = UnityEngine_Quaternion__Inverse((q->fields).Value.fields,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q_00,method_00);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$RotateTowards
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__RotateTowards (CustomLogic_CustomLogicQuaternionBuiltin_o* from, CustomLogic_CustomLogicQuaternionBuiltin_o* to, float maxDegreesDelta, const MethodInfo* method);
// 0x3dbf660

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__RotateTowards
          (CustomLogic_CustomLogicQuaternionBuiltin_o *from,
          CustomLogic_CustomLogicQuaternionBuiltin_o *to,float maxDegreesDelta,MethodInfo *method)

{
  UnityEngine_Quaternion_o *pUVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  UnityEngine_Quaternion_Fields a;
  UnityEngine_Quaternion_Fields b;
  UnityEngine_Quaternion_Fields q;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar10;
  float __x;
  UnityEngine_Quaternion_o UVar11;
  
  if ((from == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) ||
     (to == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar1 = &(from->fields).Value;
  uVar2 = (pUVar1->fields).x;
  uVar6 = (pUVar1->fields).y;
  uVar3 = (from->fields).Value.fields.z;
  uVar7 = (from->fields).Value.fields.w;
  a = pUVar1->fields;
  pUVar1 = &(to->fields).Value;
  fVar4 = (pUVar1->fields).x;
  fVar8 = (pUVar1->fields).y;
  fVar5 = (to->fields).Value.fields.z;
  fVar9 = (to->fields).Value.fields.w;
  q = pUVar1->fields;
  b = pUVar1->fields;
  __x = ABS((float)uVar7 * fVar9 +
            (float)uVar6 * fVar8 + (float)uVar2 * fVar4 + (float)uVar3 * fVar5);
  if (1.0 <= __x) {
    __x = 1.0;
  }
  if (__x <= 0.999999) {
    fVar4 = acosf(__x);
    fVar4 = (fVar4 + fVar4) * 57.29578;
    if ((fVar4 == 0.0) && (!NAN(fVar4))) {
      pCVar10 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit
                          ((UnityEngine_Quaternion_o)q,(MethodInfo *)from);
      return pCVar10;
    }
    fVar5 = 1.0;
    if (maxDegreesDelta / fVar4 <= 1.0) {
      fVar5 = maxDegreesDelta / fVar4;
    }
    from = (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0;
    UVar11 = UnityEngine_Quaternion__SlerpUnclamped(a,b,fVar5,(MethodInfo *)0x0);
    fVar5 = UVar11.fields.z;
    fVar9 = UVar11.fields.w;
    fVar4 = UVar11.fields.x;
    fVar8 = UVar11.fields.y;
  }
  UVar11.fields.y = fVar8;
  UVar11.fields.x = fVar4;
  UVar11.fields.w = fVar9;
  UVar11.fields.z = fVar5;
  pCVar10 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(UVar11,(MethodInfo *)from);
  return pCVar10;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$AngleAxis
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__AngleAxis (float angle, CustomLogic_CustomLogicVector3Builtin_o* axis, const MethodInfo* method);
// 0x3dbf760

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__AngleAxis
          (float angle,CustomLogic_CustomLogicVector3Builtin_o *axis,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  MethodInfo *method_00;
  UnityEngine_Quaternion_o q;
  
  if (axis != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    q = UnityEngine_Quaternion__AngleAxis
                  (angle,(UnityEngine_Vector3_o)(axis->fields).Value.fields,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(q,method_00);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$Angle
// il2cpp: float CustomLogic_CustomLogicQuaternionBuiltin__Angle (CustomLogic_CustomLogicQuaternionBuiltin_o* a, CustomLogic_CustomLogicQuaternionBuiltin_o* b, const MethodInfo* method);
// 0x3dbf790

float CustomLogic_CustomLogicQuaternionBuiltin__Angle
                (CustomLogic_CustomLogicQuaternionBuiltin_o *a,
                CustomLogic_CustomLogicQuaternionBuiltin_o *b,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  
  if ((a != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) &&
     (b != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    uVar1 = (a->fields).Value.fields.x;
    uVar5 = (a->fields).Value.fields.y;
    uVar2 = (a->fields).Value.fields.z;
    uVar6 = (a->fields).Value.fields.w;
    uVar3 = (b->fields).Value.fields.x;
    uVar7 = (b->fields).Value.fields.y;
    uVar4 = (b->fields).Value.fields.z;
    uVar8 = (b->fields).Value.fields.w;
    fVar9 = ABS((float)uVar8 * (float)uVar6 +
                (float)uVar7 * (float)uVar5 + (float)uVar3 * (float)uVar1 +
                (float)uVar4 * (float)uVar2);
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    fVar10 = 0.0;
    if (fVar9 <= 0.999999) {
      fVar9 = acosf(fVar9);
      fVar10 = (fVar9 + fVar9) * 57.29578;
    }
    return fVar10;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicQuaternionBuiltin__ToString (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbf810

System_String_o *
CustomLogic_CustomLogicQuaternionBuiltin__ToString
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)il2cpp_glue_02c5aad0(&(__this->fields).Value,0,0,0);
  return pSVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Copy__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbf820

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Copy__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_c *pCVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  
  if (DAT_0570286b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    DAT_0570286b = '\x01';
  }
  pCVar1 = *(CustomLogic_BuiltinClassInstance_c **)&(__this->fields).Value.fields;
  pvVar2 = *(void **)&(__this->fields).Value.fields.z;
  __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
  if (DAT_05702869 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702869 = '\x01';
  }
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  puVar3 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
  uVar4 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  *(undefined4 *)&__this_00[1].klass = *puVar3;
  *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar4;
  *(undefined4 *)&__this_00[1].monitor = uVar5;
  *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar6;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pCVar1;
  __this_00[1].monitor = pvVar2;
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Add__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Add__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dbf8f0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Add__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other
          ,MethodInfo *method)

{
  System_String_o *operatorName;
  System_Exception_o *pSVar1;
  undefined8 uVar2;
  
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Add__");
  pSVar1 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_Object___Add);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar1,uVar2);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Sub__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Sub__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dbf930

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Sub__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other
          ,MethodInfo *method)

{
  System_String_o *operatorName;
  System_Exception_o *pSVar1;
  undefined8 uVar2;
  
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Sub__");
  pSVar1 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_Object___Sub);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar1,uVar2);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Mul__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Mul__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dbf970

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Mul__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other
          ,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CustomLogic_BuiltinClassInstance_o *__this_00;
  System_String_o *operatorName;
  System_Exception_o *pSVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  UnityEngine_Vector3_o UVar18;
  
  if (DAT_0570286c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_0570286c = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (((bVar1 <= (self->klass->_2).naturalAligment) && (other != (Il2CppObject *)0x0)) &&
       ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
      pIVar3 = other->klass;
      bVar2 = (pIVar3->_2).naturalAligment;
      if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
        bVar1 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
        if ((bVar2 < bVar1) || ((pIVar3->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicVector3Builtin))
        goto LAB_03dbfc87;
        UVar18 = UnityEngine_Quaternion__op_Multiply
                           ((UnityEngine_Quaternion_o)*(UnityEngine_Quaternion_Fields *)(self + 3),
                            *(UnityEngine_Vector3_Fields *)(other + 3),(MethodInfo *)0x0);
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        if (DAT_05702910 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
          DAT_05702910 = '\x01';
        }
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
        __this_00[1].klass = UVar18.fields._0_8_;
        *(float *)&__this_00[1].monitor = UVar18.fields.z;
      }
      else {
        fVar14 = SUB84(self[3].monitor,0);
        fVar15 = (float)((ulong)self[3].monitor >> 0x20);
        fVar10 = SUB84(other[3].klass,0);
        fVar11 = (float)((ulong)other[3].klass >> 0x20);
        fVar12 = SUB84(other[3].monitor,0);
        fVar13 = (float)((ulong)other[3].monitor >> 0x20);
        fVar16 = SUB84(self[3].klass,0);
        fVar17 = (float)((ulong)self[3].klass >> 0x20);
        __this_00 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue();
        if (DAT_05702869 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
          DAT_05702869 = '\x01';
        }
        if (DAT_056fde1e == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Quaternion);
          DAT_056fde1e = '\x01';
        }
        puVar4 = *(undefined4 **)(TypeInfo_Quaternion + 0xb8);
        uVar5 = puVar4[1];
        uVar6 = puVar4[2];
        uVar7 = puVar4[3];
        *(undefined4 *)&__this_00[1].klass = *puVar4;
        *(undefined4 *)((long)&__this_00[1].klass + 4) = uVar5;
        *(undefined4 *)&__this_00[1].monitor = uVar6;
        *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar7;
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_00,(MethodInfo *)0x0);
        *(float *)&__this_00[1].klass =
             (fVar12 * fVar17 + fVar16 * fVar13 + fVar15 * fVar10) - fVar14 * fVar11;
        *(float *)((long)&__this_00[1].klass + 4) =
             (fVar10 * fVar14 + fVar17 * fVar13 + fVar15 * fVar11) - fVar16 * fVar12;
        *(float *)&__this_00[1].monitor =
             (fVar16 * fVar11 + fVar14 * fVar13 + fVar15 * fVar12) - fVar17 * fVar10;
        *(float *)((long)&__this_00[1].monitor + 4) =
             ((fVar13 * fVar15 - fVar16 * fVar10) - fVar11 * fVar17) - fVar14 * fVar12;
      }
      return (Il2CppObject *)__this_00;
    }
  }
LAB_03dbfc87:
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Mul__");
  pSVar8 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar9 = il2cpp_init_method_metadata(&MethodInfo_Object___Mul);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar8,uVar9);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Div__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Div__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dbfd30

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Div__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other
          ,MethodInfo *method)

{
  System_String_o *operatorName;
  System_Exception_o *pSVar1;
  undefined8 uVar2;
  
  operatorName = (System_String_o *)il2cpp_init_method_metadata(&"__Div__");
  pSVar1 = CustomLogic_CustomLogicUtils__OperatorException
                     (operatorName,self,other,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_Object___Div);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(pSVar1,uVar2);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin____Eq__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dbfd70

bool_conflict
CustomLogic_CustomLogicQuaternionBuiltin____Eq__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other
          ,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass **ppIVar2;
  
  if (DAT_0570286d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    DAT_0570286d = '\x01';
  }
  if (other != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
    if (bVar1 <= (other->klass->_2).naturalAligment) {
      if ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicQuaternionBuiltin) {
        other = (Il2CppObject *)0x0;
      }
      if ((((self != (Il2CppObject *)0x0) && (other != (Il2CppObject *)0x0)) &&
          (bVar1 <= (self->klass->_2).naturalAligment)) &&
         (ppIVar2 = (self->klass->_2).typeHierarchy, ppIVar2[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
        return (bool_conflict)
               CONCAT71((int7)((ulong)ppIVar2 >> 8),
                        0.999999 <
                        (float)((ulong)other[3].monitor >> 0x20) *
                        (float)((ulong)self[3].monitor >> 0x20) +
                        (float)((ulong)other[3].klass >> 0x20) *
                        (float)((ulong)self[3].klass >> 0x20) +
                        SUB84(self[3].klass,0) * SUB84(other[3].klass,0) +
                        SUB84(other[3].monitor,0) * SUB84(self[3].monitor,0));
      }
    }
  }
  return 0;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicQuaternionBuiltin____Hash__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbfe50

int32_t CustomLogic_CustomLogicQuaternionBuiltin____Hash__
                  (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  int32_t iVar3;
  int32_t iVar4;
  float in_XMM0_Da;
  float __this_00;
  float __this_01;
  float __this_02;
  
  uVar1 = System_Single__GetHashCode(in_XMM0_Da,(MethodInfo *)&(__this->fields).Value);
  iVar2 = System_Single__GetHashCode(__this_00,(MethodInfo *)&(__this->fields).Value.fields.y);
  iVar3 = System_Single__GetHashCode(__this_01,(MethodInfo *)&(__this->fields).Value.fields.z);
  iVar4 = System_Single__GetHashCode(__this_02,(MethodInfo *)&(__this->fields).Value.fields.w);
  return iVar4 >> 1 ^ iVar3 >> 2 ^ iVar2 << 2 ^ uVar1;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$__Mod__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicQuaternionBuiltin____Mod__ (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3dbfeb0

Il2CppObject *
CustomLogic_CustomLogicQuaternionBuiltin____Mod__
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other
          ,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotImplementedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotImplementedException);
  __this_00 = (System_NotImplementedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotImplementedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Object___Mod);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$op_Implicit
// il2cpp: UnityEngine_Quaternion_o CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit (CustomLogic_CustomLogicQuaternionBuiltin_o* q, const MethodInfo* method);
// 0x3dbfef0

UnityEngine_Quaternion_o
CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit
          (CustomLogic_CustomLogicQuaternionBuiltin_o *q,MethodInfo *method)

{
  if (q != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
    return (UnityEngine_Quaternion_o)(q->fields).Value.fields;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicQuaternionBuiltin$$op_Implicit
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit (UnityEngine_Quaternion_o q, const MethodInfo* method);
// 0x3dbf2d0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicQuaternionBuiltin__op_Implicit(UnityEngine_Quaternion_o q,MethodInfo *method)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this;
  float local_28;
  float fStack_24;
  
  if (DAT_0570286e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    DAT_0570286e = '\x01';
  }
  __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicQuaternionBuiltin);
  if (DAT_05702869 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702869 = '\x01';
  }
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  pfVar1 = *(float **)(TypeInfo_Quaternion + 0xb8);
  fVar2 = pfVar1[1];
  fVar3 = pfVar1[2];
  fVar4 = pfVar1[3];
  (__this->fields).Value.fields.x = *pfVar1;
  (__this->fields).Value.fields.y = fVar2;
  (__this->fields).Value.fields.z = fVar3;
  (__this->fields).Value.fields.w = fVar4;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  local_28 = q.fields.x;
  fStack_24 = q.fields.y;
  (__this->fields).Value.fields.x = local_28;
  (__this->fields).Value.fields.y = fStack_24;
  (__this->fields).Value.fields.z = q.fields.z;
  (__this->fields).Value.fields.w = q.fields.w;
  return __this;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicQuaternionBuiltin__get_ClassName (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbff10

System_String_o *
CustomLogic_CustomLogicQuaternionBuiltin__get_ClassName
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_0570286f == '\0') {
    il2cpp_init_method_metadata(&"Quaternion");
    DAT_0570286f = '\x01';
  }
  return "Quaternion";
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_IsAbstract (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbff40

bool_conflict
CustomLogic_CustomLogicQuaternionBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_IsStatic (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbff50

bool_conflict
CustomLogic_CustomLogicQuaternionBuiltin__get_IsStatic
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicQuaternionBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicQuaternionBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicQuaternionBuiltin_o* __this, const MethodInfo* method);
// 0x3dbff60

bool_conflict
CustomLogic_CustomLogicQuaternionBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicQuaternionBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


