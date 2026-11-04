// Type: CustomLogic.CustomLogicColliderBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicColliderBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicColliderBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicColliderBuiltin_o* CustomLogic_CustomLogicColliderBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f08220

CustomLogic_CustomLogicColliderBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicColliderBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f0c8d0

void CustomLogic_CustomLogicColliderBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_18434536a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434536a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicColliderBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPoint>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__ClosestPoint_b__14_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f087c0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__ClosestPoint_b__14_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Collider_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18434536b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434536b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).collider, __this_00 != (UnityEngine_Collider_o *)0x0)) {
      local_28.x = (pCVar1->fields).Value.fields.x;
      local_28.y = (pCVar1->fields).Value.fields.y;
      local_28.z = (pCVar1->fields).Value.fields.z;
      pUVar2 = UnityEngine_Collider__ClosestPoint
                         (&local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      local_28.x = (pUVar2->fields).x;
      local_28.y = (pUVar2->fields).y;
      local_28.z = (pUVar2->fields).z;
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                         ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClosestPointOnBounds>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__ClosestPointOnBounds_b__15_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f086e0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__ClosestPointOnBounds_b__15_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  UnityEngine_Collider_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  UnityEngine_Vector3_o *pUVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18;
  
  if (Il2CppMethodInitialized_18434536c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434536c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (((__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
        (pCVar1 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (__c->fields).collider, __this_00 != (UnityEngine_Collider_o *)0x0)) {
      local_28.x = (pCVar1->fields).Value.fields.x;
      local_28.y = (pCVar1->fields).Value.fields.y;
      local_28.z = (pCVar1->fields).Value.fields.z;
      pUVar2 = UnityEngine_Collider__ClosestPointOnBounds
                         (&local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      local_28.x = (pUVar2->fields).x;
      local_28.y = (pUVar2->fields).y;
      local_28.z = (pUVar2->fields).z;
      pCVar1 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                         ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding__Raycast>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__Raycast_b__16_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0b080

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding__Raycast_b__16_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *start;
  CustomLogic_CustomLogicVector3Builtin_o *end;
  System_String_o *collideWith;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_18434536d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434536d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_66EB70 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      if (1 < (uint)__a->max_length) {
        end = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
        if (2 < (uint)__a->max_length) {
          collideWith = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                                  (__a->m_Items[2],
                                   (MethodInfo_66EB70 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          if (__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
            pCVar1 = CustomLogic_CustomLogicColliderBuiltin__Raycast
                               (__c,start,end,collideWith,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar1;
          }
          goto label_181f0b16f;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181f0b16f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Copy__>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__17_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c390

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Copy___b__17_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Collider_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  
  if (__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434534c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
      Il2CppMethodInitialized_18434534c = '\x01';
    }
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameters != (System_Object_array *)0x0) {
      obj = (__c->fields).collider;
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
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
        CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_00,parameters,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_00;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__18_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c4e0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__18_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *x;
  Il2CppClass *y;
  Il2CppObject *pIVar3;
  undefined1 local_res18 [16];
  
  if (__a == (System_Object_array *)0x0) {
label_181f0c5f6:
    ThrowNullReferenceException();
  }
  if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
    ThrowIndexOutOfRangeException();
  }
  if (__c == (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) goto label_181f0c5f6;
  pIVar3 = __a->m_Items[0];
  pIVar2 = __a->m_Items[1];
  if (Il2CppMethodInitialized_18434534d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434534d = '\x01';
  }
  if (pIVar3 != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (pIVar3->klass->_2).typeHierarchyDepth) &&
        ((pIVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin)) && (pIVar2 != (Il2CppObject *)0x0))
    {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (pIVar2->klass->_2).typeHierarchyDepth) &&
         ((pIVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin)) {
        x = pIVar3[3].klass;
        y = pIVar2[3].klass;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        local_res18[0] =
             UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
        goto label_181f0c5d2;
      }
    }
  }
  local_res18[0] = false;
label_181f0c5d2:
  pIVar3 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar3;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__19_0 (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicColliderBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f0c670

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__19_0
          (CustomLogic_CustomLogicColliderBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicColliderBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Collider_o *pUVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  int32_t local_res10 [6];
  
  if (__c != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434534e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434534e = '\x01';
    }
    x = (UnityEngine_Object_o *)(__c->fields).collider;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      local_res10[0] = 0;
    }
    else {
      pUVar1 = (__c->fields).collider;
      if (pUVar1 == (UnityEngine_Collider_o *)0x0) goto label_181f0c70a;
      local_res10[0] =
           (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                     (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
    }
    pIVar3 = il2cpp_value_box(g_data_184354e08,local_res10);
    return pIVar3;
  }
label_181f0c70a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicColliderBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ee8470

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicColliderBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  System_Func_CustomLogicColliderBuiltin__object__o *__this_00;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_01;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_02;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_03;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *pCVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_04;
  System_String_o *pSVar5;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_05;
  MethodInfo *pMVar6;
  System_Func_CustomLogicColliderBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184345350 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"ExcludeLayers");
    il2cpp_codegen_initialize_runtime_metadata(&"GameObjectTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"ClosestPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"IncludeLayers");
    il2cpp_codegen_initialize_runtime_metadata(&"ContactOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"ClosestPointOnBounds");
    il2cpp_codegen_initialize_runtime_metadata(&"ProvidesContacts");
    il2cpp_codegen_initialize_runtime_metadata(&"MaterialName");
    il2cpp_codegen_initialize_runtime_metadata(&"IsTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SharedMaterialName");
    il2cpp_codegen_initialize_runtime_metadata(&"AttachedArticulationBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Raycast");
    Il2CppMethodInitialized_184345350 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8e2afb14) {
    if (0x4b9fbea4 < uVar3) {
      if (uVar3 < 0x790e86e9) {
        if (uVar3 != 0x549f4d10) {
          if (uVar3 != 0x790e86e8) goto label_181ee95ab;
          bVar2 = System_String__op_Equality(name,"AttachedArticulationBody",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ee95ab;
          if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345351 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__AttachedArticulationBod
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
            Il2CppMethodInitialized_184345351 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__AttachedArticulationBod
          ;
          goto label_181ee9214;
        }
        bVar2 = System_String__op_Equality(name,"__Copy__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee95ab;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345360 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Copy___b__17_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345360 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__17_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee9577;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Copy___b__17_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__17_0 =
             (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__17_0;
      }
      else if (uVar3 == 0x792a6491) {
        bVar2 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee95ab;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345362 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Hash___b__19_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345362 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__19_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee9577;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Hash___b__19_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__19_0 =
             (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__19_0;
      }
      else {
        if (uVar3 != 0x80175e56) {
          if (uVar3 == 0x8e2afb13) {
            bVar2 = System_String__op_Equality(name,"ExcludeLayers",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_184345354 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____gett
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____sett
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
                Il2CppMethodInitialized_184345354 = '\x01';
              }
              __this_00 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
              System_Func_object__object____ctor
                        ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,
                         (Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____gett
                         ,(MethodInfo_16E67D0 *)0x0);
              __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                          il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
              pMVar6 = 
              MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____sett
              ;
              goto label_181ee8aea;
            }
          }
          goto label_181ee95ab;
        }
        bVar2 = System_String__op_Equality(name,"ClosestPointOnBounds",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee95ab;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434535e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPointOnBounds_b
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434535e = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__15_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee9577;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPointOnBounds_b
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__15_0 =
             (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__15_0;
      }
label_181ee956f:
      Il2CppCodeGenWriteBarrier(targetAddress,__this_02);
label_181ee9577:
      __this_04 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                (__this_04,(System_String_o *)__this_02,
                 MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)__this_04;
    }
    if (uVar3 < 0x241c90a3) {
      if (uVar3 != 0xe986ab0) {
        if (uVar3 != 0x241c90a2) goto label_181ee95ab;
        bVar2 = System_String__op_Equality(name,"ClosestPoint",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee95ab;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434535d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__14_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434535d = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__14_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee9577;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__14_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__14_0 =
             (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__14_0;
        goto label_181ee956f;
      }
      bVar2 = System_String__op_Equality(name,"GameObjectTransform",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee95ab;
      if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434535c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__GameObjectTransform_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
        Il2CppMethodInitialized_18434535c = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
      pMVar6 = 
      MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__GameObjectTransform_g
      ;
    }
    else {
      if (uVar3 == 0x4a5dd7d3) {
        bVar2 = System_String__op_Equality(name,"IsTrigger",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345356 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____getter_7
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____setter_7
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
            Il2CppMethodInitialized_184345356 = '\x01';
          }
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____getter_7
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____setter_7
          ;
          goto label_181ee8aea;
        }
label_181ee95ab:
        pSVar5 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicColliderBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar5 = System_String__Concat_1969b70(str0,name,pSVar5,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_05 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_05,pSVar5,(MethodInfo *)0x0);
        pMVar6 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_05,pMVar6);
      }
      if (uVar3 != 0x4b9fbea4) goto label_181ee95ab;
      bVar2 = System_String__op_Equality(name,"Center",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee95ab;
      if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345357 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Center_g____getter_8_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
        Il2CppMethodInitialized_184345357 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
      pMVar6 = 
      MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Center_g____getter_8_0
      ;
    }
  }
  else {
    if (uVar3 < 0xad216711) {
      if (0x990db27e < uVar3) {
        if (uVar3 == 0x9c86e43e) {
          bVar2 = System_String__op_Equality(name,"Enabled",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345353 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter_4_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter_4_1
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
              Il2CppMethodInitialized_184345353 = '\x01';
            }
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,
                       (Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter_4_0
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter_4_1
            ;
label_181ee8aea:
            System_Action_object__object____ctor
                      (__this_01,(Il2CppObject *)0x0,(intptr_t)pMVar6,(MethodInfo *)0x0);
            pCVar4 = il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
            CustomLogic_CLPropertyBinding_object____ctor
                      ((CustomLogic_CLPropertyBinding_T__o *)pCVar4,(System_Func_T__object__o *)__this_00,
                       (System_Action_T__object__o *)__this_01,
                       (MethodInfo_12B8EE0 *)
                       MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar3 == 0xad216710) {
          bVar2 = System_String__op_Equality(name,"ContactOffset",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345352 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____sett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
              Il2CppMethodInitialized_184345352 = '\x01';
            }
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,
                       (Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____gett
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____sett
            ;
            goto label_181ee8aea;
          }
        }
        goto label_181ee95ab;
      }
      if (uVar3 != 0x91efe6d7) {
        if (uVar3 != 0x990db27e) goto label_181ee95ab;
        bVar2 = System_String__op_Equality(name,"ProvidesContacts",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee95ab;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345358 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____s
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
          Il2CppMethodInitialized_184345358 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_03 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
        System_Action_object__object____ctor
                  ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_03,
                   (Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____s
                   ,(MethodInfo *)0x0);
        pCVar4 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
        goto label_181ee9236;
      }
      bVar2 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee95ab;
      if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345361 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Eq___b__18_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345361 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
      }
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__18_0;
      if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee9577;
      if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
      __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this_02,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Eq___b__18_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__18_0 =
           (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this_02;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__18_0;
      goto label_181ee956f;
    }
    if (uVar3 < 0xb9fdf63f) {
      if (uVar3 == 0xad82abbb) {
        bVar2 = System_String__op_Equality(name,"Transform",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee95ab;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434535b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
          Il2CppMethodInitialized_18434535b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
        pMVar6 = 
        MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter_1
        ;
      }
      else {
        if (uVar3 != 0xb9fdf63e) goto label_181ee95ab;
        bVar2 = System_String__op_Equality(name,"SharedMaterialName",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee95ab;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434535a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__SharedMaterialName_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
          Il2CppMethodInitialized_18434535a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
        pMVar6 = 
        MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__SharedMaterialName_g
        ;
      }
    }
    else {
      if (uVar3 != 0xc0b0a123) {
        if (uVar3 == 0xd06f5ba1) {
          bVar2 = System_String__op_Equality(name,"IncludeLayers",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345355 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____gett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____sett
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
              Il2CppMethodInitialized_184345355 = '\x01';
            }
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,
                       (Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____gett
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____sett
            ;
            goto label_181ee8aea;
          }
          goto label_181ee95ab;
        }
        if (uVar3 != 0xdebe8d80) goto label_181ee95ab;
        bVar2 = System_String__op_Equality(name,"Raycast",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ee95ab;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434535f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__Raycast_b__16_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434535f = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
        }
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__16_0;
        if (__this_02 != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ee9577;
        if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
        __this_02 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)
                               TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this_02,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__Raycast_b__16_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__16_0 =
             (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this_02;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__16_0;
        goto label_181ee956f;
      }
      bVar2 = System_String__op_Equality(name,"MaterialName",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ee95ab;
      if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345359 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__MaterialName_g____gette
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
        Il2CppMethodInitialized_184345359 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
      pMVar6 = 
      MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__MaterialName_g____gette
      ;
    }
  }
label_181ee9214:
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar6,(MethodInfo_16E67D0 *)0x0);
  pCVar4 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  __this_03 = (System_Action_CustomLogicColliderBuiltin__object__o *)0x0;
label_181ee9236:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)pCVar4,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_03,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)pCVar4;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__AttachedArticulationBody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__AttachedArticulationBody (const MethodInfo* method);
// 0x181efa8a0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__AttachedArticulationBody
          (MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345351 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__AttachedArticulationBod
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_184345351 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__AttachedArticulationBod
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ContactOffset
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ContactOffset (const MethodInfo* method);
// 0x181efb430

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ContactOffset(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345352 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_184345352 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ContactOffset_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Enabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Enabled (const MethodInfo* method);
// 0x181efbbb0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Enabled(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345353 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_184345353 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Enabled_g____setter_4_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ExcludeLayers
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ExcludeLayers (const MethodInfo* method);
// 0x181efbd90

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ExcludeLayers(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345354 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_184345354 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ExcludeLayers_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__IncludeLayers
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IncludeLayers (const MethodInfo* method);
// 0x181efc2e0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IncludeLayers(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345355 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_184345355 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IncludeLayers_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__IsTrigger
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IsTrigger (const MethodInfo* method);
// 0x181efc560

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__IsTrigger(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345356 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____setter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_184345356 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____getter_7
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__IsTrigger_g____setter_7
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Center
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Center (const MethodInfo* method);
// 0x181efaf80

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Center(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345357 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Center_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_184345357 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Center_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__ProvidesContacts
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ProvidesContacts (const MethodInfo* method);
// 0x181efd370

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__ProvidesContacts(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  System_Action_CustomLogicColliderBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345358 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_184345358 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicColliderBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__ProvidesContacts_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__MaterialName
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__MaterialName (const MethodInfo* method);
// 0x181efcbf0

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__MaterialName(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345359 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__MaterialName_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_184345359 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__MaterialName_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__SharedMaterialName
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__SharedMaterialName (const MethodInfo* method);
// 0x181efe040

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__SharedMaterialName
          (MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434535a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__SharedMaterialName_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_18434535a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__SharedMaterialName_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__Transform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Transform (const MethodInfo* method);
// 0x181efe720

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__Transform(MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434535b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_18434535b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreatePropertyBinding__GameObjectTransform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__GameObjectTransform (const MethodInfo* method);
// 0x181efc010

CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreatePropertyBinding__GameObjectTransform
          (MethodInfo *method)

{
  System_Func_CustomLogicColliderBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434535c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__GameObjectTransform_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
    Il2CppMethodInitialized_18434535c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings___CreatePropertyBinding__GameObjectTransform_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicColliderBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__ClosestPoint
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPoint (const MethodInfo* method);
// 0x181ef4940

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPoint(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434535d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434535d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPoint_b__14_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__ClosestPointOnBounds
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPointOnBounds (const MethodInfo* method);
// 0x181ef4820

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__ClosestPointOnBounds
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434535e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPointOnBounds_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434535e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__ClosestPointOnBounds_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding__Raycast
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__Raycast (const MethodInfo* method);
// 0x181ef7d50

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding__Raycast(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434535f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__Raycast_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434535f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding__Raycast_b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Copy__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Copy__ (const MethodInfo* method);
// 0x181ef9c80

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Copy__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345360 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Copy___b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345360 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Copy___b__17_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__17_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x181efa000

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345361 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Eq___b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345361 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__18_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Eq___b__18_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__18_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o* CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x181efa120

CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *
CustomLogic_CustomLogicColliderBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345362 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Hash___b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345362 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__19_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicColliderBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c___CreateMethodBinding____Hash___b__19_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__19_0 =
         (System_Func_CustomLogicColliderBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings_c->static_fields->__9__19_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicColliderBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181eff940

void CustomLogic_CustomLogicColliderBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345363 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"__Copy__");
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"ExcludeLayers");
    il2cpp_codegen_initialize_runtime_metadata(&"GameObjectTransform");
    il2cpp_codegen_initialize_runtime_metadata(&"ClosestPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"IncludeLayers");
    il2cpp_codegen_initialize_runtime_metadata(&"ContactOffset");
    il2cpp_codegen_initialize_runtime_metadata(&"ClosestPointOnBounds");
    il2cpp_codegen_initialize_runtime_metadata(&"ProvidesContacts");
    il2cpp_codegen_initialize_runtime_metadata(&"MaterialName");
    il2cpp_codegen_initialize_runtime_metadata(&"IsTrigger");
    il2cpp_codegen_initialize_runtime_metadata(&"Enabled");
    il2cpp_codegen_initialize_runtime_metadata(&"SharedMaterialName");
    il2cpp_codegen_initialize_runtime_metadata(&"AttachedArticulationBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Raycast");
    Il2CppMethodInitialized_184345363 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttachedArticulationBody",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ContactOffset",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Enabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ExcludeLayers",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IncludeLayers",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsTrigger",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Center",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ProvidesContacts",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaterialName",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SharedMaterialName",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Transform",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GameObjectTransform",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClosestPoint",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClosestPointOnBounds",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Raycast",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Copy__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicColliderBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__AttachedArticulationBody>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__AttachedArticulationBody_g____getter_2_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef06c0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__AttachedArticulationBody_g____getter_2_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_Rigidbody_o *__this_00;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345346 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      Il2CppMethodInitialized_184345346 = '\x01';
    }
    __this = (__i->fields).collider;
    if (__this != (UnityEngine_Collider_o *)0x0) {
      __this_00 = UnityEngine_Collider__get_attachedRigidbody(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        transform = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)
        ;
        CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,transform,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ContactOffset>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ContactOffset_g____getter_3_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1270

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ContactOffset_g____getter_3_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    local_res8[0] = UnityEngine_Collider__get_contactOffset(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ContactOffset>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ContactOffset_g____setter_3_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef12b0

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ContactOffset_g____setter_3_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  float value;
  
  if (Il2CppMethodInitialized_184345364 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345364 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    UnityEngine_Collider__set_contactOffset(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1820

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____getter_4_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    local_res8[0] = UnityEngine_Collider__get_enabled(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Enabled>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef18a0

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Enabled_g____setter_4_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_184345365 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345365 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    UnityEngine_Collider__set_enabled(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ExcludeLayers>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ExcludeLayers_g____getter_5_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1b10

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ExcludeLayers_g____getter_5_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_LayerMask_o intVal;
  Il2CppObject *pIVar1;
  UnityEngine_LayerMask_Fields local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    intVal = UnityEngine_Collider__get_excludeLayers(__this,(MethodInfo *)0x0);
    local_res8[0].m_Mask = (int32_t)UnityEngine_LayerMask__op_Implicit(intVal.fields.m_Mask,(MethodInfo *)0x0)
    ;
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ExcludeLayers>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ExcludeLayers_g____setter_5_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1b60

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ExcludeLayers_g____setter_5_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  int32_t intVal;
  UnityEngine_LayerMask_o value;
  
  if (Il2CppMethodInitialized_184345366 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345366 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  intVal = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    __this = (__i->fields).collider;
    value = UnityEngine_LayerMask__op_Implicit(intVal,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__set_excludeLayers(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IncludeLayers>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IncludeLayers_g____getter_6_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1ec0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IncludeLayers_g____getter_6_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_LayerMask_o intVal;
  Il2CppObject *pIVar1;
  UnityEngine_LayerMask_Fields local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    intVal = UnityEngine_Collider__get_includeLayers(__this,(MethodInfo *)0x0);
    local_res8[0].m_Mask = (int32_t)UnityEngine_LayerMask__op_Implicit(intVal.fields.m_Mask,(MethodInfo *)0x0)
    ;
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IncludeLayers>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IncludeLayers_g____setter_6_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef1f10

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IncludeLayers_g____setter_6_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  int32_t intVal;
  UnityEngine_LayerMask_o value;
  
  if (Il2CppMethodInitialized_184345367 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345367 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  intVal = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    __this = (__i->fields).collider;
    value = UnityEngine_LayerMask__op_Implicit(intVal,(MethodInfo *)0x0);
    if (__this != (UnityEngine_Collider_o *)0x0) {
      UnityEngine_Collider__set_includeLayers(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IsTrigger>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IsTrigger_g____getter_7_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef20a0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IsTrigger_g____getter_7_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    local_res8[0] = UnityEngine_Collider__get_isTrigger(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__IsTrigger>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IsTrigger_g____setter_7_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef20e0

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__IsTrigger_g____setter_7_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_184345368 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345368 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    UnityEngine_Collider__set_isTrigger(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Center>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_8_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef0bf0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Center_g____getter_8_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Bounds_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Bounds_o local_38 [2];
  
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345347 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345347 = '\x01';
    }
    __this = (__i->fields).collider;
    if (__this != (UnityEngine_Collider_o *)0x0) {
      pUVar4 = UnityEngine_Collider__get_bounds(local_38,__this,(MethodInfo *)0x0);
      fVar1 = (pUVar4->fields).m_Center.fields.x;
      fVar2 = (pUVar4->fields).m_Center.fields.y;
      fVar3 = (pUVar4->fields).m_Center.fields.z;
      local_38[0].fields.m_Extents.fields.y = (pUVar4->fields).m_Extents.fields.y;
      local_38[0].fields.m_Extents.fields.z = (pUVar4->fields).m_Extents.fields.z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_38[0].fields.m_Center.fields.x = fVar1;
      local_38[0].fields.m_Center.fields.y = fVar2;
      local_38[0].fields.m_Center.fields.z = fVar3;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ProvidesContacts>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ProvidesContacts_g____getter_9_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef29a0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ProvidesContacts_g____getter_9_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    local_res8[0] = UnityEngine_Collider__get_providesContacts(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__ProvidesContacts>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ProvidesContacts_g____setter_9_1 (CustomLogic_CustomLogicColliderBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ef29e0

void CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__ProvidesContacts_g____setter_9_1
               (CustomLogic_CustomLogicColliderBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  bool value;
  
  if (Il2CppMethodInitialized_184345369 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345369 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    UnityEngine_Collider__set_providesContacts(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__MaterialName>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__MaterialName_g____getter_10_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef2530

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__MaterialName_g____getter_10_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    __this_00 = (UnityEngine_Object_o *)UnityEngine_Collider__get_material(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__SharedMaterialName>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__SharedMaterialName_g____getter_11_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3300

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__SharedMaterialName_g____getter_11_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Collider_o *__this;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) &&
     (__this = (__i->fields).collider, __this != (UnityEngine_Collider_o *)0x0)) {
    __this_00 = (UnityEngine_Object_o *)UnityEngine_Collider__get_sharedMaterial(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_12_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef3970

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_12_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Component_o *__this;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345348 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      Il2CppMethodInitialized_184345348 = '\x01';
    }
    __this = (UnityEngine_Component_o *)(__i->fields).collider;
    if (__this != (UnityEngine_Component_o *)0x0) {
      transform = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin.Bindings$$<__CreatePropertyBinding__GameObjectTransform>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__GameObjectTransform_g____getter_13_0 (CustomLogic_CustomLogicColliderBuiltin_o* __i, const MethodInfo* method);
// 0x181ef1cd0

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin_Bindings_____CreatePropertyBinding__GameObjectTransform_g____getter_13_0
          (CustomLogic_CustomLogicColliderBuiltin_o *__i,MethodInfo *method)

{
  UnityEngine_Component_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (__i != (CustomLogic_CustomLogicColliderBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345349 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      Il2CppMethodInitialized_184345349 = '\x01';
    }
    __this = (UnityEngine_Component_o *)(__i->fields).collider;
    if (__this != (UnityEngine_Component_o *)0x0) {
      __this_00 = UnityEngine_Component__get_gameObject(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
        transform = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin)
        ;
        CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,transform,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin___ctor (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02960

void CustomLogic_CustomLogicColliderBuiltin___ctor
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345344 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345344 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin___ctor (CustomLogic_CustomLogicColliderBuiltin_o* __this, System_Object_array* parameters, const MethodInfo* method);
// 0x181f02850

void CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,System_Object_array *parameters,
               MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Collider_o *value;
  
  if (Il2CppMethodInitialized_184345345 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Collider);
    Il2CppMethodInitialized_184345345 = '\x01';
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
  value = (UnityEngine_Collider_o *)parameters->m_Items[0];
  if (value == (UnityEngine_Collider_o *)0x0) {
    (__this->fields).collider = (UnityEngine_Collider_o *)0x0;
  }
  else {
    bVar1 = (TypeInfo_UnityEngine_Collider->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Collider
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
    (__this->fields).collider = value;
    bVar1 = (TypeInfo_UnityEngine_Collider->_2).typeHierarchyDepth;
    if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
       ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_UnityEngine_Collider
       )) {
      il2cpp_codegen_raise_invalid_cast_exception(value);
    }
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).collider,value);
  return;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_AttachedArticulationBody
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__get_AttachedArticulationBody (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f029b0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__get_AttachedArticulationBody
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  
  if (Il2CppMethodInitialized_184345346 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_184345346 = '\x01';
  }
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    __this_01 = UnityEngine_Collider__get_attachedRigidbody(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Rigidbody_o *)0x0) {
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0)
      ;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,transform,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ContactOffset
// il2cpp: float CustomLogic_CustomLogicColliderBuiltin__get_ContactOffset (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02b10

float CustomLogic_CustomLogicColliderBuiltin__get_ContactOffset
                (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  float fVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    fVar1 = UnityEngine_Collider__get_contactOffset(__this_00,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_ContactOffset
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_ContactOffset (CustomLogic_CustomLogicColliderBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f02d40

void CustomLogic_CustomLogicColliderBuiltin__set_ContactOffset
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,float value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_contactOffset(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_Enabled
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_Enabled (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02b30

bool CustomLogic_CustomLogicColliderBuiltin__get_Enabled
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = UnityEngine_Collider__get_enabled(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_Enabled
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_Enabled (CustomLogic_CustomLogicColliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f02d60

void CustomLogic_CustomLogicColliderBuiltin__set_Enabled
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_enabled(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ExcludeLayers
// il2cpp: int32_t CustomLogic_CustomLogicColliderBuiltin__get_ExcludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02b50

int32_t CustomLogic_CustomLogicColliderBuiltin__get_ExcludeLayers
                  (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o UVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UVar1 = UnityEngine_Collider__get_excludeLayers(__this_00,(MethodInfo *)0x0);
    UVar1 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar1.fields.m_Mask,(MethodInfo *)0x0);
    return (int32_t)UVar1.fields.m_Mask;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_ExcludeLayers
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_ExcludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f02d80

void CustomLogic_CustomLogicColliderBuiltin__set_ExcludeLayers
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o value_00;
  
  __this_00 = (__this->fields).collider;
  value_00 = UnityEngine_LayerMask__op_Implicit(value,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_excludeLayers(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IncludeLayers
// il2cpp: int32_t CustomLogic_CustomLogicColliderBuiltin__get_IncludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02c00

int32_t CustomLogic_CustomLogicColliderBuiltin__get_IncludeLayers
                  (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o UVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UVar1 = UnityEngine_Collider__get_includeLayers(__this_00,(MethodInfo *)0x0);
    UVar1 = UnityEngine_LayerMask__op_Implicit((int32_t)UVar1.fields.m_Mask,(MethodInfo *)0x0);
    return (int32_t)UVar1.fields.m_Mask;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_IncludeLayers
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_IncludeLayers (CustomLogic_CustomLogicColliderBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f02dc0

void CustomLogic_CustomLogicColliderBuiltin__set_IncludeLayers
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_LayerMask_o value_00;
  
  __this_00 = (__this->fields).collider;
  value_00 = UnityEngine_LayerMask__op_Implicit(value,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_includeLayers(__this_00,value_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IsTrigger
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_IsTrigger (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02c30

bool CustomLogic_CustomLogicColliderBuiltin__get_IsTrigger
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = UnityEngine_Collider__get_isTrigger(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_IsTrigger
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_IsTrigger (CustomLogic_CustomLogicColliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f02e00

void CustomLogic_CustomLogicColliderBuiltin__set_IsTrigger
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_isTrigger(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_Center
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicColliderBuiltin__get_Center (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02a30

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicColliderBuiltin__get_Center
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_Bounds_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Bounds_o local_38 [2];
  
  if (Il2CppMethodInitialized_184345347 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345347 = '\x01';
  }
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    pUVar4 = UnityEngine_Collider__get_bounds(local_38,__this_00,(MethodInfo *)0x0);
    fVar1 = (pUVar4->fields).m_Center.fields.x;
    fVar2 = (pUVar4->fields).m_Center.fields.y;
    fVar3 = (pUVar4->fields).m_Center.fields.z;
    local_38[0].fields.m_Extents.fields.y = (pUVar4->fields).m_Extents.fields.y;
    local_38[0].fields.m_Extents.fields.z = (pUVar4->fields).m_Extents.fields.z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_38[0].fields.m_Center.fields.x = fVar1;
    local_38[0].fields.m_Center.fields.y = fVar2;
    local_38[0].fields.m_Center.fields.z = fVar3;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_38,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ProvidesContacts
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_ProvidesContacts (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02c80

bool CustomLogic_CustomLogicColliderBuiltin__get_ProvidesContacts
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    bVar1 = UnityEngine_Collider__get_providesContacts(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$set_ProvidesContacts
// il2cpp: void CustomLogic_CustomLogicColliderBuiltin__set_ProvidesContacts (CustomLogic_CustomLogicColliderBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f02e20

void CustomLogic_CustomLogicColliderBuiltin__set_ProvidesContacts
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,bool value,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_providesContacts(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_MaterialName
// il2cpp: System_String_o* CustomLogic_CustomLogicColliderBuiltin__get_MaterialName (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02c50

System_String_o *
CustomLogic_CustomLogicColliderBuiltin__get_MaterialName
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    __this_01 = (UnityEngine_Object_o *)UnityEngine_Collider__get_material(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_SharedMaterialName
// il2cpp: System_String_o* CustomLogic_CustomLogicColliderBuiltin__get_SharedMaterialName (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02ca0

System_String_o *
CustomLogic_CustomLogicColliderBuiltin__get_SharedMaterialName
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *__this_01;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    __this_01 = (UnityEngine_Object_o *)UnityEngine_Collider__get_sharedMaterial(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      pSVar1 = UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_Transform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__get_Transform (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02cd0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__get_Transform
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_01;
  
  if (Il2CppMethodInitialized_184345348 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_184345348 = '\x01';
  }
  __this_00 = (UnityEngine_Component_o *)(__this->fields).collider;
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    transform = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_01,transform,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_GameObjectTransform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__get_GameObjectTransform (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02b80

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__get_GameObjectTransform
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Component_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_02;
  
  if (Il2CppMethodInitialized_184345349 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_184345349 = '\x01';
  }
  __this_00 = (UnityEngine_Component_o *)(__this->fields).collider;
  if (__this_00 != (UnityEngine_Component_o *)0x0) {
    __this_01 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      transform = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this_02,transform,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$ClosestPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicColliderBuiltin__ClosestPoint (CustomLogic_CustomLogicColliderBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x181f020e0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicColliderBuiltin__ClosestPoint
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *position,
          MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).collider, __this_00 != (UnityEngine_Collider_o *)0x0)) {
    local_28.x = (position->fields).Value.fields.x;
    local_28.y = (position->fields).Value.fields.y;
    local_28.z = (position->fields).Value.fields.z;
    pUVar1 = UnityEngine_Collider__ClosestPoint
                       (local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$ClosestPointOnBounds
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicColliderBuiltin__ClosestPointOnBounds (CustomLogic_CustomLogicColliderBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x181f02070

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicColliderBuiltin__ClosestPointOnBounds
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *position,
          MethodInfo *method)

{
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Vector3_o *pUVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_00 = (__this->fields).collider, __this_00 != (UnityEngine_Collider_o *)0x0)) {
    local_28.x = (position->fields).Value.fields.x;
    local_28.y = (position->fields).Value.fields.y;
    local_28.z = (position->fields).Value.fields.z;
    pUVar1 = UnityEngine_Collider__ClosestPointOnBounds
                       (local_18,__this_00,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    local_28.x = (pUVar1->fields).x;
    local_28.y = (pUVar1->fields).y;
    local_28.z = (pUVar1->fields).z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$Raycast
// il2cpp: CustomLogic_CustomLogicLineCastHitResultBuiltin_o* CustomLogic_CustomLogicColliderBuiltin__Raycast (CustomLogic_CustomLogicColliderBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* start, CustomLogic_CustomLogicVector3Builtin_o* end, System_String_o* collideWith, const MethodInfo* method);
// 0x181f02220

CustomLogic_CustomLogicLineCastHitResultBuiltin_o *
CustomLogic_CustomLogicColliderBuiltin__Raycast
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *start,
          CustomLogic_CustomLogicVector3Builtin_o *end,System_String_o *collideWith,MethodInfo *method)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  float fVar6;
  bool bVar7;
  int32_t iVar8;
  UnityEngine_Collider_o *pUVar9;
  CustomLogic_BuiltinClassInstance_o *value;
  CustomLogic_CustomLogicLineCastHitResultBuiltin_o *__this_00;
  CustomLogic_BuiltinClassInstance_o *pCVar10;
  UnityEngine_Vector3_o *pUVar11;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar12;
  System_Object_array *parameters;
  Il2CppObject *pIVar13;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_01;
  float fVar14;
  UnityEngine_LayerMask_Fields local_res10;
  UnityEngine_Vector3_Fields local_88;
  UnityEngine_Vector3_Fields local_78;
  UnityEngine_Touch_Fields local_68;
  
  if (Il2CppMethodInitialized_18434534a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_PhysicsLayer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Physics);
    Il2CppMethodInitialized_18434534a = '\x01';
  }
  local_res10.m_Mask = 0;
  local_68.m_RawPosition.fields.y = 0.0;
  local_68.m_PositionDelta.fields.x = 0.0;
  local_68.m_PositionDelta.fields.y = 0.0;
  local_68.m_TimeDelta = 0.0;
  local_68.m_TapCount = 0;
  local_68.m_Phase = 0;
  local_68.m_Type = 0;
  local_68.m_FingerId = 0;
  local_68.m_Position.fields.x = 0.0;
  local_68.m_Position.fields.y = 0.0;
  local_68.m_RawPosition.fields.x = 0.0;
  if ((start != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (end != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    uVar1._0_4_ = (start->fields).Value.fields.x;
    uVar1._4_4_ = (start->fields).Value.fields.y;
    fVar14 = (start->fields).Value.fields.z;
    fVar6 = (end->fields).Value.fields.z;
    uVar2._0_4_ = (end->fields).Value.fields.x;
    uVar2._4_4_ = (end->fields).Value.fields.y;
    if ((TypeInfo_Map_MapLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapLoader);
    }
    iVar8 = Map_MapLoader__GetColliderLayer(collideWith,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_PhysicsLayer->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_PhysicsLayer);
    }
    local_res10.m_Mask = (int32_t)Utility_PhysicsLayer__CopyMask(iVar8,(MethodInfo *)0x0);
    iVar8 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)&local_res10,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Physics->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Physics);
    }
    local_88._0_8_ = uVar2;
    local_88.z = fVar6;
    local_78._0_8_ = uVar1;
    local_78.z = fVar14;
    bVar7 = UnityEngine_Physics__Linecast_2fe2eb0
                      ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_Vector3_o *)&local_88,
                       (UnityEngine_RaycastHit_o *)&local_68,iVar8,(MethodInfo *)0x0);
    if (bVar7) {
      pUVar9 = UnityEngine_RaycastHit__get_collider((UnityEngine_RaycastHit_o *)&local_68,(MethodInfo *)0x0);
      value = CustomLogic_CustomLogicCollisionHandler__GetBuiltin(pUVar9,(MethodInfo *)0x0);
      if (value != (CustomLogic_BuiltinClassInstance_o *)0x0) {
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicLineCastHitResultBuiltin);
        CustomLogic_CustomLogicLineCastHitResultBuiltin___ctor(__this_00,(MethodInfo *)0x0);
        bVar5 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar5) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
            (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0;
        if (bVar7) {
          pCVar10 = value;
        }
        if (__this_00 != (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0) {
          CustomLogic_CustomLogicLineCastHitResultBuiltin__set_IsCharacter
                    (__this_00,pCVar10 != (CustomLogic_BuiltinClassInstance_o *)0x0,(MethodInfo *)0x0);
          bVar5 = (TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar5) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar5 - 1] !=
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapObjectBuiltin)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          pCVar10 = (CustomLogic_BuiltinClassInstance_o *)0x0;
          if (bVar7) {
            pCVar10 = value;
          }
          (__this_00->fields)._IsMapObject_k__BackingField =
               pCVar10 != (CustomLogic_BuiltinClassInstance_o *)0x0;
          pUVar11 = UnityEngine_RaycastHit__get_point
                              ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_RaycastHit_o *)&local_68,
                               (MethodInfo *)0x0);
          uVar3._0_4_ = (pUVar11->fields).x;
          uVar3._4_4_ = (pUVar11->fields).y;
          fVar14 = (pUVar11->fields).z;
          pCVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_78._0_8_ = uVar3;
          local_78.z = fVar14;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar12,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
          (__this_00->fields)._Point_k__BackingField = pCVar12;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Point_k__BackingField,pCVar12);
          pUVar11 = UnityEngine_RaycastHit__get_normal
                              ((UnityEngine_Vector3_o *)&local_78,(UnityEngine_RaycastHit_o *)&local_68,
                               (MethodInfo *)0x0);
          uVar4._0_4_ = (pUVar11->fields).x;
          uVar4._4_4_ = (pUVar11->fields).y;
          fVar14 = (pUVar11->fields).z;
          pCVar12 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
          local_78._0_8_ = uVar4;
          local_78.z = fVar14;
          CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                    (pCVar12,(UnityEngine_Vector3_o *)&local_78,(MethodInfo *)0x0);
          (__this_00->fields)._Normal_k__BackingField = pCVar12;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Normal_k__BackingField,pCVar12);
          fVar14 = UnityEngine_Touch__get_deltaTime((UnityEngine_Touch_o *)&local_68,(MethodInfo *)0x0);
          (__this_00->fields)._Distance_k__BackingField = fVar14;
          (__this_00->fields)._Collider_k__BackingField = value;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Collider_k__BackingField,value);
          parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
          pUVar9 = UnityEngine_RaycastHit__get_collider
                             ((UnityEngine_RaycastHit_o *)&local_68,(MethodInfo *)0x0);
          if (parameters != (System_Object_array *)0x0) {
            if ((pUVar9 != (UnityEngine_Collider_o *)0x0) &&
               (pIVar13 = il2cpp_vm_Object_IsInst
                                    ((Il2CppObject *)pUVar9,(((parameters->obj).klass)->_1).element_class),
               pIVar13 == (Il2CppObject *)0x0)) {
              pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
            }
            if ((int)parameters->max_length != 0) {
              parameters->m_Items[0] = (Il2CppObject *)pUVar9;
              Il2CppCodeGenWriteBarrier(parameters->m_Items,pUVar9);
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
              CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_01,parameters,(MethodInfo *)0x0);
              (__this_00->fields)._ColliderInfo_k__BackingField = __this_01;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._ColliderInfo_k__BackingField,__this_01);
              return __this_00;
            }
            ThrowIndexOutOfRangeException();
          }
        }
        goto label_181f025e9;
      }
    }
    return (CustomLogic_CustomLogicLineCastHitResultBuiltin_o *)0x0;
  }
label_181f025e9:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$Copy
// il2cpp: CustomLogic_BuiltinClassInstance_o* CustomLogic_CustomLogicColliderBuiltin__Copy (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02150

CustomLogic_BuiltinClassInstance_o *
CustomLogic_CustomLogicColliderBuiltin__Copy
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_18434534b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_18434534b = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  obj = (__this->fields).collider;
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
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_00,parameters,(MethodInfo *)0x0);
    return (CustomLogic_BuiltinClassInstance_o *)__this_00;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicColliderBuiltin$$__Copy__
// il2cpp: Il2CppObject* CustomLogic_CustomLogicColliderBuiltin____Copy__ (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02610

Il2CppObject *
CustomLogic_CustomLogicColliderBuiltin____Copy__
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Collider_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColliderBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_18434534c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_18434534c = '\x01';
  }
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  obj = (__this->fields).collider;
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
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    CustomLogic_CustomLogicColliderBuiltin___ctor_1f02850(__this_00,parameters,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicColliderBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin____Eq__ (CustomLogic_CustomLogicColliderBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181f026e0

bool CustomLogic_CustomLogicColliderBuiltin____Eq__
               (CustomLogic_CustomLogicColliderBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *x;
  Il2CppClass *y;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434534d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicColliderBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434534d = '\x01';
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin->_2).typeHierarchyDepth;
    if (((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
        ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
         (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin)) && (other != (Il2CppObject *)0x0)) {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicColliderBuiltin->_2).typeHierarchyDepth;
      if ((bVar1 <= (other->klass->_2).typeHierarchyDepth) &&
         ((other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicColliderBuiltin)) {
        x = self[3].klass;
        y = other[3].klass;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  return false;
}


// CustomLogic.CustomLogicColliderBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicColliderBuiltin____Hash__ (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f027c0

int32_t CustomLogic_CustomLogicColliderBuiltin____Hash__
                  (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Collider_o *pUVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_18434534e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434534e = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).collider;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return 0;
  }
  pUVar1 = (__this->fields).collider;
  if (pUVar1 != (UnityEngine_Collider_o *)0x0) {
    iVar3 = (*(pUVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pUVar1,(pUVar1->klass->vtable)._2_GetHashCode.method);
    return iVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicColliderBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicColliderBuiltin__get_ClassName (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x181f02ae0

System_String_o *
CustomLogic_CustomLogicColliderBuiltin__get_ClassName
          (CustomLogic_CustomLogicColliderBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434534f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Collider");
    Il2CppMethodInitialized_18434534f = '\x01';
  }
  return "Collider";
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_IsAbstract (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicColliderBuiltin__get_IsAbstract(CustomLogic_CustomLogicColliderBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_IsStatic (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicColliderBuiltin__get_IsStatic(CustomLogic_CustomLogicColliderBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicColliderBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicColliderBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicColliderBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicColliderBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicColliderBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


