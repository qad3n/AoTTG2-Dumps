// Type: CustomLogic.CustomLogicCollisionBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCollisionBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCollisionBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCollisionBuiltin_o* CustomLogic_CustomLogicCollisionBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f078b0

CustomLogic_CustomLogicCollisionBuiltin_o *
CustomLogic_CustomLogicCollisionBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  local_res8[0] = 0;
  NullCheck(args);
  local_res8[0] = (int32_t)args->max_length;
  pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCollisionBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f0c860

void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184345381 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345381 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactPoint>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactPoint_b__6_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f093d0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactPoint_b__6_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Il2CppObject *obj;
  UnityEngine_Collision_o *__this_00;
  int32_t index;
  UnityEngine_ContactPoint_o *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_88;
  undefined1 local_78 [40];
  undefined8 uStack_50;
  UnityEngine_ContactPoint_o local_48;
  
  if (Il2CppMethodInitialized_184345382 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345382 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345371 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        Il2CppMethodInitialized_184345371 = '\x01';
      }
      __this_00 = (__c->fields).collision;
      local_78._0_4_ = 0.0;
      local_78._4_4_ = 0.0;
      local_78._8_4_ = 0.0;
      local_78._12_4_ = 0.0;
      local_78._16_4_ = 0.0;
      local_78._20_4_ = 0.0;
      local_78._24_4_ = 0;
      local_78._28_4_ = 0.0;
      local_78._32_4_ = 0.0;
      local_78._36_4_ = 0.0;
      uStack_50 = 0;
      if (__this_00 != (UnityEngine_Collision_o *)0x0) {
        pUVar3 = UnityEngine_Collision__GetContact(&local_48,__this_00,index,(MethodInfo *)0x0);
        local_78._0_4_ = (pUVar3->fields).m_Point.fields.x;
        local_78._4_4_ = (pUVar3->fields).m_Point.fields.y;
        local_78._8_8_ = *(undefined8 *)&(pUVar3->fields).m_Point.fields.z;
        local_78._16_4_ = (pUVar3->fields).m_Normal.fields.y;
        local_78._20_4_ = (pUVar3->fields).m_Normal.fields.z;
        local_78._24_4_ = (pUVar3->fields).m_Impulse.fields.x;
        local_78._28_4_ = (pUVar3->fields).m_Impulse.fields.y;
        local_78._32_8_ = *(undefined8 *)&(pUVar3->fields).m_Impulse.fields.z;
        uStack_50._0_4_ = (pUVar3->fields).m_OtherColliderEntityId;
        uStack_50._4_4_ = (pUVar3->fields).m_Separation;
        pUVar4 = UnityEngine_RaycastHit__get_point
                           ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_RaycastHit_o *)local_78,
                            (MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar4->fields).x;
        uVar1._4_4_ = (pUVar4->fields).y;
        fVar2 = (pUVar4->fields).z;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_88._0_8_ = uVar1;
        local_88.z = fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_01,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactNorms>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactNorms_b__7_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09270

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactNorms_b__7_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Il2CppObject *obj;
  UnityEngine_Collision_o *__this_00;
  int32_t index;
  UnityEngine_ContactPoint_o *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_88;
  undefined1 local_78 [40];
  undefined8 uStack_50;
  UnityEngine_ContactPoint_o local_48;
  
  if (Il2CppMethodInitialized_184345383 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345383 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345372 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        Il2CppMethodInitialized_184345372 = '\x01';
      }
      __this_00 = (__c->fields).collision;
      local_78._0_4_ = 0.0;
      local_78._4_4_ = 0.0;
      local_78._8_4_ = 0.0;
      local_78._12_4_ = 0.0;
      local_78._16_4_ = 0.0;
      local_78._20_4_ = 0.0;
      local_78._24_4_ = 0;
      local_78._28_4_ = 0.0;
      local_78._32_4_ = 0.0;
      local_78._36_4_ = 0.0;
      uStack_50 = 0;
      if (__this_00 != (UnityEngine_Collision_o *)0x0) {
        pUVar3 = UnityEngine_Collision__GetContact(&local_48,__this_00,index,(MethodInfo *)0x0);
        local_78._0_4_ = (pUVar3->fields).m_Point.fields.x;
        local_78._4_4_ = (pUVar3->fields).m_Point.fields.y;
        local_78._8_8_ = *(undefined8 *)&(pUVar3->fields).m_Point.fields.z;
        local_78._16_4_ = (pUVar3->fields).m_Normal.fields.y;
        local_78._20_4_ = (pUVar3->fields).m_Normal.fields.z;
        local_78._24_4_ = (pUVar3->fields).m_Impulse.fields.x;
        local_78._28_4_ = (pUVar3->fields).m_Impulse.fields.y;
        local_78._32_8_ = *(undefined8 *)&(pUVar3->fields).m_Impulse.fields.z;
        uStack_50._0_4_ = (pUVar3->fields).m_OtherColliderEntityId;
        uStack_50._4_4_ = (pUVar3->fields).m_Separation;
        pUVar4 = UnityEngine_RaycastHit__get_normal
                           ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_RaycastHit_o *)local_78,
                            (MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar4->fields).x;
        uVar1._4_4_ = (pUVar4->fields).y;
        fVar2 = (pUVar4->fields).z;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_88._0_8_ = uVar1;
        local_88.z = fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_01,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactImpulses>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactImpulses_b__8_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09110

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactImpulses_b__8_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Il2CppObject *obj;
  UnityEngine_Collision_o *__this_00;
  int32_t index;
  UnityEngine_ContactPoint_o *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_ContactPoint_o local_78;
  UnityEngine_ContactPoint_o local_48;
  
  if (Il2CppMethodInitialized_184345384 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345384 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345373 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        Il2CppMethodInitialized_184345373 = '\x01';
      }
      __this_00 = (__c->fields).collision;
      local_78.fields.m_Point.fields.x = 0.0;
      local_78.fields.m_Point.fields.y = 0.0;
      local_78.fields.m_Point.fields.z = 0.0;
      local_78.fields.m_Normal.fields.x = 0.0;
      local_78.fields.m_Normal.fields.y = 0.0;
      local_78.fields.m_Normal.fields.z = 0.0;
      local_78.fields.m_Impulse.fields.x = 0.0;
      local_78.fields.m_Impulse.fields.y = 0.0;
      local_78.fields.m_Impulse.fields.z = 0.0;
      local_78.fields.m_ThisColliderEntityId.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
      local_78.fields.m_OtherColliderEntityId.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
      local_78.fields.m_Separation = 0.0;
      if (__this_00 != (UnityEngine_Collision_o *)0x0) {
        pUVar3 = UnityEngine_Collision__GetContact(&local_48,__this_00,index,(MethodInfo *)0x0);
        local_78.fields.m_Point.fields.x = (pUVar3->fields).m_Point.fields.x;
        local_78.fields.m_Point.fields.y = (pUVar3->fields).m_Point.fields.y;
        local_78.fields._8_8_ = *(undefined8 *)&(pUVar3->fields).m_Point.fields.z;
        local_78.fields.m_Normal.fields.y = (pUVar3->fields).m_Normal.fields.y;
        local_78.fields.m_Normal.fields.z = (pUVar3->fields).m_Normal.fields.z;
        local_78.fields.m_Impulse.fields.x = (pUVar3->fields).m_Impulse.fields.x;
        local_78.fields.m_Impulse.fields.y = (pUVar3->fields).m_Impulse.fields.y;
        local_78.fields._32_8_ = *(undefined8 *)&(pUVar3->fields).m_Impulse.fields.z;
        local_78.fields.m_OtherColliderEntityId.fields.m_Data =
             (pUVar3->fields).m_OtherColliderEntityId.fields;
        local_78.fields.m_Separation = (pUVar3->fields).m_Separation;
        pUVar4 = UnityEngine_ContactPoint__get_impulse
                           ((UnityEngine_Vector3_o *)&local_88,&local_78,(MethodInfo *)0x0);
        uVar1._0_4_ = (pUVar4->fields).x;
        uVar1._4_4_ = (pUVar4->fields).y;
        fVar2 = (pUVar4->fields).z;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        local_88._0_8_ = uVar1;
        local_88.z = fVar2;
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                  (__this_01,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetContactSeparations>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactSeparations_b__9_0 (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCollisionBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f09530

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_____CreateMethodBinding__GetContactSeparations_b__9_0
          (CustomLogic_CustomLogicCollisionBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCollisionBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Collision_o *__this_00;
  int32_t index;
  UnityEngine_ContactPoint_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  float xyz;
  undefined1 local_78 [112];
  
  if (Il2CppMethodInitialized_184345385 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345385 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345374 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        Il2CppMethodInitialized_184345374 = '\x01';
      }
      __this_00 = (__c->fields).collision;
      local_78._0_4_ = 0;
      local_78._4_4_ = 0.0;
      local_78._8_4_ = 0.0;
      local_78._12_4_ = 0.0;
      local_78._16_4_ = 0.0;
      local_78._20_4_ = 0.0;
      local_78._24_4_ = 0.0;
      local_78._28_4_ = 0.0;
      local_78._32_4_ = 0;
      local_78._36_4_ = 0;
      local_78._40_4_ = 0;
      local_78._44_4_ = 0.0;
      if (__this_00 != (UnityEngine_Collision_o *)0x0) {
        pUVar1 = UnityEngine_Collision__GetContact
                           ((UnityEngine_ContactPoint_o *)(local_78 + 0x30),__this_00,index,(MethodInfo *)0x0)
        ;
        local_78._0_4_ = (pUVar1->fields).m_Point.fields.x;
        local_78._4_4_ = (pUVar1->fields).m_Point.fields.y;
        local_78._8_8_ = *(undefined8 *)&(pUVar1->fields).m_Point.fields.z;
        local_78._16_4_ = (pUVar1->fields).m_Normal.fields.y;
        local_78._20_4_ = (pUVar1->fields).m_Normal.fields.z;
        local_78._24_4_ = (pUVar1->fields).m_Impulse.fields.x;
        local_78._28_4_ = (pUVar1->fields).m_Impulse.fields.y;
        local_78._32_8_ = *(undefined8 *)&(pUVar1->fields).m_Impulse.fields.z;
        local_78._40_4_ = (pUVar1->fields).m_OtherColliderEntityId;
        local_78._44_4_ = (pUVar1->fields).m_Separation;
        xyz = UnityEngine_Touch__get_pressure((UnityEngine_Touch_o *)local_78,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
        CustomLogic_CustomLogicVector3Builtin___ctor_1ed7ea0(__this_01,xyz,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCollisionBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181eea2d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this_00;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184345377 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"ContactCount");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"Collider");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactImpulses");
    il2cpp_codegen_initialize_runtime_metadata(&"Impulse");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactSeparations");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactNorms");
    il2cpp_codegen_initialize_runtime_metadata(&"RelativeVelocity");
    Il2CppMethodInitialized_184345377 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x454bad02) {
    if (uVar3 < 0x2cfc1e5e) {
      if (uVar3 == 0x2706c88a) {
        bVar2 = System_String__op_Equality(name,"RelativeVelocity",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434537a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__RelativeVelocity_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
            Il2CppMethodInitialized_18434537a = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__RelativeVelocity_g
          ;
          goto label_181eeab1d;
        }
      }
      else if (uVar3 == 0x2cfc1e5d) {
        bVar2 = System_String__op_Equality(name,"Collider",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345378 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Collider_g____getter_2
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
            Il2CppMethodInitialized_184345378 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Collider_g____getter_2
          ;
          goto label_181eeab1d;
        }
      }
    }
    else if (uVar3 == 0x3e98dfb0) {
      bVar2 = System_String__op_Equality(name,"GetContactNorms",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434537d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactNorms_b__7_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434537d = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__7_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactNorms_b__7_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__7_0 =
               (System_Func_CustomLogicCollisionBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__7_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0x454bad01) {
      bVar2 = System_String__op_Equality(name,"GetContactImpulses",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434537e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactImpulses_b
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434537e = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__8_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactImpulses_b
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__8_0 =
               (System_Func_CustomLogicCollisionBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__8_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
  }
  else if (uVar3 < 0x4fa9d68e) {
    if (uVar3 == 0x4bf628c6) {
      bVar2 = System_String__op_Equality(name,"GetContactSeparations",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434537f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactSeparations
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434537f = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__9_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactSeparations
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__9_0 =
               (System_Func_CustomLogicCollisionBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__9_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0x4fa9d68d) {
      bVar2 = System_String__op_Equality(name,"GetContactPoint",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434537c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactPoint_b__6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434537c = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__6_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactPoint_b__6_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__6_0 =
               (System_Func_CustomLogicCollisionBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__6_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
  }
  else if (uVar3 == 0x7fde94f4) {
    bVar2 = System_String__op_Equality(name,"Impulse",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345379 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Impulse_g____getter_3
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
        Il2CppMethodInitialized_184345379 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Impulse_g____getter_3
      ;
label_181eeab1d:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin
                            );
      CustomLogic_CLPropertyBinding_object____ctor
                ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                 (System_Action_T__object__o *)0x0,
                 (MethodInfo_12B8EE0 *)
                 MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_00;
    }
  }
  else if (uVar3 == 0xb7ea1ec2) {
    bVar2 = System_String__op_Equality(name,"ContactCount",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434537b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__ContactCount_g____gett
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
        Il2CppMethodInitialized_18434537b = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__ContactCount_g____gett
      ;
      goto label_181eeab1d;
    }
  }
  pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCollisionBuiltin not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar6,(MethodInfo *)0x0);
  pMVar7 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar7);
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__Collider
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider (const MethodInfo* method);
// 0x181efb020

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Collider(MethodInfo *method)

{
  System_Func_CustomLogicCollisionBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345378 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Collider_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
    Il2CppMethodInitialized_184345378 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Collider_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__Impulse
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Impulse (const MethodInfo* method);
// 0x181efc240

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__Impulse(MethodInfo *method)

{
  System_Func_CustomLogicCollisionBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345379 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Impulse_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
    Il2CppMethodInitialized_184345379 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__Impulse_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__RelativeVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__RelativeVelocity (const MethodInfo* method);
// 0x181efd730

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__RelativeVelocity
          (MethodInfo *method)

{
  System_Func_CustomLogicCollisionBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434537a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__RelativeVelocity_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
    Il2CppMethodInitialized_18434537a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__RelativeVelocity_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreatePropertyBinding__ContactCount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__ContactCount (const MethodInfo* method);
// 0x181efb390

CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreatePropertyBinding__ContactCount(MethodInfo *method)

{
  System_Func_CustomLogicCollisionBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434537b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__ContactCount_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
    Il2CppMethodInitialized_18434537b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings___CreatePropertyBinding__ContactCount_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCollisionBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactPoint (const MethodInfo* method);
// 0x181ef5a40

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactPoint(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434537c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactPoint_b__6_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434537c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactPoint_b__6_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicCollisionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactNorms
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactNorms (const MethodInfo* method);
// 0x181ef5920

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactNorms(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434537d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactNorms_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434537d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactNorms_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicCollisionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactImpulses
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactImpulses (const MethodInfo* method);
// 0x181ef5800

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactImpulses
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434537e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactImpulses_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434537e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactImpulses_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicCollisionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$__CreateMethodBinding__GetContactSeparations
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o* CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactSeparations (const MethodInfo* method);
// 0x181ef5b60

CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *
CustomLogic_CustomLogicCollisionBuiltin_Bindings____CreateMethodBinding__GetContactSeparations
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434537f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactSeparations
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434537f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCollisionBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c___CreateMethodBinding__GetContactSeparations
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicCollisionBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCollisionBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f00dc0

void CustomLogic_CustomLogicCollisionBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345380 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"ContactCount");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"Collider");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactImpulses");
    il2cpp_codegen_initialize_runtime_metadata(&"Impulse");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactSeparations");
    il2cpp_codegen_initialize_runtime_metadata(&"GetContactNorms");
    il2cpp_codegen_initialize_runtime_metadata(&"RelativeVelocity");
    Il2CppMethodInitialized_184345380 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Collider",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Impulse",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RelativeVelocity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ContactCount",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetContactPoint",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetContactNorms",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetContactImpulses",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetContactSeparations",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCollisionBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__Collider>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_2_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x181ef0d50

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Collider_g____getter_2_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  System_Object_array *parameters;
  UnityEngine_Collider_o *obj;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  
  if (__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345370 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
      Il2CppMethodInitialized_184345370 = '\x01';
    }
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    __this = (__i->fields).collision;
    if (__this != (UnityEngine_Collision_o *)0x0) {
      obj = UnityEngine_Collision__get_collider(__this,(MethodInfo *)0x0);
      if (parameters != (System_Object_array *)0x0) {
        if (obj != (UnityEngine_Collider_o *)0x0) {
          pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
          if (pIVar1 == (Il2CppObject *)0x0) {
            pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
          }
        }
        if ((int)parameters->max_length != 0) {
          parameters->m_Items[0] = (Il2CppObject *)obj;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
          CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_00,parameters,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_00;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__Impulse>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Impulse_g____getter_3_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1e70

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__Impulse_g____getter_3_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) &&
     (__this = (__i->fields).collision, __this != (UnityEngine_Collision_o *)0x0)) {
    pUVar1 = UnityEngine_Collision__get_impulse(local_18,__this,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__RelativeVelocity>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__RelativeVelocity_g____getter_4_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2cf0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__RelativeVelocity_g____getter_4_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) &&
     (__this = (__i->fields).collision, __this != (UnityEngine_Collision_o *)0x0)) {
    pUVar1 = UnityEngine_Collision__get_relativeVelocity(local_18,__this,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin.Bindings$$<__CreatePropertyBinding__ContactCount>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__ContactCount_g____getter_5_0 (CustomLogic_CustomLogicCollisionBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1230

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin_Bindings_____CreatePropertyBinding__ContactCount_g____getter_5_0
          (CustomLogic_CustomLogicCollisionBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collision_o *__this;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicCollisionBuiltin_o *)0x0) &&
     (__this = (__i->fields).collision, __this != (UnityEngine_Collision_o *)0x0)) {
    local_res8[0] =
         UnityEngine_Collision__get_contactCount
                   ((UnityEngine_Rendering_RenderStateBlock_o *)__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin___ctor (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x181f032b0

void CustomLogic_CustomLogicCollisionBuiltin___ctor
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434536e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434536e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCollisionBuiltin___ctor (CustomLogic_CustomLogicCollisionBuiltin_o* __this, System_Object_array* parameters, const MethodInfo* method);
// 0x181f03300

void CustomLogic_CustomLogicCollisionBuiltin___ctor_1f03300
               (CustomLogic_CustomLogicCollisionBuiltin_o *__this,System_Object_array *parameters,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Collision_o *value;
  
  if (Il2CppMethodInitialized_18434536f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Collision);
    Il2CppMethodInitialized_18434536f = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)parameters->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  value = (UnityEngine_Collision_o *)parameters->m_Items[0];
  if (value == (UnityEngine_Collision_o *)0x0) {
    (__this->fields).collision = (UnityEngine_Collision_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UnityEngine_Collision->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_Collision)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields).collision = value;
    bVar1 = (TypeInfo_UnityEngine_Collision->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_UnityEngine_Collision)) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).collision,value);
  return;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_Collider
// il2cpp: CustomLogic_CustomLogicColliderBuiltin_o* CustomLogic_CustomLogicCollisionBuiltin__get_Collider (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x181f03440

CustomLogic_CustomLogicColliderBuiltin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_Collider
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  System_Object_array *parameters;
  UnityEngine_Collider_o *obj;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_184345370 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184345370 = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    obj = UnityEngine_Collision__get_collider(__this_00,(MethodInfo *)0x0);
    if (parameters != (System_Object_array *)0x0) {
      if (obj != (UnityEngine_Collider_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
        if (pIVar1 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length != 0) {
        parameters->m_Items[0] = (Il2CppObject *)obj;
        Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
        CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_01,parameters,(MethodInfo *)0x0);
        return __this_01;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_Impulse
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__get_Impulse (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x181f03540

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_Impulse
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    pUVar1 = UnityEngine_Collision__get_impulse(local_18,__this_00,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_RelativeVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x181f03590

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__get_RelativeVelocity
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    pUVar1 = UnityEngine_Collision__get_relativeVelocity(local_18,__this_00,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_ContactCount
// il2cpp: int32_t CustomLogic_CustomLogicCollisionBuiltin__get_ContactCount (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x181f03520

int32_t CustomLogic_CustomLogicCollisionBuiltin__get_ContactCount
                  (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  int32_t iVar1;
  
  __this_00 = (__this->fields).collision;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    iVar1 = UnityEngine_Collision__get_contactCount
                      ((UnityEngine_Rendering_RenderStateBlock_o *)__this_00,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactPoint (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x181f03020

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactPoint
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Collision_o *__this_00;
  UnityEngine_ContactPoint_o *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_88;
  undefined1 local_78 [40];
  undefined8 uStack_50;
  UnityEngine_ContactPoint_o local_48;
  
  if (Il2CppMethodInitialized_184345371 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345371 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  local_78._0_4_ = 0.0;
  local_78._4_4_ = 0.0;
  local_78._8_4_ = 0.0;
  local_78._12_4_ = 0.0;
  local_78._16_4_ = 0.0;
  local_78._20_4_ = 0.0;
  local_78._24_4_ = 0;
  local_78._28_4_ = 0.0;
  local_78._32_4_ = 0.0;
  local_78._36_4_ = 0.0;
  uStack_50 = 0;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    pUVar3 = UnityEngine_Collision__GetContact(&local_48,__this_00,index,(MethodInfo *)0x0);
    local_78._0_4_ = (pUVar3->fields).m_Point.fields.x;
    local_78._4_4_ = (pUVar3->fields).m_Point.fields.y;
    local_78._8_8_ = *(undefined8 *)&(pUVar3->fields).m_Point.fields.z;
    local_78._16_4_ = (pUVar3->fields).m_Normal.fields.y;
    local_78._20_4_ = (pUVar3->fields).m_Normal.fields.z;
    local_78._24_4_ = (pUVar3->fields).m_Impulse.fields.x;
    local_78._28_4_ = (pUVar3->fields).m_Impulse.fields.y;
    local_78._32_8_ = *(undefined8 *)&(pUVar3->fields).m_Impulse.fields.z;
    uStack_50._0_4_ = (pUVar3->fields).m_OtherColliderEntityId;
    uStack_50._4_4_ = (pUVar3->fields).m_Separation;
    pUVar4 = UnityEngine_RaycastHit__get_point
                       ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_RaycastHit_o *)local_78,
                        (MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar4->fields).x;
    uVar1._4_4_ = (pUVar4->fields).y;
    fVar2 = (pUVar4->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_88._0_8_ = uVar1;
    local_88.z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactNorms
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactNorms (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x181f02f30

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactNorms
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Collision_o *__this_00;
  UnityEngine_ContactPoint_o *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_88;
  undefined1 local_78 [40];
  undefined8 uStack_50;
  UnityEngine_ContactPoint_o local_48;
  
  if (Il2CppMethodInitialized_184345372 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345372 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  local_78._0_4_ = 0.0;
  local_78._4_4_ = 0.0;
  local_78._8_4_ = 0.0;
  local_78._12_4_ = 0.0;
  local_78._16_4_ = 0.0;
  local_78._20_4_ = 0.0;
  local_78._24_4_ = 0;
  local_78._28_4_ = 0.0;
  local_78._32_4_ = 0.0;
  local_78._36_4_ = 0.0;
  uStack_50 = 0;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    pUVar3 = UnityEngine_Collision__GetContact(&local_48,__this_00,index,(MethodInfo *)0x0);
    local_78._0_4_ = (pUVar3->fields).m_Point.fields.x;
    local_78._4_4_ = (pUVar3->fields).m_Point.fields.y;
    local_78._8_8_ = *(undefined8 *)&(pUVar3->fields).m_Point.fields.z;
    local_78._16_4_ = (pUVar3->fields).m_Normal.fields.y;
    local_78._20_4_ = (pUVar3->fields).m_Normal.fields.z;
    local_78._24_4_ = (pUVar3->fields).m_Impulse.fields.x;
    local_78._28_4_ = (pUVar3->fields).m_Impulse.fields.y;
    local_78._32_8_ = *(undefined8 *)&(pUVar3->fields).m_Impulse.fields.z;
    uStack_50._0_4_ = (pUVar3->fields).m_OtherColliderEntityId;
    uStack_50._4_4_ = (pUVar3->fields).m_Separation;
    pUVar4 = UnityEngine_RaycastHit__get_normal
                       ((UnityEngine_Vector3_o *)&local_88,(UnityEngine_RaycastHit_o *)local_78,
                        (MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar4->fields).x;
    uVar1._4_4_ = (pUVar4->fields).y;
    fVar2 = (pUVar4->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_88._0_8_ = uVar1;
    local_88.z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactImpulses
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x181f02e40

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactImpulses
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  UnityEngine_Collision_o *__this_00;
  UnityEngine_ContactPoint_o *pUVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_ContactPoint_o local_78;
  UnityEngine_ContactPoint_o local_48;
  
  if (Il2CppMethodInitialized_184345373 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345373 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  local_78.fields.m_Point.fields.x = 0.0;
  local_78.fields.m_Point.fields.y = 0.0;
  local_78.fields.m_Point.fields.z = 0.0;
  local_78.fields.m_Normal.fields.x = 0.0;
  local_78.fields.m_Normal.fields.y = 0.0;
  local_78.fields.m_Normal.fields.z = 0.0;
  local_78.fields.m_Impulse.fields.x = 0.0;
  local_78.fields.m_Impulse.fields.y = 0.0;
  local_78.fields.m_Impulse.fields.z = 0.0;
  local_78.fields.m_ThisColliderEntityId.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_78.fields.m_OtherColliderEntityId.fields.m_Data = (UnityEngine_EntityId_Fields)0x0;
  local_78.fields.m_Separation = 0.0;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    pUVar3 = UnityEngine_Collision__GetContact(&local_48,__this_00,index,(MethodInfo *)0x0);
    local_78.fields.m_Point.fields.x = (pUVar3->fields).m_Point.fields.x;
    local_78.fields.m_Point.fields.y = (pUVar3->fields).m_Point.fields.y;
    local_78.fields._8_8_ = *(undefined8 *)&(pUVar3->fields).m_Point.fields.z;
    local_78.fields.m_Normal.fields.y = (pUVar3->fields).m_Normal.fields.y;
    local_78.fields.m_Normal.fields.z = (pUVar3->fields).m_Normal.fields.z;
    local_78.fields.m_Impulse.fields.x = (pUVar3->fields).m_Impulse.fields.x;
    local_78.fields.m_Impulse.fields.y = (pUVar3->fields).m_Impulse.fields.y;
    local_78.fields._32_8_ = *(undefined8 *)&(pUVar3->fields).m_Impulse.fields.z;
    local_78.fields.m_OtherColliderEntityId.fields.m_Data = (pUVar3->fields).m_OtherColliderEntityId.fields;
    local_78.fields.m_Separation = (pUVar3->fields).m_Separation;
    pUVar4 = UnityEngine_ContactPoint__get_impulse
                       ((UnityEngine_Vector3_o *)&local_88,&local_78,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar4->fields).x;
    uVar1._4_4_ = (pUVar4->fields).y;
    fVar2 = (pUVar4->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_88._0_8_ = uVar1;
    local_88.z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)&local_88,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$GetContactSeparations
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations (CustomLogic_CustomLogicCollisionBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x181f03110

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCollisionBuiltin__GetContactSeparations
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  UnityEngine_Collision_o *__this_00;
  UnityEngine_ContactPoint_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  float xyz;
  undefined1 local_78 [112];
  
  if (Il2CppMethodInitialized_184345374 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345374 = '\x01';
  }
  __this_00 = (__this->fields).collision;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0.0;
  local_78._8_4_ = 0.0;
  local_78._12_4_ = 0.0;
  local_78._16_4_ = 0.0;
  local_78._20_4_ = 0.0;
  local_78._24_4_ = 0.0;
  local_78._28_4_ = 0.0;
  local_78._32_4_ = 0;
  local_78._36_4_ = 0;
  local_78._40_4_ = 0;
  local_78._44_4_ = 0.0;
  if (__this_00 != (UnityEngine_Collision_o *)0x0) {
    pUVar1 = UnityEngine_Collision__GetContact
                       ((UnityEngine_ContactPoint_o *)(local_78 + 0x30),__this_00,index,(MethodInfo *)0x0);
    local_78._0_4_ = (pUVar1->fields).m_Point.fields.x;
    local_78._4_4_ = (pUVar1->fields).m_Point.fields.y;
    local_78._8_8_ = *(undefined8 *)&(pUVar1->fields).m_Point.fields.z;
    local_78._16_4_ = (pUVar1->fields).m_Normal.fields.y;
    local_78._20_4_ = (pUVar1->fields).m_Normal.fields.z;
    local_78._24_4_ = (pUVar1->fields).m_Impulse.fields.x;
    local_78._28_4_ = (pUVar1->fields).m_Impulse.fields.y;
    local_78._32_8_ = *(undefined8 *)&(pUVar1->fields).m_Impulse.fields.z;
    local_78._40_4_ = (pUVar1->fields).m_OtherColliderEntityId;
    local_78._44_4_ = (pUVar1->fields).m_Separation;
    xyz = UnityEngine_Touch__get_pressure((UnityEngine_Touch_o *)local_78,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7ea0(__this_01,xyz,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCollisionBuiltin____Copy__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x181f031e0

Il2CppObject *
CustomLogic_CustomLogicCollisionBuiltin____Copy__
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collision_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_184345375 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184345375 = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  obj = (__this->fields).collision;
  if (obj != (UnityEngine_Collision_o *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameters->max_length != 0) {
    parameters->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_00,parameters,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin____Eq__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x180c7e810

bool
CustomLogic_CustomLogicCollisionBuiltin____Eq__(CustomLogic_CustomLogicCollisionBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, MethodInfo* method)

{
  return x == y;
}


// CustomLogic.CustomLogicCollisionBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicCollisionBuiltin____Hash__ (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x181ece090

int32_t
CustomLogic_CustomLogicCollisionBuiltin____Hash__(CustomLogic_CustomLogicCollisionBuiltin_o* __this, MethodInfo* method)

{
  System_Type_o *pSVar1;
  int32_t iVar2;
  
  pSVar1 = (__this->fields).collision;
  if (pSVar1 != (System_Type_o *)0x0) {
    iVar2 = (*(pSVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable)._2_GetHashCode.method);
    return iVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCollisionBuiltin__get_ClassName (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x181f03410

System_String_o *
CustomLogic_CustomLogicCollisionBuiltin__get_ClassName
          (CustomLogic_CustomLogicCollisionBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345376 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Collision");
    Il2CppMethodInitialized_184345376 = '\x01';
  }
  return "Collision";
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_IsAbstract (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCollisionBuiltin__get_IsAbstract(CustomLogic_CustomLogicCollisionBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_IsStatic (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicCollisionBuiltin__get_IsStatic(CustomLogic_CustomLogicCollisionBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicCollisionBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCollisionBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCollisionBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCollisionBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicCollisionBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


