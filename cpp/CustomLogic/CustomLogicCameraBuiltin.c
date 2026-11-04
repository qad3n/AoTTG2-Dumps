// Type: CustomLogic.CustomLogicCameraBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCameraBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCameraBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicCameraBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCameraBuiltin_o* CustomLogic_CustomLogicCameraBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x182017480

CustomLogic_CustomLogicCameraBuiltin_o *
CustomLogic_CustomLogicCameraBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843462be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin);
    Il2CppMethodInitialized_1843462be = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin);
      if (Il2CppMethodInitialized_1843462a5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843462a5 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicCameraBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCameraBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x182019360

void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843462da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462da = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicCameraBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetManual>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetManual_b__12_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182018990

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetManual_b__12_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843462db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462db = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (Il2CppMethodInitialized_18434639c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_18434639c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera = bVar1;
      return (Il2CppObject *)0x0;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetPosition>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__13_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182018a50

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetPosition_b__13_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  Il2CppObject *obj;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  Cameras_InGameCamera_o *__this_00;
  float fVar4;
  float fVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  
  if (Il2CppMethodInitialized_1843462dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462dc = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_1843462b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_1843462b4 = '\x01';
    }
    if (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      fVar4 = (pCVar6->fields).Value.fields.x;
      fVar5 = (pCVar6->fields).Value.fields.y;
      fVar2 = (pCVar6->fields).Value.fields.z;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      (pCVar3->CameraPosition).fields.x = fVar4;
      (pCVar3->CameraPosition).fields.y = fVar5;
      (pCVar3->CameraPosition).fields.z = fVar2;
      __this_00 = (Cameras_InGameCamera_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
        bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
          Cameras_InGameCamera__SyncCustomPosition(__this_00,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
        il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Cameras_InGameCamera);
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetRotation>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetRotation_b__14_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182018bb0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetRotation_b__14_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  Il2CppObject *obj;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  Cameras_InGameCamera_o *__this_00;
  float fVar4;
  float fVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  
  if (Il2CppMethodInitialized_1843462dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462dd = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_1843462b5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_1843462b5 = '\x01';
    }
    if (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      fVar4 = (pCVar6->fields).Value.fields.x;
      fVar5 = (pCVar6->fields).Value.fields.y;
      fVar2 = (pCVar6->fields).Value.fields.z;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      (pCVar3->CameraRotation).fields.x = fVar4;
      (pCVar3->CameraRotation).fields.y = fVar5;
      (pCVar3->CameraRotation).fields.z = fVar2;
      __this_00 = (Cameras_InGameCamera_o *)
                  TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
      if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
        bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
          Cameras_InGameCamera__SyncCustomPosition(__this_00,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
        il2cpp_codegen_raise_invalid_cast_exception(__this_00,TypeInfo_Cameras_InGameCamera);
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetVelocity>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetVelocity_b__15_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182018d10

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetVelocity_b__15_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  float fVar1;
  Il2CppObject *obj;
  CustomLogic_CustomLogicManager_StaticFields *pCVar2;
  float fVar3;
  float fVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  
  if (Il2CppMethodInitialized_1843462de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462de = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_1843462b6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_1843462b6 = '\x01';
    }
    if (pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      fVar3 = (pCVar5->fields).Value.fields.x;
      fVar4 = (pCVar5->fields).Value.fields.y;
      fVar1 = (pCVar5->fields).Value.fields.z;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      (pCVar2->CameraVelocity).fields.x = fVar3;
      (pCVar2->CameraVelocity).fields.y = fVar4;
      (pCVar2->CameraVelocity).fields.z = fVar1;
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__16_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182017fd0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__16_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Il2CppObject *obj;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  CustomLogic_CustomLogicManager_StaticFields *pCVar6;
  float fVar7;
  float fVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  Cameras_InGameCamera_o *pCVar10;
  UnityEngine_Quaternion_o *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462df = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (Il2CppMethodInitialized_1843462b7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
      Il2CppMethodInitialized_1843462b7 = '\x01';
    }
    local_28[0].x = 0.0;
    local_28[0].y = 0.0;
    local_28[0].z = 0.0;
    local_28[0].w = 0.0;
    pCVar10 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
    if ((((pCVar10 != (Cameras_InGameCamera_o *)0x0) &&
         (pUVar4 = (pCVar10->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
        (pCVar9 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      local_48.x = (pCVar9->fields).Value.fields.x;
      local_48.y = (pCVar9->fields).Value.fields.y;
      local_48.z = (pCVar9->fields).Value.fields.z;
      UnityEngine_Transform__LookAt_2f599f0(pUVar5,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
      pCVar10 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
      if (((pCVar10 != (Cameras_InGameCamera_o *)0x0) &&
          (pUVar4 = (pCVar10->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
         (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        pUVar11 = UnityEngine_Transform__get_rotation(&local_38,pUVar5,(MethodInfo *)0x0);
        local_28[0].x = (pUVar11->fields).x;
        local_28[0].y = (pUVar11->fields).y;
        local_28[0].z = (pUVar11->fields).z;
        local_28[0].w = (pUVar11->fields).w;
        pUVar12 = UnityEngine_Quaternion__Internal_ToEulerRad
                            ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                             (MethodInfo *)0x0);
        uVar1 = (pUVar12->fields).x;
        uVar2 = (pUVar12->fields).y;
        local_48.y = (float)uVar2 * 57.29578;
        local_48.x = (float)uVar1 * 57.29578;
        local_48.z = (pUVar12->fields).z * 57.29578;
        pUVar12 = UnityEngine_Quaternion__Internal_MakePositive
                            ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                             (MethodInfo *)0x0);
        fVar7 = (pUVar12->fields).x;
        fVar8 = (pUVar12->fields).y;
        fVar3 = (pUVar12->fields).z;
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
        (pCVar6->CameraRotation).fields.x = fVar7;
        (pCVar6->CameraRotation).fields.y = fVar8;
        (pCVar6->CameraRotation).fields.z = fVar3;
        return (Il2CppObject *)0x0;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetFOV>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetFOV_b__17_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820188b0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetFOV_b__17_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float fVar1;
  
  if (Il2CppMethodInitialized_1843462e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462e0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
      if (Il2CppMethodInitialized_18434639d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_18434639d = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV = fVar1;
      return (Il2CppObject *)0x0;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCameraMode>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraMode_b__18_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182018660

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraMode_b__18_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool bVar1;
  int32_t value;
  System_String_o *a;
  System_Nullable_CameraInputMode__Fields local_res18 [2];
  
  if (Il2CppMethodInitialized_1843462e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462e1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  a = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if (Il2CppMethodInitialized_1843462b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_Parse_CameraInputMode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CameraInputMode_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843462b9 = '\x01';
  }
  bVar1 = System_String__op_Equality(a,"null",(MethodInfo *)0x0);
  if (!bVar1) {
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    value = System_Enum__Parse_Int32Enum_(a,(MethodInfo_6B1730 *)MethodInfo_System_Enum_Parse_CameraInputMode)
    ;
    local_res18[0].hasValue = false;
    local_res18[0]._1_3_ = 0;
    local_res18[0].value = 0;
    System_Data_SqlTypes_SqlInt32___ctor_ae2660
              ((System_Data_SqlTypes_SqlInt32_o *)local_res18,value,
               MethodInfo_System_Nullable_CameraInputMode_ctor);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields = local_res18[0];
    return (Il2CppObject *)0x0;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields =
       (System_Nullable_CameraInputMode__Fields)0x0;
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetDistance>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetDistance_b__19_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182018560

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetDistance_b__19_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Cameras_InGameCamera_o *__this_00;
  
  __this_00 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    Cameras_InGameCamera__ResetDistance(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__ResetCameraMode>b__20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetCameraMode_b__20_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820184f0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__ResetCameraMode_b__20_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Cameras_InGameCamera_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462ba = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields =
       (System_Nullable_CameraInputMode__Fields)0x0;
  __this_00 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (__this_00 != (Cameras_InGameCamera_o *)0x0) {
    Cameras_InGameCamera__ResetCameraMode(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCameraLocked>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraLocked_b__21_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182018590

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCameraLocked_b__21_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843462e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462e2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (Il2CppMethodInitialized_18434639e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_18434639e = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraLocked = bVar1;
      return (Il2CppObject *)0x0;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCursorVisible>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCursorVisible_b__22_0 (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCameraBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820187e0

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings___c_____CreateMethodBinding__SetCursorVisible_b__22_0
          (CustomLogic_CustomLogicCameraBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCameraBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843462e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462e3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      bVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      if (Il2CppMethodInitialized_18434639f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
        Il2CppMethodInitialized_18434639f = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      TypeInfo_CustomLogic_CustomLogicManager->static_fields->CursorVisible = bVar1;
      return (Il2CppObject *)0x0;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCameraBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ff59e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCameraBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_1843462bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SetCursorVisible");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"SetRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"IsManual");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"SetVelocity");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetCameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCameraLocked");
    il2cpp_codegen_initialize_runtime_metadata(&"Velocity");
    il2cpp_codegen_initialize_runtime_metadata(&"SetFOV");
    il2cpp_codegen_initialize_runtime_metadata(&"FOV");
    il2cpp_codegen_initialize_runtime_metadata(&"FollowDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"SetManual");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"LookAt");
    Il2CppMethodInitialized_1843462bf = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x6dd1aa8b) {
    if (0x42f35940 < uVar3) {
      if (uVar3 < 0x56e974f5) {
        if (uVar3 == 0x51f457ad) {
          bVar2 = System_String__op_Equality(name,"SetCursorVisible",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843462d4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCursorVisible_b__22_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843462d4 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__22_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCursorVisible_b__22_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__22_0 =
                   (System_Func_CustomLogicCameraBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__22_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x56e974f4) {
          bVar2 = System_String__op_Equality(name,"SetVelocity",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843462cd == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetVelocity_b__15_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843462cd = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__15_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetVelocity_b__15_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__15_0 =
                   (System_Func_CustomLogicCameraBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__15_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
      }
      else if (uVar3 == 0x5853691b) {
        bVar2 = System_String__op_Equality(name,"ResetDistance",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843462d1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetDistance_b__19_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843462d1 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__19_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetDistance_b__19_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__19_0 =
                 (System_Func_CustomLogicCameraBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__19_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x5e2c4c73) {
        bVar2 = System_String__op_Equality(name,"LookAt",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843462ce == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__16_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843462ce = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__16_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__16_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__16_0 =
                 (System_Func_CustomLogicCameraBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__16_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x6dd1aa8a) {
        bVar2 = System_String__op_Equality(name,"SetCameraLocked",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843462d3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraLocked_b__21_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843462d3 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__21_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraLocked_b__21_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__21_0 =
                 (System_Func_CustomLogicCameraBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__21_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_181ff7106;
    }
    if (uVar3 < 0x1e9e9f86) {
      if (uVar3 == 0x232777f) {
        bVar2 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ff7106;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843462c2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
          Il2CppMethodInitialized_1843462c2 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4_0
        ;
        goto label_181ff5c94;
      }
      if (uVar3 != 0x1e9e9f85) goto label_181ff7106;
      bVar2 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ff7106;
      if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843462c7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_9_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_9_1
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
        Il2CppMethodInitialized_1843462c7 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_9_0
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_9_1;
    }
    else {
      if (uVar3 == 0x24a169e7) {
        bVar2 = System_String__op_Equality(name,"SetCameraMode",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843462d0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraMode_b__18_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843462d0 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__18_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraMode_b__18_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__18_0 =
                 (System_Func_CustomLogicCameraBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__18_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181ff7106;
      }
      if (uVar3 == 0x2e32cf0b) {
        bVar2 = System_String__op_Equality(name,"FollowDistance",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ff7106;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843462c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____gette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____sette
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
          Il2CppMethodInitialized_1843462c9 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____gette
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____sette
        ;
      }
      else {
        if (uVar3 != 0x42f35940) goto label_181ff7106;
        bVar2 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ff7106;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843462c8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
          Il2CppMethodInitialized_1843462c8 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1;
      }
    }
label_181ff70bf:
    System_Action_object__object____ctor
              (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  }
  else {
    if (uVar3 < 0xd6a213a9) {
      if (uVar3 < 0x8adad751) {
        if (uVar3 == 0x6fcec725) {
          bVar2 = System_String__op_Equality(name,"SetManual",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843462ca == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetManual_b__12_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843462ca = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__12_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetManual_b__12_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__12_0 =
                   (System_Func_CustomLogicCameraBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__12_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x8adad750) {
          bVar2 = System_String__op_Equality(name,"SetPosition",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843462cb == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__13_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843462cb = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__13_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__13_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__13_0 =
                   (System_Func_CustomLogicCameraBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__13_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
label_181ff7106:
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCameraBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
      }
      if (uVar3 != 0xba408252) {
        if (uVar3 == 0xd11e3ab2) {
          bVar2 = System_String__op_Equality(name,"SetFOV",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843462cf == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetFOV_b__17_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843462cf = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__17_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetFOV_b__17_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__17_0 =
                   (System_Func_CustomLogicCameraBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__17_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0xd6a213a8) {
          bVar2 = System_String__op_Equality(name,"ResetCameraMode",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843462d2 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetCameraMode_b__20_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843462d2 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__20_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetCameraMode_b__20_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__20_0 =
                   (System_Func_CustomLogicCameraBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__20_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        goto label_181ff7106;
      }
      bVar2 = System_String__op_Equality(name,"Velocity",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ff7106;
      if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843462c3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
        Il2CppMethodInitialized_1843462c3 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5_0
      ;
    }
    else if (uVar3 < 0xe27f342b) {
      if (uVar3 == 0xdc33653d) {
        bVar2 = System_String__op_Equality(name,"SetRotation",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843462cc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetRotation_b__14_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843462cc = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__14_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetRotation_b__14_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__14_0 =
                 (System_Func_CustomLogicCameraBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__14_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181ff7106;
      }
      if (uVar3 == 0xdeef5e95) {
        bVar2 = System_String__op_Equality(name,"CameraMode",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ff7106;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843462c5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__CameraMode_g____getter_7
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
          Il2CppMethodInitialized_1843462c5 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__CameraMode_g____getter_7
        ;
      }
      else {
        if (uVar3 != 0xe27f342a) goto label_181ff7106;
        bVar2 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ff7106;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843462c1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
          Il2CppMethodInitialized_1843462c1 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3_0
        ;
      }
    }
    else {
      if (uVar3 == 0xe50883ba) {
        bVar2 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ff7106;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843462c6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_8_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_8_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
          Il2CppMethodInitialized_1843462c6 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_8_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_8_1
        ;
        goto label_181ff70bf;
      }
      if (uVar3 == 0xf1bacbd3) {
        bVar2 = System_String__op_Equality(name,"IsManual",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ff7106;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843462c0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__IsManual_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
          Il2CppMethodInitialized_1843462c0 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__IsManual_g____getter_2_0
        ;
      }
      else {
        if (uVar3 != 0xf3cda0fc) goto label_181ff7106;
        bVar2 = System_String__op_Equality(name,"FOV",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ff7106;
        if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843462c4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FOV_g____getter_6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
          Il2CppMethodInitialized_1843462c4 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FOV_g____getter_6_0;
      }
    }
label_181ff5c94:
    System_Func_object__object____ctor
              (__this,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
  }
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__IsManual
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual (const MethodInfo* method);
// 0x182005990

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__IsManual(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843462c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__IsManual_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_1843462c0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__IsManual_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x1820069d0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843462c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_1843462c1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x182007100

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843462c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_1843462c2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Velocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Velocity (const MethodInfo* method);
// 0x1820089b0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Velocity(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843462c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_1843462c3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__FOV
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FOV (const MethodInfo* method);
// 0x182004130

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FOV(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843462c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FOV_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_1843462c4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FOV_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__CameraMode
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__CameraMode (const MethodInfo* method);
// 0x182003190

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__CameraMode(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843462c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__CameraMode_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_1843462c5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__CameraMode_g____getter_7
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x1820045e0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  System_Action_CustomLogicCameraBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843462c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_8_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_1843462c6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_8_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x182006cf0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  System_Action_CustomLogicCameraBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843462c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_9_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_1843462c7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_9_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x1820086e0

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  System_Action_CustomLogicCameraBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843462c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_1843462c8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_10_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreatePropertyBinding__FollowDistance
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FollowDistance (const MethodInfo* method);
// 0x182004310

CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreatePropertyBinding__FollowDistance(MethodInfo *method)

{
  System_Func_CustomLogicCameraBuiltin__object__o *__this;
  System_Action_CustomLogicCameraBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843462c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCameraBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
    Il2CppMethodInitialized_1843462c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicCameraBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings___CreatePropertyBinding__FollowDistance_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCameraBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetManual
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetManual (const MethodInfo* method);
// 0x181fffdf0

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetManual(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetManual_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462ca = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetManual_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicCameraBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetPosition
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetPosition (const MethodInfo* method);
// 0x181ffff10

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetPosition(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462cb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetPosition_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicCameraBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetRotation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetRotation (const MethodInfo* method);
// 0x182000030

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetRotation(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetRotation_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462cc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetRotation_b__14_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicCameraBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetVelocity
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetVelocity (const MethodInfo* method);
// 0x182000150

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetVelocity(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetVelocity_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462cd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetVelocity_b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicCameraBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__LookAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__LookAt (const MethodInfo* method);
// 0x181fff3d0

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__LookAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462ce = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicCameraBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetFOV
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetFOV (const MethodInfo* method);
// 0x181fffcd0

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetFOV(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetFOV_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462cf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetFOV_b__17_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicCameraBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__17_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCameraMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraMode (const MethodInfo* method);
// 0x181fffa90

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraMode(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraMode_b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462d0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__18_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraMode_b__18_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicCameraBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__18_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__ResetDistance
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetDistance (const MethodInfo* method);
// 0x181fff850

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetDistance(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetDistance_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462d1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__19_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetDistance_b__19_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__19_0 =
         (System_Func_CustomLogicCameraBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__19_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__ResetCameraMode
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetCameraMode (const MethodInfo* method);
// 0x181fff730

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__ResetCameraMode(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetCameraMode_b__20_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462d2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__20_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__ResetCameraMode_b__20_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__20_0 =
         (System_Func_CustomLogicCameraBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__20_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCameraLocked
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraLocked (const MethodInfo* method);
// 0x181fff970

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCameraLocked(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraLocked_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462d3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__21_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCameraLocked_b__21_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__21_0 =
         (System_Func_CustomLogicCameraBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__21_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$__CreateMethodBinding__SetCursorVisible
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o* CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCursorVisible (const MethodInfo* method);
// 0x181fffbb0

CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *
CustomLogic_CustomLogicCameraBuiltin_Bindings____CreateMethodBinding__SetCursorVisible(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843462d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCursorVisible_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843462d4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__22_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCameraBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c___CreateMethodBinding__SetCursorVisible_b__22_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__22_0 =
         (System_Func_CustomLogicCameraBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings_c->static_fields->__9__22_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCameraBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x18200a450

void CustomLogic_CustomLogicCameraBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843462d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SetCursorVisible");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"SetRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"IsManual");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"SetVelocity");
    il2cpp_codegen_initialize_runtime_metadata(&"ResetCameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"SetPosition");
    il2cpp_codegen_initialize_runtime_metadata(&"SetCameraLocked");
    il2cpp_codegen_initialize_runtime_metadata(&"Velocity");
    il2cpp_codegen_initialize_runtime_metadata(&"SetFOV");
    il2cpp_codegen_initialize_runtime_metadata(&"FOV");
    il2cpp_codegen_initialize_runtime_metadata(&"FollowDistance");
    il2cpp_codegen_initialize_runtime_metadata(&"SetManual");
    il2cpp_codegen_initialize_runtime_metadata(&"CameraMode");
    il2cpp_codegen_initialize_runtime_metadata(&"LookAt");
    Il2CppMethodInitialized_1843462d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsManual",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Velocity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FOV",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CameraMode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Forward",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Up",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FollowDistance",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetManual",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetPosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetVelocity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LookAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetFOV",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCameraMode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ResetDistance",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ResetCameraMode",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCameraLocked",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCursorVisible",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCameraBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__IsManual>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__IsManual_g____getter_2_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x181ffdc70

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__IsManual_g____getter_2_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_18434639a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434639a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  local_res18[0] = TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera;
  pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x181ffe150

Il2CppObject*
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_3_0(CustomLogic_CustomLogicCameraBuiltin_o* __i, MethodInfo* method)

{
  undefined8 uVar1;
  float fVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  Cameras_InGameCamera_o *pCVar4;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462a8 = '\x01';
  }
  pCVar4 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (((pCVar4 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar3 = (pCVar4->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x181ffe6e0

Il2CppObject*
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_4_0(CustomLogic_CustomLogicCameraBuiltin_o* __i, MethodInfo* method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *__this;
  Cameras_InGameCamera_o *pCVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462a9 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  pCVar6 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (((pCVar6 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar5 = (pCVar6->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this = (pUVar5->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar7 = UnityEngine_Transform__get_rotation(&local_38,__this,(MethodInfo *)0x0);
    local_28[0].x = (pUVar7->fields).x;
    local_28[0].y = (pUVar7->fields).y;
    local_28[0].z = (pUVar7->fields).z;
    local_28[0].w = (pUVar7->fields).w;
    pUVar8 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                        (MethodInfo *)0x0);
    uVar1 = (pUVar8->fields).x;
    uVar3 = (pUVar8->fields).y;
    local_48.y = (float)uVar3 * 57.29578;
    local_48.x = (float)uVar1 * 57.29578;
    local_48.z = (pUVar8->fields).z * 57.29578;
    pUVar8 = UnityEngine_Quaternion__Internal_MakePositive
                       ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                        (MethodInfo *)0x0);
    uVar2._0_4_ = (pUVar8->fields).x;
    uVar2._4_4_ = (pUVar8->fields).y;
    fVar4 = (pUVar8->fields).z;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_48._0_8_ = uVar2;
    local_48.z = fVar4;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_00,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x181fff1a0

Il2CppObject*
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_5_0(CustomLogic_CustomLogicCameraBuiltin_o* __i, MethodInfo* method)

{
  undefined8 uVar1;
  float fVar2;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462aa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  uVar1._0_4_ = (pCVar3->CameraVelocity).fields.x;
  uVar1._4_4_ = (pCVar3->CameraVelocity).fields.y;
  fVar2 = (pCVar3->CameraVelocity).fields.z;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_28[0]._0_8_ = uVar1;
  local_28[0].z = fVar2;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FOV>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FOV_g____getter_6_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x181ffcd70

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FOV_g____getter_6_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_18434639b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_18434639b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  local_res18[0] = TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV;
  pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__CameraMode>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__CameraMode_g____getter_7_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x181ffc7b0

Il2CppObject*
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__CameraMode_g____getter_7_0(CustomLogic_CustomLogicCameraBuiltin_o* __i, MethodInfo* method)

{
  byte bVar1;
  System_Nullable_CameraInputMode__Fields SVar2;
  Cameras_BaseCamera_o *pCVar3;
  System_String_o *pSVar4;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_1843462ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_CameraInputMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CameraInputMode_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CameraInputMode_get_HasValue);
    Il2CppMethodInitialized_1843462ac = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  SVar2 = (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields;
  if (SVar2.hasValue == false) {
    if (Il2CppMethodInitialized_1843462a6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_1843462a6 = '\x01';
    }
    pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (pCVar3 == (Cameras_BaseCamera_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
    }
    local_18 = *(int32_t *)&(*(uint64_t *)((char *)pCVar3 + 0x68));
  }
  else {
    local_18 = SVar2.value;
  }
  local_28.klass = (System_Enum_c *)TypeInfo_Settings_CameraInputMode;
  local_28.monitor = &g_data_ffffffffffffffff;
  pSVar4 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  return pSVar4;
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_8_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x181ffcff0

Il2CppObject*
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_8_0(CustomLogic_CustomLogicCameraBuiltin_o* __i, MethodInfo* method)

{
  undefined8 uVar1;
  float fVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  Cameras_InGameCamera_o *pCVar4;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462ad = '\x01';
  }
  pCVar4 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (((pCVar4 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar3 = (pCVar4->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_8_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ffd0a0

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_8_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  CustomLogic_CustomLogicManager_StaticFields *pCVar6;
  float fVar7;
  float fVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  Cameras_InGameCamera_o *pCVar10;
  UnityEngine_Quaternion_o *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462d6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_1843462ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462ae = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  pCVar10 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if ((((pCVar10 != (Cameras_InGameCamera_o *)0x0) &&
       (pUVar4 = (pCVar10->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
      (pCVar9 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    local_48.x = (pCVar9->fields).Value.fields.x;
    local_48.y = (pCVar9->fields).Value.fields.y;
    local_48.z = (pCVar9->fields).Value.fields.z;
    UnityEngine_Transform__set_forward(pUVar5,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    pCVar10 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
    if (((pCVar10 != (Cameras_InGameCamera_o *)0x0) &&
        (pUVar4 = (pCVar10->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pUVar11 = UnityEngine_Transform__get_rotation(&local_38,pUVar5,(MethodInfo *)0x0);
      local_28[0].x = (pUVar11->fields).x;
      local_28[0].y = (pUVar11->fields).y;
      local_28[0].z = (pUVar11->fields).z;
      local_28[0].w = (pUVar11->fields).w;
      pUVar12 = UnityEngine_Quaternion__Internal_ToEulerRad
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                           (MethodInfo *)0x0);
      uVar1 = (pUVar12->fields).x;
      uVar2 = (pUVar12->fields).y;
      local_48.y = (float)uVar2 * 57.29578;
      local_48.x = (float)uVar1 * 57.29578;
      local_48.z = (pUVar12->fields).z * 57.29578;
      pUVar12 = UnityEngine_Quaternion__Internal_MakePositive
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                           (MethodInfo *)0x0);
      fVar7 = (pUVar12->fields).x;
      fVar8 = (pUVar12->fields).y;
      fVar3 = (pUVar12->fields).z;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      (pCVar6->CameraRotation).fields.x = fVar7;
      (pCVar6->CameraRotation).fields.y = fVar8;
      (pCVar6->CameraRotation).fields.z = fVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_9_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x181ffe2b0

Il2CppObject*
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_9_0(CustomLogic_CustomLogicCameraBuiltin_o* __i, MethodInfo* method)

{
  undefined8 uVar1;
  float fVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  Cameras_InGameCamera_o *pCVar4;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462af = '\x01';
  }
  pCVar4 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (((pCVar4 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar3 = (pCVar4->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_right((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_9_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ffe360

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_9_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  CustomLogic_CustomLogicManager_StaticFields *pCVar6;
  float fVar7;
  float fVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  Cameras_InGameCamera_o *pCVar10;
  UnityEngine_Quaternion_o *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462d7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_1843462b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462b0 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  pCVar10 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if ((((pCVar10 != (Cameras_InGameCamera_o *)0x0) &&
       (pUVar4 = (pCVar10->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
      (pCVar9 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    local_48.x = (pCVar9->fields).Value.fields.x;
    local_48.y = (pCVar9->fields).Value.fields.y;
    local_48.z = (pCVar9->fields).Value.fields.z;
    UnityEngine_Transform__set_right(pUVar5,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    pCVar10 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
    if (((pCVar10 != (Cameras_InGameCamera_o *)0x0) &&
        (pUVar4 = (pCVar10->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pUVar11 = UnityEngine_Transform__get_rotation(&local_38,pUVar5,(MethodInfo *)0x0);
      local_28[0].x = (pUVar11->fields).x;
      local_28[0].y = (pUVar11->fields).y;
      local_28[0].z = (pUVar11->fields).z;
      local_28[0].w = (pUVar11->fields).w;
      pUVar12 = UnityEngine_Quaternion__Internal_ToEulerRad
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                           (MethodInfo *)0x0);
      uVar1 = (pUVar12->fields).x;
      uVar2 = (pUVar12->fields).y;
      local_48.y = (float)uVar2 * 57.29578;
      local_48.x = (float)uVar1 * 57.29578;
      local_48.z = (pUVar12->fields).z * 57.29578;
      pUVar12 = UnityEngine_Quaternion__Internal_MakePositive
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                           (MethodInfo *)0x0);
      fVar7 = (pUVar12->fields).x;
      fVar8 = (pUVar12->fields).y;
      fVar3 = (pUVar12->fields).z;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      (pCVar6->CameraRotation).fields.x = fVar7;
      (pCVar6->CameraRotation).fields.y = fVar8;
      (pCVar6->CameraRotation).fields.z = fVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x181ffef50

Il2CppObject*
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_10_0(CustomLogic_CustomLogicCameraBuiltin_o* __i, MethodInfo* method)

{
  undefined8 uVar1;
  float fVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  Cameras_InGameCamera_o *pCVar4;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462b1 = '\x01';
  }
  pCVar4 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (((pCVar4 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar3 = (pCVar4->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181fff000

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_10_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  CustomLogic_CustomLogicManager_StaticFields *pCVar6;
  float fVar7;
  float fVar8;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar9;
  Cameras_InGameCamera_o *pCVar10;
  UnityEngine_Quaternion_o *pUVar11;
  UnityEngine_Vector3_o *pUVar12;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462d8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar9 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (Il2CppMethodInitialized_1843462b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462b2 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  pCVar10 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if ((((pCVar10 != (Cameras_InGameCamera_o *)0x0) &&
       (pUVar4 = (pCVar10->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
      (pCVar9 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    local_48.x = (pCVar9->fields).Value.fields.x;
    local_48.y = (pCVar9->fields).Value.fields.y;
    local_48.z = (pCVar9->fields).Value.fields.z;
    UnityEngine_Transform__set_up(pUVar5,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    pCVar10 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
    if (((pCVar10 != (Cameras_InGameCamera_o *)0x0) &&
        (pUVar4 = (pCVar10->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pUVar11 = UnityEngine_Transform__get_rotation(&local_38,pUVar5,(MethodInfo *)0x0);
      local_28[0].x = (pUVar11->fields).x;
      local_28[0].y = (pUVar11->fields).y;
      local_28[0].z = (pUVar11->fields).z;
      local_28[0].w = (pUVar11->fields).w;
      pUVar12 = UnityEngine_Quaternion__Internal_ToEulerRad
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                           (MethodInfo *)0x0);
      uVar1 = (pUVar12->fields).x;
      uVar2 = (pUVar12->fields).y;
      local_48.y = (float)uVar2 * 57.29578;
      local_48.x = (float)uVar1 * 57.29578;
      local_48.z = (pUVar12->fields).z * 57.29578;
      pUVar12 = UnityEngine_Quaternion__Internal_MakePositive
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                           (MethodInfo *)0x0);
      fVar7 = (pUVar12->fields).x;
      fVar8 = (pUVar12->fields).y;
      fVar3 = (pUVar12->fields).z;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      (pCVar6->CameraRotation).fields.x = fVar7;
      (pCVar6->CameraRotation).fields.y = fVar8;
      (pCVar6->CameraRotation).fields.z = fVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FollowDistance>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____getter_11_0 (CustomLogic_CustomLogicCameraBuiltin_o* __i, const MethodInfo* method);
// 0x181ffce40

Il2CppObject *
CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____getter_11_0
          (CustomLogic_CustomLogicCameraBuiltin_o *__i,MethodInfo *method)

{
  Cameras_InGameCamera_o *__this;
  Il2CppObject *pIVar1;
  float local_res18 [4];
  
  __this = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    local_res18[0] = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res18);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin.Bindings$$<__CreatePropertyBinding__FollowDistance>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____setter_11_1 (CustomLogic_CustomLogicCameraBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181ffce80

void CustomLogic_CustomLogicCameraBuiltin_Bindings_____CreatePropertyBinding__FollowDistance_g____setter_11_1
               (CustomLogic_CustomLogicCameraBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Cameras_InGameCamera_o *pCVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843462d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843462d9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (pCVar1 != (Cameras_InGameCamera_o *)0x0) {
    (pCVar1->fields)._cameraDistance = fVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin___ctor (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x18200be30

void CustomLogic_CustomLogicCameraBuiltin___ctor
               (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843462a5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_CurrentCamera
// il2cpp: Cameras_InGameCamera_o* CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera (const MethodInfo* method);
// 0x18200beb0

Cameras_InGameCamera_o * CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera(MethodInfo *method)

{
  byte bVar1;
  Cameras_InGameCamera_o *pCVar2;
  
  if (Il2CppMethodInitialized_1843462a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843462a6 = '\x01';
  }
  pCVar2 = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
  if (pCVar2 != (Cameras_InGameCamera_o *)0x0) {
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar2->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar2,TypeInfo_Cameras_InGameCamera);
    }
  }
  return pCVar2;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsManual
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsManual (const MethodInfo* method);
// 0x18200bfb0

bool CustomLogic_CustomLogicCameraBuiltin__get_IsManual(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462a7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  return TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Position (const MethodInfo* method);
// 0x181ffe150

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Position(MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  Cameras_InGameCamera_o *pCVar4;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462a8 = '\x01';
  }
  pCVar4 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (((pCVar4 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar3 = (pCVar4->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_position((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Rotation (const MethodInfo* method);
// 0x181ffe6e0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Rotation(MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  Utility_BaseComponentCache_o *pUVar5;
  UnityEngine_Transform_o *__this;
  Cameras_InGameCamera_o *pCVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462a9 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  pCVar6 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (((pCVar6 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar5 = (pCVar6->fields).Cache, pUVar5 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this = (pUVar5->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar7 = UnityEngine_Transform__get_rotation(&local_38,__this,(MethodInfo *)0x0);
    local_28[0].x = (pUVar7->fields).x;
    local_28[0].y = (pUVar7->fields).y;
    local_28[0].z = (pUVar7->fields).z;
    local_28[0].w = (pUVar7->fields).w;
    pUVar8 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                        (MethodInfo *)0x0);
    uVar1 = (pUVar8->fields).x;
    uVar3 = (pUVar8->fields).y;
    local_48.y = (float)uVar3 * 57.29578;
    local_48.x = (float)uVar1 * 57.29578;
    local_48.z = (pUVar8->fields).z * 57.29578;
    pUVar8 = UnityEngine_Quaternion__Internal_MakePositive
                       ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                        (MethodInfo *)0x0);
    uVar2._0_4_ = (pUVar8->fields).x;
    uVar2._4_4_ = (pUVar8->fields).y;
    fVar4 = (pUVar8->fields).z;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_48._0_8_ = uVar2;
    local_48.z = fVar4;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_00,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Velocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Velocity (const MethodInfo* method);
// 0x181fff1a0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Velocity(MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462aa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
  uVar1._0_4_ = (pCVar3->CameraVelocity).fields.x;
  uVar1._4_4_ = (pCVar3->CameraVelocity).fields.y;
  fVar2 = (pCVar3->CameraVelocity).fields.z;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_28[0]._0_8_ = uVar1;
  local_28[0].z = fVar2;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_FOV
// il2cpp: float CustomLogic_CustomLogicCameraBuiltin__get_FOV (const MethodInfo* method);
// 0x18200bf30

float CustomLogic_CustomLogicCameraBuiltin__get_FOV(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462ab = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  return TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_CameraMode
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraBuiltin__get_CameraMode (const MethodInfo* method);
// 0x181ffc7b0

System_String_o * CustomLogic_CustomLogicCameraBuiltin__get_CameraMode(MethodInfo *method)

{
  byte bVar1;
  System_Nullable_CameraInputMode__Fields SVar2;
  Cameras_BaseCamera_o *pCVar3;
  System_String_o *pSVar4;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_1843462ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_CameraInputMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CameraInputMode_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CameraInputMode_get_HasValue);
    Il2CppMethodInitialized_1843462ac = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  SVar2 = (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields;
  if (SVar2.hasValue == false) {
    if (Il2CppMethodInitialized_1843462a6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
      Il2CppMethodInitialized_1843462a6 = '\x01';
    }
    pCVar3 = TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (pCVar3 == (Cameras_BaseCamera_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
    if (((pCVar3->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pCVar3->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
      il2cpp_codegen_raise_invalid_cast_exception(pCVar3);
    }
    local_18 = *(int32_t *)&(*(uint64_t *)((char *)pCVar3 + 0x68));
  }
  else {
    local_18 = SVar2.value;
  }
  local_28.klass = (System_Enum_c *)TypeInfo_Settings_CameraInputMode;
  local_28.monitor = &g_data_ffffffffffffffff;
  pSVar4 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  return pSVar4;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Forward (const MethodInfo* method);
// 0x181ffcff0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCameraBuiltin__get_Forward(MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  Cameras_InGameCamera_o *pCVar4;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462ad = '\x01';
  }
  pCVar4 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (((pCVar4 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar3 = (pCVar4->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Forward (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x18200c030

void CustomLogic_CustomLogicCameraBuiltin__set_Forward
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  CustomLogic_CustomLogicManager_StaticFields *pCVar6;
  float fVar7;
  float fVar8;
  Cameras_InGameCamera_o *pCVar9;
  UnityEngine_Quaternion_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462ae = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  pCVar9 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if ((((pCVar9 != (Cameras_InGameCamera_o *)0x0) &&
       (pUVar4 = (pCVar9->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
      (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    local_48.x = (value->fields).Value.fields.x;
    local_48.y = (value->fields).Value.fields.y;
    local_48.z = (value->fields).Value.fields.z;
    UnityEngine_Transform__set_forward(pUVar5,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    pCVar9 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
    if (((pCVar9 != (Cameras_InGameCamera_o *)0x0) &&
        (pUVar4 = (pCVar9->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pUVar10 = UnityEngine_Transform__get_rotation(&local_38,pUVar5,(MethodInfo *)0x0);
      local_28[0].x = (pUVar10->fields).x;
      local_28[0].y = (pUVar10->fields).y;
      local_28[0].z = (pUVar10->fields).z;
      local_28[0].w = (pUVar10->fields).w;
      pUVar11 = UnityEngine_Quaternion__Internal_ToEulerRad
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                           (MethodInfo *)0x0);
      uVar1 = (pUVar11->fields).x;
      uVar2 = (pUVar11->fields).y;
      local_48.y = (float)uVar2 * 57.29578;
      local_48.x = (float)uVar1 * 57.29578;
      local_48.z = (pUVar11->fields).z * 57.29578;
      pUVar11 = UnityEngine_Quaternion__Internal_MakePositive
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                           (MethodInfo *)0x0);
      fVar7 = (pUVar11->fields).x;
      fVar8 = (pUVar11->fields).y;
      fVar3 = (pUVar11->fields).z;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      (pCVar6->CameraRotation).fields.x = fVar7;
      (pCVar6->CameraRotation).fields.y = fVar8;
      (pCVar6->CameraRotation).fields.z = fVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Right (const MethodInfo* method);
// 0x181ffe2b0

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicCameraBuiltin__get_Right(MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  Cameras_InGameCamera_o *pCVar4;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462af = '\x01';
  }
  pCVar4 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (((pCVar4 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar3 = (pCVar4->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_right((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Right (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x18200c190

void CustomLogic_CustomLogicCameraBuiltin__set_Right
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  CustomLogic_CustomLogicManager_StaticFields *pCVar6;
  float fVar7;
  float fVar8;
  Cameras_InGameCamera_o *pCVar9;
  UnityEngine_Quaternion_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462b0 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  pCVar9 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if ((((pCVar9 != (Cameras_InGameCamera_o *)0x0) &&
       (pUVar4 = (pCVar9->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
      (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    local_48.x = (value->fields).Value.fields.x;
    local_48.y = (value->fields).Value.fields.y;
    local_48.z = (value->fields).Value.fields.z;
    UnityEngine_Transform__set_right(pUVar5,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    pCVar9 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
    if (((pCVar9 != (Cameras_InGameCamera_o *)0x0) &&
        (pUVar4 = (pCVar9->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pUVar10 = UnityEngine_Transform__get_rotation(&local_38,pUVar5,(MethodInfo *)0x0);
      local_28[0].x = (pUVar10->fields).x;
      local_28[0].y = (pUVar10->fields).y;
      local_28[0].z = (pUVar10->fields).z;
      local_28[0].w = (pUVar10->fields).w;
      pUVar11 = UnityEngine_Quaternion__Internal_ToEulerRad
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                           (MethodInfo *)0x0);
      uVar1 = (pUVar11->fields).x;
      uVar2 = (pUVar11->fields).y;
      local_48.y = (float)uVar2 * 57.29578;
      local_48.x = (float)uVar1 * 57.29578;
      local_48.z = (pUVar11->fields).z * 57.29578;
      pUVar11 = UnityEngine_Quaternion__Internal_MakePositive
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                           (MethodInfo *)0x0);
      fVar7 = (pUVar11->fields).x;
      fVar8 = (pUVar11->fields).y;
      fVar3 = (pUVar11->fields).z;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      (pCVar6->CameraRotation).fields.x = fVar7;
      (pCVar6->CameraRotation).fields.y = fVar8;
      (pCVar6->CameraRotation).fields.z = fVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCameraBuiltin__get_Up (const MethodInfo* method);
// 0x181ffef50

CustomLogic_CustomLogicVector3Builtin_o * CustomLogic_CustomLogicCameraBuiltin__get_Up(MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Transform_o *__this;
  Cameras_InGameCamera_o *pCVar4;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843462b1 = '\x01';
  }
  pCVar4 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (((pCVar4 != (Cameras_InGameCamera_o *)0x0) &&
      (pUVar3 = (pCVar4->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this = (pUVar3->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_Up (CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x18200c2f0

void CustomLogic_CustomLogicCameraBuiltin__set_Up
               (CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  CustomLogic_CustomLogicManager_StaticFields *pCVar6;
  float fVar7;
  float fVar8;
  Cameras_InGameCamera_o *pCVar9;
  UnityEngine_Quaternion_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462b2 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  pCVar9 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if ((((pCVar9 != (Cameras_InGameCamera_o *)0x0) &&
       (pUVar4 = (pCVar9->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
      (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    local_48.x = (value->fields).Value.fields.x;
    local_48.y = (value->fields).Value.fields.y;
    local_48.z = (value->fields).Value.fields.z;
    UnityEngine_Transform__set_up(pUVar5,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    pCVar9 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
    if (((pCVar9 != (Cameras_InGameCamera_o *)0x0) &&
        (pUVar4 = (pCVar9->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pUVar10 = UnityEngine_Transform__get_rotation(&local_38,pUVar5,(MethodInfo *)0x0);
      local_28[0].x = (pUVar10->fields).x;
      local_28[0].y = (pUVar10->fields).y;
      local_28[0].z = (pUVar10->fields).z;
      local_28[0].w = (pUVar10->fields).w;
      pUVar11 = UnityEngine_Quaternion__Internal_ToEulerRad
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                           (MethodInfo *)0x0);
      uVar1 = (pUVar11->fields).x;
      uVar2 = (pUVar11->fields).y;
      local_48.y = (float)uVar2 * 57.29578;
      local_48.x = (float)uVar1 * 57.29578;
      local_48.z = (pUVar11->fields).z * 57.29578;
      pUVar11 = UnityEngine_Quaternion__Internal_MakePositive
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                           (MethodInfo *)0x0);
      fVar7 = (pUVar11->fields).x;
      fVar8 = (pUVar11->fields).y;
      fVar3 = (pUVar11->fields).z;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      (pCVar6->CameraRotation).fields.x = fVar7;
      (pCVar6->CameraRotation).fields.y = fVar8;
      (pCVar6->CameraRotation).fields.z = fVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$get_FollowDistance
// il2cpp: float CustomLogic_CustomLogicCameraBuiltin__get_FollowDistance (const MethodInfo* method);
// 0x18200bf80

float CustomLogic_CustomLogicCameraBuiltin__get_FollowDistance(MethodInfo *method)

{
  Cameras_InGameCamera_o *__this;
  float fVar1;
  
  __this = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    fVar1 = Cameras_InGameCamera__GetCameraDistance(__this,(MethodInfo *)0x0);
    return fVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$set_FollowDistance
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__set_FollowDistance (float value, const MethodInfo* method);
// 0x18200c000

void CustomLogic_CustomLogicCameraBuiltin__set_FollowDistance(float value,MethodInfo *method)

{
  Cameras_InGameCamera_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (pCVar1 != (Cameras_InGameCamera_o *)0x0) {
    (pCVar1->fields)._cameraDistance = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetManual
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetManual (bool manual, const MethodInfo* method);
// 0x18200bb70

void CustomLogic_CustomLogicCameraBuiltin__SetManual(bool manual,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462b3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->ManualCamera = manual;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetPosition
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetPosition (CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x18200bbd0

void CustomLogic_CustomLogicCameraBuiltin__SetPosition
               (CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  Cameras_InGameCamera_o *__this;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_1843462b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843462b4 = '\x01';
  }
  if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar4 = (position->fields).Value.fields.x;
    fVar5 = (position->fields).Value.fields.y;
    fVar2 = (position->fields).Value.fields.z;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    (pCVar3->CameraPosition).fields.x = fVar4;
    (pCVar3->CameraPosition).fields.y = fVar5;
    (pCVar3->CameraPosition).fields.z = fVar2;
    __this = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (__this != (Cameras_InGameCamera_o *)0x0) {
      bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
         ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
        Cameras_InGameCamera__SyncCustomPosition(__this,(MethodInfo *)0x0);
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(__this,TypeInfo_Cameras_InGameCamera);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetRotation
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetRotation (CustomLogic_CustomLogicVector3Builtin_o* rotation, const MethodInfo* method);
// 0x18200bcc0

void CustomLogic_CustomLogicCameraBuiltin__SetRotation
               (CustomLogic_CustomLogicVector3Builtin_o *rotation,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  CustomLogic_CustomLogicManager_StaticFields *pCVar3;
  Cameras_InGameCamera_o *__this;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_1843462b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Cameras_InGameCamera);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    Il2CppMethodInitialized_1843462b5 = '\x01';
  }
  if (rotation != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar4 = (rotation->fields).Value.fields.x;
    fVar5 = (rotation->fields).Value.fields.y;
    fVar2 = (rotation->fields).Value.fields.z;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar3 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    (pCVar3->CameraRotation).fields.x = fVar4;
    (pCVar3->CameraRotation).fields.y = fVar5;
    (pCVar3->CameraRotation).fields.z = fVar2;
    __this = (Cameras_InGameCamera_o *)TypeInfo_ApplicationManagers_SceneLoader->static_fields->CurrentCamera;
    if (__this != (Cameras_InGameCamera_o *)0x0) {
      bVar1 = (TypeInfo_Cameras_InGameCamera->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this->klass->_2).typeHierarchyDepth) &&
         ((__this->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Cameras_InGameCamera)) {
        Cameras_InGameCamera__SyncCustomPosition(__this,(MethodInfo *)0x0);
        return;
      }
      il2cpp_codegen_raise_invalid_cast_exception(__this,TypeInfo_Cameras_InGameCamera);
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetVelocity
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetVelocity (CustomLogic_CustomLogicVector3Builtin_o* velocity, const MethodInfo* method);
// 0x18200bdb0

void CustomLogic_CustomLogicCameraBuiltin__SetVelocity
               (CustomLogic_CustomLogicVector3Builtin_o *velocity,MethodInfo *method)

{
  float fVar1;
  CustomLogic_CustomLogicManager_StaticFields *pCVar2;
  float fVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843462b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462b6 = '\x01';
  }
  if (velocity != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    fVar3 = (velocity->fields).Value.fields.x;
    fVar4 = (velocity->fields).Value.fields.y;
    fVar1 = (velocity->fields).Value.fields.z;
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
    (pCVar2->CameraVelocity).fields.x = fVar3;
    (pCVar2->CameraVelocity).fields.y = fVar4;
    (pCVar2->CameraVelocity).fields.z = fVar1;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$LookAt
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__LookAt (CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x18200b740

void CustomLogic_CustomLogicCameraBuiltin__LookAt
               (CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  CustomLogic_CustomLogicManager_StaticFields *pCVar6;
  float fVar7;
  float fVar8;
  Cameras_InGameCamera_o *pCVar9;
  UnityEngine_Quaternion_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843462b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462b7 = '\x01';
  }
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  pCVar9 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if ((((pCVar9 != (Cameras_InGameCamera_o *)0x0) &&
       (pUVar4 = (pCVar9->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
      (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
     (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
    local_48.x = (position->fields).Value.fields.x;
    local_48.y = (position->fields).Value.fields.y;
    local_48.z = (position->fields).Value.fields.z;
    UnityEngine_Transform__LookAt_2f599f0(pUVar5,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    pCVar9 = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
    if (((pCVar9 != (Cameras_InGameCamera_o *)0x0) &&
        (pUVar4 = (pCVar9->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pUVar5 = (pUVar4->fields).Transform, pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      pUVar10 = UnityEngine_Transform__get_rotation(&local_38,pUVar5,(MethodInfo *)0x0);
      local_28[0].x = (pUVar10->fields).x;
      local_28[0].y = (pUVar10->fields).y;
      local_28[0].z = (pUVar10->fields).z;
      local_28[0].w = (pUVar10->fields).w;
      pUVar11 = UnityEngine_Quaternion__Internal_ToEulerRad
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Quaternion_o *)local_28,
                           (MethodInfo *)0x0);
      uVar1 = (pUVar11->fields).x;
      uVar2 = (pUVar11->fields).y;
      local_48.y = (float)uVar2 * 57.29578;
      local_48.x = (float)uVar1 * 57.29578;
      local_48.z = (pUVar11->fields).z * 57.29578;
      pUVar11 = UnityEngine_Quaternion__Internal_MakePositive
                          ((UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                           (MethodInfo *)0x0);
      fVar7 = (pUVar11->fields).x;
      fVar8 = (pUVar11->fields).y;
      fVar3 = (pUVar11->fields).z;
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      pCVar6 = TypeInfo_CustomLogic_CustomLogicManager->static_fields;
      (pCVar6->CameraRotation).fields.x = fVar7;
      (pCVar6->CameraRotation).fields.y = fVar8;
      (pCVar6->CameraRotation).fields.z = fVar3;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetFOV
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetFOV (float fov, const MethodInfo* method);
// 0x18200bb10

void CustomLogic_CustomLogicCameraBuiltin__SetFOV(float fov,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462b8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraFOV = fov;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCameraMode
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCameraMode (System_String_o* mode, const MethodInfo* method);
// 0x18200b9a0

void CustomLogic_CustomLogicCameraBuiltin__SetCameraMode(System_String_o *mode,MethodInfo *method)

{
  bool bVar1;
  int32_t value;
  System_Nullable_CameraInputMode__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_1843462b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_Parse_CameraInputMode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CameraInputMode_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843462b9 = '\x01';
  }
  bVar1 = System_String__op_Equality(mode,"null",(MethodInfo *)0x0);
  if (!bVar1) {
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    value = System_Enum__Parse_Int32Enum_
                      (mode,(MethodInfo_6B1730 *)MethodInfo_System_Enum_Parse_CameraInputMode);
    local_res8[0].hasValue = false;
    local_res8[0]._1_3_ = 0;
    local_res8[0].value = 0;
    System_Data_SqlTypes_SqlInt32___ctor_ae2660
              ((System_Data_SqlTypes_SqlInt32_o *)local_res8,value,
               MethodInfo_System_Nullable_CameraInputMode_ctor);
    if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    }
    (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields = local_res8[0];
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields =
       (System_Nullable_CameraInputMode__Fields)0x0;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$ResetDistance
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__ResetDistance (const MethodInfo* method);
// 0x18200b910

void CustomLogic_CustomLogicCameraBuiltin__ResetDistance(MethodInfo *method)

{
  Cameras_InGameCamera_o *__this;
  
  __this = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    Cameras_InGameCamera__ResetDistance(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$ResetCameraMode
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode (const MethodInfo* method);
// 0x18200b8a0

void CustomLogic_CustomLogicCameraBuiltin__ResetCameraMode(MethodInfo *method)

{
  Cameras_InGameCamera_o *__this;
  
  if (Il2CppMethodInitialized_1843462ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462ba = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  (TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraMode).fields =
       (System_Nullable_CameraInputMode__Fields)0x0;
  __this = CustomLogic_CustomLogicCameraBuiltin__get_CurrentCamera((MethodInfo *)0x0);
  if (__this != (Cameras_InGameCamera_o *)0x0) {
    Cameras_InGameCamera__ResetCameraMode(__this,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCameraLocked
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCameraLocked (bool locked, const MethodInfo* method);
// 0x18200b940

void CustomLogic_CustomLogicCameraBuiltin__SetCameraLocked(bool locked,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462bb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->CameraLocked = locked;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$SetCursorVisible
// il2cpp: void CustomLogic_CustomLogicCameraBuiltin__SetCursorVisible (bool visible, const MethodInfo* method);
// 0x18200bab0

void CustomLogic_CustomLogicCameraBuiltin__SetCursorVisible(bool visible,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843462bc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  TypeInfo_CustomLogic_CustomLogicManager->static_fields->CursorVisible = visible;
  return;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCameraBuiltin__get_ClassName (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x18200be80

System_String_o *
CustomLogic_CustomLogicCameraBuiltin__get_ClassName
          (CustomLogic_CustomLogicCameraBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843462bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Camera");
    Il2CppMethodInitialized_1843462bd = '\x01';
  }
  return "Camera";
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsAbstract (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCameraBuiltin__get_IsAbstract(CustomLogic_CustomLogicCameraBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_IsStatic (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCameraBuiltin__get_IsStatic(CustomLogic_CustomLogicCameraBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCameraBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCameraBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCameraBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCameraBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicCameraBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


