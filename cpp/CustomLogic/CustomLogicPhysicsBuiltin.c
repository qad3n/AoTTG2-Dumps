// Type: CustomLogic.CustomLogicPhysicsBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPhysicsBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicPhysicsBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicPhysicsBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPhysicsBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ed8860

CustomLogic_CustomLogicPhysicsBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_CustomLogicPhysicsBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703a17 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPhysicsBuiltin);
    DAT_05703a17 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicPhysicsBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPhysicsBuiltin);
      CustomLogic_CustomLogicPhysicsBuiltin___ctor(__this,(MethodInfo *)0x0);
      return __this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicPhysicsBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicPhysicsBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3eda0e0

void CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703a26 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a26 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3eda150

void CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetPhysicsLayerMask>b__2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__GetPhysicsLayerMask_b__2_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eda160

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__GetPhysicsLayerMask>b__2_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *layers;
  Il2CppObject *pIVar1;
  int32_t local_c;
  
  if (DAT_05703a27 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a27 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      layers = (CustomLogic_CustomLogicListBuiltin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
      local_c = CustomLogic_CustomLogicPhysicsBuiltin__GetPhysicsLayerMask(layers,(MethodInfo *)0x0)
      ;
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCast>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCast_b__3_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eda200

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__LineCast>b__3_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  System_String_o *collideWith;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *pCVar1;
  
  if (DAT_05703a28 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a28 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      start = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        end = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          collideWith = (System_String_o *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                  (__a->m_Items[2],MethodInfo_String_ConvertTo_String);
          pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__LineCast
                             (start,end,collideWith,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCastWithMask>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCastWithMask_b__4_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eda2d0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__LineCastWithMask>b__4_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t mask;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *pCVar1;
  
  if (DAT_05703a29 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a29 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      start = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        end = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          mask = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[2],MethodInfo_Int32_ConvertTo_Int32);
          pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__LineCastWithMask
                             (start,end,mask,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__LineCastAll>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__LineCastAll_b__5_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eda3a0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__LineCastAll>b__5_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  System_String_o *collideWith;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (DAT_05703a2a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a2a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      start = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        end = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          collideWith = (System_String_o *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                  (__a->m_Items[2],MethodInfo_String_ConvertTo_String);
          pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__LineCastAll
                             (start,end,collideWith,(MethodInfo *)0x0);
          return (Il2CppObject *)pCVar1;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCast>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCast_b__6_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eda470

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__SphereCast>b__6_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  System_String_o *collideWith;
  Il2CppObject *pIVar1;
  float radius;
  
  if (DAT_05703a2b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a2b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      start = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        end = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          radius = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (3 < (uint)__a->max_length) {
            collideWith = (System_String_o *)
                          CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                    (__a->m_Items[3],MethodInfo_String_ConvertTo_String);
            pIVar1 = CustomLogic_CustomLogicPhysicsBuiltin__SphereCast
                               (start,end,radius,collideWith,(MethodInfo *)0x0);
            return pIVar1;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCastWithMask>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCastWithMask_b__7_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eda580

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__SphereCastWithMask>b__7_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t mask;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  Il2CppObject *pIVar1;
  float radius;
  
  if (DAT_05703a2c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a2c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      start = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        end = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          radius = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (3 < (uint)__a->max_length) {
            mask = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[3],MethodInfo_Int32_ConvertTo_Int32);
            pIVar1 = CustomLogic_CustomLogicPhysicsBuiltin__SphereCastWithMask
                               (start,end,radius,mask,(MethodInfo *)0x0);
            return pIVar1;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__SphereCastAll>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__SphereCastAll_b__8_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eda690

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__SphereCastAll>b__8_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  System_String_o *collideWith;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  float radius;
  
  if (DAT_05703a2d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a2d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      start = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        end = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          radius = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[2],MethodInfo_Single_ConvertTo_Single);
          if (3 < (uint)__a->max_length) {
            collideWith = (System_String_o *)
                          CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                    (__a->m_Items[3],MethodInfo_String_ConvertTo_String);
            pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__SphereCastAll
                               (start,end,radius,collideWith,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__BoxCast>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__BoxCast_b__9_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eda7a0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__BoxCast>b__9_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  CustomLogic_CustomLogicVector3Builtin_o *dimensions;
  CustomLogic_CustomLogicQuaternionBuiltin_o *orientation;
  System_String_o *collideWith;
  Il2CppObject *pIVar1;
  
  if (DAT_05703a2e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a2e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar1 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      start = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        end = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          dimensions = (CustomLogic_CustomLogicVector3Builtin_o *)
                       CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                 (__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
          if (3 < (uint)__a->max_length) {
            orientation = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                          CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                    (__a->m_Items[3],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
            if (4 < (uint)__a->max_length) {
              collideWith = (System_String_o *)
                            CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                      (__a->m_Items[4],MethodInfo_String_ConvertTo_String);
              pIVar1 = CustomLogic_CustomLogicPhysicsBuiltin__BoxCast
                                 (start,end,dimensions,orientation,collideWith,(MethodInfo *)0x0);
              return pIVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__BoxCastAll>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__BoxCastAll_b__10_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eda8c0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__BoxCastAll>b__10_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  CustomLogic_CustomLogicVector3Builtin_o *dimensions;
  CustomLogic_CustomLogicQuaternionBuiltin_o *orientation;
  System_String_o *collideWith;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (DAT_05703a2f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a2f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      start = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        end = (CustomLogic_CustomLogicVector3Builtin_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          dimensions = (CustomLogic_CustomLogicVector3Builtin_o *)
                       CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                 (__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
          if (3 < (uint)__a->max_length) {
            orientation = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                          CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                    (__a->m_Items[3],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
            if (4 < (uint)__a->max_length) {
              collideWith = (System_String_o *)
                            CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                      (__a->m_Items[4],MethodInfo_String_ConvertTo_String);
              pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__BoxCastAll
                                 (start,end,dimensions,orientation,collideWith,(MethodInfo *)0x0);
              return (Il2CppObject *)pCVar1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPoint>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__ClosestPoint_b__11_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3eda9e0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__ClosestPoint>b__11_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *collider;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  CustomLogic_CustomLogicQuaternionBuiltin_o *rotation;
  
  if (DAT_05703a30 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColliderBuiltin_ConvertTo_CustomLogic);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a30 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        collider = (CustomLogic_CustomLogicColliderBuiltin_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicColliderBuiltin_ConvertTo_CustomLogic)
        ;
        if (2 < (uint)__a->max_length) {
          position = (CustomLogic_CustomLogicVector3Builtin_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               (__a->m_Items[2],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
          if (3 < (uint)__a->max_length) {
            rotation = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                       CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                 (__a->m_Items[3],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
            pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__ClosestPoint
                               (pCVar1,collider,position,rotation,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__ComputePenetration>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__ComputePenetration_b__12_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edaaf0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__ComputePenetration>b__12_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicColliderBuiltin_o *colliderA;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  CustomLogic_CustomLogicQuaternionBuiltin_o *rotationA;
  CustomLogic_CustomLogicColliderBuiltin_o *colliderB;
  CustomLogic_CustomLogicVector3Builtin_o *positionB;
  CustomLogic_CustomLogicQuaternionBuiltin_o *rotationB;
  
  if (DAT_05703a31 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColliderBuiltin_ConvertTo_CustomLogic);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a31 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      colliderA = (CustomLogic_CustomLogicColliderBuiltin_o *)
                  CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicColliderBuiltin_ConvertTo_CustomLogic);
      if (1 < (uint)__a->max_length) {
        pCVar1 = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          rotationA = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                (__a->m_Items[2],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
          if (3 < (uint)__a->max_length) {
            colliderB = (CustomLogic_CustomLogicColliderBuiltin_o *)
                        CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                  (__a->m_Items[3],MethodInfo_CustomLogicColliderBuiltin_ConvertTo_CustomLogic);
            if (4 < (uint)__a->max_length) {
              positionB = (CustomLogic_CustomLogicVector3Builtin_o *)
                          CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                    (__a->m_Items[4],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
              if (5 < (uint)__a->max_length) {
                rotationB = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                            CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                      (__a->m_Items[5],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
                pCVar1 = CustomLogic_CustomLogicPhysicsBuiltin__ComputePenetration
                                   (colliderA,pCVar1,rotationA,colliderB,positionB,rotationB,
                                    (MethodInfo *)0x0);
                return (Il2CppObject *)pCVar1;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings.<>c$$<__CreateMethodBinding__AreCollidersOverlapping>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_____CreateMethodBinding__AreCollidersOverlapping_b__13_0 (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPhysicsBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3edac50

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings_<>c__<__CreateMethodBinding__AreCollidersOverlapping>b__13_0
          (CustomLogic_CustomLogicPhysicsBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPhysicsBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *pCVar2;
  CustomLogic_CustomLogicVector3Builtin_o *positionA;
  CustomLogic_CustomLogicQuaternionBuiltin_o *rotationA;
  CustomLogic_CustomLogicVector3Builtin_o *positionB;
  CustomLogic_CustomLogicQuaternionBuiltin_o *rotationB;
  Il2CppObject *pIVar3;
  undefined1 uStack_39;
  CustomLogic_CustomLogicColliderBuiltin_o *pCStack_38;
  
  if (DAT_05703a32 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicColliderBuiltin_ConvertTo_CustomLogic);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703a32 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      pIVar3 = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar2 = (CustomLogic_CustomLogicColliderBuiltin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar3,MethodInfo_CustomLogicColliderBuiltin_ConvertTo_CustomLogic);
      if (1 < (uint)__a->max_length) {
        pCStack_38 = pCVar2;
        positionA = (CustomLogic_CustomLogicVector3Builtin_o *)
                    CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                              (__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
        if (2 < (uint)__a->max_length) {
          rotationA = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                      CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                (__a->m_Items[2],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
          if (3 < (uint)__a->max_length) {
            pCVar2 = (CustomLogic_CustomLogicColliderBuiltin_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               (__a->m_Items[3],MethodInfo_CustomLogicColliderBuiltin_ConvertTo_CustomLogic);
            if (4 < (uint)__a->max_length) {
              positionB = (CustomLogic_CustomLogicVector3Builtin_o *)
                          CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                    (__a->m_Items[4],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
              if (5 < (uint)__a->max_length) {
                rotationB = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
                            CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                                      (__a->m_Items[5],MethodInfo_CustomLogicQuaternionBuiltin_ConvertTo_CustomLog);
                bVar1 = CustomLogic_CustomLogicPhysicsBuiltin__AreCollidersOverlapping
                                  (pCStack_38,positionA,rotationA,pCVar2,positionB,rotationB,
                                   (MethodInfo *)0x0);
                uStack_39 = (undefined1)bVar1;
                pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_39);
                return pIVar3;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ed8950

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05703a18 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"BoxCastAll");
    il2cpp_init_method_metadata(&"ClosestPoint");
    il2cpp_init_method_metadata(&"SphereCastAll");
    il2cpp_init_method_metadata(&"AreCollidersOverlapping");
    il2cpp_init_method_metadata(&"SphereCast");
    il2cpp_init_method_metadata(&"LineCastAll");
    il2cpp_init_method_metadata(&"LineCastWithMask");
    il2cpp_init_method_metadata(&"ComputePenetration");
    il2cpp_init_method_metadata(&"BoxCast");
    il2cpp_init_method_metadata(&"LineCast");
    il2cpp_init_method_metadata(&"SphereCastWithMask");
    il2cpp_init_method_metadata(&"GetPhysicsLayerMask");
    DAT_05703a18 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x3ff74f8c) {
    if (uVar3 < 0x241c90a3) {
      if (uVar3 == 0x2607722) {
        bVar4 = System_String__op_Equality(name,"SphereCastAll",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703a1f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SphereCastAll_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703a1f = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x38,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x1ca4814b) {
        bVar4 = System_String__op_Equality(name,"LineCastAll",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703a1c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LineCastAll_b__5);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703a1c = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x20,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x241c90a2) &&
              (bVar4 = System_String__op_Equality(name,"ClosestPoint",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703a22 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClosestPoint_b__1);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703a22 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x50,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x2f67c718) {
      bVar4 = System_String__op_Equality(name,"LineCastWithMask",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703a1b == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LineCastWithMask);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703a1b = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x347ce791) {
      bVar4 = System_String__op_Equality(name,"AreCollidersOverlapping",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703a24 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AreCollidersOverl);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703a24 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x60,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x3ff74f8b) &&
            (bVar4 = System_String__op_Equality(name,"SphereCastWithMask",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703a1e == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SphereCastWithMas);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703a1e = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x30,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xa5266d89) {
    if (uVar3 == 0x91aced38) {
      bVar4 = System_String__op_Equality(name,"BoxCastAll",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703a21 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BoxCastAll_b__10);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703a21 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x48,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xa5266d88) {
      bVar4 = System_String__op_Equality(name,"LineCast",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703a1a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LineCast_b__3_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703a1a = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x61cb0efd) &&
            (bVar4 = System_String__op_Equality(name,"GetPhysicsLayerMask",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703a19 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetPhysicsLayerMa);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703a19 = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 8,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xad368c07) {
    bVar4 = System_String__op_Equality(name,"SphereCast",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703a1d == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SphereCast_b__6_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703a1d = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x28,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xe2eb52c1) {
    bVar4 = System_String__op_Equality(name,"BoxCast",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703a20 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BoxCast_b__9_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703a20 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x40,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xe726f143) &&
          (bVar4 = System_String__op_Equality(name,"ComputePenetration",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703a23 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ComputePenetratio);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703a23 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
    }
    else {
      pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
    }
    if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
      il2cpp_runtime_glue(lVar2 + 0x58,pSVar7);
    }
    pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicPhysicsBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__GetPhysicsLayerMask
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__GetPhysicsLayerMask (const MethodInfo* method);
// 0x3ed8ee0

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__GetPhysicsLayerMask
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a19 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetPhysicsLayerMa);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a19 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCast (const MethodInfo* method);
// 0x3ed9030

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCast(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a1a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LineCast_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a1a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCastWithMask
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastWithMask (const MethodInfo* method);
// 0x3ed9180

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastWithMask
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a1b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LineCastWithMask);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a1b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__LineCastAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastAll (const MethodInfo* method);
// 0x3ed92d0

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__LineCastAll
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__LineCastAll_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a1c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCast (const MethodInfo* method);
// 0x3ed9420

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCast
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a1d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SphereCast_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a1d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCastWithMask
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastWithMask (const MethodInfo* method);
// 0x3ed9570

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastWithMask
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a1e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SphereCastWithMas);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a1e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__SphereCastAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastAll (const MethodInfo* method);
// 0x3ed96c0

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__SphereCastAll
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a1f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SphereCastAll_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a1f = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__BoxCast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCast (const MethodInfo* method);
// 0x3ed9810

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCast(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a20 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BoxCast_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a20 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__BoxCastAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCastAll (const MethodInfo* method);
// 0x3ed9960

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__BoxCastAll
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a21 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__BoxCastAll_b__10);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a21 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__ClosestPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ClosestPoint (const MethodInfo* method);
// 0x3ed9ab0

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ClosestPoint
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a22 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ClosestPoint_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a22 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__ComputePenetration
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ComputePenetration (const MethodInfo* method);
// 0x3ed9c00

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__ComputePenetration
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a23 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ComputePenetratio);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a23 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$__CreateMethodBinding__AreCollidersOverlapping
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o* CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__AreCollidersOverlapping (const MethodInfo* method);
// 0x3ed9d50

CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *
CustomLogic_CustomLogicPhysicsBuiltin_Bindings____CreateMethodBinding__AreCollidersOverlapping
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *__this;
  
  if (DAT_05703a24 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AreCollidersOverl);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a24 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicPhysicsBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicPhysicsBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicPhysicsBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicPhysicsBuiltin);
  return __this;
}


// CustomLogic.CustomLogicPhysicsBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ed9ea0

void CustomLogic_CustomLogicPhysicsBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703a25 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"BoxCastAll");
    il2cpp_init_method_metadata(&"ClosestPoint");
    il2cpp_init_method_metadata(&"SphereCastAll");
    il2cpp_init_method_metadata(&"AreCollidersOverlapping");
    il2cpp_init_method_metadata(&"SphereCast");
    il2cpp_init_method_metadata(&"LineCastAll");
    il2cpp_init_method_metadata(&"LineCastWithMask");
    il2cpp_init_method_metadata(&"ComputePenetration");
    il2cpp_init_method_metadata(&"BoxCast");
    il2cpp_init_method_metadata(&"LineCast");
    il2cpp_init_method_metadata(&"SphereCastWithMask");
    il2cpp_init_method_metadata(&"GetPhysicsLayerMask");
    DAT_05703a25 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"GetPhysicsLayerMask",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LineCast",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LineCastWithMask",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LineCastAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SphereCast",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SphereCastWithMask",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SphereCastAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BoxCast",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"BoxCastAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ClosestPoint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ComputePenetration",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AreCollidersOverlapping",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin___c___cctor (const MethodInfo* method);
// 0x3edadc0

void CustomLogic_CustomLogicPhysicsBuiltin_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703a33 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a33 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin___c___ctor (CustomLogic_CustomLogicPhysicsBuiltin___c_o* __this, const MethodInfo* method);
// 0x3edae30

void CustomLogic_CustomLogicPhysicsBuiltin_<>c___ctor
               (CustomLogic_CustomLogicPhysicsBuiltin___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin.<>c$$<GetPhysicsLayerMask>b__1_0
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsBuiltin___c___GetPhysicsLayerMask_b__1_0 (CustomLogic_CustomLogicPhysicsBuiltin___c_o* __this, Il2CppObject* v, const MethodInfo* method);
// 0x3edae40

int32_t CustomLogic_CustomLogicPhysicsBuiltin_<>c__<GetPhysicsLayerMask>b__1_0
                  (CustomLogic_CustomLogicPhysicsBuiltin___c_o *__this,Il2CppObject *v,
                  MethodInfo *method)

{
  int32_t *piVar1;
  
  if (v == (Il2CppObject *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((v->klass->_1).element_class == *(Il2CppClass **)(DAT_05711068 + 0x40)) {
    piVar1 = (int32_t *)il2cpp_glue_022c7330();
    return *piVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_unwind_resume();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPhysicsBuiltin___ctor (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x3ed5c50

void CustomLogic_CustomLogicPhysicsBuiltin___ctor
               (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703a07 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703a07 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPhysicsBuiltin$$GetPhysicsLayerMask
// il2cpp: int32_t CustomLogic_CustomLogicPhysicsBuiltin__GetPhysicsLayerMask (CustomLogic_CustomLogicListBuiltin_o* layers, const MethodInfo* method);
// 0x3ed5cc0

int32_t CustomLogic_CustomLogicPhysicsBuiltin__GetPhysicsLayerMask
                  (CustomLogic_CustomLogicListBuiltin_o *layers,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  long lVar1;
  UnityEngine_LayerMask_o UVar2;
  int32_t iVar3;
  undefined8 in_RAX;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Int32_array *layers_00;
  undefined8 local_28;
  
  local_28._4_4_ = (uint)((ulong)in_RAX >> 0x20);
  if (DAT_05703a08 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Int32__Select_Object_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Int32___ToArray_Int32);
    il2cpp_init_method_metadata(&TypeInfo_Func_object__int);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&MethodInfo_Int32__GetPhysicsLayerMask_b__1_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703a08 = '\x01';
  }
  local_28 = (ulong)local_28._4_4_ << 0x20;
  if (layers != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    source = (layers->fields).List;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    else {
      selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    }
    if (selector == (System_Func_TSource__TResult__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_object__int);
      System_Func<object__int>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_TSource__TResult__o **)(lVar1 + 8) = selector;
      il2cpp_runtime_glue(lVar1 + 8,selector);
    }
    source_00 = System_Linq_Enumerable__Select<object__int>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,selector,
                           MethodInfo_IEnumerable_1_System_Int32__Select_Object_Int32);
    layers_00 = System_Linq_Enumerable__ToArray<int>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                           MethodInfo_Int32___ToArray_Int32);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar2 = Utility_PhysicsLayer__GetMask(layers_00,(MethodInfo *)0x0);
    local_28 = CONCAT44(local_28._4_4_,UVar2.fields.m_Mask);
    iVar3 = UnityEngine_LayerMask__get_value
                      ((UnityEngine_LayerMask_Fields)(int32_t)&local_28,(MethodInfo *)0x0);
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$LineCast
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__LineCast (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, System_String_o* collideWith, const MethodInfo* method);
// 0x3ed5e40

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__LineCast
          (CustomLogic_CustomLogicVector3Builtin_o *start,
          CustomLogic_CustomLogicVector3Builtin_o *end,System_String_o *collideWith,
          MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  UnityEngine_RaycastHit_o __this;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_RaycastHit_o __this_03;
  int32_t iVar6;
  UnityEngine_LayerMask_o UVar7;
  bool_conflict bVar8;
  UnityEngine_Collider_o *pUVar9;
  CustomLogic_BuiltinClassInstance_o *pCVar10;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_04;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar11;
  System_Object_array *parameters;
  long lVar12;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_05;
  undefined8 uVar13;
  CustomLogic_BuiltinClassInstance_o *pCVar14;
  bool bVar15;
  float fVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar17;
  UnityEngine_Vector3_o start_00;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined4 in_stack_ffffffffffffff78;
  float fVar19;
  undefined8 uVar20;
  Il2CppMethodPointer pIVar21;
  float fVar22;
  
  if (DAT_05703a09 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineCastHitResultBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703a09 = '\x01';
  }
  pIVar21 = (Il2CppMethodPointer)0x0;
  fVar22 = 0.0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar13._0_4_ = (start->fields).Value.fields.x;
    uVar13._4_4_ = (start->fields).Value.fields.y;
    uVar20 = 0;
    fVar16 = (start->fields).Value.fields.z;
    uVar1 = (end->fields).Value.fields.x;
    uVar2 = (end->fields).Value.fields.y;
    UVar18.fields.y = (float)uVar2;
    UVar18.fields.x = (float)uVar1;
    fVar19 = (end->fields).Value.fields.z;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar6 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar7 = Utility_PhysicsLayer__CopyMask(iVar6,(MethodInfo *)0x0);
    iVar6 = UnityEngine_LayerMask__get_value
                      ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff80,
                       (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    start_00.fields.z = fVar16;
    start_00.fields.x = (float)(int)uVar13;
    start_00.fields.y = (float)(int)((ulong)uVar13 >> 0x20);
    UVar18.fields.z = fVar19;
    bVar8 = UnityEngine_Physics__Linecast
                      (start_00,UVar18,(UnityEngine_RaycastHit_o *)&stack0xffffffffffffff98,iVar6,
                       (MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      __this.fields.m_Point.fields.y = fVar16;
      __this.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78;
      __this.fields.m_Point.fields.z = (float)UVar7.fields.m_Mask;
      __this.fields.m_Normal.fields.x = fVar19;
      __this.fields.m_Normal.fields.y = (float)(int)uVar13;
      __this.fields.m_Normal.fields.z = (float)(int)((ulong)uVar13 >> 0x20);
      __this.fields.m_FaceID = (int)uVar20;
      __this.fields.m_Distance = (float)(int)((ulong)uVar20 >> 0x20);
      __this.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
      __this.fields.m_Collider = (int32_t)fVar22;
      pUVar9 = UnityEngine_RaycastHit__get_collider(__this,(MethodInfo *)&stack0xffffffffffffff98);
      pCVar10 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar9,(MethodInfo *)0x0);
      if (pCVar10 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
        __this_04 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)
                    il2cpp_runtime_glue(TypeInfo_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_04,(MethodInfo *)0x0);
        bVar3 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
        pCVar14 = (CustomLogic_BuiltinClassInstance_o *)0x0;
        if ((bVar3 <= (pCVar10->klass->_2).naturalAligment) &&
           (pCVar14 = (CustomLogic_BuiltinClassInstance_o *)0x0,
           (pCVar10->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicCharacterBuiltin)) {
          pCVar14 = pCVar10;
        }
        if (__this_04 != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
          bVar15 = false;
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_04,(uint)(pCVar14 != (CustomLogic_BuiltinClassInstance_o *)0x0),
                     (MethodInfo *)0x0);
          bVar3 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
          if (bVar3 <= (pCVar10->klass->_2).naturalAligment) {
            bVar15 = (pCVar10->klass->_2).typeHierarchy[(ulong)bVar3 - 1] == TypeInfo_CustomLogicMapObjectBuiltin;
          }
          *(bool *)((long)&(__this_04->fields)._LookupBaseClassForVariables_k__BackingField + 1) =
               bVar15;
          __this_00.fields.m_Point.fields.y = fVar16;
          __this_00.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78;
          __this_00.fields.m_Point.fields.z = (float)UVar7.fields.m_Mask;
          __this_00.fields.m_Normal.fields.x = fVar19;
          __this_00.fields.m_Normal.fields.y = (float)(int)uVar13;
          __this_00.fields.m_Normal.fields.z = (float)(int)((ulong)uVar13 >> 0x20);
          __this_00.fields.m_FaceID = (int)uVar20;
          __this_00.fields.m_Distance = (float)(int)((ulong)uVar20 >> 0x20);
          __this_00.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_00.fields.m_Collider = (int32_t)fVar22;
          UVar18 = UnityEngine_RaycastHit__get_point
                             (__this_00,(MethodInfo *)&stack0xffffffffffffff98);
          fVar16 = UVar18.fields.z;
          uVar13 = UVar18.fields._0_8_;
          auVar4._8_4_ = extraout_XMM0_Dc;
          auVar4._0_8_ = uVar13;
          auVar4._12_4_ = extraout_XMM0_Dd;
          uVar20 = auVar4._8_8_;
          pCVar11 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value.fields.z = fVar16;
          value.fields.x = (float)(int)uVar13;
          value.fields.y = (float)(int)((ulong)uVar13 >> 0x20);
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar11,value,(MethodInfo *)0x0);
          (__this_04->fields)._Point_k__BackingField = pCVar11;
          il2cpp_runtime_glue(&(__this_04->fields)._Point_k__BackingField);
          __this_01.fields.m_Point.fields.y = fVar16;
          __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78;
          __this_01.fields.m_Point.fields.z = (float)UVar7.fields.m_Mask;
          __this_01.fields.m_Normal.fields.x = fVar19;
          __this_01.fields.m_Normal.fields.y = (float)(int)uVar13;
          __this_01.fields.m_Normal.fields.z = (float)(int)((ulong)uVar13 >> 0x20);
          __this_01.fields.m_FaceID = (int)uVar20;
          __this_01.fields.m_Distance = (float)(int)((ulong)uVar20 >> 0x20);
          __this_01.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_01.fields.m_Collider = (int32_t)fVar22;
          UVar18 = UnityEngine_RaycastHit__get_normal
                             (__this_01,(MethodInfo *)&stack0xffffffffffffff98);
          fVar17 = UVar18.fields.z;
          uVar13 = UVar18.fields._0_8_;
          auVar5._8_4_ = extraout_XMM0_Dc_00;
          auVar5._0_8_ = uVar13;
          auVar5._12_4_ = extraout_XMM0_Dd_00;
          uVar20 = auVar5._8_8_;
          pCVar11 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value_00.fields.z = fVar17;
          value_00.fields.x = (float)(int)uVar13;
          value_00.fields.y = (float)(int)((ulong)uVar13 >> 0x20);
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar11,value_00,(MethodInfo *)0x0);
          (__this_04->fields)._Normal_k__BackingField = pCVar11;
          il2cpp_runtime_glue(&(__this_04->fields)._Normal_k__BackingField,pCVar11);
          __this_02.fields.m_Point.fields.y = fVar17;
          __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78;
          __this_02.fields.m_Point.fields.z = (float)UVar7.fields.m_Mask;
          __this_02.fields.m_Normal.fields.x = fVar19;
          __this_02.fields.m_Normal.fields.y = (float)(int)uVar13;
          __this_02.fields.m_Normal.fields.z = (float)(int)((ulong)uVar13 >> 0x20);
          __this_02.fields.m_FaceID = (int)uVar20;
          __this_02.fields.m_Distance = (float)(int)((ulong)uVar20 >> 0x20);
          __this_02.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_02.fields.m_Collider = (int32_t)fVar22;
          fVar16 = UnityEngine_RaycastHit__get_distance
                             (__this_02,(MethodInfo *)&stack0xffffffffffffff98);
          (__this_04->fields)._IsMapObject_k__BackingField = (bool_conflict)fVar16;
          (__this_04->fields)._Collider_k__BackingField = pCVar10;
          il2cpp_runtime_glue(&(__this_04->fields)._Collider_k__BackingField,pCVar10);
          parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          __this_03.fields.m_Point.fields.y = fVar17;
          __this_03.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78;
          __this_03.fields.m_Point.fields.z = (float)UVar7.fields.m_Mask;
          __this_03.fields.m_Normal.fields.x = fVar19;
          __this_03.fields.m_Normal.fields.y = (float)(int)uVar13;
          __this_03.fields.m_Normal.fields.z = (float)(int)((ulong)uVar13 >> 0x20);
          __this_03.fields.m_FaceID = (int)uVar20;
          __this_03.fields.m_Distance = (float)(int)((ulong)uVar20 >> 0x20);
          __this_03.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_03.fields.m_Collider = (int32_t)fVar22;
          pUVar9 = UnityEngine_RaycastHit__get_collider
                             (__this_03,(MethodInfo *)&stack0xffffffffffffff98);
          if (parameters != (System_Object_array *)0x0) {
            if ((pUVar9 != (UnityEngine_Collider_o *)0x0) &&
               (lVar12 = il2cpp_runtime_glue(pUVar9,(((parameters->obj).klass)->_1).element_class),
               lVar12 == 0)) {
              uVar13 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar13,0);
            }
            if ((int)parameters->max_length != 0) {
              parameters->m_Items[0] = (Il2CppObject *)pUVar9;
              il2cpp_runtime_glue(parameters->m_Items,pUVar9);
              __this_05 = (CustomLogic_CustomLogicColliderBuiltin_o *)
                          il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
              CustomLogic_CustomLogicColliderBuiltin___ctor(__this_05,parameters,(MethodInfo *)0x0);
              (__this_04->fields)._ColliderInfo_k__BackingField = __this_05;
              il2cpp_runtime_glue(&(__this_04->fields)._ColliderInfo_k__BackingField,__this_05);
              return __this_04;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        goto LAB_03ed61e7;
      }
    }
    return (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0;
  }
LAB_03ed61e7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$LineCastWithMask
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__LineCastWithMask (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, int32_t mask, const MethodInfo* method);
// 0x3ed6200

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__LineCastWithMask
          (CustomLogic_CustomLogicVector3Builtin_o *start,
          CustomLogic_CustomLogicVector3Builtin_o *end,int32_t mask,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  UnityEngine_RaycastHit_o __this;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_RaycastHit_o __this_03;
  bool_conflict bVar8;
  UnityEngine_Collider_o *pUVar9;
  CustomLogic_BuiltinClassInstance_o *pCVar10;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_04;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar11;
  System_Object_array *parameters;
  long lVar12;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_05;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  float fVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar17;
  UnityEngine_Vector3_o start_00;
  UnityEngine_Vector3_o UVar18;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  undefined8 in_stack_ffffffffffffff78;
  float in_stack_ffffffffffffff80;
  float in_stack_ffffffffffffff84;
  undefined4 in_stack_ffffffffffffff88;
  undefined4 in_stack_ffffffffffffff8c;
  float fVar19;
  float fVar20;
  undefined8 in_stack_ffffffffffffff90;
  Il2CppMethodPointer pIVar21;
  float fVar22;
  
  if (DAT_05703a0a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineCastHitResultBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703a0a = '\x01';
  }
  pIVar21 = (Il2CppMethodPointer)0x0;
  fVar22 = 0.0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (start->fields).Value.fields.x;
    uVar3 = (start->fields).Value.fields.y;
    fVar16 = (start->fields).Value.fields.z;
    uVar2 = (end->fields).Value.fields.x;
    uVar4 = (end->fields).Value.fields.y;
    UVar18.fields.y = (float)uVar4;
    UVar18.fields.x = (float)uVar2;
    fVar17 = (end->fields).Value.fields.z;
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      in_stack_ffffffffffffff90 = 0;
      il2cpp_init_class();
      in_stack_ffffffffffffff80 = fVar16;
      in_stack_ffffffffffffff84 = fVar17;
      in_stack_ffffffffffffff88 = uVar1;
      in_stack_ffffffffffffff8c = uVar3;
    }
    start_00.fields.y = (float)uVar3;
    start_00.fields.x = (float)uVar1;
    start_00.fields.z = fVar16;
    UVar18.fields.z = fVar17;
    bVar8 = UnityEngine_Physics__Linecast
                      (start_00,UVar18,(UnityEngine_RaycastHit_o *)&stack0xffffffffffffff98,mask,
                       (MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      __this.fields.m_Point.fields.z = in_stack_ffffffffffffff80;
      __this.fields.m_Point.fields.x = (float)(int)in_stack_ffffffffffffff78;
      __this.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff78 >> 0x20);
      __this.fields.m_Normal.fields.x = in_stack_ffffffffffffff84;
      __this.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffff88;
      __this.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff8c;
      __this.fields.m_FaceID = (int)in_stack_ffffffffffffff90;
      __this.fields.m_Distance = (float)(int)((ulong)in_stack_ffffffffffffff90 >> 0x20);
      __this.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
      __this.fields.m_Collider = (int32_t)fVar22;
      pUVar9 = UnityEngine_RaycastHit__get_collider(__this,(MethodInfo *)&stack0xffffffffffffff98);
      pCVar10 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar9,(MethodInfo *)0x0);
      if (pCVar10 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
        __this_04 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)
                    il2cpp_runtime_glue(TypeInfo_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_04,(MethodInfo *)0x0);
        if (__this_04 != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
          bVar5 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
          if ((pCVar10->klass->_2).naturalAligment < bVar5) {
            bVar14 = false;
          }
          else {
            bVar14 = (pCVar10->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CustomLogicCharacterBuiltin;
          }
          bVar15 = false;
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_04,(uint)bVar14,(MethodInfo *)0x0);
          bVar5 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
          if (bVar5 <= (pCVar10->klass->_2).naturalAligment) {
            bVar15 = (pCVar10->klass->_2).typeHierarchy[(ulong)bVar5 - 1] == TypeInfo_CustomLogicMapObjectBuiltin;
          }
          *(bool *)((long)&(__this_04->fields)._LookupBaseClassForVariables_k__BackingField + 1) =
               bVar15;
          __this_00.fields.m_Point.fields.z = in_stack_ffffffffffffff80;
          __this_00.fields.m_Point.fields.x = (float)(int)in_stack_ffffffffffffff78;
          __this_00.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff78 >> 0x20)
          ;
          __this_00.fields.m_Normal.fields.x = in_stack_ffffffffffffff84;
          __this_00.fields.m_Normal.fields.y = (float)in_stack_ffffffffffffff88;
          __this_00.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff8c;
          __this_00.fields.m_FaceID = (int)in_stack_ffffffffffffff90;
          __this_00.fields.m_Distance = (float)(int)((ulong)in_stack_ffffffffffffff90 >> 0x20);
          __this_00.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_00.fields.m_Collider = (int32_t)fVar22;
          UVar18 = UnityEngine_RaycastHit__get_point
                             (__this_00,(MethodInfo *)&stack0xffffffffffffff98);
          fVar16 = UVar18.fields.z;
          auVar6._8_4_ = extraout_XMM0_Dc;
          auVar6._0_8_ = UVar18.fields._0_8_;
          auVar6._12_4_ = extraout_XMM0_Dd;
          fVar17 = UVar18.fields.x;
          fVar19 = UVar18.fields.y;
          uVar13 = auVar6._8_8_;
          pCVar11 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value.fields.y = fVar19;
          value.fields.x = fVar17;
          value.fields.z = fVar16;
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar11,value,(MethodInfo *)0x0);
          (__this_04->fields)._Point_k__BackingField = pCVar11;
          il2cpp_runtime_glue(&(__this_04->fields)._Point_k__BackingField);
          __this_01.fields.m_Point.fields.z = fVar16;
          __this_01.fields.m_Point.fields.x = (float)(int)in_stack_ffffffffffffff78;
          __this_01.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff78 >> 0x20)
          ;
          __this_01.fields.m_Normal.fields.x = in_stack_ffffffffffffff84;
          __this_01.fields.m_Normal.fields.y = fVar17;
          __this_01.fields.m_Normal.fields.z = fVar19;
          __this_01.fields.m_FaceID = (int)uVar13;
          __this_01.fields.m_Distance = (float)(int)((ulong)uVar13 >> 0x20);
          __this_01.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_01.fields.m_Collider = (int32_t)fVar22;
          UVar18 = UnityEngine_RaycastHit__get_normal
                             (__this_01,(MethodInfo *)&stack0xffffffffffffff98);
          fVar17 = UVar18.fields.z;
          auVar7._8_4_ = extraout_XMM0_Dc_00;
          auVar7._0_8_ = UVar18.fields._0_8_;
          auVar7._12_4_ = extraout_XMM0_Dd_00;
          fVar19 = UVar18.fields.x;
          fVar20 = UVar18.fields.y;
          uVar13 = auVar7._8_8_;
          pCVar11 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value_00.fields.y = fVar20;
          value_00.fields.x = fVar19;
          value_00.fields.z = fVar17;
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar11,value_00,(MethodInfo *)0x0);
          (__this_04->fields)._Normal_k__BackingField = pCVar11;
          il2cpp_runtime_glue(&(__this_04->fields)._Normal_k__BackingField,pCVar11);
          __this_02.fields.m_Point.fields.z = fVar17;
          __this_02.fields.m_Point.fields.x = (float)(int)in_stack_ffffffffffffff78;
          __this_02.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff78 >> 0x20)
          ;
          __this_02.fields.m_Normal.fields.x = in_stack_ffffffffffffff84;
          __this_02.fields.m_Normal.fields.y = fVar19;
          __this_02.fields.m_Normal.fields.z = fVar20;
          __this_02.fields.m_FaceID = (int)uVar13;
          __this_02.fields.m_Distance = (float)(int)((ulong)uVar13 >> 0x20);
          __this_02.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_02.fields.m_Collider = (int32_t)fVar22;
          fVar16 = UnityEngine_RaycastHit__get_distance
                             (__this_02,(MethodInfo *)&stack0xffffffffffffff98);
          (__this_04->fields)._IsMapObject_k__BackingField = (bool_conflict)fVar16;
          parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          __this_03.fields.m_Point.fields.z = fVar17;
          __this_03.fields.m_Point.fields.x = (float)(int)in_stack_ffffffffffffff78;
          __this_03.fields.m_Point.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff78 >> 0x20)
          ;
          __this_03.fields.m_Normal.fields.x = in_stack_ffffffffffffff84;
          __this_03.fields.m_Normal.fields.y = fVar19;
          __this_03.fields.m_Normal.fields.z = fVar20;
          __this_03.fields.m_FaceID = (int)uVar13;
          __this_03.fields.m_Distance = (float)(int)((ulong)uVar13 >> 0x20);
          __this_03.fields.m_UV.fields = (UnityEngine_Vector2_Fields)pIVar21;
          __this_03.fields.m_Collider = (int32_t)fVar22;
          pUVar9 = UnityEngine_RaycastHit__get_collider
                             (__this_03,(MethodInfo *)&stack0xffffffffffffff98);
          if (parameters != (System_Object_array *)0x0) {
            if ((pUVar9 != (UnityEngine_Collider_o *)0x0) &&
               (lVar12 = il2cpp_runtime_glue(pUVar9,(((parameters->obj).klass)->_1).element_class),
               lVar12 == 0)) {
              uVar13 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar13,0);
            }
            if ((int)parameters->max_length != 0) {
              parameters->m_Items[0] = (Il2CppObject *)pUVar9;
              il2cpp_runtime_glue(parameters->m_Items,pUVar9);
              __this_05 = (CustomLogic_CustomLogicColliderBuiltin_o *)
                          il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
              CustomLogic_CustomLogicColliderBuiltin___ctor(__this_05,parameters,(MethodInfo *)0x0);
              (__this_04->fields)._Collider_k__BackingField =
                   (CustomLogic_BuiltinClassInstance_o *)__this_05;
              il2cpp_runtime_glue(&(__this_04->fields)._Collider_k__BackingField,__this_05);
              return __this_04;
            }
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        goto LAB_03ed650a;
      }
    }
    return (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0;
  }
LAB_03ed650a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$LineCastAll
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__LineCastAll (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, System_String_o* collideWith, const MethodInfo* method);
// 0x3ed6530

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__LineCastAll
          (CustomLogic_CustomLogicVector3Builtin_o *start,
          CustomLogic_CustomLogicVector3Builtin_o *end,System_String_o *collideWith,
          MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  byte bVar6;
  uint uVar7;
  UnityEngine_Vector2_Fields UVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  UnityEngine_RaycastHit_o __this;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_RaycastHit_o __this_03;
  undefined1 auVar12 [16];
  int32_t iVar13;
  UnityEngine_LayerMask_o UVar14;
  UnityEngine_RaycastHit_array *pUVar15;
  CustomLogic_CustomLogicListBuiltin_o *__this_04;
  UnityEngine_Collider_o *pUVar16;
  CustomLogic_BuiltinClassInstance_o *pCVar17;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_05;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar18;
  System_Object_array *pSVar19;
  long lVar20;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_06;
  undefined8 uVar21;
  ulong uVar22;
  CustomLogic_BuiltinClassInstance_o *pCVar23;
  UnityEngine_RaycastHit_o *pUVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o direction;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff64;
  int32_t iVar36;
  float local_88;
  float fStack_84;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod pIStack_58;
  undefined4 uStack_50;
  undefined4 local_4c;
  float fStack_48;
  float fStack_44;
  int32_t iStack_40;
  float fVar29;
  
  if (DAT_05703a0b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineCastHitResultBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703a0b = '\x01';
  }
  fStack_48 = 0.0;
  fStack_44 = 0.0;
  iStack_40 = 0;
  pIStack_58 = (InvokerMethod)0x0;
  uStack_50 = 0;
  local_4c = 0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) goto LAB_03ed6bb9;
  uVar2 = (start->fields).Value.fields.x;
  uVar4 = (start->fields).Value.fields.y;
  UVar33.fields.y = (float)uVar4;
  UVar33.fields.x = (float)uVar2;
  fVar29 = (start->fields).Value.fields.z;
  fVar3 = (end->fields).Value.fields.x;
  fVar5 = (end->fields).Value.fields.y;
  fVar26 = 0.0;
  fVar31 = (end->fields).Value.fields.z;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar13 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  fVar3 = fVar3 - (float)uVar2;
  fVar5 = fVar5 - (float)uVar4;
  fVar26 = fVar26 - 0.0;
  fVar31 = fVar31 - fVar29;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar32 = fVar31 * fVar31 + fVar5 * fVar5 + fVar3 * fVar3;
  if (fVar32 < 0.0) {
    fVar25 = sqrtf(fVar32);
    uVar27 = extraout_XMM0_Dc;
    uVar28 = extraout_XMM0_Dd;
    if (fVar25 <= 1e-05) goto LAB_03ed66f4;
LAB_03ed6769:
    fVar31 = fVar31 / fVar25;
    auVar12._4_4_ = fVar5;
    auVar12._0_4_ = fVar3;
    auVar12._8_4_ = fVar26;
    auVar12._12_4_ = 0;
    auVar30._4_4_ = fVar25;
    auVar30._0_4_ = fVar25;
    auVar30._8_4_ = uVar27;
    auVar30._12_4_ = uVar28;
    auVar30 = divps(auVar12,auVar30);
    uVar27 = auVar30._0_4_;
    uVar28 = auVar30._4_4_;
    iVar36 = auVar30._8_4_;
  }
  else {
    uVar27 = 0;
    uVar28 = 0;
    fVar25 = SQRT(fVar32);
    if (1e-05 < fVar25) goto LAB_03ed6769;
LAB_03ed66f4:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    uVar27 = (undefined4)uVar21;
    uVar28 = (undefined4)((ulong)uVar21 >> 0x20);
    iVar36 = 0;
    fVar31 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    if (0.0 <= fVar32) goto LAB_03ed67bb;
LAB_03ed67d7:
    fVar32 = sqrtf(fVar32);
  }
  else {
    if (fVar32 < 0.0) goto LAB_03ed67d7;
LAB_03ed67bb:
    fVar32 = SQRT(fVar32);
  }
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar14 = Utility_PhysicsLayer__CopyMask(iVar13,(MethodInfo *)0x0);
  iVar13 = UnityEngine_LayerMask__get_value
                     ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff60,
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  direction.fields.y = (float)uVar28;
  direction.fields.x = (float)uVar27;
  UVar33.fields.z = fVar29;
  direction.fields.z = fVar31;
  pUVar15 = UnityEngine_Physics__RaycastAll(UVar33,direction,fVar32,iVar13,(MethodInfo *)0x0);
  __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_04,(MethodInfo *)0x0);
  if (pUVar15 != (UnityEngine_RaycastHit_array *)0x0) {
    if ((int)pUVar15->max_length < 1) {
      return __this_04;
    }
    pUVar24 = pUVar15->m_Items;
    uVar22 = 0;
    uVar34 = SUB84(__this_04,0);
    uVar35 = (undefined4)((ulong)__this_04 >> 0x20);
    if ((pUVar15->max_length & 0xffffffff) != 0) {
      do {
        local_68 = *(Il2CppMethodPointer *)&(pUVar24->fields).m_Point.fields;
        pIStack_60 = *(Il2CppMethodPointer *)&(pUVar24->fields).m_Point.fields.z;
        pIStack_58 = *(InvokerMethod *)&(pUVar24->fields).m_Normal.fields.y;
        uVar10 = (pUVar24->fields).m_FaceID;
        uVar11 = (pUVar24->fields).m_Distance;
        UVar8 = (pUVar24->fields).m_UV.fields;
        iStack_40 = (pUVar24->fields).m_Collider;
        fStack_48 = UVar8.x;
        fStack_44 = UVar8.y;
        __this.fields.m_Point.fields.y = fVar29;
        __this.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff48;
        __this.fields.m_Point.fields.z = (float)uVar34;
        __this.fields.m_Normal.fields.x = (float)uVar35;
        __this.fields.m_Normal.fields.y = fVar31;
        __this.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
        __this.fields.m_FaceID = (uint32_t)UVar14.fields.m_Mask;
        __this.fields.m_Distance = (float)in_stack_ffffffffffffff64;
        __this.fields.m_UV.fields.x = (float)uVar27;
        __this.fields.m_UV.fields.y = (float)uVar28;
        __this.fields.m_Collider = iVar36;
        uStack_50 = uVar10;
        local_4c = uVar11;
        pUVar16 = UnityEngine_RaycastHit__get_collider(__this,(MethodInfo *)&local_68);
        pCVar17 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar16,(MethodInfo *)0x0);
        if (pCVar17 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
          if (__this_04 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto LAB_03ed6bb9;
          pSVar9 = (__this_04->fields).List;
          fVar31 = SUB84(pSVar9,0);
          in_stack_ffffffffffffff5c = (undefined4)((ulong)pSVar9 >> 0x20);
          __this_05 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)
                      il2cpp_runtime_glue(TypeInfo_CustomLogicLineCastHitResultBuiltin);
          CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_05,(MethodInfo *)0x0);
          bVar6 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
          pCVar23 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar6 <= (pCVar17->klass->_2).naturalAligment) &&
             (pCVar23 = (CustomLogic_BuiltinClassInstance_o *)0x0,
             (pCVar17->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_CustomLogicCharacterBuiltin)) {
            pCVar23 = pCVar17;
          }
          if (__this_05 == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0)
          goto LAB_03ed6bb9;
          uVar27 = (undefined4)uVar22;
          uVar28 = (undefined4)(uVar22 >> 0x20);
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_05,(uint)(pCVar23 != (CustomLogic_BuiltinClassInstance_o *)0x0),
                     (MethodInfo *)0x0);
          bVar6 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
          pCVar23 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar6 <= (pCVar17->klass->_2).naturalAligment) &&
             (pCVar23 = pCVar17,
             (pCVar17->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicMapObjectBuiltin)) {
            pCVar23 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          }
          *(bool *)((long)&(__this_05->fields)._LookupBaseClassForVariables_k__BackingField + 1) =
               pCVar23 != (CustomLogic_BuiltinClassInstance_o *)0x0;
          __this_00.fields.m_Point.fields.y = fVar29;
          __this_00.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff48;
          __this_00.fields.m_Point.fields.z = (float)uVar34;
          __this_00.fields.m_Normal.fields.x = (float)uVar35;
          __this_00.fields.m_Normal.fields.y = fVar31;
          __this_00.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
          __this_00.fields.m_FaceID = (uint32_t)UVar14.fields.m_Mask;
          __this_00.fields.m_Distance = (float)in_stack_ffffffffffffff64;
          __this_00.fields.m_UV.fields.x = (float)uVar27;
          __this_00.fields.m_UV.fields.y = (float)uVar28;
          __this_00.fields.m_Collider = iVar36;
          UVar33 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)&local_68);
          fVar29 = UVar33.fields.z;
          pCVar18 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value.fields.z = fVar29;
          value.fields.x = (float)(int)UVar33.fields._0_8_;
          value.fields.y = (float)(int)((ulong)UVar33.fields._0_8_ >> 0x20);
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar18,value,(MethodInfo *)0x0);
          (__this_05->fields)._Point_k__BackingField = pCVar18;
          il2cpp_runtime_glue(&(__this_05->fields)._Point_k__BackingField);
          __this_01.fields.m_Point.fields.y = fVar29;
          __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff48;
          __this_01.fields.m_Point.fields.z = (float)uVar34;
          __this_01.fields.m_Normal.fields.x = (float)uVar35;
          __this_01.fields.m_Normal.fields.y = fVar31;
          __this_01.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
          __this_01.fields.m_FaceID = (uint32_t)UVar14.fields.m_Mask;
          __this_01.fields.m_Distance = (float)in_stack_ffffffffffffff64;
          __this_01.fields.m_UV.fields.x = (float)uVar27;
          __this_01.fields.m_UV.fields.y = (float)uVar28;
          __this_01.fields.m_Collider = iVar36;
          UVar33 = UnityEngine_RaycastHit__get_normal(__this_01,(MethodInfo *)&local_68);
          fVar29 = UVar33.fields.z;
          pCVar18 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value_00.fields.z = fVar29;
          value_00.fields.x = (float)(int)UVar33.fields._0_8_;
          value_00.fields.y = (float)(int)((ulong)UVar33.fields._0_8_ >> 0x20);
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar18,value_00,(MethodInfo *)0x0);
          (__this_05->fields)._Normal_k__BackingField = pCVar18;
          il2cpp_runtime_glue(&(__this_05->fields)._Normal_k__BackingField,pCVar18);
          __this_02.fields.m_Point.fields.y = fVar29;
          __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff48;
          __this_02.fields.m_Point.fields.z = (float)uVar34;
          __this_02.fields.m_Normal.fields.x = (float)uVar35;
          __this_02.fields.m_Normal.fields.y = fVar31;
          __this_02.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
          __this_02.fields.m_FaceID = (uint32_t)UVar14.fields.m_Mask;
          __this_02.fields.m_Distance = (float)in_stack_ffffffffffffff64;
          __this_02.fields.m_UV.fields.x = (float)uVar27;
          __this_02.fields.m_UV.fields.y = (float)uVar28;
          __this_02.fields.m_Collider = iVar36;
          fVar3 = UnityEngine_RaycastHit__get_distance(__this_02,(MethodInfo *)&local_68);
          (__this_05->fields)._IsMapObject_k__BackingField = (bool_conflict)fVar3;
          (__this_05->fields)._Collider_k__BackingField = pCVar17;
          il2cpp_runtime_glue(&(__this_05->fields)._Collider_k__BackingField,pCVar17);
          pSVar19 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          __this_03.fields.m_Point.fields.y = fVar29;
          __this_03.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff48;
          __this_03.fields.m_Point.fields.z = (float)uVar34;
          __this_03.fields.m_Normal.fields.x = (float)uVar35;
          __this_03.fields.m_Normal.fields.y = fVar31;
          __this_03.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
          __this_03.fields.m_FaceID = (uint32_t)UVar14.fields.m_Mask;
          __this_03.fields.m_Distance = (float)in_stack_ffffffffffffff64;
          __this_03.fields.m_UV.fields.x = (float)uVar27;
          __this_03.fields.m_UV.fields.y = (float)uVar28;
          __this_03.fields.m_Collider = iVar36;
          pUVar16 = UnityEngine_RaycastHit__get_collider(__this_03,(MethodInfo *)&local_68);
          if (pSVar19 == (System_Object_array *)0x0) goto LAB_03ed6bb9;
          if ((pUVar16 != (UnityEngine_Collider_o *)0x0) &&
             (lVar20 = il2cpp_runtime_glue(pUVar16,(((pSVar19->obj).klass)->_1).element_class),
             lVar20 == 0)) {
            uVar21 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar21,0);
          }
          if ((int)pSVar19->max_length == 0) break;
          pSVar19->m_Items[0] = (Il2CppObject *)pUVar16;
          il2cpp_runtime_glue(pSVar19->m_Items,pUVar16);
          __this_06 = (CustomLogic_CustomLogicColliderBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor(__this_06,pSVar19,(MethodInfo *)0x0);
          (__this_05->fields)._ColliderInfo_k__BackingField = __this_06;
          il2cpp_runtime_glue(&(__this_05->fields)._ColliderInfo_k__BackingField,__this_06);
          lVar20 = MethodInfo_Void_Add;
          pSVar9 = (System_Collections_Generic_List_object__o *)
                   CONCAT44(in_stack_ffffffffffffff5c,fVar31);
          if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03ed6bb9;
          piVar1 = &(pSVar9->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar19 = (pSVar9->fields)._items;
          uVar22 = CONCAT44(uVar28,uVar27);
          if (pSVar19 == (System_Object_array *)0x0) goto LAB_03ed6bb9;
          uVar7 = (pSVar9->fields)._size;
          __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)CONCAT44(uVar35,uVar34);
          if (uVar7 < (uint)pSVar19->max_length) {
            (pSVar9->fields)._size = uVar7 + 1;
            pSVar19->m_Items[(int)uVar7] = (Il2CppObject *)__this_05;
            il2cpp_runtime_glue(pSVar19->m_Items + (int)uVar7);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar9,(Il2CppObject *)__this_05,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar22 = uVar22 + 1;
        uVar7 = (uint)pUVar15->max_length;
        pUVar24 = pUVar24 + 1;
        if ((long)(int)uVar7 <= (long)uVar22) {
          return __this_04;
        }
      } while (uVar22 < uVar7);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ed6bb9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$SphereCast
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin__SphereCast (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, float radius, System_String_o* collideWith, const MethodInfo* method);
// 0x3ed6be0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin__SphereCast
          (CustomLogic_CustomLogicVector3Builtin_o *start,
          CustomLogic_CustomLogicVector3Builtin_o *end,float radius,System_String_o *collideWith,
          MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar4;
  float fVar5;
  undefined8 uVar3;
  UnityEngine_RaycastHit_o __this;
  undefined1 auVar6 [16];
  int32_t iVar7;
  UnityEngine_LayerMask_o UVar8;
  bool_conflict bVar9;
  UnityEngine_Collider_o *other;
  CustomLogic_BuiltinClassInstance_o *pCVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 extraout_XMM0_Dc;
  float fVar14;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 in_stack_ffffffffffffff88 [12];
  float local_68;
  float fStack_64;
  Il2CppMethodPointer local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod pIStack_48;
  uint32_t uStack_40;
  float local_3c;
  float fStack_38;
  undefined8 uStack_34;
  
  if (DAT_05703a0c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703a0c = '\x01';
  }
  fStack_38 = 0.0;
  uStack_34 = 0;
  pIStack_48 = (InvokerMethod)0x0;
  uStack_40 = 0;
  local_3c = 0.0;
  local_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (start->fields).Value.fields.x;
    uVar4 = (start->fields).Value.fields.y;
    origin.fields.y = (float)uVar4;
    origin.fields.x = (float)uVar1;
    fVar19 = (start->fields).Value.fields.z;
    fVar2 = (end->fields).Value.fields.x;
    fVar5 = (end->fields).Value.fields.y;
    fVar12 = 0.0;
    fVar14 = 0.0;
    fVar17 = (end->fields).Value.fields.z;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar7 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    fVar2 = fVar2 - (float)uVar1;
    fVar5 = fVar5 - (float)uVar4;
    fVar12 = fVar12 - 0.0;
    fVar14 = fVar14 - 0.0;
    fVar17 = fVar17 - fVar19;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar18 = fVar17 * fVar17 + fVar5 * fVar5 + fVar2 * fVar2;
    if (fVar18 < 0.0) {
      fVar11 = sqrtf(fVar18);
      uVar13 = extraout_XMM0_Dc;
      uVar15 = extraout_XMM0_Dd;
    }
    else {
      uVar13 = 0;
      uVar15 = 0;
      fVar11 = SQRT(fVar18);
    }
    if (fVar11 <= 1e-05) {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      uVar13 = (undefined4)uVar3;
      uVar15 = (undefined4)((ulong)uVar3 >> 0x20);
      uVar20 = 0;
      uVar21 = 0;
      fVar17 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar17 = fVar17 / fVar11;
      auVar6._4_4_ = fVar5;
      auVar6._0_4_ = fVar2;
      auVar6._8_4_ = fVar12;
      auVar6._12_4_ = fVar14;
      auVar16._4_4_ = fVar11;
      auVar16._0_4_ = fVar11;
      auVar16._8_4_ = uVar13;
      auVar16._12_4_ = uVar15;
      auVar16 = divps(auVar6,auVar16);
      uVar13 = auVar16._0_4_;
      uVar15 = auVar16._4_4_;
      uVar20 = auVar16._8_4_;
      uVar21 = auVar16._12_4_;
    }
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (fVar18 < 0.0) {
      fVar18 = sqrtf(fVar18);
    }
    else {
      fVar18 = SQRT(fVar18);
    }
    if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UVar8 = Utility_PhysicsLayer__CopyMask(iVar7,(MethodInfo *)0x0);
    iVar7 = UnityEngine_LayerMask__get_value
                      ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff70,
                       (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0;
    direction.fields.y = (float)uVar15;
    direction.fields.x = (float)uVar13;
    origin.fields.z = fVar19;
    direction.fields.z = fVar17;
    bVar9 = UnityEngine_Physics__SphereCast
                      (origin,radius,direction,(UnityEngine_RaycastHit_o *)&local_58,fVar18,iVar7,
                       (MethodInfo *)0x0);
    if ((char)bVar9 != '\0') {
      __this.fields.m_Point.fields.y = fVar17;
      __this.fields.m_Point.fields.x = fVar18;
      __this.fields.m_Point.fields.z = (float)UVar8.fields.m_Mask;
      __this.fields.m_Normal.fields.x = fVar19;
      __this.fields.m_Normal.fields.y = (float)uVar13;
      __this.fields.m_Normal.fields.z = (float)uVar15;
      __this.fields.m_FaceID = uVar20;
      __this.fields.m_Distance = (float)uVar21;
      __this.fields.m_UV.fields.x = (float)(int)in_stack_ffffffffffffff88._0_8_;
      __this.fields.m_UV.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff88._0_8_ >> 0x20);
      __this.fields.m_Collider = in_stack_ffffffffffffff88._8_4_;
      other = UnityEngine_RaycastHit__get_collider(__this,(MethodInfo *)&local_58);
      pCVar10 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)pCVar10;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$SphereCastWithMask
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin__SphereCastWithMask (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, float radius, int32_t mask, const MethodInfo* method);
// 0x3ed6ee0

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin__SphereCastWithMask
          (CustomLogic_CustomLogicVector3Builtin_o *start,
          CustomLogic_CustomLogicVector3Builtin_o *end,float radius,int32_t mask,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  UnityEngine_RaycastHit_o __this;
  bool_conflict bVar6;
  UnityEngine_Collider_o *other;
  CustomLogic_BuiltinClassInstance_o *pCVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Dd;
  float __x;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  UnityEngine_Vector3_o origin;
  UnityEngine_Vector3_o direction;
  undefined4 in_stack_ffffffffffffff78;
  float fVar15;
  undefined1 in_stack_ffffffffffffff98 [12];
  undefined1 local_48 [28];
  float local_2c;
  float fStack_28;
  undefined8 uStack_24;
  
  if (DAT_05703a0d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703a0d = '\x01';
  }
  fStack_28 = 0.0;
  uStack_24 = 0;
  local_48._16_8_ = (InvokerMethod)0x0;
  local_48._24_4_ = 0;
  local_2c = 0.0;
  local_48._0_8_ = (Il2CppMethodPointer)0x0;
  local_48._8_8_ = (Il2CppMethodPointer)0x0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (start->fields).Value.fields.x;
    uVar3 = (start->fields).Value.fields.y;
    origin.fields.y = (float)uVar3;
    origin.fields.x = (float)uVar1;
    fVar15 = (start->fields).Value.fields.z;
    uVar2 = (end->fields).Value.fields.x;
    uVar4 = (end->fields).Value.fields.y;
    auVar11._4_4_ = uVar4;
    auVar11._0_4_ = uVar2;
    auVar11._8_8_ = 0;
    fVar14 = (end->fields).Value.fields.z;
    if (DAT_056fde20 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde20 = '\x01';
    }
    auVar12._0_4_ = auVar11._0_4_ - (float)uVar1;
    auVar12._4_4_ = auVar11._4_4_ - (float)uVar3;
    auVar12._8_4_ = auVar11._8_4_ - 0.0;
    auVar12._12_4_ = auVar11._12_4_ - 0.0;
    fVar14 = fVar14 - fVar15;
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __x = fVar14 * fVar14 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
    if (__x < 0.0) {
      fVar8 = sqrtf(__x);
      uVar9 = extraout_XMM0_Dc;
      uVar10 = extraout_XMM0_Dd;
    }
    else {
      uVar9 = 0;
      uVar10 = 0;
      fVar8 = SQRT(__x);
    }
    if (fVar8 <= 1e-05) {
      if (DAT_056fdd15 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Vector3);
        DAT_056fdd15 = '\x01';
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = **(ulong **)(TypeInfo_Vector3 + 0xb8);
      fVar14 = *(float *)(*(ulong **)(TypeInfo_Vector3 + 0xb8) + 1);
    }
    else {
      fVar14 = fVar14 / fVar8;
      auVar5._4_4_ = fVar8;
      auVar5._0_4_ = fVar8;
      auVar5._8_4_ = uVar9;
      auVar5._12_4_ = uVar10;
      auVar13 = divps(auVar12,auVar5);
    }
    if (DAT_056fde1c == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Math);
      DAT_056fde1c = '\x01';
    }
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (__x < 0.0) {
      fVar8 = sqrtf(__x);
    }
    else {
      fVar8 = SQRT(__x);
    }
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      il2cpp_init_class();
      __x = fVar8;
    }
    pCVar7 = (CustomLogic_BuiltinClassInstance_o *)0x0;
    origin.fields.z = fVar15;
    direction.fields._0_8_ = auVar13._0_8_;
    direction.fields.z = fVar14;
    bVar6 = UnityEngine_Physics__SphereCast
                      (origin,radius,direction,(UnityEngine_RaycastHit_o *)local_48,fVar8,mask,
                       (MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      __this.fields.m_Point.fields.y = fVar14;
      __this.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78;
      __this.fields.m_Point.fields.z = __x;
      __this.fields.m_Normal.fields.x = fVar15;
      __this.fields.m_Normal.fields.y = (float)auVar13._0_4_;
      __this.fields.m_Normal.fields.z = (float)auVar13._4_4_;
      __this.fields.m_FaceID = auVar13._8_4_;
      __this.fields.m_Distance = (float)auVar13._12_4_;
      __this.fields.m_UV.fields.x = (float)(int)in_stack_ffffffffffffff98._0_8_;
      __this.fields.m_UV.fields.y = (float)(int)((ulong)in_stack_ffffffffffffff98._0_8_ >> 0x20);
      __this.fields.m_Collider = in_stack_ffffffffffffff98._8_4_;
      other = UnityEngine_RaycastHit__get_collider(__this,(MethodInfo *)local_48);
      pCVar7 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)pCVar7;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$SphereCastAll
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__SphereCastAll (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, float radius, System_String_o* collideWith, const MethodInfo* method);
// 0x3ed71a0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__SphereCastAll
          (CustomLogic_CustomLogicVector3Builtin_o *start,
          CustomLogic_CustomLogicVector3Builtin_o *end,float radius,System_String_o *collideWith,
          MethodInfo *method)

{
  int32_t *piVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  byte bVar6;
  uint uVar7;
  UnityEngine_Vector2_Fields UVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  UnityEngine_RaycastHit_o __this;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_RaycastHit_o __this_03;
  undefined1 auVar12 [16];
  int32_t iVar13;
  UnityEngine_LayerMask_o UVar14;
  UnityEngine_RaycastHit_array *pUVar15;
  CustomLogic_CustomLogicListBuiltin_o *__this_04;
  UnityEngine_Collider_o *pUVar16;
  CustomLogic_BuiltinClassInstance_o *pCVar17;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_05;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar18;
  System_Object_array *pSVar19;
  long lVar20;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_06;
  undefined8 uVar21;
  ulong uVar22;
  CustomLogic_BuiltinClassInstance_o *pCVar23;
  UnityEngine_RaycastHit_o *pUVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar28;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  UnityEngine_Vector3_o UVar33;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o direction;
  undefined4 in_stack_ffffffffffffff48;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 in_stack_ffffffffffffff5c;
  undefined4 in_stack_ffffffffffffff64;
  int32_t iVar36;
  float local_78;
  float fStack_74;
  Il2CppMethodPointer local_68;
  Il2CppMethodPointer pIStack_60;
  InvokerMethod pIStack_58;
  undefined4 uStack_50;
  undefined4 local_4c;
  float fStack_48;
  float fStack_44;
  int32_t iStack_40;
  float fVar29;
  
  if (DAT_05703a0e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineCastHitResultBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703a0e = '\x01';
  }
  fStack_48 = 0.0;
  fStack_44 = 0.0;
  iStack_40 = 0;
  pIStack_58 = (InvokerMethod)0x0;
  uStack_50 = 0;
  local_4c = 0;
  local_68 = (Il2CppMethodPointer)0x0;
  pIStack_60 = (Il2CppMethodPointer)0x0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) goto LAB_03ed7839;
  uVar2 = (start->fields).Value.fields.x;
  uVar4 = (start->fields).Value.fields.y;
  UVar33.fields.y = (float)uVar4;
  UVar33.fields.x = (float)uVar2;
  fVar29 = (start->fields).Value.fields.z;
  fVar3 = (end->fields).Value.fields.x;
  fVar5 = (end->fields).Value.fields.y;
  fVar26 = 0.0;
  fVar31 = (end->fields).Value.fields.z;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar13 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  fVar3 = fVar3 - (float)uVar2;
  fVar5 = fVar5 - (float)uVar4;
  fVar26 = fVar26 - 0.0;
  fVar31 = fVar31 - fVar29;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar32 = fVar31 * fVar31 + fVar5 * fVar5 + fVar3 * fVar3;
  if (fVar32 < 0.0) {
    fVar25 = sqrtf(fVar32);
    uVar27 = extraout_XMM0_Dc;
    uVar28 = extraout_XMM0_Dd;
    if (fVar25 <= 1e-05) goto LAB_03ed736a;
LAB_03ed73df:
    fVar31 = fVar31 / fVar25;
    auVar12._4_4_ = fVar5;
    auVar12._0_4_ = fVar3;
    auVar12._8_4_ = fVar26;
    auVar12._12_4_ = 0;
    auVar30._4_4_ = fVar25;
    auVar30._0_4_ = fVar25;
    auVar30._8_4_ = uVar27;
    auVar30._12_4_ = uVar28;
    auVar30 = divps(auVar12,auVar30);
    uVar27 = auVar30._0_4_;
    uVar28 = auVar30._4_4_;
    iVar36 = auVar30._8_4_;
  }
  else {
    uVar27 = 0;
    uVar28 = 0;
    fVar25 = SQRT(fVar32);
    if (1e-05 < fVar25) goto LAB_03ed73df;
LAB_03ed736a:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar21 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    uVar27 = (undefined4)uVar21;
    uVar28 = (undefined4)((ulong)uVar21 >> 0x20);
    iVar36 = 0;
    fVar31 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
  }
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
    if (0.0 <= fVar32) goto LAB_03ed7431;
LAB_03ed744d:
    fVar32 = sqrtf(fVar32);
  }
  else {
    if (fVar32 < 0.0) goto LAB_03ed744d;
LAB_03ed7431:
    fVar32 = SQRT(fVar32);
  }
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar14 = Utility_PhysicsLayer__CopyMask(iVar13,(MethodInfo *)0x0);
  iVar13 = UnityEngine_LayerMask__get_value
                     ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff60,
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  direction.fields.y = (float)uVar28;
  direction.fields.x = (float)uVar27;
  UVar33.fields.z = fVar29;
  direction.fields.z = fVar31;
  pUVar15 = UnityEngine_Physics__SphereCastAll
                      (UVar33,radius,direction,fVar32,iVar13,(MethodInfo *)0x0);
  __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_04,(MethodInfo *)0x0);
  if (pUVar15 != (UnityEngine_RaycastHit_array *)0x0) {
    if ((int)pUVar15->max_length < 1) {
      return __this_04;
    }
    pUVar24 = pUVar15->m_Items;
    uVar22 = 0;
    uVar34 = SUB84(__this_04,0);
    uVar35 = (undefined4)((ulong)__this_04 >> 0x20);
    if ((pUVar15->max_length & 0xffffffff) != 0) {
      do {
        local_68 = *(Il2CppMethodPointer *)&(pUVar24->fields).m_Point.fields;
        pIStack_60 = *(Il2CppMethodPointer *)&(pUVar24->fields).m_Point.fields.z;
        pIStack_58 = *(InvokerMethod *)&(pUVar24->fields).m_Normal.fields.y;
        uVar10 = (pUVar24->fields).m_FaceID;
        uVar11 = (pUVar24->fields).m_Distance;
        UVar8 = (pUVar24->fields).m_UV.fields;
        iStack_40 = (pUVar24->fields).m_Collider;
        fStack_48 = UVar8.x;
        fStack_44 = UVar8.y;
        __this.fields.m_Point.fields.y = fVar29;
        __this.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff48;
        __this.fields.m_Point.fields.z = (float)uVar34;
        __this.fields.m_Normal.fields.x = (float)uVar35;
        __this.fields.m_Normal.fields.y = fVar31;
        __this.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
        __this.fields.m_FaceID = (uint32_t)UVar14.fields.m_Mask;
        __this.fields.m_Distance = (float)in_stack_ffffffffffffff64;
        __this.fields.m_UV.fields.x = (float)uVar27;
        __this.fields.m_UV.fields.y = (float)uVar28;
        __this.fields.m_Collider = iVar36;
        uStack_50 = uVar10;
        local_4c = uVar11;
        pUVar16 = UnityEngine_RaycastHit__get_collider(__this,(MethodInfo *)&local_68);
        pCVar17 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar16,(MethodInfo *)0x0);
        if (pCVar17 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
          if (__this_04 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto LAB_03ed7839;
          pSVar9 = (__this_04->fields).List;
          fVar31 = SUB84(pSVar9,0);
          in_stack_ffffffffffffff5c = (undefined4)((ulong)pSVar9 >> 0x20);
          __this_05 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)
                      il2cpp_runtime_glue(TypeInfo_CustomLogicLineCastHitResultBuiltin);
          CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_05,(MethodInfo *)0x0);
          bVar6 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
          pCVar23 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar6 <= (pCVar17->klass->_2).naturalAligment) &&
             (pCVar23 = (CustomLogic_BuiltinClassInstance_o *)0x0,
             (pCVar17->klass->_2).typeHierarchy[(ulong)bVar6 - 1] == TypeInfo_CustomLogicCharacterBuiltin)) {
            pCVar23 = pCVar17;
          }
          if (__this_05 == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0)
          goto LAB_03ed7839;
          uVar27 = (undefined4)uVar22;
          uVar28 = (undefined4)(uVar22 >> 0x20);
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_05,(uint)(pCVar23 != (CustomLogic_BuiltinClassInstance_o *)0x0),
                     (MethodInfo *)0x0);
          bVar6 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
          pCVar23 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar6 <= (pCVar17->klass->_2).naturalAligment) &&
             (pCVar23 = pCVar17,
             (pCVar17->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_CustomLogicMapObjectBuiltin)) {
            pCVar23 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          }
          *(bool *)((long)&(__this_05->fields)._LookupBaseClassForVariables_k__BackingField + 1) =
               pCVar23 != (CustomLogic_BuiltinClassInstance_o *)0x0;
          __this_00.fields.m_Point.fields.y = fVar29;
          __this_00.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff48;
          __this_00.fields.m_Point.fields.z = (float)uVar34;
          __this_00.fields.m_Normal.fields.x = (float)uVar35;
          __this_00.fields.m_Normal.fields.y = fVar31;
          __this_00.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
          __this_00.fields.m_FaceID = (uint32_t)UVar14.fields.m_Mask;
          __this_00.fields.m_Distance = (float)in_stack_ffffffffffffff64;
          __this_00.fields.m_UV.fields.x = (float)uVar27;
          __this_00.fields.m_UV.fields.y = (float)uVar28;
          __this_00.fields.m_Collider = iVar36;
          UVar33 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)&local_68);
          fVar29 = UVar33.fields.z;
          pCVar18 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value.fields.z = fVar29;
          value.fields.x = (float)(int)UVar33.fields._0_8_;
          value.fields.y = (float)(int)((ulong)UVar33.fields._0_8_ >> 0x20);
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar18,value,(MethodInfo *)0x0);
          (__this_05->fields)._Point_k__BackingField = pCVar18;
          il2cpp_runtime_glue(&(__this_05->fields)._Point_k__BackingField);
          __this_01.fields.m_Point.fields.y = fVar29;
          __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff48;
          __this_01.fields.m_Point.fields.z = (float)uVar34;
          __this_01.fields.m_Normal.fields.x = (float)uVar35;
          __this_01.fields.m_Normal.fields.y = fVar31;
          __this_01.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
          __this_01.fields.m_FaceID = (uint32_t)UVar14.fields.m_Mask;
          __this_01.fields.m_Distance = (float)in_stack_ffffffffffffff64;
          __this_01.fields.m_UV.fields.x = (float)uVar27;
          __this_01.fields.m_UV.fields.y = (float)uVar28;
          __this_01.fields.m_Collider = iVar36;
          UVar33 = UnityEngine_RaycastHit__get_normal(__this_01,(MethodInfo *)&local_68);
          fVar29 = UVar33.fields.z;
          pCVar18 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value_00.fields.z = fVar29;
          value_00.fields.x = (float)(int)UVar33.fields._0_8_;
          value_00.fields.y = (float)(int)((ulong)UVar33.fields._0_8_ >> 0x20);
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar18,value_00,(MethodInfo *)0x0);
          (__this_05->fields)._Normal_k__BackingField = pCVar18;
          il2cpp_runtime_glue(&(__this_05->fields)._Normal_k__BackingField,pCVar18);
          __this_02.fields.m_Point.fields.y = fVar29;
          __this_02.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff48;
          __this_02.fields.m_Point.fields.z = (float)uVar34;
          __this_02.fields.m_Normal.fields.x = (float)uVar35;
          __this_02.fields.m_Normal.fields.y = fVar31;
          __this_02.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
          __this_02.fields.m_FaceID = (uint32_t)UVar14.fields.m_Mask;
          __this_02.fields.m_Distance = (float)in_stack_ffffffffffffff64;
          __this_02.fields.m_UV.fields.x = (float)uVar27;
          __this_02.fields.m_UV.fields.y = (float)uVar28;
          __this_02.fields.m_Collider = iVar36;
          fVar3 = UnityEngine_RaycastHit__get_distance(__this_02,(MethodInfo *)&local_68);
          (__this_05->fields)._IsMapObject_k__BackingField = (bool_conflict)fVar3;
          (__this_05->fields)._Collider_k__BackingField = pCVar17;
          il2cpp_runtime_glue(&(__this_05->fields)._Collider_k__BackingField,pCVar17);
          pSVar19 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          __this_03.fields.m_Point.fields.y = fVar29;
          __this_03.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff48;
          __this_03.fields.m_Point.fields.z = (float)uVar34;
          __this_03.fields.m_Normal.fields.x = (float)uVar35;
          __this_03.fields.m_Normal.fields.y = fVar31;
          __this_03.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff5c;
          __this_03.fields.m_FaceID = (uint32_t)UVar14.fields.m_Mask;
          __this_03.fields.m_Distance = (float)in_stack_ffffffffffffff64;
          __this_03.fields.m_UV.fields.x = (float)uVar27;
          __this_03.fields.m_UV.fields.y = (float)uVar28;
          __this_03.fields.m_Collider = iVar36;
          pUVar16 = UnityEngine_RaycastHit__get_collider(__this_03,(MethodInfo *)&local_68);
          if (pSVar19 == (System_Object_array *)0x0) goto LAB_03ed7839;
          if ((pUVar16 != (UnityEngine_Collider_o *)0x0) &&
             (lVar20 = il2cpp_runtime_glue(pUVar16,(((pSVar19->obj).klass)->_1).element_class),
             lVar20 == 0)) {
            uVar21 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar21,0);
          }
          if ((int)pSVar19->max_length == 0) break;
          pSVar19->m_Items[0] = (Il2CppObject *)pUVar16;
          il2cpp_runtime_glue(pSVar19->m_Items,pUVar16);
          __this_06 = (CustomLogic_CustomLogicColliderBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor(__this_06,pSVar19,(MethodInfo *)0x0);
          (__this_05->fields)._ColliderInfo_k__BackingField = __this_06;
          il2cpp_runtime_glue(&(__this_05->fields)._ColliderInfo_k__BackingField,__this_06);
          lVar20 = MethodInfo_Void_Add;
          pSVar9 = (System_Collections_Generic_List_object__o *)
                   CONCAT44(in_stack_ffffffffffffff5c,fVar31);
          if (pSVar9 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03ed7839;
          piVar1 = &(pSVar9->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar19 = (pSVar9->fields)._items;
          uVar22 = CONCAT44(uVar28,uVar27);
          if (pSVar19 == (System_Object_array *)0x0) goto LAB_03ed7839;
          uVar7 = (pSVar9->fields)._size;
          __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)CONCAT44(uVar35,uVar34);
          if (uVar7 < (uint)pSVar19->max_length) {
            (pSVar9->fields)._size = uVar7 + 1;
            pSVar19->m_Items[(int)uVar7] = (Il2CppObject *)__this_05;
            il2cpp_runtime_glue(pSVar19->m_Items + (int)uVar7);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar9,(Il2CppObject *)__this_05,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar22 = uVar22 + 1;
        uVar7 = (uint)pUVar15->max_length;
        pUVar24 = pUVar24 + 1;
        if ((long)(int)uVar7 <= (long)uVar22) {
          return __this_04;
        }
      } while (uVar22 < uVar7);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ed7839:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$BoxCast
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPhysicsBuiltin__BoxCast (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, CustomLogic_CustomLogicVector3Builtin_o* dimensions, CustomLogic_CustomLogicQuaternionBuiltin_o* orientation, System_String_o* collideWith, const MethodInfo* method);
// 0x3ed7860

Il2CppObject *
CustomLogic_CustomLogicPhysicsBuiltin__BoxCast
          (CustomLogic_CustomLogicVector3Builtin_o *start,
          CustomLogic_CustomLogicVector3Builtin_o *end,
          CustomLogic_CustomLogicVector3Builtin_o *dimensions,
          CustomLogic_CustomLogicQuaternionBuiltin_o *orientation,System_String_o *collideWith,
          MethodInfo *method)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar4;
  int iVar8;
  UnityEngine_RaycastHit_o __this;
  undefined1 auVar9 [16];
  UnityEngine_Quaternion_Fields orientation_00;
  int32_t iVar10;
  UnityEngine_LayerMask_o UVar11;
  bool_conflict bVar12;
  UnityEngine_Collider_o *other;
  CustomLogic_BuiltinClassInstance_o *pCVar13;
  float fVar14;
  float fVar18;
  float fVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Dc;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  UnityEngine_Vector3_o center;
  UnityEngine_Vector3_o halfExtents;
  UnityEngine_Vector3_o direction;
  undefined8 in_stack_ffffffffffffff3c;
  float fVar22;
  int32_t iVar23;
  undefined8 local_98;
  float local_88;
  float fStack_84;
  Il2CppMethodPointer local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod pIStack_48;
  uint32_t uStack_40;
  float local_3c;
  float fStack_38;
  undefined8 uStack_34;
  
  if (DAT_05703a0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703a0f = '\x01';
  }
  fStack_38 = 0.0;
  uStack_34 = 0;
  pIStack_48 = (InvokerMethod)0x0;
  uStack_40 = 0;
  local_3c = 0.0;
  local_58 = (Il2CppMethodPointer)0x0;
  pIStack_50 = (Il2CppMethodPointer)0x0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1 = (start->fields).Value.fields.x;
    uVar5 = (start->fields).Value.fields.y;
    center.fields.y = (float)uVar5;
    center.fields.x = (float)uVar1;
    fVar22 = (start->fields).Value.fields.z;
    fVar2 = (end->fields).Value.fields.x;
    fVar6 = (end->fields).Value.fields.y;
    fVar15 = 0.0;
    fVar20 = (end->fields).Value.fields.z;
    if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar10 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    if (dimensions != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      uVar3 = (dimensions->fields).Value.fields.x;
      uVar7 = (dimensions->fields).Value.fields.y;
      fVar18 = (dimensions->fields).Value.fields.z;
      if (DAT_056fde20 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Math);
        DAT_056fde20 = '\x01';
      }
      fVar2 = fVar2 - (float)uVar1;
      fVar6 = fVar6 - (float)uVar5;
      fVar15 = fVar15 - 0.0;
      fVar20 = fVar20 - fVar22;
      if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
        il2cpp_init_class();
      }
      fVar21 = fVar20 * fVar20 + fVar6 * fVar6 + fVar2 * fVar2;
      if (fVar21 < 0.0) {
        fVar14 = sqrtf(fVar21);
        uVar16 = extraout_XMM0_Dc;
        uVar17 = extraout_XMM0_Dd;
      }
      else {
        uVar16 = 0;
        uVar17 = 0;
        fVar14 = SQRT(fVar21);
      }
      if (1e-05 < fVar14) {
        fVar20 = fVar20 / fVar14;
        auVar9._4_4_ = fVar6;
        auVar9._0_4_ = fVar2;
        auVar9._8_4_ = fVar15;
        auVar9._12_4_ = 0;
        auVar19._4_4_ = fVar14;
        auVar19._0_4_ = fVar14;
        auVar19._8_4_ = uVar16;
        auVar19._12_4_ = uVar17;
        auVar19 = divps(auVar9,auVar19);
        uVar16 = auVar19._0_4_;
        uVar17 = auVar19._4_4_;
        iVar23 = auVar19._8_4_;
      }
      else {
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        uVar4 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
        fVar20 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
        uVar16 = (undefined4)uVar4;
        uVar17 = (undefined4)((ulong)uVar4 >> 0x20);
        iVar23 = 0;
      }
      if (orientation != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) {
        orientation_00 = (orientation->fields).Value.fields;
        if (DAT_056fde1c == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Math);
          DAT_056fde1c = '\x01';
          iVar8 = *(int *)(TypeInfo_Math + 0xe4);
        }
        else {
          iVar8 = *(int *)(TypeInfo_Math + 0xe4);
        }
        if (iVar8 == 0) {
          il2cpp_init_class();
        }
        if (fVar21 < 0.0) {
          fVar21 = sqrtf(fVar21);
        }
        else {
          fVar21 = SQRT(fVar21);
        }
        if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
          il2cpp_init_class();
        }
        fVar18 = fVar18 * 0.5;
        UVar11 = Utility_PhysicsLayer__CopyMask(iVar10,(MethodInfo *)0x0);
        iVar10 = UnityEngine_LayerMask__get_value
                           ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff50,
                            (MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pCVar13 = (CustomLogic_BuiltinClassInstance_o *)0x0;
        direction.fields.y = (float)uVar17;
        direction.fields.x = (float)uVar16;
        center.fields.z = fVar22;
        halfExtents.fields.z = fVar18;
        halfExtents.fields.x = (float)uVar3 * 0.5;
        halfExtents.fields.y = (float)uVar7 * 0.5;
        direction.fields.z = fVar20;
        fVar2 = fVar21;
        bVar12 = UnityEngine_Physics__BoxCast
                           (center,halfExtents,direction,(UnityEngine_RaycastHit_o *)&local_58,
                            (UnityEngine_Quaternion_o)orientation_00,fVar21,iVar10,(MethodInfo *)0x0
                           );
        if ((char)bVar12 != '\0') {
          __this.fields.m_Point.fields.y = (float)(int)in_stack_ffffffffffffff3c;
          __this.fields.m_Point.fields.z = (float)(int)((ulong)in_stack_ffffffffffffff3c >> 0x20);
          __this.fields.m_Point.fields.x = fVar21;
          __this.fields.m_Normal.fields.x = fVar20;
          __this.fields.m_Normal.fields.y = fVar2;
          __this.fields.m_Normal.fields.z = fVar18;
          __this.fields.m_FaceID = (uint32_t)UVar11.fields.m_Mask;
          __this.fields.m_Distance = fVar22;
          __this.fields.m_UV.fields.x = (float)uVar16;
          __this.fields.m_UV.fields.y = (float)uVar17;
          __this.fields.m_Collider = iVar23;
          other = UnityEngine_RaycastHit__get_collider(__this,(MethodInfo *)&local_58);
          pCVar13 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(other,(MethodInfo *)0x0);
        }
        return (Il2CppObject *)pCVar13;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$BoxCastAll
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicPhysicsBuiltin__BoxCastAll (CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, CustomLogic_CustomLogicVector3Builtin_o* dimensions, CustomLogic_CustomLogicQuaternionBuiltin_o* orientation, System_String_o* collideWith, const MethodInfo* method);
// 0x3ed7c10

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicPhysicsBuiltin__BoxCastAll
          (CustomLogic_CustomLogicVector3Builtin_o *start,
          CustomLogic_CustomLogicVector3Builtin_o *end,
          CustomLogic_CustomLogicVector3Builtin_o *dimensions,
          CustomLogic_CustomLogicQuaternionBuiltin_o *orientation,System_String_o *collideWith,
          MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  int32_t *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  byte bVar9;
  uint uVar10;
  UnityEngine_Vector2_Fields UVar11;
  System_Collections_Generic_List_object__o *pSVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  UnityEngine_RaycastHit_o __this;
  UnityEngine_RaycastHit_o __this_00;
  UnityEngine_RaycastHit_o __this_01;
  UnityEngine_RaycastHit_o __this_02;
  UnityEngine_RaycastHit_o __this_03;
  UnityEngine_Vector3_Fields center;
  int32_t iVar15;
  UnityEngine_LayerMask_o UVar16;
  UnityEngine_RaycastHit_array *pUVar17;
  CustomLogic_CustomLogicListBuiltin_o *__this_04;
  UnityEngine_Collider_o *pUVar18;
  CustomLogic_BuiltinClassInstance_o *pCVar19;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_05;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar20;
  System_Object_array *pSVar21;
  long lVar22;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_06;
  undefined8 uVar23;
  ulong uVar24;
  CustomLogic_BuiltinClassInstance_o *pCVar25;
  UnityEngine_RaycastHit_o *pUVar26;
  float fVar27;
  float fVar28;
  float fVar32;
  undefined4 uVar29;
  undefined4 extraout_XMM0_Dc;
  float fVar30;
  int32_t extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 uVar31;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  UnityEngine_Vector3_o UVar36;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Vector3_o direction;
  UnityEngine_Quaternion_o orientation_00;
  undefined4 in_stack_ffffffffffffff1c;
  undefined4 in_stack_ffffffffffffff2c;
  undefined4 in_stack_ffffffffffffff34;
  undefined1 local_b8 [32];
  float local_98;
  float fStack_94;
  undefined1 local_88 [32];
  float fStack_68;
  float fStack_64;
  int32_t iStack_60;
  Il2CppType **local_58;
  _union_13 _Stack_50;
  _union_14 local_48;
  undefined8 uStack_40;
  
  if (DAT_05703a10 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLineCastHitResultBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapObjectBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_MapLoader);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhysicsLayer);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703a10 = '\x01';
  }
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  iStack_60 = 0;
  local_88._16_8_ = (InvokerMethod)0x0;
  local_88._24_4_ = 0;
  local_88._28_4_ = 0;
  local_88._0_8_ = (Il2CppMethodPointer)0x0;
  local_88._8_8_ = (Il2CppMethodPointer)0x0;
  if ((start == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
     (end == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) goto LAB_03ed834f;
  pUVar1 = &(start->fields).Value;
  uVar3 = (pUVar1->fields).x;
  uVar6 = (pUVar1->fields).y;
  fVar35 = (start->fields).Value.fields.z;
  center = pUVar1->fields;
  uVar4 = (end->fields).Value.fields.x;
  uVar7 = (end->fields).Value.fields.y;
  fVar34 = (end->fields).Value.fields.z;
  if (*(int *)(TypeInfo_MapLoader + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar15 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
  if (dimensions == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) goto LAB_03ed834f;
  fVar5 = (dimensions->fields).Value.fields.x;
  fVar8 = (dimensions->fields).Value.fields.y;
  fVar30 = 0.0;
  fVar32 = (dimensions->fields).Value.fields.z;
  if (DAT_056fde20 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde20 = '\x01';
  }
  local_b8._0_4_ = (float)uVar4 - (float)uVar3;
  local_b8._4_4_ = (float)uVar7 - (float)uVar6;
  fVar34 = fVar34 - fVar35;
  local_b8._8_8_ = 0;
  if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar35 = fVar34 * fVar34 +
           (float)local_b8._4_4_ * (float)local_b8._4_4_ +
           (float)local_b8._0_4_ * (float)local_b8._0_4_;
  if (fVar35 < 0.0) {
    fVar27 = sqrtf(fVar35);
    uVar29 = extraout_XMM0_Dc;
    uVar31 = extraout_XMM0_Dd;
    if (fVar27 <= 1e-05) goto LAB_03ed7e07;
LAB_03ed7e75:
    fVar34 = fVar34 / fVar27;
    auVar33._4_4_ = fVar27;
    auVar33._0_4_ = fVar27;
    auVar33._8_4_ = uVar29;
    auVar33._12_4_ = uVar31;
    auVar33 = divps(local_b8._0_16_,auVar33);
    uVar23 = auVar33._0_8_;
  }
  else {
    uVar29 = 0;
    uVar31 = 0;
    fVar27 = SQRT(fVar35);
    if (1e-05 < fVar27) goto LAB_03ed7e75;
LAB_03ed7e07:
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar23 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar34 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
  }
  if (orientation == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0) goto LAB_03ed834f;
  local_48 = *(_union_14 *)&(orientation->fields).Value.fields;
  uStack_40._0_4_ = 0;
  uStack_40._4_2_ = 0;
  uStack_40._6_2_ = 0;
  local_58 = *(Il2CppType ***)&(orientation->fields).Value.fields.z;
  _Stack_50.rgctx_data = (Il2CppRGCTXData *)0x0;
  if (DAT_056fde1c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Math);
    DAT_056fde1c = '\x01';
    if (*(int *)(TypeInfo_Math + 0xe4) != 0) goto LAB_03ed7ecd;
LAB_03ed7f03:
    il2cpp_init_class();
    if (0.0 <= fVar35) goto LAB_03ed7ed5;
LAB_03ed7f16:
    fVar35 = sqrtf(fVar35);
  }
  else {
    if (*(int *)(TypeInfo_Math + 0xe4) == 0) goto LAB_03ed7f03;
LAB_03ed7ecd:
    if (fVar35 < 0.0) goto LAB_03ed7f16;
LAB_03ed7ed5:
    fVar35 = SQRT(fVar35);
  }
  if (*(int *)(TypeInfo_PhysicsLayer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar5 = fVar5 * 0.5;
  fVar8 = fVar8 * 0.5;
  fVar30 = fVar30 * 0.0;
  fVar32 = fVar32 * 0.5;
  UVar16 = Utility_PhysicsLayer__CopyMask(iVar15,(MethodInfo *)0x0);
  iVar15 = UnityEngine_LayerMask__get_value
                     ((UnityEngine_LayerMask_Fields)(int32_t)&stack0xffffffffffffff30,
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
    il2cpp_init_class();
  }
  UVar36.fields.y = fVar8;
  UVar36.fields.x = fVar5;
  UVar36.fields.z = fVar32;
  direction.fields.z = fVar34;
  direction.fields.x = (float)(int)uVar23;
  direction.fields.y = (float)(int)((ulong)uVar23 >> 0x20);
  orientation_00.fields._8_8_ = local_58;
  orientation_00.fields._0_8_ = local_48.genericMethod;
  fVar27 = fVar35;
  pUVar17 = UnityEngine_Physics__BoxCastAll
                      ((UnityEngine_Vector3_o)center,UVar36,direction,orientation_00,fVar35,iVar15,
                       (MethodInfo *)0x0);
  __this_04 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_04,(MethodInfo *)0x0);
  if (pUVar17 != (UnityEngine_RaycastHit_array *)0x0) {
    if ((int)pUVar17->max_length < 1) {
      return __this_04;
    }
    pUVar26 = pUVar17->m_Items;
    uVar24 = 0;
    if ((pUVar17->max_length & 0xffffffff) != 0) {
      do {
        local_88._0_8_ = *(undefined8 *)&(pUVar26->fields).m_Point.fields;
        local_88._8_8_ = *(undefined8 *)&(pUVar26->fields).m_Point.fields.z;
        local_88._16_8_ = *(undefined8 *)&(pUVar26->fields).m_Normal.fields.y;
        uVar13 = (pUVar26->fields).m_FaceID;
        uVar14 = (pUVar26->fields).m_Distance;
        UVar11 = (pUVar26->fields).m_UV.fields;
        iStack_60 = (pUVar26->fields).m_Collider;
        fStack_68 = UVar11.x;
        fStack_64 = UVar11.y;
        __this.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff1c;
        __this.fields.m_Point.fields.x = fVar35;
        __this.fields.m_Point.fields.z = fVar32;
        __this.fields.m_Normal.fields.x = fVar27;
        __this.fields.m_Normal.fields.y = fVar34;
        __this.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff2c;
        __this.fields.m_FaceID = (uint32_t)UVar16.fields.m_Mask;
        __this.fields.m_Distance = (float)in_stack_ffffffffffffff34;
        __this.fields.m_UV.fields.x = fVar5;
        __this.fields.m_UV.fields.y = fVar8;
        __this.fields.m_Collider = (int32_t)fVar30;
        local_88._24_4_ = uVar13;
        local_88._28_4_ = uVar14;
        pUVar18 = UnityEngine_RaycastHit__get_collider(__this,(MethodInfo *)local_88);
        pCVar19 = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar18,(MethodInfo *)0x0);
        if (pCVar19 != (CustomLogic_BuiltinClassInstance_o *)0x0) {
          if (__this_04 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) goto LAB_03ed834f;
          pSVar12 = (__this_04->fields).List;
          fVar34 = SUB84(pSVar12,0);
          in_stack_ffffffffffffff2c = (undefined4)((ulong)pSVar12 >> 0x20);
          __this_05 = (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)
                      il2cpp_runtime_glue(TypeInfo_CustomLogicLineCastHitResultBuiltin);
          CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_05,(MethodInfo *)0x0);
          bVar9 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
          pCVar25 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar9 <= (pCVar19->klass->_2).naturalAligment) &&
             (pCVar25 = (CustomLogic_BuiltinClassInstance_o *)0x0,
             (pCVar19->klass->_2).typeHierarchy[(ulong)bVar9 - 1] == TypeInfo_CustomLogicCharacterBuiltin)) {
            pCVar25 = pCVar19;
          }
          if (__this_05 == (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0)
          goto LAB_03ed834f;
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_05,(uint)(pCVar25 != (CustomLogic_BuiltinClassInstance_o *)0x0),
                     (MethodInfo *)0x0);
          bVar9 = (TypeInfo_CustomLogicMapObjectBuiltin->_2).naturalAligment;
          pCVar25 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if ((bVar9 <= (pCVar19->klass->_2).naturalAligment) &&
             (pCVar25 = pCVar19,
             (pCVar19->klass->_2).typeHierarchy[(ulong)bVar9 - 1] != TypeInfo_CustomLogicMapObjectBuiltin)) {
            pCVar25 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          }
          *(bool *)((long)&(__this_05->fields)._LookupBaseClassForVariables_k__BackingField + 1) =
               pCVar25 != (CustomLogic_BuiltinClassInstance_o *)0x0;
          __this_00.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff1c;
          __this_00.fields.m_Point.fields.x = fVar35;
          __this_00.fields.m_Point.fields.z = fVar32;
          __this_00.fields.m_Normal.fields.x = fVar27;
          __this_00.fields.m_Normal.fields.y = fVar34;
          __this_00.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff2c;
          __this_00.fields.m_FaceID = (uint32_t)UVar16.fields.m_Mask;
          __this_00.fields.m_Distance = (float)in_stack_ffffffffffffff34;
          __this_00.fields.m_UV.fields.x = fVar5;
          __this_00.fields.m_UV.fields.y = fVar8;
          __this_00.fields.m_Collider = (int32_t)fVar30;
          UVar36 = UnityEngine_RaycastHit__get_point(__this_00,(MethodInfo *)local_88);
          fVar32 = UVar36.fields.z;
          fVar5 = UVar36.fields.x;
          fVar8 = UVar36.fields.y;
          iVar15 = extraout_XMM0_Dc_00;
          pCVar20 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value.fields.y = fVar8;
          value.fields.x = fVar5;
          value.fields.z = fVar32;
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar20,value,(MethodInfo *)0x0);
          (__this_05->fields)._Point_k__BackingField = pCVar20;
          il2cpp_runtime_glue(&(__this_05->fields)._Point_k__BackingField);
          __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff1c;
          __this_01.fields.m_Point.fields.x = fVar35;
          __this_01.fields.m_Point.fields.z = fVar32;
          __this_01.fields.m_Normal.fields.x = fVar27;
          __this_01.fields.m_Normal.fields.y = fVar34;
          __this_01.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff2c;
          __this_01.fields.m_FaceID = (uint32_t)UVar16.fields.m_Mask;
          __this_01.fields.m_Distance = (float)in_stack_ffffffffffffff34;
          __this_01.fields.m_UV.fields.x = fVar5;
          __this_01.fields.m_UV.fields.y = fVar8;
          __this_01.fields.m_Collider = iVar15;
          UVar36 = UnityEngine_RaycastHit__get_normal(__this_01,(MethodInfo *)local_88);
          fVar32 = UVar36.fields.z;
          fVar5 = UVar36.fields.x;
          fVar8 = UVar36.fields.y;
          fVar30 = extraout_XMM0_Dc_01;
          pCVar20 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
          value_00.fields.y = fVar8;
          value_00.fields.x = fVar5;
          value_00.fields.z = fVar32;
          CustomLogic_CustomLogicVector3Builtin___ctor(pCVar20,value_00,(MethodInfo *)0x0);
          (__this_05->fields)._Normal_k__BackingField = pCVar20;
          il2cpp_runtime_glue(&(__this_05->fields)._Normal_k__BackingField,pCVar20);
          __this_02.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff1c;
          __this_02.fields.m_Point.fields.x = fVar35;
          __this_02.fields.m_Point.fields.z = fVar32;
          __this_02.fields.m_Normal.fields.x = fVar27;
          __this_02.fields.m_Normal.fields.y = fVar34;
          __this_02.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff2c;
          __this_02.fields.m_FaceID = (uint32_t)UVar16.fields.m_Mask;
          __this_02.fields.m_Distance = (float)in_stack_ffffffffffffff34;
          __this_02.fields.m_UV.fields.x = fVar5;
          __this_02.fields.m_UV.fields.y = fVar8;
          __this_02.fields.m_Collider = (int32_t)fVar30;
          fVar28 = UnityEngine_RaycastHit__get_distance(__this_02,(MethodInfo *)local_88);
          (__this_05->fields)._IsMapObject_k__BackingField = (bool_conflict)fVar28;
          (__this_05->fields)._Collider_k__BackingField = pCVar19;
          il2cpp_runtime_glue(&(__this_05->fields)._Collider_k__BackingField,pCVar19);
          pSVar21 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
          __this_03.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff1c;
          __this_03.fields.m_Point.fields.x = fVar35;
          __this_03.fields.m_Point.fields.z = fVar32;
          __this_03.fields.m_Normal.fields.x = fVar27;
          __this_03.fields.m_Normal.fields.y = fVar34;
          __this_03.fields.m_Normal.fields.z = (float)in_stack_ffffffffffffff2c;
          __this_03.fields.m_FaceID = (uint32_t)UVar16.fields.m_Mask;
          __this_03.fields.m_Distance = (float)in_stack_ffffffffffffff34;
          __this_03.fields.m_UV.fields.x = fVar5;
          __this_03.fields.m_UV.fields.y = fVar8;
          __this_03.fields.m_Collider = (int32_t)fVar30;
          pUVar18 = UnityEngine_RaycastHit__get_collider(__this_03,(MethodInfo *)local_88);
          if (pSVar21 == (System_Object_array *)0x0) goto LAB_03ed834f;
          if ((pUVar18 != (UnityEngine_Collider_o *)0x0) &&
             (lVar22 = il2cpp_runtime_glue(pUVar18,(((pSVar21->obj).klass)->_1).element_class),
             lVar22 == 0)) {
            uVar23 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar23,0);
          }
          if ((int)pSVar21->max_length == 0) break;
          pSVar21->m_Items[0] = (Il2CppObject *)pUVar18;
          il2cpp_runtime_glue(pSVar21->m_Items,pUVar18);
          __this_06 = (CustomLogic_CustomLogicColliderBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor(__this_06,pSVar21,(MethodInfo *)0x0);
          (__this_05->fields)._ColliderInfo_k__BackingField = __this_06;
          il2cpp_runtime_glue(&(__this_05->fields)._ColliderInfo_k__BackingField,__this_06);
          lVar22 = MethodInfo_Void_Add;
          pSVar12 = (System_Collections_Generic_List_object__o *)
                    CONCAT44(in_stack_ffffffffffffff2c,fVar34);
          if (pSVar12 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03ed834f;
          piVar2 = &(pSVar12->fields)._version;
          *piVar2 = *piVar2 + 1;
          pSVar21 = (pSVar12->fields)._items;
          if (pSVar21 == (System_Object_array *)0x0) goto LAB_03ed834f;
          uVar10 = (pSVar12->fields)._size;
          if (uVar10 < (uint)pSVar21->max_length) {
            (pSVar12->fields)._size = uVar10 + 1;
            pSVar21->m_Items[(int)uVar10] = (Il2CppObject *)__this_05;
            il2cpp_runtime_glue(pSVar21->m_Items + (int)uVar10);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar12,(Il2CppObject *)__this_05,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar22 + 0x20) + 0xc0) + 0x70));
          }
        }
        uVar24 = uVar24 + 1;
        uVar10 = (uint)pUVar17->max_length;
        pUVar26 = pUVar26 + 1;
        if ((long)(int)uVar10 <= (long)uVar24) {
          return __this_04;
        }
      } while (uVar24 < uVar10);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03ed834f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$ClosestPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPhysicsBuiltin__ClosestPoint (CustomLogic_CustomLogicVector3Builtin_o* point, CustomLogic_CustomLogicColliderBuiltin_o* collider, CustomLogic_CustomLogicVector3Builtin_o* position, CustomLogic_CustomLogicQuaternionBuiltin_o* rotation, const MethodInfo* method);
// 0x3ed8370

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPhysicsBuiltin__ClosestPoint
          (CustomLogic_CustomLogicVector3Builtin_o *point,
          CustomLogic_CustomLogicColliderBuiltin_o *collider,
          CustomLogic_CustomLogicVector3Builtin_o *position,
          CustomLogic_CustomLogicQuaternionBuiltin_o *rotation,MethodInfo *method)

{
  UnityEngine_Collider_o *collider_00;
  UnityEngine_Vector3_Fields point_00;
  UnityEngine_Vector3_Fields position_00;
  UnityEngine_Quaternion_Fields rotation_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o value;
  
  if (DAT_05703a11 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703a11 = '\x01';
  }
  if ((((point != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
       (collider != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0)) &&
      (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (rotation != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) {
    point_00 = (point->fields).Value.fields;
    collider_00 = (collider->fields).collider;
    position_00 = (position->fields).Value.fields;
    rotation_00 = (rotation->fields).Value.fields;
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = UnityEngine_Physics__ClosestPoint
                      (point_00,collider_00,position_00,(UnityEngine_Quaternion_o)rotation_00,
                       (MethodInfo *)0x0);
    __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this,value,(MethodInfo *)0x0);
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$ComputePenetration
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPhysicsBuiltin__ComputePenetration (CustomLogic_CustomLogicColliderBuiltin_o* colliderA, CustomLogic_CustomLogicVector3Builtin_o* positionA, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationA, CustomLogic_CustomLogicColliderBuiltin_o* colliderB, CustomLogic_CustomLogicVector3Builtin_o* positionB, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationB, const MethodInfo* method);
// 0x3ed84b0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPhysicsBuiltin__ComputePenetration
          (CustomLogic_CustomLogicColliderBuiltin_o *colliderA,
          CustomLogic_CustomLogicVector3Builtin_o *positionA,
          CustomLogic_CustomLogicQuaternionBuiltin_o *rotationA,
          CustomLogic_CustomLogicColliderBuiltin_o *colliderB,
          CustomLogic_CustomLogicVector3Builtin_o *positionB,
          CustomLogic_CustomLogicQuaternionBuiltin_o *rotationB,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  UnityEngine_Collider_o *colliderA_00;
  UnityEngine_Collider_o *colliderB_00;
  bool_conflict bVar7;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  float fVar8;
  float fVar9;
  UnityEngine_Vector3_o positionA_00;
  UnityEngine_Vector3_o value;
  UnityEngine_Vector3_o positionB_00;
  UnityEngine_Quaternion_o rotationA_00;
  UnityEngine_Quaternion_o rotationB_00;
  float local_c0;
  float local_bc;
  UnityEngine_Vector3_Fields local_b8;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (DAT_05703a12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703a12 = '\x01';
  }
  local_b8.z = 0.0;
  local_b8.x = 0.0;
  local_b8.y = 0.0;
  local_c0 = 0.0;
  if ((((colliderA != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
       (positionA != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
      (rotationA != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
     (((colliderB != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0 &&
       (positionB != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
      (rotationB != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)))) {
    colliderA_00 = (colliderA->fields).collider;
    uVar1._0_4_ = (positionA->fields).Value.fields.x;
    uVar1._4_4_ = (positionA->fields).Value.fields.y;
    fVar8 = (positionA->fields).Value.fields.z;
    uVar2._0_4_ = (rotationA->fields).Value.fields.x;
    uVar2._4_4_ = (rotationA->fields).Value.fields.y;
    uVar3._0_4_ = (rotationA->fields).Value.fields.z;
    uVar3._4_4_ = (rotationA->fields).Value.fields.w;
    colliderB_00 = (colliderB->fields).collider;
    uVar4._0_4_ = (positionB->fields).Value.fields.x;
    uVar4._4_4_ = (positionB->fields).Value.fields.y;
    fVar9 = (positionB->fields).Value.fields.z;
    uVar5._0_4_ = (rotationB->fields).Value.fields.x;
    uVar5._4_4_ = (rotationB->fields).Value.fields.y;
    uVar6._0_4_ = (rotationB->fields).Value.fields.z;
    uVar6._4_4_ = (rotationB->fields).Value.fields.w;
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      uStack_90 = 0;
      local_a8._0_4_ = fVar8;
      uStack_40 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      local_bc = fVar9;
      local_98 = uVar1;
      local_88 = uVar6;
      local_78 = uVar5;
      local_68 = uVar4;
      local_58 = uVar3;
      local_48 = uVar2;
      il2cpp_init_class();
      uVar1._0_4_ = (undefined4)local_98;
      uVar1._4_4_ = local_98._4_4_;
      fVar8 = (float)local_a8._0_4_;
      uVar2._0_4_ = (undefined4)local_48;
      uVar2._4_4_ = local_48._4_4_;
      uVar3._0_4_ = (undefined4)local_58;
      uVar3._4_4_ = local_58._4_4_;
      uVar4._0_4_ = (undefined4)local_68;
      uVar4._4_4_ = local_68._4_4_;
      fVar9 = local_bc;
      uVar5._0_4_ = (undefined4)local_78;
      uVar5._4_4_ = local_78._4_4_;
      uVar6._0_4_ = (undefined4)local_88;
      uVar6._4_4_ = local_88._4_4_;
    }
    positionA_00.fields.y = (float)uVar1._4_4_;
    positionA_00.fields.x = (float)(undefined4)uVar1;
    positionA_00.fields.z = fVar8;
    positionB_00.fields.y = (float)uVar4._4_4_;
    positionB_00.fields.x = (float)(undefined4)uVar4;
    positionB_00.fields.z = fVar9;
    rotationA_00.fields.y = (float)uVar2._4_4_;
    rotationA_00.fields.x = (float)(undefined4)uVar2;
    rotationA_00.fields.w = (float)uVar3._4_4_;
    rotationA_00.fields.z = (float)(undefined4)uVar3;
    rotationB_00.fields.y = (float)uVar5._4_4_;
    rotationB_00.fields.x = (float)(undefined4)uVar5;
    rotationB_00.fields.w = (float)uVar6._4_4_;
    rotationB_00.fields.z = (float)(undefined4)uVar6;
    bVar7 = UnityEngine_Physics__ComputePenetration
                      (colliderA_00,positionA_00,rotationA_00,colliderB_00,positionB_00,rotationB_00
                       ,(UnityEngine_Vector3_o *)&local_b8,&local_c0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      __this = CustomLogic_CustomLogicVector3Builtin__get_Zero((MethodInfo *)0x0);
    }
    else {
      local_98 = CONCAT44(local_c0 * local_b8.y,local_c0 * local_b8.x);
      uStack_90 = 0;
      local_a8 = ZEXT416((uint)(local_c0 * local_b8.z));
      __this = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      value.fields.z = (float)local_a8._0_4_;
      value.fields.x = (float)(undefined4)local_98;
      value.fields.y = (float)local_98._4_4_;
      CustomLogic_CustomLogicVector3Builtin___ctor(__this,value,(MethodInfo *)0x0);
    }
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$AreCollidersOverlapping
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__AreCollidersOverlapping (CustomLogic_CustomLogicColliderBuiltin_o* colliderA, CustomLogic_CustomLogicVector3Builtin_o* positionA, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationA, CustomLogic_CustomLogicColliderBuiltin_o* colliderB, CustomLogic_CustomLogicVector3Builtin_o* positionB, CustomLogic_CustomLogicQuaternionBuiltin_o* rotationB, const MethodInfo* method);
// 0x3ed8690

bool_conflict
CustomLogic_CustomLogicPhysicsBuiltin__AreCollidersOverlapping
          (CustomLogic_CustomLogicColliderBuiltin_o *colliderA,
          CustomLogic_CustomLogicVector3Builtin_o *positionA,
          CustomLogic_CustomLogicQuaternionBuiltin_o *rotationA,
          CustomLogic_CustomLogicColliderBuiltin_o *colliderB,
          CustomLogic_CustomLogicVector3Builtin_o *positionB,
          CustomLogic_CustomLogicQuaternionBuiltin_o *rotationB,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  UnityEngine_Collider_o *colliderA_00;
  UnityEngine_Collider_o *colliderB_00;
  bool_conflict bVar9;
  UnityEngine_Vector3_o positionA_00;
  UnityEngine_Vector3_o positionB_00;
  UnityEngine_Quaternion_o rotationA_00;
  UnityEngine_Quaternion_o rotationB_00;
  float local_ac;
  UnityEngine_Vector3_Fields local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (DAT_05703a13 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Physics);
    DAT_05703a13 = '\x01';
  }
  local_a8.z = 0.0;
  local_a8.x = 0.0;
  local_a8.y = 0.0;
  local_ac = 0.0;
  if ((((colliderA != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
       (positionA != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
      (rotationA != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
     (((colliderB != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0 &&
       (positionB != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
      (rotationB != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)))) {
    colliderA_00 = (colliderA->fields).collider;
    uVar3._0_4_ = (positionA->fields).Value.fields.x;
    uVar3._4_4_ = (positionA->fields).Value.fields.y;
    fVar1 = (positionA->fields).Value.fields.z;
    uVar4._0_4_ = (rotationA->fields).Value.fields.x;
    uVar4._4_4_ = (rotationA->fields).Value.fields.y;
    uVar5._0_4_ = (rotationA->fields).Value.fields.z;
    uVar5._4_4_ = (rotationA->fields).Value.fields.w;
    colliderB_00 = (colliderB->fields).collider;
    uVar6._0_4_ = (positionB->fields).Value.fields.x;
    uVar6._4_4_ = (positionB->fields).Value.fields.y;
    fVar2 = (positionB->fields).Value.fields.z;
    uVar7._0_4_ = (rotationB->fields).Value.fields.x;
    uVar7._4_4_ = (rotationB->fields).Value.fields.y;
    uVar8._0_4_ = (rotationB->fields).Value.fields.z;
    uVar8._4_4_ = (rotationB->fields).Value.fields.w;
    if (*(int *)(TypeInfo_Physics + 0xe4) == 0) {
      uStack_40 = 0;
      uStack_50 = 0;
      uStack_60 = 0;
      uStack_70 = 0;
      uStack_80 = 0;
      uStack_90 = 0;
      local_98 = uVar8;
      local_88 = uVar7;
      local_78 = uVar6;
      local_68 = uVar5;
      local_58 = uVar4;
      local_48 = uVar3;
      il2cpp_init_class();
      uVar3._0_4_ = (undefined4)local_48;
      uVar3._4_4_ = local_48._4_4_;
      uVar4._0_4_ = (undefined4)local_58;
      uVar4._4_4_ = local_58._4_4_;
      uVar5._0_4_ = (undefined4)local_68;
      uVar5._4_4_ = local_68._4_4_;
      uVar6._0_4_ = (undefined4)local_78;
      uVar6._4_4_ = local_78._4_4_;
      uVar7._0_4_ = (undefined4)local_88;
      uVar7._4_4_ = local_88._4_4_;
      uVar8._0_4_ = (undefined4)local_98;
      uVar8._4_4_ = local_98._4_4_;
    }
    positionA_00.fields.y = (float)uVar3._4_4_;
    positionA_00.fields.x = (float)(undefined4)uVar3;
    positionA_00.fields.z = fVar1;
    positionB_00.fields.y = (float)uVar6._4_4_;
    positionB_00.fields.x = (float)(undefined4)uVar6;
    positionB_00.fields.z = fVar2;
    rotationA_00.fields.y = (float)uVar4._4_4_;
    rotationA_00.fields.x = (float)(undefined4)uVar4;
    rotationA_00.fields.w = (float)uVar5._4_4_;
    rotationA_00.fields.z = (float)(undefined4)uVar5;
    rotationB_00.fields.y = (float)uVar7._4_4_;
    rotationB_00.fields.x = (float)(undefined4)uVar7;
    rotationB_00.fields.w = (float)uVar8._4_4_;
    rotationB_00.fields.z = (float)(undefined4)uVar8;
    bVar9 = UnityEngine_Physics__ComputePenetration
                      (colliderA_00,positionA_00,rotationA_00,colliderB_00,positionB_00,rotationB_00
                       ,(UnityEngine_Vector3_o *)&local_a8,&local_ac,(MethodInfo *)0x0);
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPhysicsBuiltin__get_ClassName (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x3ed8800

System_String_o *
CustomLogic_CustomLogicPhysicsBuiltin__get_ClassName
          (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703a14 == '\0') {
    il2cpp_init_method_metadata(&"Physics");
    DAT_05703a14 = '\x01';
  }
  return "Physics";
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__get_IsAbstract (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x3ed8830

bool_conflict
CustomLogic_CustomLogicPhysicsBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__get_IsStatic (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x3ed8840

bool_conflict
CustomLogic_CustomLogicPhysicsBuiltin__get_IsStatic
          (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicPhysicsBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPhysicsBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPhysicsBuiltin_o* __this, const MethodInfo* method);
// 0x3ed8850

bool_conflict
CustomLogic_CustomLogicPhysicsBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicPhysicsBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


