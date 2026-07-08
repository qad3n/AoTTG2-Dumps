// Type: CustomLogic.CustomLogicCollisionBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollisionBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicCollisionBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollisionBuiltin_o* CustomLogic_CustomLogicCollisionBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3de3fd0

CustomLogic_CustomLogicCollisionBuiltin_o *
CustomLogic_CustomLogicCollisionBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this;
  undefined1 local_14 [4];
  
  il2cpp_glue_01f2f1a0();
  pSVar1 = System_Int32__ToString((int32_t)local_14,(MethodInfo *)0x0);
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicCollisionBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicCollisionBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3de4e90

void CustomLogic_CustomLogicCollisionBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702a15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702a15 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3de4f00

void CustomLogic_CustomLogicCollisionBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactPoint>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactPoint_b__6_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de4f10

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_<>c__<__CreateMethodBinding__GetContactPoint>b__6_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Collision_o *__this_00;
  Il2CppObject *obj;
  UnityEngine_ContactPoint_o __this_01;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  undefined1 auStack_40 [32];
  undefined8 uStack_20;
  
  if (DAT_05702a16 == '\0') {
    uStack_20._0_4_ = 1.3066167e-36;
    uStack_20._4_4_ = 0;
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_20._0_4_ = 1.3066178e-36;
    uStack_20._4_4_ = 0;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a16 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      uStack_20 = &UNK_03de4f9b;
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_20._0_4_ = 1.3066219e-36;
      uStack_20._4_4_ = 0;
      il2cpp_init_class();
    }
    uStack_20._0_4_ = 1.3066235e-36;
    uStack_20._4_4_ = 0;
    index = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      if (DAT_05702a05 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
        DAT_05702a05 = '\x01';
      }
      __this_00 = (__c->fields).collision;
      if (__this_00 != (UnityEngine_Collision_o *)0x0) {
        UnityEngine_Collision__GetContact
                  ((UnityEngine_ContactPoint_o *)auStack_40,__this_00,index,(MethodInfo *)0x0);
        __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
        __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
        __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
        __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
        __this_01.fields.m_Normal.fields.y = (float)auStack_40._0_4_;
        __this_01.fields.m_Normal.fields.z = (float)auStack_40._4_4_;
        __this_01.fields.m_Impulse.fields.x = (float)auStack_40._8_4_;
        __this_01.fields.m_Impulse.fields.y = (float)auStack_40._12_4_;
        __this_01.fields.m_Impulse.fields.z = (float)auStack_40._16_4_;
        __this_01.fields.m_ThisColliderInstanceID = auStack_40._20_4_;
        __this_01.fields.m_OtherColliderInstanceID = auStack_40._24_4_;
        __this_01.fields.m_Separation = (float)auStack_40._28_4_;
        UVar2 = UnityEngine_ContactPoint__get_point
                          (__this_01,(MethodInfo *)&stack0xffffffffffffff78);
        fVar1 = UVar2.fields.z;
        __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        value.fields.z = fVar1;
        value.fields.x = (float)(int)UVar2.fields._0_8_;
        value.fields.y = (float)(int)((ulong)UVar2.fields._0_8_ >> 0x20);
        CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,value,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_02;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  uStack_20._0_4_ = 1.3066259e-36;
  uStack_20._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactNorms>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactNorms_b__7_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de4fa0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_<>c__<__CreateMethodBinding__GetContactNorms>b__7_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Collision_o *__this_00;
  Il2CppObject *obj;
  UnityEngine_ContactPoint_o __this_01;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  undefined1 auStack_40 [32];
  undefined8 uStack_20;
  
  if (DAT_05702a17 == '\0') {
    uStack_20._0_4_ = 1.3066296e-36;
    uStack_20._4_4_ = 0;
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_20._0_4_ = 1.3066307e-36;
    uStack_20._4_4_ = 0;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a17 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      uStack_20 = &UNK_03de502b;
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_20._0_4_ = 1.3066348e-36;
      uStack_20._4_4_ = 0;
      il2cpp_init_class();
    }
    uStack_20._0_4_ = 1.3066364e-36;
    uStack_20._4_4_ = 0;
    index = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      if (DAT_05702a06 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
        DAT_05702a06 = '\x01';
      }
      __this_00 = (__c->fields).collision;
      if (__this_00 != (UnityEngine_Collision_o *)0x0) {
        UnityEngine_Collision__GetContact
                  ((UnityEngine_ContactPoint_o *)auStack_40,__this_00,index,(MethodInfo *)0x0);
        __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
        __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
        __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
        __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
        __this_01.fields.m_Normal.fields.y = (float)auStack_40._0_4_;
        __this_01.fields.m_Normal.fields.z = (float)auStack_40._4_4_;
        __this_01.fields.m_Impulse.fields.x = (float)auStack_40._8_4_;
        __this_01.fields.m_Impulse.fields.y = (float)auStack_40._12_4_;
        __this_01.fields.m_Impulse.fields.z = (float)auStack_40._16_4_;
        __this_01.fields.m_ThisColliderInstanceID = auStack_40._20_4_;
        __this_01.fields.m_OtherColliderInstanceID = auStack_40._24_4_;
        __this_01.fields.m_Separation = (float)auStack_40._28_4_;
        UVar2 = UnityEngine_ContactPoint__get_normal
                          (__this_01,(MethodInfo *)&stack0xffffffffffffff78);
        fVar1 = UVar2.fields.z;
        __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        value.fields.z = fVar1;
        value.fields.x = (float)(int)UVar2.fields._0_8_;
        value.fields.y = (float)(int)((ulong)UVar2.fields._0_8_ >> 0x20);
        CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,value,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_02;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  uStack_20._0_4_ = 1.30663885e-36;
  uStack_20._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactImpulses>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactImpulses_b__8_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de5030

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_<>c__<__CreateMethodBinding__GetContactImpulses>b__8_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  UnityEngine_Collision_o *__this_00;
  Il2CppObject *obj;
  UnityEngine_ContactPoint_o __this_01;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  undefined1 auStack_40 [32];
  undefined8 uStack_20;
  
  if (DAT_05702a18 == '\0') {
    uStack_20._0_4_ = 1.3066425e-36;
    uStack_20._4_4_ = 0;
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    uStack_20._0_4_ = 1.3066436e-36;
    uStack_20._4_4_ = 0;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a18 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      uStack_20 = &UNK_03de50bb;
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      uStack_20._0_4_ = 1.3066477e-36;
      uStack_20._4_4_ = 0;
      il2cpp_init_class();
    }
    uStack_20._0_4_ = 1.3066493e-36;
    uStack_20._4_4_ = 0;
    index = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      if (DAT_05702a07 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
        DAT_05702a07 = '\x01';
      }
      __this_00 = (__c->fields).collision;
      if (__this_00 != (UnityEngine_Collision_o *)0x0) {
        UnityEngine_Collision__GetContact
                  ((UnityEngine_ContactPoint_o *)auStack_40,__this_00,index,(MethodInfo *)0x0);
        __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
        __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
        __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
        __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
        __this_01.fields.m_Normal.fields.y = (float)auStack_40._0_4_;
        __this_01.fields.m_Normal.fields.z = (float)auStack_40._4_4_;
        __this_01.fields.m_Impulse.fields.x = (float)auStack_40._8_4_;
        __this_01.fields.m_Impulse.fields.y = (float)auStack_40._12_4_;
        __this_01.fields.m_Impulse.fields.z = (float)auStack_40._16_4_;
        __this_01.fields.m_ThisColliderInstanceID = auStack_40._20_4_;
        __this_01.fields.m_OtherColliderInstanceID = auStack_40._24_4_;
        __this_01.fields.m_Separation = (float)auStack_40._28_4_;
        UVar2 = UnityEngine_ContactPoint__get_impulse
                          (__this_01,(MethodInfo *)&stack0xffffffffffffff78);
        fVar1 = UVar2.fields.z;
        __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        value.fields.z = fVar1;
        value.fields.x = (float)(int)UVar2.fields._0_8_;
        value.fields.y = (float)(int)((ulong)UVar2.fields._0_8_ >> 0x20);
        CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,value,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_02;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  uStack_20._0_4_ = 1.3066518e-36;
  uStack_20._4_4_ = 0;
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactSeparations>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactSeparations_b__9_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3de50c0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_<>c__<__CreateMethodBinding__GetContactSeparations>b__9_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method
          )

{
  Il2CppObject *obj;
  UnityEngine_Collision_o *__this_00;
  UnityEngine_ContactPoint_o __this_01;
  int32_t index;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float xyz;
  undefined1 in_stack_ffffffffffffff78 [12];
  undefined4 in_stack_ffffffffffffff84;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (DAT_05702a19 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702a19 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      if (DAT_05702a08 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
        DAT_05702a08 = '\x01';
      }
      __this_00 = (__c->fields).collision;
      if (__this_00 != (UnityEngine_Collision_o *)0x0) {
        UnityEngine_Collision__GetContact
                  ((UnityEngine_ContactPoint_o *)&_Stack_40,__this_00,index,(MethodInfo *)0x0);
        __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff84;
        __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78._0_4_;
        __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff78._4_4_;
        __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff78._8_4_;
        __this_01.fields.m_Normal.fields._4_8_ = _Stack_40.rgctx_data;
        __this_01.fields.m_Impulse.fields._0_8_ = _Stack_38.genericMethod;
        __this_01.fields._32_8_ = uStack_30;
        __this_01.fields._40_8_ = uStack_28;
        xyz = UnityEngine_ContactPoint__get_separation
                        (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
        __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,xyz,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_02;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollisionBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3de4060

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings__CreateMemberBinding
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
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  
  if (DAT_05702a0b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"ContactCount");
    il2cpp_init_method_metadata(&"GetContactPoint");
    il2cpp_init_method_metadata(&"Collider");
    il2cpp_init_method_metadata(&"GetContactImpulses");
    il2cpp_init_method_metadata(&"Impulse");
    il2cpp_init_method_metadata(&"GetContactSeparations");
    il2cpp_init_method_metadata(&"GetContactNorms");
    il2cpp_init_method_metadata(&"RelativeVelocity");
    DAT_05702a0b = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x454bad02) {
    if (uVar3 < 0x2cfc1e5e) {
      if (uVar3 == 0x2706c88a) {
        bVar4 = System_String__op_Equality(name,"RelativeVelocity",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702a0e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RelativeVelocit);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object);
            DAT_05702a0e = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x2cfc1e5d) &&
              (bVar4 = System_String__op_Equality(name,"Collider",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a0c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Collider_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object);
          DAT_05702a0c = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x3e98dfb0) {
      bVar4 = System_String__op_Equality(name,"GetContactNorms",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a11 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetContactNorms_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702a11 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x454bad01) &&
            (bVar4 = System_String__op_Equality(name,"GetContactImpulses",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a12 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetContactImpulse);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702a12 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0x4fa9d68e) {
    if (uVar3 == 0x4bf628c6) {
      bVar4 = System_String__op_Equality(name,"GetContactSeparations",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702a13 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetContactSeparat);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702a13 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x4fa9d68d) &&
            (bVar4 = System_String__op_Equality(name,"GetContactPoint",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a10 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetContactPoint_b);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702a10 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 8,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xb7ea1ec2) {
    bVar4 = System_String__op_Equality(name,"ContactCount",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702a0f == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ContactCount_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object);
        DAT_05702a0f = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0x7fde94f4) &&
          (bVar4 = System_String__op_Equality(name,"Impulse",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702a0d == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Impulse_g____ge);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object);
      DAT_05702a0d = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object);
    System_Func<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicCollisionBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__Collider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider (const MethodInfo* method);
// 0x3de4450

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (DAT_05702a0c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Collider_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object);
    DAT_05702a0c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__Impulse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Impulse (const MethodInfo* method);
// 0x3de44f0

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Impulse
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (DAT_05702a0d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Impulse_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object);
    DAT_05702a0d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__RelativeVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__RelativeVelocity (const MethodInfo* method);
// 0x3de4590

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__RelativeVelocity
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (DAT_05702a0e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RelativeVelocit);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object);
    DAT_05702a0e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__ContactCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__ContactCount (const MethodInfo* method);
// 0x3de4630

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__ContactCount
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (DAT_05702a0f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ContactCount_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object);
    DAT_05702a0f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactPoint (const MethodInfo* method);
// 0x3de46d0

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactPoint
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (DAT_05702a10 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetContactPoint_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702a10 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactNorms
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactNorms (const MethodInfo* method);
// 0x3de4820

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactNorms
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (DAT_05702a11 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetContactNorms_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702a11 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactImpulses
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactImpulses (const MethodInfo* method);
// 0x3de4970

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactImpulses
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (DAT_05702a12 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetContactImpulse);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702a12 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactSeparations
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactSeparations (const MethodInfo* method);
// 0x3de4ac0

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactSeparations
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *__this;
  
  if (DAT_05702a13 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetContactSeparat);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702a13 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicCollisionBuiltin__object____obje);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicCollisionBuiltin);
  return __this;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3de4c10

void CustomLogic_CustomLogicCollisionBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702a14 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"ContactCount");
    il2cpp_init_method_metadata(&"GetContactPoint");
    il2cpp_init_method_metadata(&"Collider");
    il2cpp_init_method_metadata(&"GetContactImpulses");
    il2cpp_init_method_metadata(&"Impulse");
    il2cpp_init_method_metadata(&"GetContactSeparations");
    il2cpp_init_method_metadata(&"GetContactNorms");
    il2cpp_init_method_metadata(&"RelativeVelocity");
    DAT_05702a14 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Collider",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Impulse",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RelativeVelocity",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ContactCount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetContactPoint",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetContactNorms",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetContactImpulses",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetContactSeparations",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__Collider>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_2_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x3de4dd0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings__<__CreatePropertyBinding__Collider>g____getter_2_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  System_Object_array *parameters;
  UnityEngine_Collider_o *pUVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (__i == (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702a04 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05702a04 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object);
  __this = (__i->fields).collision;
  if (__this != (UnityEngine_Collision_o *)0x0) {
    pUVar1 = UnityEngine_Collision__get_collider(__this,(MethodInfo *)0x0);
    if (parameters != (System_Object_array *)0x0) {
      if (pUVar1 != (UnityEngine_Collider_o *)0x0) {
        lVar2 = il2cpp_runtime_glue(pUVar1,(((parameters->obj).klass)->_1).element_class);
        if (lVar2 == 0) {
          uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar3,0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)pUVar1;
        il2cpp_runtime_glue(parameters->m_Items,pUVar1);
        auVar4 = il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
        CustomLogic_CustomLogicColliderBuiltin___ctor(auVar4._0_8_,parameters,auVar4._8_8_);
        return (Il2CppObject *)auVar4._0_8_;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__Impulse>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Impulse_g____getter_3_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x3de4df0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings__<__CreatePropertyBinding__Impulse>g____getter_3_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) &&
     (__this = (__i->fields).collision, __this != (UnityEngine_Collision_o *)0x0)) {
    v = UnityEngine_Collision__get_impulse(__this,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__RelativeVelocity>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__RelativeVelocity_g____getter_4_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x3de4e20

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings__<__CreatePropertyBinding__RelativeVelocity>g____getter_4_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  if ((__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) &&
     (__this = (__i->fields).collision, __this != (UnityEngine_Collision_o *)0x0)) {
    v = UnityEngine_Collision__get_relativeVelocity(__this,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__ContactCount>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__ContactCount_g____getter_5_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x3de4e50

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings__<__CreatePropertyBinding__ContactCount>g____getter_5_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) &&
     (__this = (__i->fields).collision, __this != (UnityEngine_Collision_o *)0x0)) {
    UnityEngine_Collision__get_contactCount(__this,(MethodInfo *)0x0);
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin___ctor (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x3de38a0

void CustomLogic_CustomLogicCollisionBuiltin___ctor
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702a02 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05702a02 = '\x01';
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


// CustomLogic.CustomLogicCollisionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin___ctor (CustomLogic_CustomLogicCollisionBuiltin_o* __this, System_Object_array* parameters, const MethodInfo* method);
// 0x3de3910

void CustomLogic_CustomLogicCollisionBuiltin___ctor
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,System_Object_array *parameters,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Collision_o *pUVar2;
  Il2CppClass *pIVar3;
  
  if (DAT_05702a03 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&TypeInfo_Collision);
    DAT_05702a03 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pIVar3 = TypeInfo_Collision;
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar2 = (UnityEngine_Collision_o *)parameters->m_Items[0];
  if (pUVar2 != (UnityEngine_Collision_o *)0x0) {
    bVar1 = (TypeInfo_Collision->_2).naturalAligment;
    if ((bVar1 <= (((Il2CppClass *)pUVar2->klass)->_2).naturalAligment) &&
       ((((Il2CppClass *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Collision)) {
      (__this->fields).collision = pUVar2;
      if ((bVar1 <= (((Il2CppClass *)pUVar2->klass)->_2).naturalAligment) &&
         ((((Il2CppClass *)pUVar2->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == pIVar3))
      goto LAB_03de39d2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(pUVar2,pIVar3);
  }
  (__this->fields).collision = (UnityEngine_Collision_o *)0x0;
LAB_03de39d2:
  il2cpp_runtime_glue(&(__this->fields).collision);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_Collider
// il2cpp: CustomLogic_CustomLogicColliderBuiltin_o* CustomLogic_CustomLogicCollisionBuiltin__get_Collider (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x3de39f0

CustomLogic_CustomLogicColliderBuiltin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_Collider
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  System_Object_array *parameters;
  UnityEngine_Collider_o *pUVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (DAT_05702a04 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05702a04 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object);
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    pUVar1 = UnityEngine_Collision__get_collider(__this_00,(MethodInfo *)0x0);
    if (parameters != (System_Object_array *)0x0) {
      if (pUVar1 != (UnityEngine_Collider_o *)0x0) {
        lVar2 = il2cpp_runtime_glue(pUVar1,(((parameters->obj).klass)->_1).element_class);
        if (lVar2 == 0) {
          uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar3,0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)pUVar1;
        il2cpp_runtime_glue(parameters->m_Items,pUVar1);
        auVar4 = il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
        CustomLogic_CustomLogicColliderBuiltin___ctor(auVar4._0_8_,parameters,auVar4._8_8_);
        return auVar4._0_8_;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_Impulse
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__get_Impulse (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x3de3ad0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_Impulse
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    v = UnityEngine_Collision__get_impulse(__this_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_RelativeVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x3de3af0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o v;
  
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    v = UnityEngine_Collision__get_relativeVelocity(__this_00,(MethodInfo *)0x0);
    pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
    return pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_ContactCount
// il2cpp: int32_t CustomLogic_CustomLogicCollisionBuiltin__get_ContactCount (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x3de3b10

int32_t CustomLogic_CustomLogicCollisionBuiltin__get_ContactCount
                  (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    iVar1 = UnityEngine_Collision__get_contactCount(__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactPoint (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x3de3b30

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactPoint
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  UnityEngine_ContactPoint_o __this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  UnityEngine_ContactPoint_o UStack_40;
  
  if (DAT_05702a05 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702a05 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact(&UStack_40,__this_00,index,(MethodInfo *)0x0);
    __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
    __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
    __this_01.fields.m_Normal.fields.y = UStack_40.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = UStack_40.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = UStack_40.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = UStack_40.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = UStack_40.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)UStack_40.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)UStack_40.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = UStack_40.fields.m_Impulse.fields.y;
    UVar2 = UnityEngine_ContactPoint__get_point(__this_01,(MethodInfo *)&stack0xffffffffffffff78);
    fVar1 = UVar2.fields.z;
    __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    value.fields.z = fVar1;
    value.fields.x = (float)(int)UVar2.fields._0_8_;
    value.fields.y = (float)(int)((ulong)UVar2.fields._0_8_ >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,value,(MethodInfo *)0x0);
    return __this_02;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactNorms
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactNorms (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x3de3c00

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactNorms
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  UnityEngine_ContactPoint_o __this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  UnityEngine_ContactPoint_o UStack_40;
  
  if (DAT_05702a06 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702a06 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact(&UStack_40,__this_00,index,(MethodInfo *)0x0);
    __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
    __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
    __this_01.fields.m_Normal.fields.y = UStack_40.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = UStack_40.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = UStack_40.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = UStack_40.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = UStack_40.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)UStack_40.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)UStack_40.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = UStack_40.fields.m_Impulse.fields.y;
    UVar2 = UnityEngine_ContactPoint__get_normal(__this_01,(MethodInfo *)&stack0xffffffffffffff78);
    fVar1 = UVar2.fields.z;
    __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    value.fields.z = fVar1;
    value.fields.x = (float)(int)UVar2.fields._0_8_;
    value.fields.y = (float)(int)((ulong)UVar2.fields._0_8_ >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,value,(MethodInfo *)0x0);
    return __this_02;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactImpulses
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x3de3cd0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  UnityEngine_ContactPoint_o __this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float fVar1;
  UnityEngine_Vector3_o UVar2;
  UnityEngine_Vector3_o value;
  undefined1 in_stack_ffffffffffffff68 [12];
  undefined4 in_stack_ffffffffffffff74;
  UnityEngine_ContactPoint_o UStack_40;
  
  if (DAT_05702a07 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702a07 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact(&UStack_40,__this_00,index,(MethodInfo *)0x0);
    __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff74;
    __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff68._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff68._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff68._8_4_;
    __this_01.fields.m_Normal.fields.y = UStack_40.fields.m_Point.fields.x;
    __this_01.fields.m_Normal.fields.z = UStack_40.fields.m_Point.fields.y;
    __this_01.fields.m_Impulse.fields.x = UStack_40.fields.m_Point.fields.z;
    __this_01.fields.m_Impulse.fields.y = UStack_40.fields.m_Normal.fields.x;
    __this_01.fields.m_Impulse.fields.z = UStack_40.fields.m_Normal.fields.y;
    __this_01.fields.m_ThisColliderInstanceID = (int32_t)UStack_40.fields.m_Normal.fields.z;
    __this_01.fields.m_OtherColliderInstanceID = (int32_t)UStack_40.fields.m_Impulse.fields.x;
    __this_01.fields.m_Separation = UStack_40.fields.m_Impulse.fields.y;
    UVar2 = UnityEngine_ContactPoint__get_impulse(__this_01,(MethodInfo *)&stack0xffffffffffffff78);
    fVar1 = UVar2.fields.z;
    __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    value.fields.z = fVar1;
    value.fields.x = (float)(int)UVar2.fields._0_8_;
    value.fields.y = (float)(int)((ulong)UVar2.fields._0_8_ >> 0x20);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,value,(MethodInfo *)0x0);
    return __this_02;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactSeparations
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x3de3da0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  UnityEngine_ContactPoint_o __this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  float xyz;
  undefined1 in_stack_ffffffffffffff78 [12];
  undefined4 in_stack_ffffffffffffff84;
  _union_13 _Stack_40;
  _union_14 _Stack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (DAT_05702a08 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702a08 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    UnityEngine_Collision__GetContact
              ((UnityEngine_ContactPoint_o *)&_Stack_40,__this_00,index,(MethodInfo *)0x0);
    __this_01.fields.m_Normal.fields.x = (float)in_stack_ffffffffffffff84;
    __this_01.fields.m_Point.fields.x = (float)in_stack_ffffffffffffff78._0_4_;
    __this_01.fields.m_Point.fields.y = (float)in_stack_ffffffffffffff78._4_4_;
    __this_01.fields.m_Point.fields.z = (float)in_stack_ffffffffffffff78._8_4_;
    __this_01.fields.m_Normal.fields._4_8_ = _Stack_40.rgctx_data;
    __this_01.fields.m_Impulse.fields._0_8_ = _Stack_38.genericMethod;
    __this_01.fields._32_8_ = uStack_30;
    __this_01.fields._40_8_ = uStack_28;
    xyz = UnityEngine_ContactPoint__get_separation(__this_01,(MethodInfo *)&stack0xffffffffffffff88)
    ;
    __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,xyz,(MethodInfo *)0x0);
    return __this_02;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin____Copy__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x3de3e60

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin____Copy__
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *pUVar1;
  System_Object_array *parameters;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  if (DAT_05702a09 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicColliderBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05702a09 = '\x01';
  }
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameters == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pUVar1 = (__this->fields).collision;
  if (pUVar1 != (UnityEngine_Collision_o *)0x0) {
    lVar2 = il2cpp_runtime_glue(pUVar1,(((parameters->obj).klass)->_1).element_class);
    if (lVar2 == 0) {
      uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar3,0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)pUVar1;
    il2cpp_runtime_glue(parameters->m_Items,pUVar1);
    auVar4 = il2cpp_runtime_glue(TypeInfo_CustomLogicColliderBuiltin);
    CustomLogic_CustomLogicColliderBuiltin___ctor(auVar4._0_8_,parameters,auVar4._8_8_);
    return (Il2CppObject *)auVar4._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin____Eq__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x3de3f30

bool_conflict
CustomLogic_CustomLogicCollisionBuiltin____Eq__
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
          MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),self == other);
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicCollisionBuiltin____Hash__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x3de3f40

int32_t CustomLogic_CustomLogicCollisionBuiltin____Hash__
                  (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *pUVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar2;
  undefined8 in_RDX;
  
  pUVar1 = (__this->fields).collision;
  if (pUVar1 != (UnityEngine_Collision_o *)0x0) {
    vtable_dispatch = (pUVar1->klass->vtable)._2_GetHashCode.methodPtr;
    iVar2 = (*vtable_dispatch)
                      (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method,in_RDX,
                       vtable_dispatch);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollisionBuiltin__get_ClassName (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x3de3f70

System_String_o *
CustomLogic_CustomLogicCollisionBuiltin__get_ClassName
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702a0a == '\0') {
    il2cpp_init_method_metadata(&"Collision");
    DAT_05702a0a = '\x01';
  }
  return "Collision";
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_IsAbstract (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x3de3fa0

bool_conflict
CustomLogic_CustomLogicCollisionBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_IsStatic (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x3de3fb0

bool_conflict
CustomLogic_CustomLogicCollisionBuiltin__get_IsStatic
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x3de3fc0

bool_conflict
CustomLogic_CustomLogicCollisionBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


